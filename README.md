# Boat_Engine_system_MAXI

Based on https://github.com/TheDIYGuy999/Rc_Engine_Sound_ESP32

CHOIX DU MODE DE COMMUNICATION 

// ---------------------------------------------------------------------------------------------------------------------
// Choose the receiver communication mode (never uncomment more than one! If all commented out = classic PWM RC signal communication)--
// SBUS communication --------

#define SBUS_COMMUNICATION // control signals are coming in via the SBUS interface (comment it out for classic RC signals)
boolean sbusInverted = false; // false = wired to NPN transistor signal inverter or uninverted SBUS signal (for example from "Micro RC" receiver)

// PPM communication --------

//#define PPM_COMMUNICATION // control signals are coming in via the PPM interface (comment it out for classic RC signals)
#define NUM_OF_CHL 8          // The number of channels inside our PPM signal (usually max. 8)
#define NUM_OF_AVG 1          // Number of averaging passes (usually one, more will be slow)

Décommenter le mode de communication que vous voulez ( retirer les // devant #Define ) 
le mode par défaut est PWM ( si vous ne choissisé ni PPM ni SBUS) 

![](https://github.com/croky-b/Boat_Engine_system_MAXI/blob/main/IMG_20201025_121146.jpg)
