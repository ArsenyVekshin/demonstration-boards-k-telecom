#pragma once
//#include <NewPing.h>
#include "SystemConfig.h"
 /*
Кодировки типов датчиков:
0 - концевик(обычный\оптический)
1 - датчик температуры
 */
class sensor
  {
  public:
    sensor(int setS1, int type);

    int getState();
    float read_temp();

    int S1;
    int type;
  };
sensor::sensor(int setS1, int type=0)
   {
   S1=setS1;
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
  int t = analogRead( S1 );
  float tr = 1023.0 / t - 1;
  float t_cels; //температура в C'
  tr = RESIST_BASE / tr; //сопротивление термистора

  t_cels = tr / TEMP_CORECT_RES; // (R/Ro)
  t_cels = log(t_cels); // ln(R/Ro)
  t_cels /= B_COEF; // 1/B * ln(R/Ro)
  t_cels += 1.0 / (TEMP_BASE + 273.15); // + (1/To)
  t_cels = 1.0 / t_cels; // Invert
  t_cels -= 273.15; 
  return t_cels;
  }
