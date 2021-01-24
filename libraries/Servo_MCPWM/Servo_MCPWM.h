

#ifndef Servo_MCPWM_H
#define Servo_MCPWM_H

#include "Arduino.h"


#ifndef ESP32
	#error "this library is only for ESP32"
#endif




class Servo
{

static const int SERVO_MIN_PULSEWIDTH = 500; //Minimum pulse width in microsecond
static const int SERVO_MAX_PULSEWIDTH = 2400; //Maximum pulse width in microsecond
static const int SERVO_MAX_DEGREE = 180; //Maximum angle in degree upto which servo can rotate

public:

	
	Servo();
	bool attach(uint8_t pin, uint8_t unit,uint8_t timer, uint8_t channel);
	void writeMicroseconds(int pulseUs);
	bool detach();
	void write(int degree);
	int  readMicroseconds();
	bool attached()const ;  

private:

uint8_t  _pin;
uint8_t  _unit;
uint8_t _timer;
uint8_t _channel;
uint8_t  mX ;
uint8_t mY ;
uint16_t _pulseWidthDuty;
uint16_t cal_pulsewidth; 
bool _attached;


	
};

#endif 