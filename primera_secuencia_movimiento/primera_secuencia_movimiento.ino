#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
int grados;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servoMotor1.attach(9); //motor izquierdo
  servoMotor2.attach(8); //motor derecho

}

void loop() {
  // put your main code here, to run repeatedly:

  /*
  grados que se mueve el motor izquierdo y limitaciones
  grados=125;
  while(grados<=180){
    servoMotor1.write(grados);
    grados=grados+5;
    delay(3000);
  }
  */
  /*
    servoMotor2.write(80); //cierre de la pinza
    delay(3000);
    servoMotor2.write(140); //extension de la pinza
    delay(3000);
   */

}
