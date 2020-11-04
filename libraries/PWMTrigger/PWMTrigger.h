

#ifndef PWMTrigger_h
#define PWMTrigger_h

#include "Arduino.h"

// Class definition (header) ========================================================================
class PWMTrigger {
  public:
    PWMTrigger();
    void update(unsigned int pulsewidth);

    int Pos();
    int momentaryPos();
    
    bool toggle(unsigned int pulsewidth, unsigned int target);
    
    bool toggleLong(unsigned int pulsewidth, unsigned int target);
    
  private:

    unsigned long _duration;
    
    unsigned int _posPulsewidth;
    unsigned int _momentaryPosPulsewidth;
    unsigned int _pulsewidth;
    int _posState = 2;
    int _momentaryState= 2;
    int _momentaryPosState =2;
    unsigned long _momentaryPosMillis; 
    unsigned long previousMillis;


    
};

#endif
