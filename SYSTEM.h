#pragma once

#include "Arduino.h"
#include "SensorLib.h"
#include "SystemConfig.h"
#include "RelayLib.h"
#include "MotorLib.h"

motor M1 (M1_EN,  M1_DIR, M1_STEP, M1_SPEED);

relay PORSHEN (PORSHEN_PIN, 1);
relay ACT (ACT_PIN, 2, 1);
relay COMPRESSOR(COMP_PIN, 0);
relay ZAMOK(ZAMOK_PIN, 0);

sensor SONAR1(SONAR_ECHO, SONAR_TRIG, SONAR);
sensor LEN_BUT(LEN_BUT_PIN, LEN_BUT_PIN, BUTTON, 1);
sensor SERV_BUT(SERV_BUT_PIN, SERV_BUT_PIN, BUTTON, 1);
