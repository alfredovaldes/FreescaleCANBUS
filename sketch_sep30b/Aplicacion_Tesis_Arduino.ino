#include <mcp_can.h>
#include <SPI.h>
#include <LiquidCrystal.h>
#define INT8U unsigned char
const int SPI_CS_PIN = 9; //Chip Select del SPI en pin 9
MCP_CAN CAN(SPI_CS_PIN);// Indicamos al transceiver cual es el pin del chip select de SPI
INT8U Flag_Recv = 0;
INT8U len = 0;
INT8U buf[8];
INT32U canId = 0x000;
char str[20];
LiquidCrystal lcd(30, 31, 32, 33, 34, 35);
int mil, cen, dec, uni = 0;
int valorPotFreescale = 0;
int valorPWM = 0;
void setup()
{
  lcd.begin(40, 2);
  attachInterrupt(0, MCP2515_ISR, FALLING); // Interrupcion CAN, Avisa cuando llega un Mensaje
  Serial.begin(9600);
START_INIT:

  if (CAN_OK == CAN.begin(CAN_500KBPS))//Inicializamos el Bus CAN a 1MBPS
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

void loop()
{
  if (Flag_Recv)                  // comprobamos si recibimos mensaje
  {
    Flag_Recv = 0;                // limpiamos bandera
    bufRellenar();
    CAN.readMsgBuf(&len, buf);    // leer datos, len es longitud del mensaje, buf son los datos recibidos
    lcd.clear();
    canId = CAN.getCanId();
    Serial.println("Recibi datos en CANBUS!!!");
    Serial.print("CAN ID: ");
    Serial.println(canId);
    lcd.setCursor(0, 0);
    lcd.print("CAN ID: ");
    lcd.print(canId);
    lcd.setCursor(0, 1);
    Serial.print("Longitud del mensaje= "); Serial.println(len);
    for (int i = 0; i < len; i++) // imprime los datos del mensaje CAN
    {
      Serial.print(buf[i]); Serial.print("\t");
      lcd.print(buf[i]);
      lcd.print(" ");
    }
    Serial.println();
    CANaPWM();
    analogWrite(A0,valorPWM);
    delay(200);
  }
}
void bufRellenar() {
  for (int i = 0; i < len; i++) // imprime los datos del mensaje CAN
  {
    buf[i] = NULL;
  }
}
void CANaPWM() {
  mil = buf[0] * 1000;
  cen = buf[1] * 100;
  dec = buf[2] * 10;
  uni = buf[3];
  valorPotFreescale = mil + cen + dec + uni;
  valorPWM = map(valorPotFreescale, 0, 1023, 0, 255);
}

