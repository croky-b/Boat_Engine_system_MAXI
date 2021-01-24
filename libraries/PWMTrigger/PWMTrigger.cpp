

#include "Arduino.h"
#include "PWMTrigger.h"



PWMTrigger::PWMTrigger() {   
}

void PWMTrigger::update(unsigned int pulsewidth){ 

_posPulsewidth = pulsewidth; 

}
int PWMTrigger::NeutralPos() {

    

 if (_posPulsewidth>= 1750){ 
_NeutralPosState = 1; 
_NeutralPosMillis = millis();
}


 else if (_posPulsewidth <= 1250){
_NeutralPosState = 1;
_NeutralPosMillis = millis();

}




else if (1250 >=_posPulsewidth <= 1750) 
{
	
_NeutralPosState = 2;

if (millis()-_NeutralPosMillis > 750){
_NeutralPosState = 1;}


}
        
    
return _NeutralPosState;
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

int PWMTrigger::eightPos() {


 if ((_posPulsewidth  >= 1550) && (_posPulsewidth < 1650)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 6; }
}

else if ((_posPulsewidth  >= 1650) && (_posPulsewidth < 1750)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 7; }
}

else if ((_posPulsewidth  >= 1750) && (_posPulsewidth < 1850)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 8; }
}

else if ((_posPulsewidth  >= 1850) && (_posPulsewidth < 2000)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 9; }

}

else if ((_posPulsewidth  <= 1450) && (_posPulsewidth > 1350)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 4; }

}

else if ((_posPulsewidth  <= 1350) && (_posPulsewidth > 1250)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 3; }

}

else if ((_posPulsewidth  <= 1250) && (_posPulsewidth > 1150)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 2; }

}

else if ((_posPulsewidth  <= 1150) && (_posPulsewidth > 1000)){

	if ( millis() - previousMillis2 >500)
      {
_multi8PosState = 1; }

}


else   
{_multi8PosState = 5;
previousMillis2=millis();
 
}
        
    
return _multi8PosState ;
}


int PWMTrigger::eightMomentaryPos() {

    

 if ((_posPulsewidth  >= 1550) && (_posPulsewidth < 1650)){
	
_multi8MomentaryPosState = 6; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  >= 1650) && (_posPulsewidth < 1750)){
	
_multi8MomentaryPosState = 7; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  >= 1750) && (_posPulsewidth < 1850)){
	
_multi8MomentaryPosState = 8; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  >= 1850) && (_posPulsewidth < 2000)){
	
_multi8MomentaryPosState = 9; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  <= 1450) && (_posPulsewidth > 1350)){
	
_multi8MomentaryPosState = 4; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  <= 1350) && (_posPulsewidth > 1250)){
	
_multi8MomentaryPosState = 3; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  <= 1250) && (_posPulsewidth > 1150)){
	
_multi8MomentaryPosState = 2; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else if ((_posPulsewidth  <= 1150) && (_posPulsewidth > 1000)){
	
_multi8MomentaryPosState = 1; 

if( millis()-_multi8MomentaryPosMillis > 750){
_multi8MomentaryPosState = 5;

}
}

else 
{
_multi8MomentaryPosState = 5;
_multi8MomentaryPosMillis = millis();
}
        
    
return _multi8MomentaryPosState;
}




int PWMTrigger::sixPos() {


 if ((_posPulsewidth  >= 1550) && (_posPulsewidth < 1750)){

	if ( millis() - previousMillis3 >500)
      {
_multi6PosState = 6; }
}

else if ((_posPulsewidth  >= 1750) && (_posPulsewidth < 1950)){

	if ( millis() - previousMillis3 >500)
      {
_multi6PosState = 7; }
}

else if ((_posPulsewidth  >= 1950) && (_posPulsewidth < 2100)){

	if ( millis() - previousMillis3 >500)
      {
_multi6PosState = 8; }
}






else if ((_posPulsewidth  <= 1450) && (_posPulsewidth > 1350)){

	if ( millis() - previousMillis3 >500)
      {
_multi6PosState = 4; }

}

else if ((_posPulsewidth  <= 1350) && (_posPulsewidth > 1000)){

	if ( millis() - previousMillis3 >500)
      {
_multi6PosState = 3; }

}

else if ((_posPulsewidth  <= 1000) && (_posPulsewidth >900 )){

	if ( millis() - previousMillis3 >500)
      {
_multi6PosState = 2; }

}



else   
{_multi6PosState = 5;
previousMillis3=millis();
 
}
        
    
return _multi6PosState ;
}


int PWMTrigger::sixMomentaryPos() {

    

  if ((_posPulsewidth  >= 1550) && (_posPulsewidth < 1750)){
	
_sixMomentaryPosState = 6; 

if( millis()-_sixMomentaryPosMillis > 500){
_sixMomentaryPosState = 5;

}
}

else if ((_posPulsewidth  >= 1750) && (_posPulsewidth < 1950)){
	
_sixMomentaryPosState = 7; 

if( millis()-_sixMomentaryPosMillis > 500){
_sixMomentaryPosState = 5;

}

}

else if ((_posPulsewidth  >= 1950) && (_posPulsewidth < 2050)){
	
_sixMomentaryPosState = 8; 

if( millis()-_sixMomentaryPosMillis > 500){
_sixMomentaryPosState = 5;

}

}


else if ((_posPulsewidth  <= 1450) && (_posPulsewidth > 1350)){
	
_sixMomentaryPosState = 5; 
_sixMomentaryPosMillis = millis();

if( millis()-_sixMomentaryPosMillis > 500){
_sixMomentaryPosState = 5;

}

}

else if ((_posPulsewidth  <= 1350) && (_posPulsewidth > 1000)){
	
_sixMomentaryPosState = 3; 

if( millis()-_sixMomentaryPosMillis > 500){
_sixMomentaryPosState = 5;

}

}

else if ((_posPulsewidth  <= 1000) && (_posPulsewidth >900 )){
	
_sixMomentaryPosState = 2; 

if( millis()-_sixMomentaryPosMillis > 500){
_sixMomentaryPosState = 5;

}
}

      
    
return _sixMomentaryPosState ;
}


