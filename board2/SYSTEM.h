#pragma once

#include "Arduino.h"

#include "SystemConfig.h"
#include "RelayLib.h"
#include "SensorLib.h"

relay HEATER (HEATER_PIN, 0, 1);
relay WATER (WATER_PIN, 0);
relay FAN (COOLER_PIN, 0);

sensor TERM(TERM_PIN, TEMPERATURE);
