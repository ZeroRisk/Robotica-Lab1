#include <Servo.h>

// Declaramos la variable para controlar el servo
Servo servoMotorIZQ;
Servo servoMotorDER;
Servo servoMotorPinza;
Servo servoMotorBase;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
  
  //Motor de Base 0º a 180º
  servoMotorBase.attach(7);
  //Motor izquierdo 120º a 180º 60°para bajar pinza
  servoMotorIZQ.attach(8);
  //Motor derecho 80 recto 30 enderezar 120 inclinacion 
  servoMotorDER.attach(9);
  //Motor pinza 80º a 140º
  servoMotorPinza.attach(10);
  // Inicializamos al ángulo 0 el servomotor
  servoMotorIZQ.write(160);
  servoMotorDER.write(40);
  servoMotorPinza.write(80);
  servoMotorBase.write(0);
}
 
void loop() {


  delay(2000);

  moverBase(0,90);
  abrirPinza();
  bajarBrazo();

  cerrarPinza();
  subirBrazo();
  moverBase(90,0);
  bajarBrazo();
  abrirPinza();
  cerrarPinza();
  subirBrazo();

}
void abrirPinza(){
   for (int i = 1; i <= 8; i++)
  {
    
    servoMotorPinza.write(80+(i*10));
  
    delay(100);
  }
  }

void cerrarPinza(){
   for (int i = 1; i <= 8; i++)
  {
    
    servoMotorPinza.write(180-(10*i));
  
    delay(100);
  }
  }

 void bajarBrazo(){
  int x=0;
  for (int i = 160; i >= 125; i--)
  {
    
    servoMotorIZQ.write(i);
    servoMotorDER.write(40+x);
    x++;
  
    delay(10);
  }
  }

void subirBrazo(){
   int x=0;
  
  for (int i = 160; i >= 125; i--)
  {
    
    servoMotorIZQ.write(120+x);
    servoMotorDER.write(75-x);
    x++;
  
    delay(10);
  }
}
void moverBase(int i,int j){
  if(i<=j){
    for(i;i<j;i++){
      servoMotorBase.write(i);
      delay(10);
    }
  }
  else{
    for(i;i>=j;i--){
      servoMotorBase.write(i);
      delay(10);
    }
    
  }
  
}
  


