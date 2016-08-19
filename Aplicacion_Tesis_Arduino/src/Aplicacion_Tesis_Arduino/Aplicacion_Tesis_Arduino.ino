#include <mcp_can.h>
#include <SPI.h>
#define INT8U unsigned char
const int SPI_CS_PIN = 9; //Chip Select del SPI en pin 9
MCP_CAN CAN(SPI_CS_PIN);// Indicamos al transceiver cual es el pin del chip select de SPI
INT8U Flag_Recv = 0;
INT8U len = 0;
INT8U buf[8];
INT32U canId = 0x000;
char str[20];
int led = A8;
unsigned char VEL4[8] = {0x56, 0x25, 0xBB, 3, 4, 5, 6, 7};
unsigned char VEL3[8] = {0x56, 0x00, 0xFF, 3, 4, 5, 6, 7};
unsigned char VEL2[8] = {0x56, 0x70, 0xFF, 3, 4, 5, 6, 7};
unsigned char VEL1[8] = {0,0,0,0,0,0,0,0};
void setup()
{
  attachInterrupt(0, MCP2515_ISR, FALLING); // Interrupcion CAN, Avisa cuando llega un Mensaje
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  analogWrite(3,0);
  START_INIT:

  if (CAN_OK == CAN.begin(CAN_500KBPS))//Inicializamos el Bus CAN a 500KBPS
  {
    Serial.println("CANBUS Inicializado correctamente!");
  }
  else
  {
    Serial.println("Fallo de inicializacion del Bus");
    Serial.println("Intentando inicializar el Bus otra vez");
    delay(100);
    goto START_INIT;
  }
}

void MCP2515_ISR()
{
  Flag_Recv = 1;
}
unsigned char stmp[8] = {0, 1, 2, 3, 0, 5, 6, 7};
unsigned char stmp1[8] = {1, 1, 2, 3, 0, 5, 6, 7};
unsigned char stmp2[8] = {2, 1, 2, 3, 0, 5, 6, 7};
unsigned char stmp3[8] = {5, 1, 2, 3, 0, 5, 6, 7};
void loop()
{
  if (Flag_Recv)                  // comprobamos si recibimos mensaje
  {
    Flag_Recv = 0;                // limpiamos bandera
    bufRellenar();
    CAN.readMsgBuf(&len, buf);    // leer datos, len es longitud del mensaje, buf son los datos recibidos
    canId = CAN.getCanId();
    /*int valorPot=(buf[0]*1000)+(buf[1]*100)+(buf[2]*10)+buf[3];
    int valorPWM = map(valorPot,0,1023,0,255);
    analogWrite(3,valorPWM);*/
    //Serial.println(valorPWM);
    Serial.println("Recibi datos en CANBUS!!!");
    Serial.print("CAN ID: ");
    Serial.println(canId);
    Serial.print("Longitud del mensaje= "); Serial.println(len);
    for (int i = 0; i < len; i++) // imprime los datos del mensaje CAN
    {
      Serial.print(buf[i]); Serial.print("\t");
    }
    Serial.println();
  }
  CAN.sendMsgBuf(0xA,0, 8, stmp);
  delay(1000);
  CAN.sendMsgBuf(0xA,0, 8, stmp1);
  delay(1000);
  CAN.sendMsgBuf(0xA,0, 8, stmp2);
  delay(1000);
  CAN.sendMsgBuf(0xA,0, 8, stmp3);
  delay(1000);
}
void bufRellenar() {
  for (int i = 0; i < len; i++) // imprime los datos del mensaje CAN
  {
    buf[i] = NULL;
  }
}

