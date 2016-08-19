/* ----------------------------------------------------------- */
/*          Control de VFD mediante comandos seriales          */
/*                Autor: Alfredo Valdés Cárdenas               */
/* ----------------------------------------------------------- */

#include <mcp_can.h>
#include <SPI.h>
#define INT8U unsigned char
const int SPI_CS_PIN = 9; //Chip Select del SPI en pin 9
MCP_CAN CAN(SPI_CS_PIN);  // Indicamos al transceiver cual 
                          // es el pin del chip select de SPI
INT8U Flag_Recv = 0;
INT8U len = 0;
INT8U buf[8];
INT32U canId = 0x000;
char str[20];


/**********************  Variables del programa *************************/

String inputString = ""; // String que almacena los datos seriales
boolean stringComplete = false; // comprueba que el string este completo
boolean comandoArranque = false; // comprueba si el comando es de arranque 
boolean comandoParo = false; // comprueba si el comando es de paro
boolean comandoGiro = false; // comprueba si el comando es de cambio de giro
boolean comandoVelocidad = false; // comprueba si el comando es de cambio de velocidad
boolean direccionGiro = false; // giro a la derecha = true, a la izquierda = false
int porcentaje = 0; // porcentaje de velocidad
unsigned char msjArranque[8] = {0x50, 0, 0, 0, 0, 0, 0, 0};
unsigned char msjCDG[8] = {0x43, 0, 0, 0, 0, 0, 0, 0};
unsigned char msjParo[8] = {0x41, 0, 0, 0, 0, 0, 0, 0};

void parserSerial(void);
void setup(void);
void loop(void);
void setup()
{
  attachInterrupt(0, MCP2515_ISR, FALLING); // Interrupcion CAN, 
                                            // avisa cuando llega un Mensaje
  Serial.begin(1200);
  Serial.setTimeout(10000);
  inputString.reserve(200);
  delay(2000);
  CAN.begin(CAN_500KBPS);
}

void MCP2515_ISR()
{
  Flag_Recv = 1;
}

void loop()
{ Serial.println("Esperando comando...");
  parserSerial();
  if (stringComplete) {
    if (comandoArranque == true) {
      CAN.sendMsgBuf(0xA, 0, 8, msjArranque);
      Serial.print("Recibi comando de arranque");
      comandoArranque = false;
      delay(100);
    }
    if (comandoParo == true) {
      CAN.sendMsgBuf(0xA, 0, 8, msjParo);
      Serial.print("Recibi comando de paro");
      comandoParo = false;
      delay(100);
    }
    if (comandoGiro == true) {
      CAN.sendMsgBuf(0xA, 0, 8, msjCDG);
      Serial.print("Recibi comando de cambio de giro");
      comandoGiro = false;
      delay(100);
      }
      if (comandoVelocidad == true)
    {
      porcentaje = inputString.toInt();
        unsigned char msjVelocidad[8] = {0x56, porcentaje, 0, 0, 0, 0, 0, 0};
        CAN.sendMsgBuf(0xA, 0, 8, msjVelocidad);
        Serial.print("Recibi cambio de velocidad a "+porcentaje+"%");
        delay(100);
        comandoVelocidad = false;
      }
      inputString = "";
      stringComplete = false;
    }
  }


void parserSerial() {
  while (Serial.available()) {
    char inChar = (char)Serial.read(); //Recibe el nuevo byte
    inputString += inChar; // agregalo al inputString
    // dependiendo del caracter recibido, activa una bandera que indique si es
    // un comando de velocidad, cambio de giro, arranque, paro, o fin de linea
    if (inChar == '\n') {
      stringComplete = true;
    }
    else if (inChar == 'A') {
      comandoArranque = true;
      inputString = "";
    }
    else if (inChar == 'P') {
      comandoParo = true;
      inputString ="";
    }
    else if (inChar == 'C') {
      comandoGiro = true;
      inputString = "";
    }
    else if (inChar == 'V') {
      comandoVelocidad = true;
      inputString ="";
    }
  }
}

