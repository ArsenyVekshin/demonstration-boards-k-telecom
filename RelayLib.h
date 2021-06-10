#pragma once

#include "SystemConfig.h"

#define UP 1
#define DOWN 0

class relay
   {
   public:
      relay(int setSIG, int setT = 1, int inverse = 0);

      void move(int mode);
      void moveTo(int mode);
      void on();
      void off();

      int T;
      int PIN;
      int inv;

   };

relay::relay(int setPIN, int setT = 1, int inverse = 0)
   {
   PIN = setPIN;

   pinMode(PIN, OUTPUT);

   T = setT;
   inv=inverse;
   }

void relay::moveTo(int mode)
   {
   move(mode);
   }

void relay::move(int mode)
   {
   if (mode == UP) { on(); }
   if (mode == DOWN) { off(); }
   }

void relay::on()
   {
   digitalWrite(PIN, 1 - inv);
   delay(T * 1000);
   }

void relay::off()
   {
   digitalWrite(PIN, 0 + inv);
   delay(T * 1000);
   }