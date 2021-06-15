#pragma once

#define M1_EN 38		// пин STEP для ШД
#define M1_DIR	1		// пин DIR для ШД 
#define M1_STEP	0		// пин EN для ШД
#define M1_SPEED 600	// скорость для ШД

#define PORSHEN_PIN 27	//пин управления пневмоцилиндром
#define ACT_PIN		23	//пин упраления актуатором
#define COMP_PIN	25	//пин управления присосками
#define ZAMOK_PIN 	17	//пин управления замком

#define LEN_BUT_PIN	20 	//оптический концевик двигателя
#define SERV_BUT_PIN 11	//концевик сервопривода

#define SER_PIN 4 	//управляющий пин для сервопривода

#define SONAR_ECHO 52 //пин ECHO УЗ датчика растояния
#define SONAR_TRIG 50 //пин TRIG УЗ датчика растояния

#define UP 1
#define DOWN 0

#define rattle_k 5 //коофицент для защиты от дребезга кнопок

#define BUTTON 0 	//тип датчика "кнопка"
#define SONAR 1		//тип датчика "ультразвук"
