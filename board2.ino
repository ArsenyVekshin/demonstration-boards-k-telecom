#include "SystemConfig.h"
#include "SYSTEM.h"
#include <LiquidCrystal.h> 

LiquidCrystal lcd(RS_PIN, E_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN);
int n=0;
int time1=0;
int time2=0;
float temp=0;

void setup()
	{
	Serial.begin(9600);
  lcd.begin(DISP_X, DISP_Y);
	HEATER.off();
  FAN.on();

  lcd.setCursor(0, 0);
  lcd.print("PLEASE WAIT");
  lcd.setCursor(0, 1);
  lcd.print("HEATING");
	HEATER.on();
  delay(10000);	
  HEATER.off();
	}
void Display_print(String message, int step1 = 0)
  {
  if(message.length()>DISP_X){message=message.substring(0,DISP_X);}
  lcd.setCursor(0, step1);
  lcd.print(message);
  }

void loop()
  { 
  temp=TERM.read_temp();
  Display_print("Tempr = " + String(temp),0);
  Serial.println("Tempr = " + String(temp));
  if (temp>50){WATER.on();}
  if (temp<45){WATER.off();}

  //Display_print("Tempr = " + String(temp),0); 
  }
