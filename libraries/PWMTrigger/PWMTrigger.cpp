

#include "Arduino.h"
#include "PWMTrigger.h"



PWMTrigger::PWMTrigger() {   
}

void PWMTrigger::update(unsigned int pulsewidth){ 

_posPulsewidth = pulsewidth; 

}


int PWMTrigger::Pos() {


 if (_posPulsewidth  >= 1750){

	if ( millis() - previousMillis >500)
      {
_posState = 3; }
}


 else if (_posPulsewidth  <= 1250){
      if ( millis() - previousMillis >500)
      {
 
_posState = 1;}
}

else if (1250 >=_posPulsewidth  <= 1750) 
{_posState = 2;
previousMillis=millis();
 
}
        
    
return _posState ;
}


int PWMTrigger::momentaryPos() {

    

 if (_posPulsewidth>= 1750){ 
_momentaryPosState = 3; 

if( millis()-_momentaryPosMillis > 750){
_momentaryPosState = 2;

}
}

 else if (_posPulsewidth <= 1470){
_momentaryPosState = 1;

if (millis()-_momentaryPosMillis > 750){
_momentaryPosState = 2;

}

}


else if (1470 >=_posPulsewidth <= 1750) 
{
_momentaryPosState = 2;
_momentaryPosMillis = millis();
}
        
    
return _momentaryPosState;
}


