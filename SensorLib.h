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
    sensor(int setS1, int type);

    int getState();
    float read_temp();

    int S1;
    int S2;
    int type;
  };
sensor::sensor(int setS1, int type=0)
   {
   S1=setS1;
   S2=setS2;

   if (type!=TEMPERATURE){pinMode(S1, INPUT);}
   

   }

int sensor::getState()
   {
   int s;
   for(int i=0; i<rattle_k; i++){s=s+digitalRead(S1);}
   if (s>rattle_k-2) {return 1;}
   else {return 0;}
   }

float sensor::read_temp()
  {
  float t;
  t = TEMP_CORECT_RES / ((float)1023 / analogRead(S1) - 1);
  t /= RESIST_BASE;                        // (R/Ro)
  t = log(t) / B_COEF;            // 1/B * ln(R/Ro)
  t += (float)1.0 / (TEMP_BASE + 273.15);  // + (1/To)
  t = (float)1.0 / t - 273.15;    // инвертируем и конвертируем в градусы по Цельсию
  return t;
  }
