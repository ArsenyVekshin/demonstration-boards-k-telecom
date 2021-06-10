//Библиотека для шаговых двигателей
#pragma once

#include "SystemConfig.h"

#define UP 1
#define DOWN 0

class motor
{
  public:
    motor(int setEN, int setDIR, int setSTEP, int setdT, int setONsig = 1);

    void move(int mode);
    void moveTo(int dX);
    void begin();
    void stop();

    int X = 0;
    int dT;
    int EN;
    int DIR;
    int STEP;
    int ONsig;
};

motor::motor(int setEN, int setDIR, int setSTEP, int setdT, int setONsig = 1)
{
  EN = setEN;
  DIR = setDIR;
  STEP = setSTEP;

  pinMode(EN, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(STEP, OUTPUT);

  dT = setdT;
  X = 0;

  ONsig = setONsig;

  stop();
}

void motor::begin()
{
  digitalWrite(EN, 0);
}

void motor::stop()
{
  digitalWrite(EN, 1);
}


void motor::move(int mode)
{
  begin();
  if (mode == UP)
  {
    digitalWrite(DIR, 1);
    digitalWrite(STEP, abs(X) % 2);
    X++;
  }

  if (mode == DOWN)
  {
    digitalWrite(DIR, 0);
    digitalWrite(STEP, abs(X) % 2);
    X--;
  }
  delayMicroseconds(dT);
  stop();
}

void motor::moveTo(int dX)
{
  dX = X + dX;
  while (dX != X)
  {
    if (dX > X) move(UP);
    if (dX < X) move(DOWN);
  }
}
