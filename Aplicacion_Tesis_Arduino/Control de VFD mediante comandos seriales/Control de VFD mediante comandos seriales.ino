/* ----------------------------------------------------------- */
/*          Control de VFD mediante comandos seriales          */
/*                Autor: Alfredo Valdés Cárdenas               */
/* ----------------------------------------------------------- */

/**********************  Variables del programa *************************/

String inputString = ""; // String que almacena los datos seriales
boolean stringComplete = false; // comprueba que el string este completo
boolean comandoArranque = false; // comprueba si el comando es de arranque
boolean comandoParo = false; // comprueba si el comando es de paro
boolean comandoGiro = false; // comprueba si el comando es de cambio de giro
boolean comandoVelocidad = false; // comprueba si el comando es de cambio de velocidad
boolean direccionGiro = false; // giro a la derecha = true, a la izquierda = false
int porcentaje = 0; // porcentaje de velocidad

/**********************  Funcion de inicializacion *************************/

void setup() {
  // inicializar puerto serial:
  Serial.begin(9600);
  // reservamos 200 bytes para el string de entrada:
  inputString.reserve(200);
}

/**********************  Bucle Principal *************************/

void loop() {
  parserSerial();
  // Condicion de String completo, aqui ejecutamos la rutina
  // de escritura al VFD
  if (stringComplete) {
    Serial.println(inputString);
    if (comandoArranque == true){
      digitalWrite(P2_0, HIGH);
      comandoArranque = false;
      delay(100);
      digitalWrite(P2_0, LOW);
    }
    if (comandoParo == true){
      digitalWrite(P2_1, HIGH);
      comandoParo = false;
      delay(100);
      digitalWrite(P2_1, LOW);
    }
    if (comandoGiro == true){
      if((inputString == 'izquierda')&&(direccionGiro == false){
        comandoArranque == false;
      }
      if((inputString == 'izquierda')&&(direccionGiro == true){
        digitalWrite(P2_2, HIGH);
        comandoArranque = false;
        delay(100);
        digitalWrite(P2_2, LOW);
      }
        if((inputString == 'derecha')&&(direccionGiro == true){
          comandoArranque == false;
        }
        if((inputString == 'derecha')&&(direccionGiro == false){
          digitalWrite(P2_2, HIGH);
          comandoArranque = false;
          delay(100);
          digitalWrite(P2_2, LOW);
        }
    }
    if (comandoVelocidad == true){
      porcentaje = inputString.toInt();
      valorAnalogico = map(porcentaje,0,100,0,255);
      analogWrite(A0, valorAnalogico);
      comandoVelocidad = false;
    }
    inputString = "";
    stringComplete = false;
  }
}

/**********************  Funcion de Parser Serial *************************/

void parserSerial() {
  while (Serial.available()) {
    char inChar = (char)Serial.read(); //Recibe el nuevo byte
    inputString += inChar; // agregalo al inputString
    // dependiendo del caracter recibido, activa una bandera que indique si es
    // un comando de velocidad, cambio de giro, arranque, paro, o fin de linea
    if (inChar == '\n') {
    stringComplete = true;
    }
    else if(inChar == 'A') {
      comandoArranque = true;
      inputString -= inChar;
    }
    else if(inChar == 'P') {
      comandoParo = true;
      inputString -= inChar;
    }
    else if(inChar == 'C') {
      comandoGiro = true;
      inputString -= inChar;
    }
    else if(inChar == 'V') {
      comandoVelocidad = true;
      inputString -= inChar;
    }
  }
}
