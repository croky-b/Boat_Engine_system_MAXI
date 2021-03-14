
/* RC engine sound & LED controller for Arduino ESP32. Written by TheDIYGuy999
    Based on the code for ATmega 328: https://github.com/TheDIYGuy999/Rc_Engine_Sound
    modified for boat by croky_b for boat

 *  ***** ESP32 CPU frequency must be set to 240MHz! *****

   
*/

const float codeVersion = 5.57; // Software revision.

//
// =======================================================================================================
// SETTINGS (ADJUST THEM BEFORE CODE UPLOAD)
// =======================================================================================================
//



#include "2-Sound_config.h"
#include "1-Setup.h"
#include "driver/rmt.h"


// Make sure to remove -master from your sketch folder name

// DEBUG options can slow down the playback loop! Only comment them out for debugging
//#define PULSWIDTH_DEBUG //
//#define DEBUG // uncomment it for general debugging informations
//#define SBUS_DEBUG // uncomment it to debug the SBUS command interface on pin 36
//#define ESC_DEBUG // uncomment it to debug the ESC control

// TODO = Things to clean up!

//
// =======================================================================================================
// LIRBARIES & HEADER FILES (TABS ABOVE)
// =======================================================================================================
//

// Libraries (you have to install all of them)
#include <statusLED.h> // https://github.com/TheDIYGuy999/statusLED <<------- Install the newest version!
#include <SBUS.h>     // https://github.com/TheDIYGuy999/SBUS you need to install my fork of this library!
#include <SparkFunSX1509.h> //use my fork of this library (modified version)
#include <SlowMotionServo.h>//use my fork of this library (modified version)
#include <Servo_MCPWM.h>
#include <PWMTrigger.h>
#include "XT_DAC_Audio.h"
#include <ScheduleTable.h>

//
// =======================================================================================================
// PIN ASSIGNMENTS & GLOBAL VARIABLES (Do not play around here)
// =======================================================================================================
//
// Pin assignment and wiring instructions

// ------------------------------------------------------------------------------------
// Use a 330Ohm resistor in series with all I/O pins! allows to drive LED directly and
// provides short circuit protection.
// ------------------------------------------------------------------------------------

#define RMT_TICK_PER_US 1
// determines how many clock cycles one "tick" is
// [1..255], source is generally 80MHz APB clk
#define RMT_RX_CLK_DIV (80000000/RMT_TICK_PER_US/1000000)
// time before receiver goes idle
#define RMT_RX_MAX_US 3500

uint32_t maxPwmRpmPercentage = 400; // Limit required to prevent controller fron crashing @ high engine RPM



#define RECEIVER_CHANNELS_NUM 8
const uint8_t RECEIVER_CHANNELS[RECEIVER_CHANNELS_NUM] = {0, 1, 2, 3, 4, 5, 6, 7 };
const uint8_t RECEIVER_PINS[RECEIVER_CHANNELS_NUM]  = {13, 12, 14, 27, 33, 35, 39, 34 };


#ifdef PPM_COMMUNICATION
#define PPM_PIN    34
#endif


#ifdef SBUS_COMMUNICATION
#define COMMAND_RX  39
#define COMMAND_TX  36
#endif

#define PULSE_NBR 15

SMSSmooth monServo1;
//SMSLinear monServo1;
SMSSmooth monServo2;
SMSSmooth monServo3;
SMSSmooth monServo4;
SMSSmooth monServo5;
SMSSmooth monServo6;

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;
Servo ANCHOR;
Servo ESC1;
Servo ESC2;
Servo ESC3;


PWMTrigger Action1;
PWMTrigger Action2;
PWMTrigger Action3;
PWMTrigger Action4;
PWMTrigger Action5;
PWMTrigger Action6;
PWMTrigger Action7;
PWMTrigger Action8;
PWMTrigger Action9;
PWMTrigger Action10;
PWMTrigger Action11A;
PWMTrigger Action11B;
PWMTrigger Action11C;
PWMTrigger Action11D;
PWMTrigger Action12;
PWMTrigger VolumeCh;



SchedTable<10> Sequence1Servo(SEQ1_DURATION);
SchedTable<10> Sequence1BServo(SEQ1B_DURATION);

SchedTable<2> Sequence1BLedPart1(SEQ1B_DURATION);
SchedTable<2> Sequence1BLedPart2(SEQ1B_DURATION);
SchedTable<2> Sequence1BLedPart3(SEQ1B_DURATION);
SchedTable<2> Sequence1BLedPart4(SEQ1B_DURATION);
SchedTable<2> Sequence1BSoundPart1(SEQ1B_DURATION);
SchedTable<2> Sequence1BSoundPart2(SEQ1B_DURATION);
SchedTable<2> Sequence1BSoundPart3(SEQ1B_DURATION);
SchedTable<2> Sequence1BSoundPart4(SEQ1B_DURATION);
SchedTable<2> Sequence1BMotorPart1(SEQ1B_DURATION);
SchedTable<2> Sequence1BMotorPart2(SEQ1B_DURATION);
SchedTable<2> Sequence1BMotorPart3(SEQ1B_DURATION);
SchedTable<2> Sequence1BMotorPart4(SEQ1B_DURATION);

SchedTable<2> Sequence1LedPart1(SEQ1_DURATION);
SchedTable<2> Sequence1LedPart2(SEQ1_DURATION);
SchedTable<2> Sequence1LedPart3(SEQ1_DURATION);
SchedTable<2> Sequence1LedPart4(SEQ1_DURATION);
SchedTable<2> Sequence1SoundPart1(SEQ1_DURATION);
SchedTable<2> Sequence1SoundPart2(SEQ1_DURATION);
SchedTable<2> Sequence1SoundPart3(SEQ1_DURATION);
SchedTable<2> Sequence1SoundPart4(SEQ1_DURATION);
SchedTable<2> Sequence1MotorPart1(SEQ1_DURATION);
SchedTable<2> Sequence1MotorPart2(SEQ1_DURATION);
SchedTable<2> Sequence1MotorPart3(SEQ1_DURATION);
SchedTable<2> Sequence1MotorPart4(SEQ1_DURATION);

SchedTable<10> Sequence2BServo(SEQ2B_DURATION);

SchedTable<2> Sequence2BLedPart1(SEQ2B_DURATION);
SchedTable<2> Sequence2BLedPart2(SEQ2B_DURATION);
SchedTable<2> Sequence2BLedPart3(SEQ2B_DURATION);
SchedTable<2> Sequence2BLedPart4(SEQ2B_DURATION);
SchedTable<2> Sequence2BSoundPart1(SEQ2B_DURATION);
SchedTable<2> Sequence2BSoundPart2(SEQ2B_DURATION);
SchedTable<2> Sequence2BSoundPart3(SEQ2B_DURATION);
SchedTable<2> Sequence2BSoundPart4(SEQ2B_DURATION);
SchedTable<2> Sequence2BMotorPart1(SEQ2B_DURATION);
SchedTable<2> Sequence2BMotorPart2(SEQ2B_DURATION);
SchedTable<2> Sequence2BMotorPart3(SEQ2B_DURATION);
SchedTable<2> Sequence2BMotorPart4(SEQ2B_DURATION);

SchedTable<10> Sequence2Servo(SEQ2_DURATION);

SchedTable<2> Sequence2LedPart1(SEQ2_DURATION);
SchedTable<2> Sequence2LedPart2(SEQ2_DURATION);
SchedTable<2> Sequence2LedPart3(SEQ2_DURATION);
SchedTable<2> Sequence2LedPart4(SEQ2_DURATION);
SchedTable<2> Sequence2SoundPart1(SEQ2_DURATION);
SchedTable<2> Sequence2SoundPart2(SEQ2_DURATION);
SchedTable<2> Sequence2SoundPart3(SEQ2_DURATION);
SchedTable<2> Sequence2SoundPart4(SEQ2_DURATION);
SchedTable<2> Sequence2MotorPart1(SEQ2B_DURATION);
SchedTable<2> Sequence2MotorPart2(SEQ2_DURATION);
SchedTable<2> Sequence2MotorPart3(SEQ2_DURATION);
SchedTable<2> Sequence2MotorPart4(SEQ2_DURATION);

SchedTable<10> Sequence6Servo(SEQ6_DURATION);
SchedTable<10> Sequence6BServo(SEQ6B_DURATION);


SchedTable<2> Sequence6BSoundPart1(SEQ6B_DURATION);
SchedTable<2> Sequence6BSoundPart2(SEQ6B_DURATION);
SchedTable<2> Sequence6BSoundPart3(SEQ6B_DURATION);
SchedTable<2> Sequence6BSoundPart4(SEQ6B_DURATION);



SchedTable<2> Sequence6SoundPart1(SEQ6_DURATION);
SchedTable<2> Sequence6SoundPart2(SEQ6_DURATION);
SchedTable<2> Sequence6SoundPart3(SEQ6_DURATION);
SchedTable<2> Sequence6SoundPart4(SEQ6_DURATION);

SchedTable<10> Sequence7BServo(SEQ7B_DURATION);


SchedTable<2> Sequence7BSoundPart1(SEQ7B_DURATION);
SchedTable<2> Sequence7BSoundPart2(SEQ7B_DURATION);
SchedTable<2> Sequence7BSoundPart3(SEQ7B_DURATION);
SchedTable<2> Sequence7BSoundPart4(SEQ7B_DURATION);

SchedTable<10> Sequence7Servo(SEQ7_DURATION);


SchedTable<2> Sequence7SoundPart1(SEQ7_DURATION);
SchedTable<2> Sequence7SoundPart2(SEQ7_DURATION);
SchedTable<2> Sequence7SoundPart3(SEQ7_DURATION);
SchedTable<2> Sequence7SoundPart4(SEQ7_DURATION);

PWMTrigger CH1;
PWMTrigger CH2;
PWMTrigger CH3;
PWMTrigger CH4;
PWMTrigger CH5;
PWMTrigger CH6;
PWMTrigger CH7;
PWMTrigger CH8;
PWMTrigger CH9;
PWMTrigger CH10;
PWMTrigger CH11;
PWMTrigger CH12;
PWMTrigger CH13;
PWMTrigger CH14;
PWMTrigger CH15;
PWMTrigger CH16;






// SX1509 I2C address (set by ADDR1 and ADDR0 (00 by default):
const byte SX1509_ADDRESS = 0x3E;  // SX1509 I2C address
SX1509 Led; // Create an SX1509 object to be used throughout


#define LED_PIN       2   // LED 2

#define DAC1    25 // connect pin25 (do not change the pin) to a 10kOhm resistor
XT_DAC_Audio_Class DacAudio(26, 1); // Create the main player class object. Use GPIO 25, one of the 2 DAC pins and timer 0//

// both outputs of the resistors above are connected together and then to the outer leg of a
// 10kOhm potentiometer. The other outer leg connects to GND. The middle leg connects to both inputs
// of a PAM8403 amplifier and allows to adjust the volume. This way, two speakers can be used.



// Status LED objects (also used for PWM shaker motor and ESC control)
// "false" = output not inversed

statusLED Led_builtin(false);


volatile boolean Seq1LedPart1OnOff= false;
volatile boolean Seq1LedPart2OnOff= false;
volatile boolean Seq1LedPart3OnOff= false;
volatile boolean Seq1LedPart4OnOff= false;

volatile boolean Seq1SoundPart1OnOff = false;
volatile boolean Seq1SoundPart2OnOff = false;
volatile boolean Seq1SoundPart3OnOff = false;
volatile boolean Seq1SoundPart4OnOff = false;
volatile boolean NeutralCtl= false;
volatile boolean Test= false;



float StartServoSeq1Part1;
float EndServoSeq1Part1Mapped;
float StartServoSeq1Part1Mapped;
float DistanceServoSeq1Part1;/// P maj 
float SpeedSeq1Part1;

float StartServobSeq1Part1;
float EndServobSeq1Part1Mapped;
float StartServobSeq1Part1Mapped;
float DistanceServobSeq1Part1;/// P maj 
float SpeedbSeq1Part1;


float StartServoSeq1Part2;
float EndServoSeq1Part2Mapped;
float StartServoSeq1Part2Mapped;
float DistanceServoSeq1Part2;
float SpeedSeq1Part2;

float StartServobSeq1Part2;
float EndServobSeq1Part2Mapped;
float StartServobSeq1Part2Mapped;
float DistanceServobSeq1Part2;
float SpeedbSeq1Part2;

float StartServoSeq1Part3;
float EndServoSeq1Part3Mapped;
float StartServoSeq1Part3Mapped;
float DistanceServoSeq1Part3;
float SpeedSeq1Part3;

float StartServobSeq1Part3;
float EndServobSeq1Part3Mapped;
float StartServobSeq1Part3Mapped;
float DistanceServobSeq1Part3;
float SpeedbSeq1Part3;

float StartServoSeq1Part4;
float EndServoSeq1Part4Mapped;
float StartServoSeq1Part4Mapped;
float DistanceServoSeq1Part4;
float SpeedSeq1Part4;

float StartServobSeq1Part4;
float EndServobSeq1Part4Mapped;
float StartServobSeq1Part4Mapped;
float DistanceServobSeq1Part4;
float SpeedbSeq1Part4;

////////////////////////////////

float StartServoSeq10Part1;
float EndServoSeq10Part1Mapped;
float StartServoSeq10Part1Mapped;
float DistanceServoSeq10Part1;/// P maj 
float SpeedSeq10Part1;

float StartServobSeq10Part1;
float EndServobSeq10Part1Mapped;
float StartServobSeq10Part1Mapped;
float DistanceServobSeq10Part1;/// P maj 
float SpeedbSeq10Part1;


float StartServoSeq10Part2;
float EndServoSeq10Part2Mapped;
float StartServoSeq10Part2Mapped;
float DistanceServoSeq10Part2;
float SpeedSeq10Part2;

float StartServobSeq10Part2;
float EndServobSeq10Part2Mapped;
float StartServobSeq10Part2Mapped;
float DistanceServobSeq10Part2;
float SpeedbSeq10Part2;

float StartServoSeq10Part3;
float EndServoSeq10Part3Mapped;
float StartServoSeq10Part3Mapped;
float DistanceServoSeq10Part3;
float SpeedSeq10Part3;

float StartServobSeq10Part3;
float EndServobSeq10Part3Mapped;
float StartServobSeq10Part3Mapped;
float DistanceServobSeq10Part3;
float SpeedbSeq10Part3;

float StartServoSeq10Part4;
float EndServoSeq10Part4Mapped;
float StartServoSeq10Part4Mapped;
float DistanceServoSeq10Part4;
float SpeedSeq10Part4;

float StartServobSeq10Part4;
float EndServobSeq10Part4Mapped;
float StartServobSeq10Part4Mapped;
float DistanceServobSeq10Part4;
float SpeedbSeq10Part4;


volatile boolean Seq2LedPart1OnOff= false;
volatile boolean Seq2LedPart2OnOff= false;
volatile boolean Seq2LedPart3OnOff= false;
volatile boolean Seq2LedPart4OnOff= false;

volatile boolean Seq2SoundPart1OnOff = false;
volatile boolean Seq2SoundPart2OnOff = false;
volatile boolean Seq2SoundPart3OnOff = false;
volatile boolean Seq2SoundPart4OnOff = false;



float StartServoSeq2Part1;
float EndServoSeq2Part1Mapped;
float StartServoSeq2Part1Mapped;
float DistanceServoSeq2Part1;/// P maj 
float SpeedSeq2Part1;

float StartServobSeq2Part1;
float EndServobSeq2Part1Mapped;
float StartServobSeq2Part1Mapped;
float DistanceServobSeq2Part1;/// P maj 
float SpeedbSeq2Part1;


float StartServoSeq2Part2;
float EndServoSeq2Part2Mapped;
float StartServoSeq2Part2Mapped;
float DistanceServoSeq2Part2;
float SpeedSeq2Part2;

float StartServobSeq2Part2;
float EndServobSeq2Part2Mapped;
float StartServobSeq2Part2Mapped;
float DistanceServobSeq2Part2;
float SpeedbSeq2Part2;

float StartServoSeq2Part3;
float EndServoSeq2Part3Mapped;
float StartServoSeq2Part3Mapped;
float DistanceServoSeq2Part3;
float SpeedSeq2Part3;

float StartServobSeq2Part3;
float EndServobSeq2Part3Mapped;
float StartServobSeq2Part3Mapped;
float DistanceServobSeq2Part3;
float SpeedbSeq2Part3;

float StartServoSeq2Part4;
float EndServoSeq2Part4Mapped;
float StartServoSeq2Part4Mapped;
float DistanceServoSeq2Part4;
float SpeedSeq2Part4;

float StartServobSeq2Part4;
float EndServobSeq2Part4Mapped;
float StartServobSeq2Part4Mapped;
float DistanceServobSeq2Part4;
float SpeedbSeq2Part4;


float StartServoSeq20Part1;
float EndServoSeq20Part1Mapped;
float StartServoSeq20Part1Mapped;
float DistanceServoSeq20Part1;/// P maj 
float SpeedSeq20Part1;

float StartServobSeq20Part1;
float EndServobSeq20Part1Mapped;
float StartServobSeq20Part1Mapped;
float DistanceServobSeq20Part1;/// P maj 
float SpeedbSeq20Part1;


float StartServoSeq20Part2;
float EndServoSeq20Part2Mapped;
float StartServoSeq20Part2Mapped;
float DistanceServoSeq20Part2;
float SpeedSeq20Part2;

float StartServobSeq20Part2;
float EndServobSeq20Part2Mapped;
float StartServobSeq20Part2Mapped;
float DistanceServobSeq20Part2;
float SpeedbSeq20Part2;

float StartServoSeq20Part3;
float EndServoSeq20Part3Mapped;
float StartServoSeq20Part3Mapped;
float DistanceServoSeq20Part3;
float SpeedSeq20Part3;

float StartServobSeq20Part3;
float EndServobSeq20Part3Mapped;
float StartServobSeq20Part3Mapped;
float DistanceServobSeq20Part3;
float SpeedbSeq20Part3;

float StartServoSeq20Part4;
float EndServoSeq20Part4Mapped;
float StartServoSeq20Part4Mapped;
float DistanceServoSeq20Part4;
float SpeedSeq20Part4;

float StartServobSeq20Part4;
float EndServobSeq20Part4Mapped;
float StartServobSeq20Part4Mapped;
float DistanceServobSeq20Part4;
float SpeedbSeq20Part4;

volatile boolean Seq6LedPart1OnOff= false;
volatile boolean Seq6LedPart2OnOff= false;
volatile boolean Seq6LedPart3OnOff= false;
volatile boolean Seq6LedPart4OnOff= false;

volatile boolean Seq6SoundPart1OnOff = false;
volatile boolean Seq6SoundPart2OnOff = false;
volatile boolean Seq6SoundPart3OnOff = false;
volatile boolean Seq6SoundPart4OnOff = false;



float StartServoSeq6Part1;
float EndServoSeq6Part1Mapped;
float StartServoSeq6Part1Mapped;
float DistanceServoSeq6Part1;/// P maj 
float SpeedSeq6Part1;

float StartServobSeq6Part1;
float EndServobSeq6Part1Mapped;
float StartServobSeq6Part1Mapped;
float DistanceServobSeq6Part1;/// P maj 
float SpeedbSeq6Part1;


float StartServoSeq6Part2;
float EndServoSeq6Part2Mapped;
float StartServoSeq6Part2Mapped;
float DistanceServoSeq6Part2;
float SpeedSeq6Part2;

float StartServobSeq6Part2;
float EndServobSeq6Part2Mapped;
float StartServobSeq6Part2Mapped;
float DistanceServobSeq6Part2;
float SpeedbSeq6Part2;

float StartServoSeq6Part3;
float EndServoSeq6Part3Mapped;
float StartServoSeq6Part3Mapped;
float DistanceServoSeq6Part3;
float SpeedSeq6Part3;

float StartServobSeq6Part3;
float EndServobSeq6Part3Mapped;
float StartServobSeq6Part3Mapped;
float DistanceServobSeq6Part3;
float SpeedbSeq6Part3;

float StartServoSeq6Part4;
float EndServoSeq6Part4Mapped;
float StartServoSeq6Part4Mapped;
float DistanceServoSeq6Part4;
float SpeedSeq6Part4;

float StartServobSeq6Part4;
float EndServobSeq6Part4Mapped;
float StartServobSeq6Part4Mapped;
float DistanceServobSeq6Part4;
float SpeedbSeq6Part4;

////////////////////////////////

float StartServoSeq60Part1;
float EndServoSeq60Part1Mapped;
float StartServoSeq60Part1Mapped;
float DistanceServoSeq60Part1;/// P maj 
float SpeedSeq60Part1;

float StartServobSeq60Part1;
float EndServobSeq60Part1Mapped;
float StartServobSeq60Part1Mapped;
float DistanceServobSeq60Part1;/// P maj 
float SpeedbSeq60Part1;


float StartServoSeq60Part2;
float EndServoSeq60Part2Mapped;
float StartServoSeq60Part2Mapped;
float DistanceServoSeq60Part2;
float SpeedSeq60Part2;

float StartServobSeq60Part2;
float EndServobSeq60Part2Mapped;
float StartServobSeq60Part2Mapped;
float DistanceServobSeq60Part2;
float SpeedbSeq60Part2;

float StartServoSeq60Part3;
float EndServoSeq60Part3Mapped;
float StartServoSeq60Part3Mapped;
float DistanceServoSeq60Part3;
float SpeedSeq60Part3;

float StartServobSeq60Part3;
float EndServobSeq60Part3Mapped;
float StartServobSeq60Part3Mapped;
float DistanceServobSeq60Part3;
float SpeedbSeq60Part3;

float StartServoSeq60Part4;
float EndServoSeq60Part4Mapped;
float StartServoSeq60Part4Mapped;
float DistanceServoSeq60Part4;
float SpeedSeq60Part4;

float StartServobSeq60Part4;
float EndServobSeq60Part4Mapped;
float StartServobSeq60Part4Mapped;
float DistanceServobSeq60Part4;
float SpeedbSeq60Part4;


volatile boolean Seq7LedPart1OnOff= false;
volatile boolean Seq7LedPart2OnOff= false;
volatile boolean Seq7LedPart3OnOff= false;
volatile boolean Seq7LedPart4OnOff= false;

volatile boolean Seq7SoundPart1OnOff = false;
volatile boolean Seq7SoundPart2OnOff = false;
volatile boolean Seq7SoundPart3OnOff = false;
volatile boolean Seq7SoundPart4OnOff = false;



float StartServoSeq7Part1;
float EndServoSeq7Part1Mapped;
float StartServoSeq7Part1Mapped;
float DistanceServoSeq7Part1;/// P maj 
float SpeedSeq7Part1;

float StartServobSeq7Part1;
float EndServobSeq7Part1Mapped;
float StartServobSeq7Part1Mapped;
float DistanceServobSeq7Part1;/// P maj 
float SpeedbSeq7Part1;


float StartServoSeq7Part2;
float EndServoSeq7Part2Mapped;
float StartServoSeq7Part2Mapped;
float DistanceServoSeq7Part2;
float SpeedSeq7Part2;

float StartServobSeq7Part2;
float EndServobSeq7Part2Mapped;
float StartServobSeq7Part2Mapped;
float DistanceServobSeq7Part2;
float SpeedbSeq7Part2;

float StartServoSeq7Part3;
float EndServoSeq7Part3Mapped;
float StartServoSeq7Part3Mapped;
float DistanceServoSeq7Part3;
float SpeedSeq7Part3;

float StartServobSeq7Part3;
float EndServobSeq7Part3Mapped;
float StartServobSeq7Part3Mapped;
float DistanceServobSeq7Part3;
float SpeedbSeq7Part3;

float StartServoSeq7Part4;
float EndServoSeq7Part4Mapped;
float StartServoSeq7Part4Mapped;
float DistanceServoSeq7Part4;
float SpeedSeq7Part4;

float StartServobSeq7Part4;
float EndServobSeq7Part4Mapped;
float StartServobSeq7Part4Mapped;
float DistanceServobSeq7Part4;
float SpeedbSeq7Part4;


float StartServoSeq70Part1;
float EndServoSeq70Part1Mapped;
float StartServoSeq70Part1Mapped;
float DistanceServoSeq70Part1;/// P maj 
float SpeedSeq70Part1;

float StartServobSeq70Part1;
float EndServobSeq70Part1Mapped;
float StartServobSeq70Part1Mapped;
float DistanceServobSeq70Part1;/// P maj 
float SpeedbSeq70Part1;


float StartServoSeq70Part2;
float EndServoSeq70Part2Mapped;
float StartServoSeq70Part2Mapped;
float DistanceServoSeq70Part2;
float SpeedSeq70Part2;

float StartServobSeq70Part2;
float EndServobSeq70Part2Mapped;
float StartServobSeq70Part2Mapped;
float DistanceServobSeq70Part2;
float SpeedbSeq70Part2;

float StartServoSeq70Part3;
float EndServoSeq70Part3Mapped;
float StartServoSeq70Part3Mapped;
float DistanceServoSeq70Part3;
float SpeedSeq70Part3;

float StartServobSeq70Part3;
float EndServobSeq70Part3Mapped;
float StartServobSeq70Part3Mapped;
float DistanceServobSeq70Part3;
float SpeedbSeq70Part3;

float StartServoSeq70Part4;
float EndServoSeq70Part4Mapped;
float StartServoSeq70Part4Mapped;
float DistanceServoSeq70Part4;
float SpeedSeq70Part4;

float StartServobSeq70Part4;
float EndServobSeq70Part4Mapped;
float StartServobSeq70Part4Mapped;
float DistanceServobSeq70Part4;
float SpeedbSeq70Part4;
volatile float SERVO_START_POS[7];

double mapf(double val, double in_min, double in_max, double out_min, double out_max) {
    return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// Define global variables
static uint32_t curEngineSample2; 
volatile int16_t masterVolume = 100;
volatile boolean   Init = false;
volatile boolean   one = false;
volatile boolean   Setupsequence = false;

volatile boolean failSafe           = false;    // Triggered in emergency situations like: serial signal lost etc.
volatile int8_t  ppmFailsafeCounter = 0;

volatile uint8_t dacOffset = 0;  // 128, but needs to ba ramped up slowly to prevent popping noise, if switched on

volatile uint8_t engineState = 0; // 0 = off, 1 = starting, 2 = running, 3 = stopping

volatile boolean TimerOn          = false;
volatile boolean MotorOn          = false;
volatile boolean engineOn         = false;      // Signal for engine on / off
volatile boolean engineStart      = false;      // Active, if engine is starting up
volatile boolean engineRunning    = false;      // Active, if engine is running
volatile boolean engineStop       = false;      // Active, if engine is shutting down
volatile boolean engineRevving    = false;      // Active, if engine is revving
volatile boolean engineSlow    = false;      // Active, if engine is revving
volatile boolean Limited = false;               // active if limited reverse is required

volatile boolean AncreBas = false;
volatile boolean AncreStop = true;
volatile int16_t  AnchorSpeedDown = 1550;
volatile int16_t  AnchorSpeedUp = 1550;


volatile int16_t  servoPulse[7] = {SERVO_START[0],SERVO_START[1],SERVO_START[2],SERVO_START[3],SERVO_START[4],SERVO_START[5],SERVO_START[6]};
static unsigned long servoTime[7];
static unsigned long toggleTime;

volatile boolean Servoposition = false;
volatile boolean servoMove = false;
volatile boolean servoCtrl =false;
volatile int16_t servoSwitch = 1;
volatile int16_t actionServoSwitch = 0;
const int8_t servoStep =5;
volatile boolean servoHome =false;

volatile boolean action1Ctrl =false;
volatile int16_t action1Switch = 1;




volatile boolean Maneuvre = false;
volatile boolean Avertissement = false;
volatile boolean Fog = false;
volatile boolean Fishing = false;
volatile boolean Mouillage = false;
volatile boolean Motor2On = false;



static unsigned long FogSoundMillis;
static unsigned long BellMillis;
static unsigned long GunMillis;
static unsigned long GunServoMillis;

volatile boolean Fog_Led = false;
volatile boolean Fishing_Led = false;
volatile boolean Action10_Led = false;
volatile boolean Alarm_Led = false;

volatile boolean Ring_Sound = false;
volatile boolean Alarm_Sound = false;
volatile boolean LightManualOn = false;


volatile boolean Manoeuvre_Led = false;
volatile boolean machinGunFlash = false;
volatile boolean cannonFlash = false;
volatile boolean GunServo = false;
volatile boolean GunMove = false;

volatile boolean MachineGunSound = false;
volatile boolean GunSound = false;
volatile boolean GunSound2 = false;

volatile boolean lightsOn = false;  

volatile boolean Act12Sound1 = false;  
volatile boolean Act12Sound2 = false;  
volatile boolean Act12Sound3 = false;
volatile boolean manualServo = false;  
volatile boolean toggleAction = false;  
  


volatile boolean EngineWasAboveIdle = false;    // Engine RPM was above idle
volatile boolean dieselKnockTrigger = false;    // Trigger Diesel ignition "knock"
volatile boolean dieselKnockTriggerFirst = false;

volatile boolean Forward  = false;
volatile boolean Backward = false;
volatile boolean Neutral  = false;


int32_t        modificatorG = 0;                // Modificator G for rudder mixxing
int32_t        modificatorD = 0;                // Modificator D for rudder mixxing
int32_t        thrustmod    = 0;                // Thrust modificator for rudder mixxing
int32_t        thrustmodRev = 0;                // Thrust modificator for rudder mixxing (reverse)
volatile float propmod      = 0;
volatile float propmodRev   = 0;

int16_t        currentThrottle = 0;            // 0 - 500 (Throttle trigger input)
int16_t        currentThrottleFaded = 0;
uint32_t       currentSpeed    = 0;            // 0 - 500 (current ESC power)
boolean        throttleReverse;                // false = forward, true = reverse
uint32_t       pulseWidth[16];                  // Current RC signal pulse width [0] = steering, [1] = 3p. switch, [2] = throttle, [4] = pot

uint16_t       pulseMaxNeutral[16];             // PWM input signal configuration storage variables
uint16_t       pulseMinNeutral[16];
uint16_t       pulseMax[16];
uint16_t       pulseMin[16];
uint16_t       pulseMaxLimit[16];
uint16_t       pulseMinLimit[16];
uint16_t         pulseZero[16];      // Usually 1500 (range 1000 - 2000us) Autocalibration active, if "engineManualOnOff" = "false"
uint16_t         pulseLimit = 700;  // pulseZero +/- this value (700)



int16_t        escPulseMax;                     // ESC calibration variables
int16_t        escPulseMin;

int16_t        esc1PulseMax;                    // ESC calibration variables
int16_t        esc1PulseMin;
int16_t        esc2PulseMax;                    // ESC calibration variables
int16_t        esc2PulseMin;
int16_t        esc3PulseMax;                    // ESC calibration variables
int16_t        esc3PulseMin;


volatile boolean pulseAvailable;                // RC signal pulses are coming in




const int32_t     maxRpm                           = 500; // always 500
const int32_t     minRpm                           = 0;   // always 0
int32_t           currentRpm                       = 0;   // 0 - 500 (signed required!)
volatile uint32_t currentRpmScaled                 = 0;   // Idle
volatile uint32_t currentRevRpmScaled              = 0;   // Rev
volatile uint8_t  throttleDependentVolume          = 0;   // engine volume according to throttle position
volatile uint8_t  throttleDependentRevVolume       = 0;   // engine rev volume according to throttle position
volatile uint8_t  throttleDependentKnockVolume     = 0;   // engine Diesel knock volume according to throttle position
volatile uint8_t  throttleDependentTurboVolume     = 0;   // turbo volume according to rpm
volatile uint8_t  throttleDependentFanVolume       = 0;   // cooling fan volume according to rpm
volatile uint8_t  throttleDependentWastegateVolume = 0;   // wastegate volume according to rpm

volatile uint16_t engineSampleRate = 0;
// Our main tasks
TaskHandle_t Task1;

// Loop time (for debug)
uint16_t loopTime;

// PPM signal processing variables
volatile int           valuesInt[NUM_OF_CHL + 1] = { 0 }; // Input values
volatile int           valuesBuf[NUM_OF_CHL + 1] = { 0 }; // Buffered values
volatile byte          counter                   = NUM_OF_CHL;
volatile byte          average                   = NUM_OF_AVG;
volatile boolean       ready                     = false;
volatile unsigned long timelast;
unsigned long          timelastloop;


// SBUS signal processing variables
SBUS sBus(Serial2); // SBUS object on Serial 2 port
// channel, fail safe, and lost frames data
uint16_t SBUSchannels[16];
bool     SBUSfailSafe;
bool     SBUSlostFrame;
bool     sbusInit;
uint32_t maxSbusRpmPercentage = 390;

uint32_t maxPpmRpmPercentage = 390;

// Sampling intervals for interrupt timer (adjusted according to your sound file sampling rate)
uint32_t maxSampleInterval = 4000000 / sampleRate;
uint32_t minSampleInterval = 4000000 / sampleRate * 100 / MAX_RPM_PERCENTAGE;
#ifdef REV_SOUND
uint32_t minRevSampleInterval = 4000000 / revSampleRate * 100 / MAX_REV_RPM_PERCENTAGE;
#endif

// Interrupt timer for variable sample rate playback (engine sound)
hw_timer_t        * variableTimer    = NULL;
portMUX_TYPE      variableTimerMux   = portMUX_INITIALIZER_UNLOCKED;
volatile uint32_t variableTimerTicks = maxSampleInterval;

//
// =======================================================================================================
// INTERRUPT FOR VARIABLE SPEED PLAYBACK (Engine sound, turbo sound)
// =======================================================================================================
//

void IRAM_ATTR variablePlaybackTimer()
{
 
  static uint32_t curStarterStopSample;
  static uint32_t curStopSample;
  static uint32_t curStarterSample;
  static uint32_t curDieselKnockSample;             // Index of currently loaded Diesel knock sample
  static uint32_t curSlowSample;              // Index of currently loaded engine sample
  static uint32_t attenuatorMillis;
  static uint32_t curEngineSample;              // Index of currently loaded engine sample
  static uint32_t curRevSample;                 // Index of currently loaded engine rev sample
  static uint32_t curTurboSample;               // Index of currently loaded turbo sample
  static uint32_t curFanSample;                 // Index of currently loaded fan sample
  static uint32_t curStartSample;               // Index of currently loaded start sample
  static uint32_t lastDieselKnockSample;        // Index of last Diesel knock sample
  static uint16_t attenuator;                   // Used for volume adjustment during engine switch off
  static uint16_t speedPercentage;              // slows the engine down during shutdown
  static int32_t  a, a1, a2, a3, b, b1, c, d;               // Input signals for mixer: a = engine, b = additional sound, c = turbo sound, d = fan sound
  uint8_t a1Multi;
  // portENTER_CRITICAL_ISR(&variableTimerMux);

  switch (engineState)
  {
    case 0:                                                     // Engine off ----
      variableTimerTicks = 4000000 / startSampleRate;           // our fixed sampling rate
      timerAlarmWrite(variableTimer, variableTimerTicks, true); // // change timer ticks, autoreload true

      a = 0;   // volume = zero
      if (engineOn)
      {
#ifdef AIR_STARTER
        engineState = 1;
        engineStart = true;
#else
        engineState = 2;
        engineStart = true;
#endif
      }
      break;

    case 1:
#ifdef AIR_STARTER
      variableTimerTicks = 4000000 / starterSampleRate;
      timerAlarmWrite(variableTimer, variableTimerTicks, true);

      if (curStarterSample < starterSampleCount - 1)
      {
        a = (starterSamples[curStarterSample] * throttleDependentVolume / 100 * starterVolumePercentage / 100);
        curStarterSample++;
      }
      else
      {
        curStarterSample = 0;

        engineState    = 2;

      }
      break;
#endif
    case 2:
      variableTimerTicks = 4000000 / startSampleRate;           // our fixed sampling rate
      timerAlarmWrite(variableTimer, variableTimerTicks, true); // // change timer ticks, autoreload true

      if (curStartSample < startSampleCount - 1)
      {
        a = (startSamples[curStartSample] * throttleDependentVolume / 100 * startVolumePercentage / 100);
        curStartSample++;
      }
      else
      {
        curStartSample = 0;

        engineState    = 3;
        engineStart    = false;
        engineRunning  = true;

      }
      break;

    case 3:   // Engine running ----

      if (!engineSlow)
      {
        // Engine idle sound
        variableTimerTicks = engineSampleRate;                    // our variable idle sampling rate!
        timerAlarmWrite(variableTimer, variableTimerTicks, true); // // change timer ticks, autoreload true

        if (curEngineSample < sampleCount)
        {
          a1 = (samples[curEngineSample] * throttleDependentVolume / 100 * idleVolumePercentage / 100);
          curEngineSample++;


#ifdef REV_SOUND
          if (engineRevving) {
            static uint8_t i;
            variableTimerTicks = currentRevRpmScaled;                 // our variable rev sampling rate!
            timerAlarmWrite(variableTimer, variableTimerTicks, true); // // change timer ticks, autoreload true
            if (curRevSample < revSampleCount)
            {
              a2 = (revSamples[curRevSample] * throttleDependentRevVolume / 100 * revVolumePercentage / 100);
              // slow it down, play every sample 2 times!
              curRevSample++;
            }
            else
            {
              curRevSample = 0;
            }
          }
          else
          {
            curRevSample = 0;
          }
#endif


          // Trigger Diesel ignition "knock" sound (played in the fixed sample rate interrupt)
        if (curEngineSample - lastDieselKnockSample > (sampleCount / dieselKnockInterval)) {
            dieselKnockTrigger = true;
            dieselKnockTriggerFirst = false;
            lastDieselKnockSample = curEngineSample;
          }
        }
        else {

#ifdef REV_SOUND
          curRevSample = 0;

#endif
          curEngineSample       = 0;
          lastDieselKnockSample = 0;
          dieselKnockTrigger    = true;
          dieselKnockTriggerFirst = true;
        }
      }

      else
      {

#ifdef SLOW
        static uint8_t i;
        variableTimerTicks = engineSampleRate;           // our fixed sampling rate
        timerAlarmWrite(variableTimer, variableTimerTicks, true); // // change timer ticks, autoreload true

        if (curSlowSample < slowSampleCount)
        {
          a1 = (slowSamples[curSlowSample] * throttleDependentVolume / 100 * slowVolumePercentage / 100);
          curSlowSample++;
        }

        else
        {
          curSlowSample = 0;
        }
#endif
      }
      // Diesel ignition "knock" played in fixed sample rate section!
      if (dieselKnockTrigger)
      {
        dieselKnockTrigger   = false;
        curDieselKnockSample = 0;
      }

      if (curDieselKnockSample < knockSampleCount)
      {
        b1 = (knockSamples[curDieselKnockSample] * dieselKnockVolumePercentage / 100 * throttleDependentKnockVolume / 100);
        curDieselKnockSample++;
      }


      b = b1;



      // Turbo sound
      if (curTurboSample < turboSampleCount)
      {
        c = (turboSamples[curTurboSample] * throttleDependentTurboVolume / 100 * turboVolumePercentage / 100);
        curTurboSample++;
      }
      else
      {
        curTurboSample = 0;
      }


      if (!engineOn)
      {

#ifdef AIR_STARTER

        speedPercentage = 100;
        attenuator      = 1;
        engineStop      = true;
        engineRunning   = false;



        variableTimerTicks = 4000000 / starterStopSampleRate;
        timerAlarmWrite(variableTimer, variableTimerTicks, true);

        if (curStarterStopSample < starterStopSampleCount - 1)
        {
          a3 = (starterStopSamples[curStarterStopSample] * throttleDependentVolume / 100 * starterStopVolumePercentage / 100);
          curStarterStopSample++;
        }
        else
        {
          curStarterStopSample = 0;

          engineState    = 4;

        }


#else
        speedPercentage = 100;
        attenuator      = 1;
        engineState     = 4;
        engineStop      = true;
        engineRunning   = false;
#endif
      }

#ifdef REV_SOUND

      if (engineRevving) {
        // Mixing the idle and rev sounds together, according to engine rpm
        // Below the "revSwitchPoint" target, the idle volume precentage is 90%, then falling to 0% @ max. rpm.
        // The total of idle and rev volume percentage is always 100%

        if (currentRpm > revSwitchPoint) a1Multi = map(currentRpm, idleEndPoint, revSwitchPoint, 0, idleVolumeProportionPercentage);
        else a1Multi = idleVolumeProportionPercentage; // 90 - 100% proportion
        if (currentRpm > idleEndPoint) a1Multi = 0;

        a1 = a1 * a1Multi / 100; // Idle volume
        a2 = a2 * (100 - a1Multi) / 100; // Rev volume

        a = a1 + a2 ; // Idle and rev sounds mixed together
        curDieselKnockSample = 0;
      }

      else
        a = a1 + a3; // Idle sound only
#else
      a = a1 + a3; // Idle sound only
#endif

      break;

    case 4:

      // Engine stop ----

      if (!engineSlow)
      {
#ifdef ENGINE_STOP

        variableTimerTicks = 4000000 / stopSampleRate;
        timerAlarmWrite(variableTimer, variableTimerTicks, true);

        if (curStopSample < stopSampleCount - 1)
        {
          a = (stopSamples[curStopSample] * throttleDependentVolume / 100 * stopVolumePercentage / 100);
          curStopSample++;
        }
        else
        {
          curStopSample = 0;

          engineState    = 0;
          engineStop      = false;

        }
        break;

#else
        variableTimerTicks = 4000000 / sampleRate * speedPercentage / 100; // our fixed sampling rate
        timerAlarmWrite(variableTimer, variableTimerTicks, true);          // // change timer ticks, autoreload true

        if (curEngineSample < sampleCount)
        {
          a = (samples[curEngineSample] * throttleDependentVolume / 100 * idleVolumePercentage / 100 / attenuator);
          curEngineSample++;
        }
        else
        {
          curEngineSample = 0;
        }
#endif
      }


      else {

#ifdef ENGINE_STOP

        variableTimerTicks = 4000000 / stopSampleRate;
        timerAlarmWrite(variableTimer, variableTimerTicks, true);

        if (curStopSample < stopSampleCount - 1)
        {
          a = (stopSamples[curStopSample] * throttleDependentVolume / 100 * stopVolumePercentage / 100);
          curStopSample++;
        }
        else
        {
          curStopSample = 0;

          engineState    = 0;
          engineStop      = false;

        }
        break;

#else
#ifdef SLOW
        variableTimerTicks = 4000000 / slowSampleRate * speedPercentage / 100; // our fixed sampling rate
        timerAlarmWrite(variableTimer, variableTimerTicks, true);          // // change timer ticks, autoreload true

        if (curSlowSample < slowSampleCount)
        {
          a = (slowSamples[curSlowSample] * throttleDependentVolume / 100 * idleVolumePercentage / 100 / attenuator);
          curSlowSample++;
        }
        else
        {
          curSlowSample = 0;
        }
#else

        variableTimerTicks = 4000000 / sampleRate * speedPercentage / 100; // our fixed sampling rate
        timerAlarmWrite(variableTimer, variableTimerTicks, true);          // // change timer ticks, autoreload true

        if (curEngineSample < sampleCount)
        {
          a = (samples[curEngineSample] * throttleDependentVolume / 100 * idleVolumePercentage / 100 / attenuator);
          curEngineSample++;
        }
        else
        {
          curEngineSample = 0;
        }
#endif

#endif

      }

#ifndef ENGINE_STOP

      // fade engine sound out
      if (millis() - attenuatorMillis > 100)
      {
        attenuatorMillis = millis();
        attenuator++;          // attenuate volume
        speedPercentage += 20; // make it slower (10)
      }

      if (attenuator >= 50 || speedPercentage >= 500)     // 50 & 500
      {
        a               = 0;
        speedPercentage = 100;
        engineState     = 0;
        engineStop      = false;

      }
#endif
      break;


  } // end of switch case

  // DAC output (groups a, b, c mixed together) ----------------------------------------------------

  //dacWrite(DAC1, constrain(((a * 8 / 10) + (b / 2) + (c / 5) + (d / 5) ) * masterVolume / 100 + dacOffset, 0, 255)); // Mix signals, add 128 offset, write result to DAC
  dacWrite(DAC1, constrain(((a) + (b / 2) + (c / 5) + (d / 5) ) * masterVolume / 100 + dacOffset, 0, 255)); // Mix signals, add 128 offset, write result to DAC


  //portEXIT_CRITICAL_ISR(&variableTimerMux);

}

//
// =======================================================================================================
// RMT
// =======================================================================================================
//
// Reference https://esp-idf.readthedocs.io/en/v1.0/api/rmt.html
static void IRAM_ATTR rmt_isr_handler(void* arg) {

  uint32_t intr_st = RMT.int_st.val;

  uint8_t i;
  for (i = 0; i < RECEIVER_CHANNELS_NUM; i++) {
    uint8_t channel = RECEIVER_CHANNELS[i];
    uint32_t channel_mask = BIT(channel * 3 + 1);

    if (!(intr_st & channel_mask)) continue;

    RMT.conf_ch[channel].conf1.rx_en = 0;
    RMT.conf_ch[channel].conf1.mem_owner = RMT_MEM_OWNER_TX;
    volatile rmt_item32_t* item = RMTMEM.chan[channel].data32;
    if (item) {
      pulseWidth[i] = item->duration0;
    }

    RMT.conf_ch[channel].conf1.mem_wr_rst = 1;
    RMT.conf_ch[channel].conf1.mem_owner = RMT_MEM_OWNER_RX;
    RMT.conf_ch[channel].conf1.rx_en = 1;

    //clear RMT interrupt status.
    RMT.int_clr.val = channel_mask;
  }
}
//
// =======================================================================================================
// PPM SIGNAL READ INTERRUPT
// =======================================================================================================
//

void IRAM_ATTR readPpm()
{
  unsigned long timenew  = micros();
  unsigned long timediff = timenew - timelast;

  timelast = timenew;

  // reset ppm failsafe trigger signals
  ppmFailsafeCounter = 0;
  failSafe           = false;

  if (timediff > 2500)    // Synch gap detected:
  {
    valuesInt[NUM_OF_CHL] = valuesInt[NUM_OF_CHL] + timediff; // add time
    counter               = 0;
    if (average == NUM_OF_AVG)
    {
      for (int i = 0; i < NUM_OF_CHL + 1; i++)
      {
        valuesBuf[i] = valuesInt[i] / average;
        valuesInt[i] = 0;
      }
      average = 0;
      ready   = true;
    }
    average++;
  }
  else
  {
    if (counter < NUM_OF_CHL)
    {
      valuesInt[counter] = valuesInt[counter] + timediff;
      counter++;
    }
  }
}

//
// =======================================================================================================
// MAIN ARDUINO SETUP (1x during startup)
// =======================================================================================================
//

void setup()
{
  // Watchdog timers need to be disabled, if task 1 is running without delay(1)
  disableCore0WDT();
  disableCore1WDT();



#ifdef PPM_COMMUNICATION
  pinMode(PPM_PIN, INPUT_PULLDOWN);
#endif

#ifdef SBUS_COMMUNICATION
  pinMode(COMMAND_RX, INPUT_PULLDOWN);
#endif

  //{13,12,14,27,33,35,34,39 };

  pinMode(13, INPUT_PULLDOWN);
  pinMode(12, INPUT_PULLDOWN);
  pinMode(14, INPUT_PULLDOWN);
  pinMode(27, INPUT_PULLDOWN);
  pinMode(33, INPUT_PULLDOWN);
  pinMode(35, INPUT_PULLDOWN);
  pinMode(34, INPUT_PULLDOWN);
  pinMode(39, INPUT_PULLDOWN);




  


  Led.begin(SX1509_ADDRESS);
  Led.clock(INTERNAL_CLOCK_2MHZ, 4);
  
  Led.pinMode(0, OUTPUT);
  Led.digitalWrite(0, LOW);

  Led.pinMode(1, OUTPUT);
  Led.digitalWrite(1, LOW);

  Led.pinMode(2, OUTPUT);
  Led.digitalWrite(2, LOW);

  Led.pinMode(3, OUTPUT);
  Led.digitalWrite(3, LOW);

  Led.pinMode(4, OUTPUT);
  Led.digitalWrite(4, LOW);

  Led.pinMode(5, OUTPUT);
  Led.digitalWrite(5, LOW);

  Led.pinMode(6, OUTPUT);
  Led.digitalWrite(6, LOW);

  Led.pinMode(7, OUTPUT);
  Led.digitalWrite(7, LOW);

  Led.pinMode(8, OUTPUT);
  Led.digitalWrite(8, LOW);

  Led.pinMode(9, OUTPUT);
  Led.digitalWrite(9, LOW);

  Led.pinMode(10, OUTPUT);
  Led.digitalWrite(10, LOW);

  Led.pinMode(11, OUTPUT);
  Led.digitalWrite(11, LOW);

  Led.pinMode(12, OUTPUT);
  Led.digitalWrite(12, LOW);

  Led.pinMode(13, OUTPUT);
  Led.digitalWrite(13, LOW);

  Led.pinMode(14, OUTPUT);
  Led.digitalWrite(14, LOW);

  Led.pinMode(15, OUTPUT);
  Led.digitalWrite(15, LOW);

  SERVO_START_POS[1]= mapf(SERVO_START[1],500,2400,0,1); 
  SERVO_START_POS[2]= mapf(SERVO_START[2],500,2400,0,1); 
  SERVO_START_POS[3]= mapf(SERVO_START[3],500,2400,0,1); 
  SERVO_START_POS[4]= mapf(SERVO_START[4],500,2400,0,1); 
  SERVO_START_POS[5]= mapf(SERVO_START[5],500,2400,0,1); 
  SERVO_START_POS[6]= mapf(SERVO_START[6],500,2400,0,1); 
  
  
  monServo1.setMin(SERVO_MIN);
  monServo1.setMax(SERVO_MAX);
  monServo1.setSpeed(1.5);
  monServo1.setInitialPosition(SERVO_START_POS[1]);
  monServo1.setReverted(false);
  monServo1.setPin(5, 0, 0, 0); //pin unit(0,1) timer(0,1,2) pwmout (0,1,2) channel(0,1) // timer0 conflic i2c ??
 
  Servo1.attach(5, 0, 0, 0);

  
 
  monServo2.setMin(SERVO_MIN);
  monServo2.setMax(SERVO_MAX);
  monServo2.setSpeed(1.5);
  monServo2.setInitialPosition(SERVO_START_POS[2]);
  monServo2.setReverted(false);
  monServo2.setPin(17, 0, 0, 1); //pin unit(0,1) timer(0,1,2)  channel(0,1) // timer0 conflic i2c ??
  Servo2.attach(17, 0, 0, 1);

  monServo3.setMin(SERVO_MIN);
  monServo3.setMax(SERVO_MAX);
  monServo3.setSpeed(1.5);
  monServo3.setInitialPosition(SERVO_START_POS[3]);
  monServo3.setReverted(false);
  monServo3.setPin(16, 0, 1, 0); //pin unit(0,1) timer(0,1,2)  channel(0,1) // timer0 conflic i2c ??
  Servo3.attach(16, 0, 1, 0);

  
  monServo4.setMin(SERVO_MIN);
  monServo4.setMax(SERVO_MAX);
  monServo4.setSpeed(1.5);
  monServo4.setInitialPosition(SERVO_START_POS[4]);
  monServo4.setReverted(false);
  monServo4.setPin(4, 0, 1, 1); //pin unit(0,1) timer(0,1,2)  channel(0,1) // timer0 conflic i2c ??
  Servo4.attach(4, 0, 1, 1);
  
 
  monServo5.setMin(SERVO_MIN);
  monServo5.setMax(SERVO_MAX);
  monServo5.setSpeed(1.5);
  monServo5.setInitialPosition(SERVO_START_POS[5]);
  monServo5.setReverted(false);
  monServo5.setPin(23, 0, 2, 0); //pin unit(0,1) timer(0,1,2) channel(0,1) // timer0 conflic i2c ??
  Servo5.attach(23, 0, 2, 0); 


  monServo6.setMin(SERVO_MIN);
  monServo6.setMax(SERVO_MAX);
  monServo6.setSpeed(1.5);
  monServo6.setInitialPosition(SERVO_START_POS[6]);
  monServo6.setReverted(false);
  monServo6.setPin(15, 0, 2, 1); //pin unit(0,1) timer(0,1,2)  channel(0,1) // timer0 conflic i2c ??
  Servo6.attach(15, 0, 2, 1);

 
  ESC1.attach(19, 1, 1, 0);
  ESC2.attach(18, 1, 1, 1);
  ESC3.attach(32, 1, 2, 0);


  Led_builtin.begin (LED_PIN, 0, 500);

  Serial.begin(115200); // USB serial (for DEBUG)

  // Communication setup --------------------------------------------
#if defined SBUS_COMMUNICATION // SBUS ----
  if (MAX_RPM_PERCENTAGE > maxSbusRpmPercentage) MAX_RPM_PERCENTAGE = maxSbusRpmPercentage; // Limit RPM range
  sBus.begin(COMMAND_RX, COMMAND_TX, sbusInverted); // begin SBUS communication with compatible receivers


#elif defined PPM_COMMUNICATION // PPM ----
  if (MAX_RPM_PERCENTAGE > maxPpmRpmPercentage) MAX_RPM_PERCENTAGE = maxPpmRpmPercentage;
  attachInterrupt(digitalPinToInterrupt(PPM_PIN), readPpm, RISING); // begin PPM communication with compatible receivers

#else
  // PWM ----
  // New: PWM read setup, using rmt
  if (MAX_RPM_PERCENTAGE > maxPwmRpmPercentage) MAX_RPM_PERCENTAGE = maxPwmRpmPercentage;
  uint8_t i;
  rmt_config_t rmt_channels[RECEIVER_CHANNELS_NUM] = {};

  for (i = 0; i < RECEIVER_CHANNELS_NUM; i++) {
    rmt_channels[i].channel = (rmt_channel_t) RECEIVER_CHANNELS[i];
    rmt_channels[i].gpio_num = (gpio_num_t) RECEIVER_PINS[i];
    rmt_channels[i].clk_div = RMT_RX_CLK_DIV;
    rmt_channels[i].mem_block_num = 1;
    rmt_channels[i].rmt_mode = RMT_MODE_RX;
    rmt_channels[i].rx_config.filter_en = true;
    rmt_channels[i].rx_config.filter_ticks_thresh = 100; // Pulses shorter than this will be filtered out
    rmt_channels[i].rx_config.idle_threshold = RMT_RX_MAX_US * RMT_TICK_PER_US;

    rmt_config(&rmt_channels[i]);
    rmt_set_rx_intr_en(rmt_channels[i].channel, true);
    rmt_rx_start(rmt_channels[i].channel, 1);
  }

  rmt_isr_register(rmt_isr_handler, NULL, 0, NULL); // This is our interrupt

#endif // -----------------------------------------------------------


  // Refresh sample intervals (important, because MAX_RPM_PERCENTAGE was probably changed above)
  maxSampleInterval = 4000000 / sampleRate;
  minSampleInterval = 4000000 / sampleRate * 100 / MAX_RPM_PERCENTAGE;
#ifdef REV_SOUND
  minRevSampleInterval = 4000000 / revSampleRate * 100 / MAX_REV_RPM_PERCENTAGE;
#endif

  timelast     = micros();
  timelastloop = timelast;



  // Task 1 setup (running on core 0)
  TaskHandle_t Task1;
  //create a task that will be executed in the Task1code() function, with priority 1 and executed on core 0
  xTaskCreatePinnedToCore(
    Task1code,   /* Task function. */
    "Task1",     /* name of task. */
    100000,      /* Stack size of task (10000) */
    NULL,        /* parameter of the task */
    1,           /* priority of the task (1 = low, 3 = medium, 5 = highest)*/
    &Task1,      /* Task handle to keep track of created task */
    0);          /* pin task to core 0 */

  // Interrupt timer for variable sample rate playback
  variableTimer = timerBegin(0, 20, true);                           // timer 0, MWDT clock period = 12.5 ns * TIMGn_Tx_WDT_CLK_PRESCALE -> 12.5 ns * 20 -> 250 ns = 0.25 us, countUp
  timerAttachInterrupt(variableTimer, &variablePlaybackTimer, true); // edge (not level) triggered
  timerAlarmWrite(variableTimer, variableTimerTicks, true);          // autoreload true
  timerAlarmEnable(variableTimer);                                   // enable

  // wait for RC receiver to initialize

  while (millis() <= 3000) ;



#if defined SBUS_COMMUNICATION
  // while (!sbusInit)
  // {
  readSbusCommands();
  //}
#elif defined PPM_COMMUNICATION
  readPpmCommands();
#else
  // measure RC signals mark space ratio
  readRcSignals();
#endif

  // then compute the RC channel offsets:

  // CH 1 stering
  if (CH1_ENABLE)
    pulseZero[steeringCh - 1] = pulseWidth[steeringCh - 1];
  else
    pulseZero[0] = 1500;

  // CH 2
  if (CH2_ENABLE)
    pulseZero[ElCh - 1] = pulseWidth[ElCh - 1];
  else
    pulseZero[1] = 1500;


  // CH3
  //if (!engineManualOnOff)
  pulseZero[thrustCh - 1] = pulseWidth[thrustCh - 1];                   // store throttle offset (only, if "engineManualOnOff" inactive)
  //else
  //  pulseZero[2] = 1500;


  // CH4
  if (CH4_ENABLE)
    pulseZero[AilCh - 1] = pulseWidth[AilCh - 1];
  else
    pulseZero[3] = 1500;

  // CH5
  if (CH5_ENABLE)
    pulseZero[4] = 1500;
  else
    pulseZero[4] = 1500;

  // CH6
  if (CH6_ENABLE)
    pulseZero[5] = 1500;
  else
    pulseZero[5] = 1500;


  // CH 7

  if (CH7_ENABLE)
    pulseZero[6] = 1500;
  else
    pulseZero[6] = 1500;

  // CH 8

  if (CH8_ENABLE)
    pulseZero[7] = 1500;
  else
    pulseZero[7] = 1500;


/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////



  // Calculate RC signal ranges for all channels (0, 1, 2, 3)
  for (uint8_t i = 0; i <= 15; i++)
  {
    // Input signals
    pulseMaxNeutral[i] = pulseZero[i] + pulseNeutral;
    pulseMinNeutral[i] = pulseZero[i] - pulseNeutral;
    pulseMax[i]        = pulseZero[i] + pulseSpan;
    pulseMin[i]        = pulseZero[i] - pulseSpan;
    pulseMaxLimit[i]   = pulseZero[i] + pulseLimit;
    pulseMinLimit[i]   = pulseZero[i] - pulseLimit;
  }
  // ESC output

  esc1PulseMax = pulseZero[thrustCh - 1] + esc1PulseSpan;
  esc1PulseMin = pulseZero[thrustCh - 1] - esc1PulseSpan;
  esc2PulseMax = pulseZero[thrustCh - 1] + esc2PulseSpan;
  esc2PulseMin = pulseZero[thrustCh - 1] - esc2PulseSpan;
  esc3PulseMax = pulseZero[thrustCh - 1] + esc3PulseSpan;
  esc3PulseMin = pulseZero[thrustCh - 1] - esc3PulseSpan;

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

 

        
//Servo1.writeMicroseconds(SERVO_START[1]);
Servo1.writeMicroseconds(SERVO_START[1]);
Servo2.writeMicroseconds(SERVO_START[2]);
Servo3.writeMicroseconds(SERVO_START[3]);
Servo4.writeMicroseconds(SERVO_START[4]);
Servo5.writeMicroseconds(SERVO_START[5]);
Servo6.writeMicroseconds(SERVO_START[6]);
servoHome=true;


  
 

}



//
// =======================================================================================================
// DAC OFFSET FADER
// =======================================================================================================
//




static unsigned long dacOffsetMicros;
boolean              dacInit;

void dacOffsetFade()
{
  if (!dacInit)
  {
    if (micros() - dacOffsetMicros > 100)   // Every 0.1ms
    {
      dacOffsetMicros = micros();
      dacOffset++;  // fade DAC offset slowly to prevent it from popping, if ESP32 powered up after amplifier
      if (dacOffset == 128)
        dacInit = true;
    }
  }
}


//
// =======================================================================================================
// READ PPM MULTI CHANNEL COMMMANDS (compatible with many receivers)
// =======================================================================================================
//
//

void readPpmCommands()
{
  if (!failSafe)   // Only transfer data to the pulseWidth[] variables, if no failsafe error!

  {
    pulseWidth[0] = 1500;
    pulseWidth[1] = 1500;
    pulseWidth[2] = valuesBuf[0];
    pulseWidth[3] = valuesBuf[1];
    pulseWidth[4] = valuesBuf[2];
    pulseWidth[5] = valuesBuf[3];
    pulseWidth[6] = 1500;
    pulseWidth[7] = 1500;

  }

  // Invert RC signals
  invertRcSignals();

  // Falisafe for RC signals
  failsafeRcSignals();
}

//
//
// =======================================================================================================
// READ PWM RC SIGNALS
// =======================================================================================================
// CH1=[0] CH2= [1] CH3=[2] CH4=[3] CH5=[4] CH6=[5] CH7=[6] CH8=[7]

void readRcSignals()
{
  // measure RC signal pulsewidth:


  // CH1 Steering
  if (!CH1_ENABLE)
    pulseWidth[steeringCh - 1] = 1500;

  // CH2
  if (!CH2_ENABLE)
    pulseWidth[ElCh - 1] = 1500;

  if (!CH4_ENABLE)
    pulseWidth[AilCh - 1] = 1500;

  // CH5
  if (!CH5_ENABLE)

    pulseWidth[4] = 1500;

  // CH6
  if (!CH6_ENABLE)

    pulseWidth[5] = 1500;


  if (!CH7_ENABLE)

    pulseWidth[6] = 1500;

  if (!CH8_ENABLE)

    pulseWidth[7] = 1500;
 
if (!CH9_ENABLE)
    pulseWidth[8] = 1500;
    
 if (!CH10_ENABLE)
    pulseWidth[9] = 1500;

  // CH2
  if (!CH11_ENABLE)
    pulseWidth[10] = 1500;

  if (!CH12_ENABLE)
    pulseWidth[11] = 1500;

  if (!CH13_ENABLE)

    pulseWidth[12] = 1500;

  // CH6
  if (!CH14_ENABLE)

    pulseWidth[13] = 1500;


  if (!CH15_ENABLE)

    pulseWidth[14] = 1500;

  if (!CH16_ENABLE)

    pulseWidth[15] = 1500;   


  if (pulseWidth[thrustCh - 1] == 0) failSafe = true; // 0, if timeout (signal loss)
  else failSafe = false;

  // Invert RC signals
  invertRcSignals();

  // Falisafe for RC signals
  failsafeRcSignals();
}

//
// =======================================================================================================
// READ SBUS SIGNALS (you may want to change this to match your SBUS channel order)
// =======================================================================================================
//

void readSbusCommands()
{
  // Signals are coming in via SBUS protocol

  static unsigned long lastSbusFailsafe;

  // look for a good SBUS packet from the receiver
  if (sBus.read(&SBUSchannels[0], &SBUSfailSafe, &SBUSlostFrame))
  {
    sbusInit         = true;
    lastSbusFailsafe = millis();
  }

  if (!failSafe)   // Only transfer data to the pulseWidth[] variables, if no SBUS failsafe error!

  { // Note: if you want to change the channel map, change the index [X] of "SBUSchannels" to fit your needs
    // Proportional channels


    
    pulseWidth[0] = map(SBUSchannels[0], 172, 1811, 1000, 2000);
   
    pulseWidth[1] = map(SBUSchannels[1], 172, 1811, 1000, 2000);
   
    pulseWidth[2] = map(SBUSchannels[2], 172, 1811, 1000, 2000);

    pulseWidth[3] = map(SBUSchannels[3], 172, 1811, 1000, 2000);
   
    pulseWidth[4] = map(SBUSchannels[4], 172, 1811, 1000, 2000);
    
    pulseWidth[5] = map(SBUSchannels[5], 172, 1811, 1000, 2000);
   
    pulseWidth[6] = map(SBUSchannels[6], 172, 1811, 1000, 2000);
   
    pulseWidth[7] = map(SBUSchannels[7], 172, 1811, 1000, 2000);
  
    pulseWidth[8] = map(SBUSchannels[8], 172, 1811, 1000, 2000); 

    pulseWidth[9] = map(SBUSchannels[9], 172, 1811, 1000, 2000);
  
    pulseWidth[10] = map(SBUSchannels[10], 172, 1811, 1000, 2000);
  
  
    pulseWidth[11] = map(SBUSchannels[11], 172, 1811, 1000, 2000);
    

   
    pulseWidth[12] = map(SBUSchannels[12], 172, 1811, 1000, 2000);
  

   
    pulseWidth[13] = map(SBUSchannels[13], 172, 1811, 1000, 2000);
    
   
    pulseWidth[14] = map(SBUSchannels[14], 172, 1811, 1000, 2000);

 
    pulseWidth[15] = map(SBUSchannels[15], 172, 1811, 1000, 2000);
   
   
  }

  // Failsafe triggering (works, if SBUS wire is unplugged, but SBUSfailSafe signal from the receiver is untested!)
  if (millis() - lastSbusFailsafe > 50 && !SBUSfailSafe)
    failSafe = true;                                                      // if timeout (signal loss)
  else
    failSafe = false;


  // Print debug infos
  static unsigned long printSbusMillis;
#ifdef SBUS_DEBUG                        // can slow down the playback loop!
  if (millis() - printSbusMillis > 1000) // Every 1000ms
  {
    printSbusMillis = millis();

    Serial.println("SBUS DEBUG:");
    Serial.println(pulseWidth[steeringCh - 1]);
    Serial.println(pulseWidth[Ch2 - 1]);
    Serial.println(pulseWidth[thrustCh - 1]);
    Serial.println(pulseWidth[Ch4 - 1]);
    Serial.println(pulseWidth[4]);

    Serial.println(SBUSfailSafe);
    Serial.println(SBUSlostFrame);

    Serial.println(failSafe);
  }
#endif

  // Invert RC signals
  invertRcSignals();

  // Falisafe for RC signals
  failsafeRcSignals();

  
}



//
// =======================================================================================================
// INVERT RC SIGNALS (if your signals are inverted)
// =======================================================================================================
//

void invertRcSignals()
{
  if (STERRING_DIR)
    pulseWidth[steeringCh - 1] = map(pulseWidth[steeringCh - 1], 0, 3000, 3000, 0);              // invert steering direction
}

//
// =======================================================================================================
// RC SIGNAL FAILSAFE POSITIONS (if serial signal lost)
// =======================================================================================================
//

void failsafeRcSignals()
{
  // PPM signal surveillance (serial & PWM communication does not need any actions here) --------
#if defined PPM_COMMUNICATION
  static unsigned long ppmFailsafeMillis;

  if (millis() - ppmFailsafeMillis > 50)   // Every 50ms
  {
    ppmFailsafeMillis = millis();

    if (ppmFailsafeCounter < 10)
      ppmFailsafeCounter++;                              //it will be reset in the ppm interrupt
  }
  if (ppmFailsafeCounter > 5)
    failSafe = true;
#endif

  // Failsafe actions --------
  if (failSafe) {
    pulseWidth[thrustCh - 1] = pulseZero[thrustCh - 1];         // Throttle to zero position!
    pulseWidth[steeringCh - 1] = pulseZero[steeringCh - 1];         // Steering  to neutral
  }

}


//=======================================================================================================
// TRIGGER
// =======================================================================================================
//

void trigger()
{ 
  #ifdef ACTION1_ENABLE
  Action1.update(pulseWidth[ACTION1CH-1]);
  #endif
  #ifdef ACTION2_ENABLE
  Action2.update(pulseWidth[ACTION2CH-1]);
  #endif
  #ifdef ACTION3_ENABLE
  Action3.update(pulseWidth[ACTION3CH-1]);
  #endif

  #ifdef ACTION4_ENABLE
  Action4.update(pulseWidth[ACTION4CH-1]);
  CH3.update(pulseWidth[thrustCh - 1]);
  CH1.update(pulseWidth[steeringCh - 1]);
  #endif

  #ifdef ACTION5_ENABLE
  Action5.update(pulseWidth[ACTION5CH-1]); 
  CH4.update(pulseWidth[AilCh - 1]);
  CH2.update(pulseWidth[ElCh - 1]);
  #endif

  #ifdef ACTION6_ENABLE
  Action6.update(pulseWidth[ACTION6CH-1]);
  #endif
  #ifdef ACTION7_ENABLE
  Action7.update(pulseWidth[ACTION7CH-1]);
  #endif
  #ifdef ACTION8_ENABLE
  Action8.update(pulseWidth[ACTION8CH-1]);  
  #endif
  #ifdef ACTION9_ENABLE
  Action9.update(pulseWidth[ACTION9CH-1]); 
  #endif
  #ifdef ACTION10_ENABLE
  Action10.update(pulseWidth[ACTION10CH-1]);
  #endif
  #ifdef ACTION11_ENABLE
  
   #ifdef ACTION11A_ENABLE
  Action11A.update(pulseWidth[ACTION11ACH-1]);
   #endif
   #ifdef ACTION11B_ENABLE
  Action11B.update(pulseWidth[ACTION11BCH-1]);
   #endif 
   #ifdef ACTION11C_ENABLE
  Action11C.update(pulseWidth[ACTION11CCH-1]);
   #endif
   #ifdef ACTION11D_ENABLE
  Action11D.update(pulseWidth[ACTION11DCH-1]);
   #endif
   
  #endif 
  
  #ifdef ACTION12_ENABLE
  Action12.update(pulseWidth[ACTION12CH-1]);
  #endif 
  #ifdef VOLUME_CONTROLE
  VolumeCh.update(pulseWidth[VOLUMECH-1]);
  #endif
  CH5.update(pulseWidth[4]);

  #ifdef SEQ1_CH_5
   CH5.update(pulseWidth[4]);
    #endif
  #ifdef SEQ1_CH_6
   CH6.update(pulseWidth[5]);
    #endif
  #ifdef SEQ1_CH_7
   CH7.update(pulseWidth[6]);
    #endif
  #ifdef SEQ1_CH_8
   CH8.update(pulseWidth[7]);
    #endif
  #ifdef SEQ1_CH_9
   CH9.update(pulseWidth[8]);
    #endif
  #ifdef SEQ1_CH_10
   CH10.update(pulseWidth[9]);
    #endif
  #ifdef SEQ1_CH_11
   CH11.update(pulseWidth[10]);
    #endif
  #ifdef SEQ1_CH_12
   CH12.update(pulseWidth[11]);
    #endif
  #ifdef SEQ1_CH_13
   CH13.update(pulseWidth[12]);
    #endif
  #ifdef SEQ1_CH_14
   CH14.update(pulseWidth[13]);
    #endif
  #ifdef SEQ1_CH_15
   CH15.update(pulseWidth[14]);
    #endif
  #ifdef SEQ1_CH_16
   CH16.update(pulseWidth[15]);
    #endif

   #ifdef SEQ2_CH_5
   CH5.update(pulseWidth[4]);
    #endif
  #ifdef SEQ2_CH_6
   CH6.update(pulseWidth[5]);
    #endif
  #ifdef SEQ2_CH_7
   CH7.update(pulseWidth[6]);
    #endif
  #ifdef SEQ2_CH_8
   CH8.update(pulseWidth[7]);
    #endif
  #ifdef SEQ2_CH_9
   CH9.update(pulseWidth[8]);
    #endif
  #ifdef SEQ2_CH_10
   CH10.update(pulseWidth[9]);
    #endif
  #ifdef SEQ2_CH_11
   CH11.update(pulseWidth[10]);
    #endif
  #ifdef SEQ2_CH_12
   CH12.update(pulseWidth[11]);
    #endif
  #ifdef SEQ2_CH_13
   CH13.update(pulseWidth[12]);
    #endif
  #ifdef SEQ2_CH_14
   CH14.update(pulseWidth[13]);
    #endif
  #ifdef SEQ2_CH_15
   CH15.update(pulseWidth[14]);
    #endif
  #ifdef SEQ2_CH_16
   CH16.update(pulseWidth[15]);
    #endif  

}


// =======================================================================================================
//  CH1 (STEERING)
// =======================================================================================================
//

void steering()
{
  if (STERRING_MOD)
  {
    if (pulseWidth[steeringCh - 1] > pulseMinLimit[steeringCh - 1] && pulseWidth[steeringCh - 1] < pulseMaxLimit[steeringCh - 1])
    {
      if (pulseWidth[steeringCh - 1] < pulseMin[steeringCh - 1])
        pulseWidth[steeringCh - 1] = pulseMin[steeringCh - 1];                          // Constrain the value
      if (pulseWidth[steeringCh - 1] > pulseMax[steeringCh - 1])
        pulseWidth[steeringCh - 1] = pulseMax[steeringCh - 1];

      // calculate a modificator value from the pulsewidth signal

      if (pulseWidth[steeringCh - 1] > pulseMaxNeutral[steeringCh - 1])
      {
        if (STERRING_DIR)
          modificatorG = map(pulseWidth[steeringCh - 1], pulseMaxNeutral[steeringCh - 1], pulseMax[steeringCh - 1], 0, -600);
        else
          modificatorG = map(pulseWidth[steeringCh - 1], pulseMaxNeutral[steeringCh - 1], pulseMax[steeringCh - 1], 0, 600);
      }
      else if (pulseWidth[steeringCh - 1] < pulseMinNeutral[steeringCh - 1])
      {
        if (STERRING_DIR)
          modificatorD = map(pulseWidth[steeringCh - 1], pulseMinNeutral[steeringCh - 1], pulseMin[steeringCh - 1], 0, 600);
        else
          modificatorD = map(pulseWidth[steeringCh - 1], pulseMinNeutral[steeringCh - 1], pulseMin[steeringCh - 1], 0, -600);
      }
      else
      {
        modificatorG = 0;
        modificatorD = 0;
      }
    }
  }
}




// =======================================================================================================
// MAP PULSEWIDTH TO THROTTLE CH3
// =======================================================================================================
//


void mapThrottle()
{
  // Input is around 1000 - 2000us, output 0-500 for forward and backwards

  // check if the pulsewidth looks like a servo pulse
  if (pulseWidth[thrustCh - 1] > pulseMinLimit[thrustCh - 1] && pulseWidth[thrustCh - 1] < pulseMaxLimit[thrustCh - 1])
  {
    if (pulseWidth[thrustCh - 1] < pulseMin[thrustCh - 1])  pulseWidth[thrustCh - 1] = pulseMin[thrustCh - 1];                        // Constrain the value
    if (pulseWidth[thrustCh - 1] > pulseMax[thrustCh - 1])  pulseWidth[thrustCh - 1] = pulseMax[thrustCh - 1];

    // calculate a throttle value from the pulsewidth signal
    if (pulseWidth[thrustCh - 1] > pulseMaxNeutral[thrustCh - 1])
    {
      currentThrottle = map(pulseWidth[thrustCh - 1], pulseMaxNeutral[thrustCh - 1], pulseMax[thrustCh - 1], 0, 500);
      throttleReverse = false;
    }
    else if (pulseWidth[thrustCh - 1] < pulseMinNeutral[thrustCh - 1])
    {
      currentThrottle = map(pulseWidth[thrustCh - 1], pulseMinNeutral[thrustCh - 1], pulseMin[thrustCh - 1], 0, 500);
      throttleReverse = true;
    }
    else
    {
      currentThrottle = 0;
    }
  }



  // Calculate throttle dependent engine idle volume


  // As a base for some calculations below, fade the current throttle to make it more natural
  static unsigned long throttleFaderMicros;
  if (micros() - throttleFaderMicros > 500) { // Every 0.5ms
    throttleFaderMicros = micros();

    if (currentThrottleFaded < currentThrottle && currentThrottleFaded < 499) currentThrottleFaded += 2;
    if (currentThrottleFaded > currentThrottle && currentThrottleFaded > 2) currentThrottleFaded -= 2;
    //Serial.println(currentThrottleFaded);
  }


  // Calculate throttle dependent engine idle volume
  if (engineRunning)
    throttleDependentVolume = map(currentThrottle, 0, 500, engineIdleVolumePercentage, fullThrottleVolumePercentage);
  else
    throttleDependentVolume = engineIdleVolumePercentage;

  // Calculate throttle dependent engine rev volume // modif (!throttleReverse)
  if (engineRunning && !throttleReverse)
    throttleDependentRevVolume = map(currentThrottleFaded, 0, 500, engineRevVolumePercentage, fullThrottleVolumePercentage);
  else throttleDependentRevVolume = engineRevVolumePercentage;

  // Calculate throttle dependent Diesel knock volume
  if (engineRunning && (currentThrottle > dieselKnockStartPoint))
    throttleDependentKnockVolume = map(currentThrottle, dieselKnockStartPoint, 500, dieselKnockIdleVolumePercentage, 100);
  else
    throttleDependentKnockVolume = dieselKnockIdleVolumePercentage;

  // Calculate engine rpm dependent turbo volume modif
  if (engineRunning && !throttleReverse)
    throttleDependentTurboVolume = map(currentRpm, 0, 500, turboIdleVolumePercentage, 100);
  else
    throttleDependentTurboVolume = turboIdleVolumePercentage;


}

//
// =======================================================================================================
// ENGINE S SIMULATION
// =======================================================================================================
//

void engineMassSimulation()
{
  static int32_t       mappedThrottle = 0;
  static int32_t       lastThrottle;
  static unsigned long throtMillis;
  static unsigned long printMillis;

  if (millis() - throtMillis > 2)   // Every 2ms
  {
    throtMillis = millis();

    if (currentThrottle > 500)
      currentThrottle = 500;


    mappedThrottle =  currentThrottle;



    // Accelerate engine
    if (mappedThrottle > (currentRpm + acc) && (currentRpm + acc) < maxRpm && engineRunning)
    {
      currentRpm += acc;
      if (currentRpm > maxRpm)
        currentRpm = maxRpm;
    }

    // Decelerate engine
    if (mappedThrottle < currentRpm)
    {
      currentRpm -= dec;
      if (currentRpm < minRpm)
        currentRpm = minRpm;
    }

	engineSampleRate = map(currentRpm, minRpm, maxRpm, maxSampleInterval, minSampleInterval);
#ifdef REV_SOUND
    currentRevRpmScaled = map(currentRpm, minRpm, maxRpm, maxSampleInterval, minRevSampleInterval); // Rev
#endif
  }



  // switch between idle and rev sound, depending on rpm
#ifdef REV_SOUND
  if (currentRpm > revSwitchPoint && !throttleReverse)
    engineRevving = true;                                                    // modif (&& !throttleReverse)
  else
    engineRevving = false;
#endif

#ifdef SLOW
  if (currentRpm < slowSwitchPoint )
    engineSlow = true;                                                    // modif (&& !throttleReverse)
  else
    engineSlow = false;
#endif

  // Print debug infos
#ifdef DEBUG                         // can slow down the playback loop!
  if (millis() - printMillis > 1000) // Every 1000ms
  {
    printMillis = millis();

    /*Serial.println("CH1");
       Serial.println(pulseWidth[steeringCh-1]);
       Serial.println(pulseMinNeutral[steeringCh-1]);
       Serial.println(pulseMaxNeutral[steeringCh-1]);
       Serial.println("CH2");
       Serial.println(pulseWidth[Ch2-1]);
       Serial.println(pulseMinNeutral[Ch2-1]);
       Serial.println(pulseMaxNeutral[Ch2-1]);*/
    Serial.println("CH3");
    Serial.println(pulseMinLimit[thrustCh - 1]);
    Serial.println(pulseMin[thrustCh - 1]);
    Serial.println(pulseMinNeutral[thrustCh - 1]);
    Serial.println(pulseWidth[thrustCh - 1]);
    Serial.println(pulseMaxNeutral[thrustCh - 1]);
    Serial.println(pulseMax[thrustCh - 1]);
    Serial.println(pulseMaxLimit[thrustCh - 1]);
    /*Serial.println("CH4");
       Serial.println(pulseWidth[Ch4-1]);
       Serial.println(pulseMinNeutral[Ch4-1]);
       Serial.println(pulseMaxNeutral[Ch4-1]);
       Serial.println("Gear");
       Serial.println(selectedGear);
       Serial.println(currentThrottle);
       Serial.println(mappedThrottle);
       Serial.println("Wastegate");
       Serial.println(wastegateTrigger);
       Serial.println(currentRpm);
       Serial.println(currentRpmScaled);
       Serial.println(" ");
       /*Serial.println(engineState);
       Serial.println(loopTime);
       Serial.println(" ");
       Serial.println(airBrakeTrigger);
       Serial.println(EngineWasAboveIdle);
       Serial.println(throttleDependentVolume);
       Serial.println(sound1On);
       Serial.println(soundNo);
       Serial.print("PPM Failsafe Counter ");
       Serial.println(ppmFailsafeCounter);
       Serial.print("failSafe ");
       Serial.println(failSafe);*/
    Serial.println(loopTime);
    Serial.println(" ");
    Serial.println(currentThrottle);
    Serial.println(" ");
    Serial.println(mappedThrottle);
  }
#endif
#ifdef PULSWIDTH_DEBUG
  if (millis() - printMillis > 300)     // Print the data every 300ms
  {
    printMillis = millis();
  if (Init){
  Serial.print("SOUNDBOARD START = OK");}
  else{Serial.print("SOUNDBOARD START = WAIT!!");}
  Serial.println(" ");  
  if(engineState==0){Serial.print("Motor = OFF");}
  
  else if (engineState==1){Serial.print("Motor = AIRSTART");}
  else if (engineState==2){Serial.print("Motor = START");}
  else if (engineState==3){Serial.print("Motor = ON");}
  else if (engineState==4){Serial.print("Motor = SHUTDOWN");}
  Serial.println(" ");
  
  Serial.print("DERIVE :");
  Serial.println(pulseWidth[steeringCh - 1]);
    
  Serial.print("PROFONDEUR :");
  Serial.println(pulseWidth[ElCh - 1]);
    
  Serial.print("GAZ :");
  Serial.println(pulseWidth[thrustCh - 1]);
    
  Serial.print("AILLERONS :");
  Serial.println(pulseWidth[AilCh - 1]);
  Serial.print("CH5 :");
  Serial.println(pulseWidth[4]);
  Serial.print("CH6 :");
  Serial.println(pulseWidth[5]);
  Serial.print("CH7 :");
  Serial.println(pulseWidth[6]);
  Serial.print("CH8 :");
  Serial.println(pulseWidth[7]);
  Serial.print("CH9 :");
  Serial.println(pulseWidth[8]);
  Serial.print("CH10 :");
  Serial.println(pulseWidth[9]);
  Serial.print("CH11 :");
  Serial.println(pulseWidth[10]);
  Serial.print("CH14 :");
  Serial.println(pulseWidth[13]);
  Serial.print(Action11.Pos());
    Serial.println("");
  }
#endif  

}

//
// =======================================================================================================
// SWITCH ENGINE ON OR OFF
// =======================================================================================================
//

void engineOnOff()
{
  static unsigned long idleDelayMillis;
  static unsigned long OnOffDelayMillis;

  if (engineManualOnOff)   // Engine manually switched on or off depending on CH2
  {
    // detect Engine switch on/off  trigger CH 2
    if (pulseWidth[chManualOnOff - 1] > (pulseMaxNeutral[chManualOnOff - 1] + 180) && pulseWidth[chManualOnOff - 1] < pulseMaxLimit[chManualOnOff - 1])
    {
      if (! Avertissement && !manualServo){
      engineOn = true;
      MotorOn  = true;
      
      TimerOn  = false;
      lightsOn = true;}
    }

    else if (pulseWidth[chManualOnOff - 1] < (pulseMinNeutral[chManualOnOff - 1] - 180) && pulseWidth[chManualOnOff - 1] > pulseMinLimit[chManualOnOff - 1])
    {
       if (! Avertissement && !manualServo){
      OnOffDelayMillis = millis();
      engineOn = false;
      TimerOn  = true;}
    }
  }

  

  else   // Engine automatically switched on or off depending on throttle position and 15s delay timne
  {
    if (currentThrottle > 50)
      idleDelayMillis = millis();                                             // reset delay timer, if throttle not in neutral

    if (millis() - idleDelayMillis > enginetimeoff)
    {
      engineOn = false; // after delay, switch engine off
    }

    if (millis() - idleDelayMillis > enginetimeoff + lightstimeoff)
    {
      lightsOn = false; // after delay, switch light off
    }

    if (millis() - idleDelayMillis > enginetimeoff + motortimeoff)
    {
      MotorOn = false; // after delay, switch light off
    }

    // Engine start detection
    if (currentThrottle > 50)
    {
      engineOn           = true;
      lightsOn           = true;
      MotorOn            = true;
      EngineWasAboveIdle = true;
    }
  }

  //  lights off et Motor after delay time ( with the manual on/off )
  if (!engineOn && TimerOn)
  {
    if (millis() - OnOffDelayMillis > lightstimeoff)
    {
      lightsOn = false; // after delay, switch light off
    }

    if (millis() - OnOffDelayMillis > motortimeoff)
    {
      MotorOn = false; // after delay, switch light off
    }
  }
 
}




//
// =======================================================================================================
// ESC CONTROL
// =======================================================================================================
//

// Connect your ESC to output 1-2-3, for Rudder Mixing possibility
// *** WARNING!! Do it at your own risk!! There is a falisafe function in case, the signal input from the
// receiver is lost, but if the ESP32 crashes, the vehicle could get out of control!! ***

void esc()
{
  static int32_t       esc1PulseWidth = 1500;
  static uint32_t      esc1Signal;
  static int32_t       esc2PulseWidth = 1500;
  static uint32_t      esc2Signal;
  static int32_t       esc3PulseWidth = 1500;
  static uint32_t      esc3Signal;
  static unsigned long escMillis;
  static unsigned long lastStateTime;


#ifdef ESC_DEBUG
  if (millis() - lastStateTime > 300)     // Print the data every 300ms
  {
    lastStateTime = millis();

    Serial.println(pulseWidth[thrustCh - 1]);
    Serial.println(esc1PulseWidth);
    Serial.println(esc2PulseWidth);
    Serial.println(esc3PulseWidth);
    Serial.println(modificatorG);
    Serial.println(modificatorD);
    Serial.println("");
  }
#endif

  if (LINEAR)
  {
    thrustmod = linearPercentage;
  }
  else
  {
    thrustmod = map(pulseWidth[thrustCh - 1], pulseMaxNeutral[thrustCh - 1], pulseMax[thrustCh - 1], modPercentage, 10);
    propmod   = (thrustmod * 0.01);
    if (thrustmod > modPercentage)
    {
      thrustmod = modPercentage;
      propmod   = (modPercentage * 0.01);
    }
  }


  if (LINEAR_REV)
  {
    thrustmodRev = linearPercentageRev;
  }
  else
  {
    thrustmodRev = map(pulseWidth[thrustCh - 1], pulseMaxNeutral[thrustCh - 1], pulseMax[thrustCh - 1], modPercentage, 10);
    propmodRev   = (thrustmodRev * 0.01);
    if (thrustmodRev > modPercentageRev)
    {
      thrustmodRev = modPercentageRev;
      propmodRev   = (modPercentageRev * 0.01);
    }
  }


  if (pulseWidth[thrustCh - 1] > pulseMaxNeutral[thrustCh - 1] && pulseWidth[thrustCh - 1] < pulseMaxLimit[thrustCh - 1])
  {
    Limited = false;
    Forward = true;

#if defined MODE_FORWARD_1    // PROPORTIONAL RUDDER MIXING NO REVERSE
    esc1PulseWidth = pulseWidth[thrustCh - 1];
    esc2PulseWidth = pulseWidth[thrustCh - 1] - (modificatorG + modificatorD) * propmod;
    esc3PulseWidth = pulseWidth[thrustCh - 1] + (modificatorG + modificatorD) * propmod;

    if (esc2PulseWidth < pulseMaxNeutral[thrustCh - 1])
    {
      esc2PulseWidth = pulseZero[thrustCh - 1];
    }


    if (esc3PulseWidth < pulseMaxNeutral[thrustCh - 1])
    {
      esc3PulseWidth = pulseZero[thrustCh - 1];
    }
#elif defined MODE_FORWARD_2 // PROPORTIONAL RUDDER MIXING REVERSE
    esc1PulseWidth = pulseWidth[thrustCh - 1];
    esc2PulseWidth = pulseWidth[thrustCh - 1] - (modificatorG + modificatorD) * propmod;
    esc3PulseWidth = pulseWidth[thrustCh - 1] + (modificatorG + modificatorD) * propmod;

#elif defined MODE_FORWARD_3  // TUG MODE RUDDER MIXING  LOW SPEED : 100% TURN = REVERSE 100% TUG MODE
    esc1PulseWidth = pulseWidth[thrustCh - 1];
    esc2PulseWidth = pulseWidth[thrustCh - 1] - (modificatorG + modificatorD);
    esc3PulseWidth = pulseWidth[thrustCh - 1] + (modificatorG + modificatorD);

#elif defined MODE_FORWARD_4  // MTB MODE 3 ESC // LOW SPEED = 1 ESC FAST SPEDD = 3 ESC // PROPORTIONAL RUDDER MIXING NO REVERSE
    esc1PulseWidth = pulseWidth[thrustCh - 1];
    esc2PulseWidth = pulseWidth[thrustCh - 1] - ((modificatorG + modificatorD) * propmod);
    esc3PulseWidth = pulseWidth[thrustCh - 1] + ((modificatorG + modificatorD) * propmod);

    if (esc2PulseWidth < pulseMaxNeutral[thrustCh - 1])
    {
      esc2PulseWidth = pulseZero[thrustCh - 1];
    }

    if (esc3PulseWidth < pulseMaxNeutral[thrustCh - 1])
    {
      esc3PulseWidth = pulseZero[thrustCh - 1];
    }

    if (pulseWidth[thrustCh - 1] > (pulseZero[thrustCh - 1] + revSwitchPoint))
    {
      esc2PulseWidth = map(esc2PulseWidth, (pulseZero[thrustCh - 1] + revSwitchPoint), 2000, pulseZero[thrustCh - 1], 1950);

      if (esc2PulseWidth < pulseMaxNeutral[thrustCh - 1])
        esc2PulseWidth = pulseZero[thrustCh - 1];

      esc3PulseWidth = map(esc3PulseWidth, (pulseZero[thrustCh - 1] + revSwitchPoint), 2000, pulseZero[thrustCh - 1], 1950);

      if (esc3PulseWidth < pulseMaxNeutral[thrustCh - 1])
        esc3PulseWidth = pulseZero[thrustCh - 1];
    }
#endif
  }

  else if (pulseWidth[thrustCh - 1] < pulseMinNeutral[thrustCh - 1] )
  {
    Backward = true;


#if defined MODE_BACKWARD_1
    Limited = true;

    esc1PulseWidth = pulseWidth[thrustCh - 1];
    esc2PulseWidth = pulseWidth[thrustCh - 1] - (modificatorG + modificatorD) * propmodRev;

    if (esc2PulseWidth > pulseMinNeutral[thrustCh - 1])
      esc2PulseWidth = pulseZero[thrustCh - 1];


    esc3PulseWidth = pulseWidth[thrustCh - 1] + (modificatorG + modificatorD) * propmodRev;

    if (esc3PulseWidth > pulseMinNeutral[thrustCh - 1])
      esc3PulseWidth = pulseZero[thrustCh - 1];

#elif defined MODE_BACKWARD_2
    Limited = false;

    esc1PulseWidth = pulseWidth[thrustCh - 1];


    esc2PulseWidth = pulseWidth[thrustCh - 1] - (modificatorG + modificatorD) * propmodRev;
    if (esc2PulseWidth > pulseMinNeutral[thrustCh - 1])
      esc2PulseWidth = pulseZero[thrustCh - 1];

    esc3PulseWidth = pulseWidth[thrustCh - 1] + (modificatorG + modificatorD) * propmodRev;
    if (esc3PulseWidth > pulseMinNeutral[thrustCh - 1])
      esc3PulseWidth = pulseZero[thrustCh - 1];

#elif defined MODE_BACKWARD_3
    Limited = true;

    if (throttleReverse)
    {
      esc1PulseWidth = pulseWidth[thrustCh - 1];
      esc2PulseWidth = pulseZero[thrustCh - 1];
      esc3PulseWidth = pulseZero[thrustCh - 1];
    }
#endif
  }
  else
  {
    Neutral = true;

    esc1PulseWidth = pulseZero[thrustCh - 1];
    esc2PulseWidth = pulseZero[thrustCh - 1];
    esc3PulseWidth = pulseZero[thrustCh - 1];
  }


  if (!engineRunning)
  {
    esc1PulseWidth = pulseZero[thrustCh - 1];
    esc2PulseWidth = pulseZero[thrustCh - 1];
    esc3PulseWidth = pulseZero[thrustCh - 1];
  }

  if (Limited)
  {
    esc2PulseWidth = map(esc2PulseWidth, esc1PulseMin, pulseZero[thrustCh - 1], valreverse, pulseZero[thrustCh - 1]);
    esc3PulseWidth = map(esc3PulseWidth, esc2PulseMin, pulseZero[thrustCh - 1], valreverse, pulseZero[thrustCh - 1]);
    esc1PulseWidth = map(esc1PulseWidth, esc3PulseMin, pulseZero[thrustCh - 1], valreverse, pulseZero[thrustCh - 1]);
  }



  if (ESC_INV) {
    esc1PulseWidth = map(esc1PulseWidth, esc1PulseMin, esc1PulseMax, 1800, 1100); // 1 - 2ms (5 - 10% pulsewidth of 65534)

    esc2PulseWidth = map(esc2PulseWidth, esc2PulseMin, esc2PulseMax, 1800, 1100); // 1 - 2ms (5 - 10% pulsewidth of 65534)

    esc3PulseWidth = map(esc3PulseWidth, esc3PulseMin, esc3PulseMax, 1800, 1100); // 1 - 2ms (5 - 10% pulsewidth of 65534)
  }


  ESC1.writeMicroseconds(esc1PulseWidth);
  ESC2.writeMicroseconds(esc2PulseWidth);
  ESC3.writeMicroseconds(esc3PulseWidth);

}
//
// =======================================================================================================
// INITIALISATION TRIGGER
// =======================================================================================================
//
void Initialisation() {


  if (!one) {

    delay(1000);
    Init = true;
    one = true;
    //Led_builtin.on();

   
    switch (StartSound) {
    case 0:
    
    break;

    case 1:
    DacAudio.Play(&Short_blast, false);
    break;

    case 2:
    DacAudio.Play(&Bell, false);
    break;

    case 3:
    DacAudio.Play(&Start, false);
    break;
  }

  Servoposition=true;
  
  }

}

//
// =======================================================================================================
// VOLUME CONTROL CH8
// =======================================================================================================
//

void volumeControl()
{
  


#ifdef VOLUME_CONTROLE

  if ( VolumeCh.Pos() == 1) {
    masterVolume = MIN_VOLUME;
    DacAudio.DacVolume = MIN_VOLUME;
  }
  if (VolumeCh.Pos() == 2) {
    masterVolume = INTER_VOLUME;
    DacAudio.DacVolume = (INTER_VOLUME-20);
  }
  if (VolumeCh.Pos() == 3) {
    masterVolume = MAX_VOLUME;
    DacAudio.DacVolume = 100;
  }
#endif
}

//
// =======================================================================================================
// LOOP TIME MEASUREMENT
// =======================================================================================================
//

unsigned long loopDuration()
{
  static unsigned long timerOld;
  unsigned long        loopTime;
  unsigned long        timer = millis();

  loopTime = timer - timerOld;
  timerOld = timer;
  return loopTime;
}

void hello()
{
  static byte count = 0;

  Serial.print(++count);
  Serial.print(" Hello it is ");
  Serial.println(millis());
}

//
// =======================================================================================================
// MAIN LOOP, RUNNING ON CORE 1
// =======================================================================================================
//

void loop()
{

#if defined SBUS_COMMUNICATION
  readSbusCommands(); // SBUS communication (pin 36)
#elif defined PPM_COMMUNICATION
  readPpmCommands(); // PPM communication (pin 34)
#else
  //  measure RC signals mark space ratio
  readRcSignals();

#endif
 
  steering();
  
  trigger();
  Servos(); 
  
  Initialisation();

  volumeControl();

  DacAudio.FillBuffer();
  Sequences();

  SlowMotionServo::update(); /* actualisation de la position */
  ScheduleTable::update();

 

}

//
// =======================================================================================================
// 1st MAIN TASK, RUNNING ON CORE 0 (Interrupts are running on this core as well)
// =======================================================================================================
//

void Task1code(void *pvParameters)
{
  for (;;)
  {
    // DAC offset fader
    dacOffsetFade();

    // Map pulsewidth to throttle
    mapThrottle();

    // Simulate engine mass, generate RPM signal
    engineMassSimulation();

    // Switch engine on or off
    engineOnOff();

    // LED control
    led();

    // Radar control
    Radar();
    
    Action();

    Motor2();

    // ESC control
    esc();

    triggerSound();
   


  }
}
