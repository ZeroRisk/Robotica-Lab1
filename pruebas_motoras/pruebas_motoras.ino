#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
int grados;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servoMotor1.attach(9); //motor derecho
  servoMotor2.attach(8); //motor izquierdo
  
}

void loop() {
  // put your main code here, to run repeatedly:
  servoMotor1.write(40); //limite inclinado hacia atras
  delay(3000);
  servoMotor1.write(90); //recto
  delay(3000);
  servoMotor1.write(130); //limite inclinado hacia delante
  delay(3000)


  
 
  
  
  
  
  //grados que se mueve el motor izquierdo y limitaciones
  grados=120;
  while(grados<=180){
    servoMotor1.write(grados);
    grados=grados+5;
    delay(3000);
  }
  //conectando la pinza en el pin 8
   servoMotor2.write(80); //cierre de la pinza
   delay(3000);
   servoMotor2.write(140); //extension de la pinza
   delay(3000);

}
