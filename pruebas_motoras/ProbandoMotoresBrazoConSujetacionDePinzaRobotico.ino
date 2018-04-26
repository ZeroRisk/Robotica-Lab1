#include <Servo.h>

// Declaramos la variable para controlar el servo
Servo servoMotorAbajito;
Servo servoMotorPinza;
Servo servoMotorBase;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  //Motor de Base 0º a 180º
  servoMotorBase.attach(7);
  //Motor De abajito 120º a 180º
  servoMotorAbajito.attach(8);
  //Motor pinza 80º a 140º
  servoMotorPinza.attach(9);
  // Inicializamos al ángulo 0 el servomotor
  servoMotorAbajito.write(120);
  servoMotorPinza.write(80);
  servoMotorBase.write(90);
}
 
void loop() {

  for (int i = 120; i <= 180; i++)
  {
    servoMotorAbajito.write(i);
  
    delay(100);
  }

  servoMotorPinza.write(140);

  for (int i = 139; i >= 90; i--)
  {
  servoMotorPinza.write(i);

  delay(100);
  
  }

  /*for (int i = 179; i >= 120; i--)
  {
  servoMotorAbajito.write(i);

  delay(100);
  }*/

  delay(1000);

  servoMotorBase.write(180);

  delay(1000);

  for (int i = 179; i >= 1; i--)
  {
  servoMotorBase.write(i);

  if(i == 90){
    servoMotorPinza.write(140);
  }
  delay(10);
  }
  
  //servoMotorPinza.write(140);

  delay(4000);

  servoMotorAbajito.write(120);
  servoMotorPinza.write(80);
  servoMotorBase.write(90);

  delay(2000);

}
