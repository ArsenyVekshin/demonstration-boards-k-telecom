#include <Servo.h>
#include <NewPing.h>
#include "SystemConfig.h"
#include "SYSTEM.h"
Servo servo;
NewPing sonar(SONAR_TRIG, SONAR_ECHO, 200);

int Get_sonar()
  {
  int j=sonar.ping_cm();
  if (j<0 or j>200){return -1;}
  return j;
  }

void Servo_angle(int angle = 0)
{
  servo.attach(SER_PIN);
  servo.write(angle);
  delay(3000);
  servo.detach();
}

void setup()
{
  Serial.begin(9600);
  PORSHEN.off();
  ZAMOK.off();
  ACT.off();
  Servo_angle(60);
  M1.moveTo(100000);
}

void loop()
{
 
}
