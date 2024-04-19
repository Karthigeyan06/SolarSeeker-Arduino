#include <Servo.h>

Servo servoMotor;
int servoPin = 9;
int initialAngle = 0;
int finalAngle = 180;
int delayTime = 18000000;
unsigned long startTime;

void setup() {
  servoMotor.attach(servoPin); 
  servoMotor.write(initialAngle);
  startTime = millis(); 
}

void loop() {
  unsigned long currentTime = millis(); 
  
  
  unsigned long elapsedTime = currentTime - startTime;
  
  
  if (elapsedTime >= delayTime) {
    servoMotor.write(initialAngle); 
    
    startTime = currentTime;
  }
}
