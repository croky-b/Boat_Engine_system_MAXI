

#ifndef PWMTrigger_h
#define PWMTrigger_h

#include "Arduino.h"

// Class definition (header) ========================================================================
class PWMTrigger {
  public:
    PWMTrigger();
    void update(unsigned int pulsewidth);

    int Pos();
	int NeutralPos();
    int momentaryPos();
	int eightPos();
    int eightMomentaryPos();
	int sixPos();
    int sixMomentaryPos();
    
  private:

    unsigned int _posPulsewidth;
    unsigned int _momentaryPosPulsewidth;
    unsigned int _pulsewidth;
    int _posState = 2;
	int _NeutralPosState = 1;
    int _momentaryState= 2;
    int _momentaryPosState =2;
    unsigned long _momentaryPosMillis; 
	unsigned long _NeutralPosMillis; 
    unsigned long previousMillis;
    int _multi8PosState= 5;
    int _multi8MomentaryPosState =5;
    unsigned long _multi8MomentaryPosMillis; 
    unsigned long previousMillis2;
	int _multi6PosState= 5;
    int _sixMomentaryPosState =5;
    unsigned long _sixMomentaryPosMillis; 
    unsigned long previousMillis3;


    
};

#endif
