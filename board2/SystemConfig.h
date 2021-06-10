#pragma once

//ПИНЫ ЛОГИЧЕСКИХ УСТРОЙСТВ
#define HEATER_PIN 22	//пин управления нагревателем
#define WATER_PIN 24	//пин упраления насосом
#define COOLER_PIN 23	//пин управления вентилятором



//ДИСПЛЕЙ
#define RS_PIN 11	//дисплей пин RS
#define E_PIN 12	//дисплей пин E
#define D4_PIN 5	//дисплей пин DB4
#define D5_PIN 4	//дисплей пин DB5
#define D6_PIN 3 	//дисплей пин DB6
#define D7_PIN 2	//дисплей пин DB7

#define DISP_X 16 //количество столбцов дисплея
#define DISP_Y 2 //количество строк дисплея


//ДАТЧИК ТЕМПЕРАТУРЫ
#define TERM_PIN 0	//пин датчика температуры АНАЛОГ!

#define TEMP_CORECT_RES 100000
#define RESIST_BASE 102000
#define B_COEF 3950
#define TEMP_BASE 25

//ПРОЧИЕ КОНСТАНТЫ
#define UP 1
#define DOWN 0

#define BUTTON 0
#define TEMPERATURE 1

#define rattle_k 5 //коофицент для защиты от дребезга кнопок
