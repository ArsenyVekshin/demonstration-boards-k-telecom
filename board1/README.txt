Программа для стенда №1
К-телеком

Общий принцип работы:
	1.Включение питания
	2.Отключение присосок, актуатора, пневмоцилиндра
	3.Движение сервопривода
	4.Движение мотора


Классы:

-relay-
	Класс для управления реле

	Функции:

	relay.relay(пин, задержка, инверсия) - для создания обьекта relay с параметрами

	relay.on() - переход реле в состояние "включено"
	relay.off() - переход реле в состояние "выключено"
	relay.moveTo(состояние) -переход реле в заданное состояние 

-sensor-
	Класс для датчиков

	Функции:

	sensor.sensor(пин, тип датчика, пин датчика 2) - для создания обьекта sensor с параметрами(2 пин только для сонара)

	sensor.getState() - чтение состояния кнопки
	sensor.getSonar() - чтение расстояния с УЗ датчика

-motor-
	Класс моторов

	Функции:

	motor.motor(EN, DIR, STEP, скорость, инверсия); - для создания обьекта motor с параметрами

	motor.begin() - подать питание на мотор
	motor.begin() - обесточить мотор
	motor.move(направление) - сделать 1 шаг
	motor.moveTo(координата) - переместиться к заданной координате


-sonar-
	Класс для сонара(УЗ)

	NewPing sonar(TRIG, ECHO, макс. расстояние) - для создания обьекта sonar с параметрами
	sonar.ping_cm() - чтение расстояния в сантиметрах

-servo-
	Класс для сервоприводов

	Servo servo - для создания обьекта servo

	servo.attach(пин) - подать питание на серво
	servo.detach() - обесточить серво
	servo.write(угол) - задать положение сервопривода
