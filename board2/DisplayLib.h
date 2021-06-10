//библиотека для ЖК-экрана
#include <LiquidCrystal.h> 
#include "SystemConfig.h"

class display
  {
  public:
    display(int RS_PIN, int E_PIN, int D4_PIN, int D5_PIN, int D6_PIN, int D7_PIN);

    void printMes();

    int RS;
    int E;
    int D4;
    int D5;
    int D6;
    int D7;
  };

display::display(int RS_PIN, int E_PIN, int D4_PIN, int D5_PIN, int D6_PIN, int D7_PIN)
  {
  LiquidCrystal lcd(RS_PIN, E_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN); // (RS, E, DB4, DB5, DB6, DB7)
  lcd.begin(16, 2); 
  }

void display:printMes(char message, int step = 0)	
	{
	lcd.setCursor(0, step); 
	lcd.print(String(message)); 
	}
