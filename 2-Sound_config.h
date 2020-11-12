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
