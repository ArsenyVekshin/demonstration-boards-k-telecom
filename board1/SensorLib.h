#pragma once
//#include <NewPing.h>
#include "SystemConfig.h"
 /*
Кодировки типов датчиков:
0 - концевик(обычный\оптический)
1 - датчик растояния (HC SR04)
 */
class sensor
  {
  public:
    sensor(int setS1, int setS2, int type, int invers);

    int getState();
    float getSonar();

    int S1;
    int S2;
    int type;
    int inv;
  };
sensor::sensor(int setS1, int setS2=0, int type=0, int invers=0)
   {
   S1=setS1;
   S2=setS2;
   inv=invers;
   pinMode(S1, INPUT);
   if (type==SONAR){pinMode(S2, OUTPUT);}

   }

int sensor::getState()
   {
   int s=0;
   for(int i=0; i<rattle_k; i++){s=s+digitalRead(S1);}
   if(inv==1 and s<rattle_k-1){return 1;}
   if(inv==0 and s>rattle_k-1){return 1;}
   return 0;
   //if (s>rattle_k-2) {return 1;}
   //else {return 0;}
   }

float sensor::getSonar()
   { //S2 = PIN_TRIG   S1=PIN_ECHO
   long duration;
   float cm;

   digitalWrite(S2, LOW);
   delayMicroseconds(5);
   digitalWrite(S2, HIGH);

   delayMicroseconds(10);
   digitalWrite(S2, LOW);

   duration = pulseIn(S1, HIGH);
   cm =float( (duration / 2) / 29.1);
   delay(250);
   return cm;
   }
