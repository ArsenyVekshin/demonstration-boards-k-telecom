#pragma once

#define M1_EN 53	// пин STEP для ШД
#define M1_DIR	50	// пин DIR для ШД 
#define M1_STEP	52	// пин EN для ШД
#define M1_SPEED 600	// скорость для ШД

#define PORSHEN_PIN 8	//пин управления пневмоцилиндром
#define ACT_PIN		10	//пин упраления актуатором
#define COMP_PIN	9	//пин управления присосками
#define ZAMOK_PIN 	11	//пин управления замком

#define LEN_BUT_PIN	24 	//оптический концевик двигателя
#define SERV_BUT_PIN 22	//концевик сервопривода

#define SER_PIN 7 	//управляющий пин для сервопривода

#define SONAR_ECHO 23 //пин ECHO УЗ датчика растояния
#define SONAR_TRIG 25 //пин TRIG УЗ датчика растояния



#define rattle_k 5 //коофицент для защиты от дребезга кнопок

#define BUTTON 0
#define SONAR 1