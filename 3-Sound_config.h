#include "XT_DAC_Audio.h"


// Sound files (22'050 Hz, 8 bit PCM recommended) -----------------------------------------------------------------------

//
// =======================================================================================================
// AUX SOUND
// =======================================================================================================
//

#include "sounds/boat/AuxSound/Short_blast.h"
#include "sounds/boat/AuxSound/Long_blast.h"
#include "sounds/boat/AuxSound/bell.h"
#include "sounds/boat/AuxSound/Gun.h"
#include "sounds/boat/AuxSound/AA_Gun_L.h"
#include "sounds/boat/AuxSound/Alarm.h"

XT_Wav_Class Short_blast(Short_b);
XT_Wav_Class Long_blast(Long_b);
XT_Wav_Class Bell(Bell_);
XT_Wav_Class Gun(Gun_);
XT_Wav_Class  AA_Gun_L(AA_Gun_L_Data);
XT_Wav_Class Alarm(Alarm_Data);
XT_Sequence_Class Sequence1;
XT_Sequence_Class Sequence2;
XT_Sequence_Class Sequence3;
XT_Sequence_Class Sequence4;
XT_Sequence_Class Sequence5;
XT_Sequence_Class Sequence6;
XT_Sequence_Class Sequence7;
XT_Sequence_Class Sequence8;
XT_Sequence_Class Sequence10;
XT_Sequence_Class Sequence11;
XT_Sequence_Class Sequence12;


//
// =======================================================================================================
// MOTOR SOUND
// =======================================================================================================
//

// Choose the start sound (uncomment the one you want) --------

#define AIR_STARTER // uncomment this, if you want to use the separate, optional Air starter sound
volatile int starterVolumePercentage = 150; // Adjust the idle volume (usually = 100%, more also working, depending on sound)
volatile int starterStopVolumePercentage = 150; // Adjust the idle volume (usually = 100%, more also working, depending on sound)

#ifdef AIR_STARTER

#include "sounds/boat/AIR_STARTER.h"
//#include "sounds/boat/AIR_STARTER2.h"
//Choose  AIR STOP sound
#include "sounds/boat/AIR_STOP.h"
//#include "sounds/boat/AIR_STOP2.h"
//#include "sounds/boat/AIR_STOP_DUMMY.h" // If you don't want Air stop sound
#endif

volatile int startVolumePercentage = 100; // Adjust the start volume

//#include "sounds/boat/diesel 120HP Start.h"
//#include "sounds/boat/diesel 180HP start.h"
//#include "sounds/boat/V12 Start.h"
//#include "sounds/boat/large diesel start.h"
//#include "sounds/boat/smal diesel start.h"
#include "sounds/boat/turbo diesel start.h"
//#include "sounds/boat/PT_BOAT_START.h"
//#include "sounds/boat/SCANIA_12V_START.h"
//#include "sounds/boat/Diesel_start.h"


//#define SLOW // uncomment this, if you want to use the separate, optional Slow sound
volatile int slowVolumePercentage = 100; // Adjust the idle volume (usually = 100%, more also working, depending on sound)
volatile const uint16_t slowSwitchPoint = 15; // The Slow sound is played instead of the idle sound

#ifdef SLOW
#include "sounds/boat/PT_BOAT_SLOW.h"
#endif


// Choose the motor idle sound (uncomment the one you want) --------

volatile int idleVolumePercentage = 100; // Adjust the idle volume
volatile int engineIdleVolumePercentage = 40; // the engine volume will be throttle dependent
volatile int fullThrottleVolumePercentage = 100;

//#include "sounds/boat/diesel 120HP Idle.h"
//#include "sounds/boat/diesel 180HP Idle.h"
//#include "sounds/boat/V12 Idle.h"
//#include "sounds/boat/large diesel idle.h"
//#include "sounds/boat/smal diesel idle.h"
#include "sounds/boat/turbo diesel idle.h"
//#include "sounds/boat/PT_BOAT_IDLE.h"
//#include "sounds/boat/Diesel_idle.h"

#define ENGINE_STOP // uncomment this, if you want to use the separate, optional Stop sound
volatile int stopVolumePercentage = 100; // Adjust the idle volume (usually = 100%, more also working, depending on sound)

#ifdef ENGINE_STOP
//#include "sounds/boat/stop.h"
//#include "sounds/boat/PT_BOAT_STOP.h"
//#include "sounds/boat/Small_diesel_stop.h"
//#include "sounds/boat/Large_diesel_stop.h"
#include "sounds/boat/turbo_diesel_Stop.h"
//#include "sounds/boat/Diesel_stop.h"
#endif

// Choose the Diesel (or whatever) ignition "knock" sound (played in the fixed sampling rate interrupt, uncomment the one you want,
// play around here, the results are amazing, if you hit the right combination with the idle sound!) --------

volatile int dieselKnockVolumePercentage = 100; // Adjust the Diesel knock volume (usually = 200 - 600%)
volatile int dieselKnockIdleVolumePercentage = 25; // Diesel knock volume while idling (usually = 20%)
volatile int dieselKnockInterval = 2; // Idle sample length divided by this number (1 - 20, depending on sound files)
volatile int dieselKnockStartPoint = 50; // Volume will raise above this point ( usually 0, for "open pipe" exhaust about 250)

//#include "sounds/ScaniaR620UphillKnock.h" // Scania R620 V8 (use it for King Hauler)
//#include "sounds/LanzBulldogDieselKnock.h" // Lanz Bulldog tractor (Interval = 2)
//#include "sounds/ScaniaDieselKnock.h" // Strong Scania V8 diesel knock while highway race against Volvo truck (500%, 10%, Interval = 2 possible, for slow running V8 engines)
//#include "sounds/ScaniaDieselKnock2.h" // Strong, short Scania V8 diesel knock while highway race against Volvo truck (Interval = 4 possible, for faster running engines)
//#include "sounds/ScanıaR730V8DieselKnockShort.h" // Hard knock (400%, 0%, Interval = up to 8 possible, for small engines)
//#include "sounds/DieselKnockSlow.h" // Soft knock (500%, 10%, Interval = up to 4 possible, for meduim engines and Scania open pipe (interval = 1))

#include "sounds/DieselKnockDummy.h" // If you don't want Diesel knock sound


// Adjust the additional turbo sound (set "turboVolumePercentage" to "0", if you don't want it) --------
volatile int turboVolumePercentage = 50; // Adjust the turbo volume (usually = 70%)
volatile int turboIdleVolumePercentage = 10; // the turbo volume will be engine rpm dependent (usually = 10%)
#include "sounds/TurboWhistleDummy.h" // Turbo sound, playing in parallel with engine sound!
//#include "sounds/TurboWhistle.h" // Turbo sound, playing in parallel with engine sound!



//#define REV_SOUND // uncomment this, if you want to use the separate, optional rev sound
volatile int revVolumePercentage = 100; // Adjust the idle volume (usually = 100%, more also working, depending on sound)
volatile int engineRevVolumePercentage = 50; // the engine volume will be throttle dependent (usually = 40%, never more than 100%!)
volatile const uint16_t revSwitchPoint = 150; // The rev sound is played instead of the idle sound above this point
volatile const uint16_t idleEndPoint = 400; // above this point, we have 100% rev and 0% idle sound volume (usually 500, min. 50 more than revSwitchPoint)
volatile const uint16_t idleVolumeProportionPercentage = 80; // The idle sound volume proportion (rest is rev proportion) below "revSwitchPoint" (about 90 - 100%, never more than 100)


#ifdef REV_SOUND
#include "sounds/boat/vosper turbine idleRev.h"
#endif
