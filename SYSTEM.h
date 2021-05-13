#pragma once

#include "Arduino.h"

#include "SystemConfig.h"
#include "RelayLib.h"

motor M1 (M1_EN,  M1_DIR, M1_STEP, M1_SPEED);

relay PORSHEN (PORSHEN_PIN, PORSHEN_TIME);
relay ACT (ACT_PIN, ACT_TIME);
relay COMPRESSOR(COMP_PIN, 1);
relay ZAMOK(ZAMOK_PIN, 1);

