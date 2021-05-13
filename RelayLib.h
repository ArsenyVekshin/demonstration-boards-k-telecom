#pragma once

#include "SystemConfig.h"

class relay
   {
   public:
      relay(int setSIG, int setT = 1, int setONsig = 1);

      void move(int mode);
      void moveTo(int mode);
      void on();
      void off();

      int T;
      int PIN;
      int ONsig;

   };

relay::relay(int setPIN, int setT = 1, int setONsig = 1)
   {
   PIN = setPIN;

   pinMode(PIN, OUTPUT);

   T = setT;
   ONsig = setONsig;
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
   digitalWrite(PIN, 1);
   delay(T * 1000);
   }

void relay::off()
   {
   digitalWrite(PIN, 0);
   delay(T * 1000);
   }
