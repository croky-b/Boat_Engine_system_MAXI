
#include "Arduino.h"

#include "Servo_MCPWM.h"

#include <stdio.h>

#include "esp_system.h"
#include "esp_attr.h"

#include "driver/mcpwm.h"
#include "soc/mcpwm_reg.h"
#include "soc/mcpwm_struct.h"

///// Defines


Servo::Servo() {
_attached=false;};

bool Servo::attach(uint8_t pin, uint8_t unit,uint8_t timer, uint8_t channel)
{
	_pin = pin;
	_unit = unit;
    _timer= timer;
    _channel=channel;


if ( _unit==0 && _timer == 0){

 switch(_channel){

	case 0:
	
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0A, _pin);
	_attached=true;
	break;
	case 1:
	
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0B, _pin);
    	_attached=true;
     break;
}}

if ( _unit==0 && _timer == 1){

 switch(_channel){

	case 0:
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM1A, _pin);
	_attached=true;


	break;
	case 1:
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM1B, _pin);
	_attached=true;


     break;
}}

if ( _unit==0 && _timer == 2){

 switch(_channel){

	case 0:
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM2A, _pin);
	_attached=true;


	break;
	case 1:
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM2B, _pin);
	_attached=true;


     break;
}}



if ( _unit==1 && _timer == 1){

 switch(_channel){

	case 0:
    mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM1A, _pin);
	_attached=true;

	break;
	case 1:
    mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM1B, _pin);
	_attached=true;

     break;
}}

if ( _unit==1 && _timer == 0){

 switch(_channel){

	case 0:
    mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM0A, _pin);
	_attached=true;

	break;
	case 1:
    mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM0B, _pin);
	_attached=true;

     break;
}}

if ( _unit==1 && _timer == 2){

 switch(_channel){

	case 0:
    mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM2A, _pin);
	_attached=true;

	break;
	case 1:
    mcpwm_gpio_init(MCPWM_UNIT_1, MCPWM2B, _pin);
	_attached=true;

     break;
}}



   



	    mcpwm_config_t pwm_config;
         pwm_config.frequency = 50;    //frequency = 50Hz, 
         pwm_config.cmpr_a = 0;    //duty cycle of PWMxA = 0
         pwm_config.cmpr_b = 0;    //duty cycle of PWMxb = 0
         pwm_config.counter_mode = MCPWM_UP_COUNTER;
         pwm_config.duty_mode = MCPWM_DUTY_MODE_0; 


   if ( _unit==0 && _timer == 0){
     
      mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_0, &pwm_config); 
 }

if ( _unit==0 && _timer == 1){
     
      mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_1, &pwm_config); 
 }

if ( _unit==0 && _timer == 2){
     
      mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_2, &pwm_config); 
 }

if ( _unit==1 && _timer == 0){
     
      mcpwm_init(MCPWM_UNIT_1, MCPWM_TIMER_0, &pwm_config); 
 }
	

if ( _unit==1 && _timer == 1){
     
      mcpwm_init(MCPWM_UNIT_1, MCPWM_TIMER_1, &pwm_config); 
 }

if ( _unit==1 && _timer == 2){
     
      mcpwm_init(MCPWM_UNIT_1, MCPWM_TIMER_2, &pwm_config); 
 }

   
    
}

void Servo::writeMicroseconds(int pulseUs) {
    
     _pulseWidthDuty = pulseUs;


if ( _unit==0 && _timer == 0 && _channel ==0){
 mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, _pulseWidthDuty);
}

if ( _unit==0 && _timer == 0 && _channel ==1){
 mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_B, _pulseWidthDuty);
}

if ( _unit==0 && _timer == 1 && _channel ==0){
 mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_A, _pulseWidthDuty);
}

if ( _unit==0 && _timer == 1 && _channel ==1){
 mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_B, _pulseWidthDuty);
}

if ( _unit==0 && _timer == 2 && _channel ==0){
 mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_2, MCPWM_OPR_A, _pulseWidthDuty);
}

if ( _unit==0 && _timer == 2 && _channel ==1){
 mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_2, MCPWM_OPR_B, _pulseWidthDuty);
}

if ( _unit==1 && _timer == 0 && _channel ==0){
 mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_A, _pulseWidthDuty);
}

if ( _unit==1 && _timer == 0 && _channel ==1){
 mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_B, _pulseWidthDuty);
}


if ( _unit==1 && _timer == 1 && _channel ==0){
 mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_1, MCPWM_OPR_A, _pulseWidthDuty);
}

if ( _unit==1 && _timer == 1 && _channel ==1){
 mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_1, MCPWM_OPR_B, _pulseWidthDuty);
}

if ( _unit==1 && _timer == 2 && _channel ==0){
 mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_2, MCPWM_OPR_A, _pulseWidthDuty);
}

if ( _unit==1 && _timer == 2 && _channel ==1){
 mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_2, MCPWM_OPR_B, _pulseWidthDuty);
}


}

void Servo::write(int degree) {

  cal_pulsewidth = (SERVO_MIN_PULSEWIDTH + (((SERVO_MAX_PULSEWIDTH - SERVO_MIN_PULSEWIDTH) * (degree)) / (SERVO_MAX_DEGREE)));


  if ( _unit == 0 && _timer == 0 && _channel == 0) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, cal_pulsewidth);
  }

  if ( _unit == 0 && _timer == 0 && _channel == 1) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_B, cal_pulsewidth);
  }

  if ( _unit == 0 && _timer == 1 && _channel == 0) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_A, cal_pulsewidth);
  }

  if ( _unit == 0 && _timer == 1 && _channel == 1) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_1, MCPWM_OPR_B, cal_pulsewidth);
  }

  if ( _unit == 0 && _timer == 2 && _channel == 0) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_2, MCPWM_OPR_A, cal_pulsewidth);
  }

  if ( _unit == 0 && _timer == 2 && _channel == 1) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_0, MCPWM_TIMER_2, MCPWM_OPR_B, cal_pulsewidth);
  }

  if ( _unit == 1 && _timer == 0 && _channel == 0) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_A, cal_pulsewidth);
  }

  if ( _unit == 1 && _timer == 0 && _channel == 1) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_0, MCPWM_OPR_B, cal_pulsewidth);
  }


  if ( _unit == 1 && _timer == 1 && _channel == 0) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_1, MCPWM_OPR_A, cal_pulsewidth);
  }

  if ( _unit == 1 && _timer == 1 && _channel == 1) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_1, MCPWM_OPR_B, cal_pulsewidth);
  }

  if ( _unit == 1 && _timer == 2 && _channel == 0) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_2, MCPWM_OPR_A, cal_pulsewidth);
  }

  if ( _unit == 1 && _timer == 2 && _channel == 1) {
    mcpwm_set_duty_in_us(MCPWM_UNIT_1, MCPWM_TIMER_2, MCPWM_OPR_B, cal_pulsewidth);
  }
}
bool Servo::detach(){
_attached= false;
}

bool Servo::attached() const {
  return _attached;
}
         

int Servo::readMicroseconds() {
        
    return _pulseWidthDuty;
}