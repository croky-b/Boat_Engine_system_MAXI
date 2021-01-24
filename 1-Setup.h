#include "XT_DAC_Audio.h"
//______________________________________________________________________________
//-------------------------------VOLUME----------------------------------
//_______________________________________________________________________________


#define ANCOR_VOL 64 
#define SHORT_VOL 127 
#define LONG_VOL 127 
#define GUN_VOL 127 
#define AAGUN_VOL 127 
#define LONG_VOL 127 
#define ALARM1_VOL 127 
#define ALARM2_VOL 127 
#define BELL_VOL 127 
#define SEAGULL_VOL 127 
#define AMBIENT_VOL 64 
#define TWELVE1_VOL 127 
#define TWELVE2_VOL 127 
#define TWELVE3_VOL 127 
#define ELEVEN1_VOL 127 
#define ELEVEN2_VOL 127 
#define ELEVEN3_VOL 127 
#define ELEVEN4_VOL 127 
#define ELEVEN5_VOL 127 
#define ELEVEN6_VOL 127 
#define ELEVEN7_VOL 127 
#define ELEVEN8_VOL 127 

//______________________________________________________________________________
//-------------------------------COMMUNICATION----------------------------------
//_______________________________________________________________________________

#define NUM_OF_CHL 8 
#define NUM_OF_AVG 1  
#define SBUS_COMMUNICATION
boolean sbusInverted = false;

//______________________________________________________________________________
//---------------------------------ENGINE SOUND CONFIG -------------------------
//_______________________________________________________________________________

volatile int engineIdleVolumePercentage = 40;
volatile int fullThrottleVolumePercentage = 100;
volatile int engineRevVolumePercentage = 50;
volatile const uint16_t revSwitchPoint = 150;
volatile const uint16_t slowSwitchPoint = 50;
volatile const uint16_t idleEndPoint = 400;
volatile const uint16_t idleVolumeProportionPercentage = 80;
#include "sounds/boat/Small_Diesel_Start.h"
#include "sounds/boat/smal diesel idle.h"
#define ENGINE_STOP
#include "sounds/boat/Small_Diesel_Stop.h"
volatile int startVolumePercentage = 100;
volatile int idleVolumePercentage = 100;
volatile int stopVolumePercentage = 100;
volatile int starterVolumePercentage = 100;
volatile int starterStopVolumePercentage = 100;
volatile int slowVolumePercentage  = 100;
volatile int revVolumePercentage = 100;
uint32_t MAX_RPM_PERCENTAGE =250;
uint32_t MAX_REV_RPM_PERCENTAGE =200;
const int8_t acc =5;
const int8_t dec =4;

//______________________________________________________________________________
//------------------------------MIXING CONFIG------------------------------------
//_______________________________________________________________________________

const uint16_t valreverse = 1250;

const uint8_t linearPercentage = 35;
const uint8_t modPercentage = 50;

const uint8_t linearPercentageRev = 25;
const uint8_t modPercentageRev = 50;

const boolean STERRING_MOD = false;
const boolean LINEAR = false;
const boolean LINEAR_REV = false;
const boolean ESC_INV = true;
#define MODE_FORWARD_1
#define MODE_BACKWARD_1

//______________________________________________________________________________
//---------------------------------CHANNEL CONFIG--------------------------------
//_______________________________________________________________________________


const int16_t esc1PulseSpan = 500;
const int16_t esc2PulseSpan = 500;
const int16_t esc3PulseSpan = 500;

const uint16_t pulseNeutral = 30;
const uint16_t pulseSpan = 500;

const uint8_t thrustCh = 3;
const uint8_t ElCh= 2;
const uint8_t AilCh = 1; 
const uint8_t steeringCh = 4; 
const boolean STERRING_DIR = false;
const boolean CH1_ENABLE = true;   
const boolean CH2_ENABLE = true;   
const boolean CH3_ENABLE = true;   
const boolean CH4_ENABLE = true;   
const boolean CH5_ENABLE = true;   
const boolean CH6_ENABLE = true;   
const boolean CH7_ENABLE = true;   
const boolean CH8_ENABLE = true;   
const boolean CH9_ENABLE = true;   
const boolean CH10_ENABLE = true;   
const boolean CH11_ENABLE = true;   
const boolean CH12_ENABLE = true;   
const boolean CH13_ENABLE = false;   
const boolean CH14_ENABLE = false;   
const boolean CH15_ENABLE = false;   
const boolean CH16_ENABLE = false;   

//______________________________________________________________________________
//---------------------------------ENGINE ON/OFF---------------------------------
//_______________________________________________________________________________

const boolean engineManualOnOff = true;
const uint8_t chManualOnOff = 2;
const uint32_t enginetimeoff = 15000;
const uint32_t lightstimeoff = 10000;
const uint32_t motortimeoff = 15000;

//______________________________________________________________________________
//-------------------------------VOLUME CONTROL----------------------------------
//_______________________________________________________________________________

#define VOLUME_CONTROLE
const uint16_t MIN_VOLUME =50;
const uint16_t INTER_VOLUME =100;
const uint16_t MAX_VOLUME =150;
#define VOLUMECH 0

const uint8_t StartSound = 0; 
#include "sounds/boat/AuxSound/Start.h"
XT_Wav_Class Start(Start_Data);
//______________________________________________________________________________
//---------------------------------ACTION1---------------------------------------
//_______________________________________________________________________________
#define ONTIME_1 30
#define OFFTIME_1 500
#define ACTION1A_FLASH_4
#define ACTION1B_3
#define ACTION1C_1
#define ACTION1_ENABLE
#define ACTION1CH 6
#define ACTION1ON 3
#define ACTION1OFF 2
#define ACTION1NA 1
#define ACTION1_MULTI
#define ACTION1_SWITCH1 1
#define ACTION1_SWITCH2 2
#define ACTION1_SWITCH3 3
#define ACTION1_SWITCH4 4
#define ACTION1_SWITCH5 5
#define ACTION1_END_SWITCH 6


//______________________________________________________________________________
//---------------------------------ACTION2---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/ancre.h"
XT_Wav_Class Ancre(Ancre_Data);
#define ANCOR_SPEED_UP  1250
#define ANCOR_SPEED_DOWN  1750
#define AUTOMATIC_ANCHOR
#define ANCHORMOTOR
#define ANCHORMOTOR_6
#define ANCHORSOUND
#define INTER
#define ACTION2_ENABLE
#define ACTION2CH 6
#define ACTION2NA 3
#define ACTION2OFF 2
#define ACTION2ON 1

//______________________________________________________________________________
//---------------------------------ACTION3---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Bell.h"
XT_Wav_Class Bell(Bel_Data);
#include "sounds/boat/AuxSound/Short_blast9.h"
XT_Wav_Class Short_blast(Short_Data);
#include "sounds/boat/AuxSound/Long_blast9.h"
XT_Wav_Class Long_blast(LongB_Data);
#define FISHINGBOAT
#define ACTION3_ENABLE
#define ACTION3CH 7
#define ACTION3ON 3
#define ACTION3OFF 2
#define ACTION3NA 1

//______________________________________________________________________________
//---------------------------------ACTION4---------------------------------------
//_______________________________________________________________________________
#define ACTION4_ENABLE
#define ACTION4CH 5
#define ACTION4NA 3
#define ACTION4OFF 2
#define ACTION4ON 1

//______________________________________________________________________________
//---------------------------------ACTION5---------------------------------------
//_______________________________________________________________________________
#define ACTION5_ENABLE
#define ACTION5CH 5
#define ACTION5ON 3
#define ACTION5OFF 2
#define ACTION5NA 1

//______________________________________________________________________________
//---------------------------------ACTION6---------------------------------------
//_______________________________________________________________________________
#define SEQ6_DURATION 10000
#define SEQ6B_DURATION 10000
#include "sounds/boat/AuxSound/AAGun_Large.h"
XT_Wav_Class AAGun(AAGun_Data);
#define ACTION6_ENABLE
#define ACTION6CH 8
#define ACTION6ON 3
#define ACTION6OFF 2
#define ACTION6NA 1
#define ACT6_SERVO_SEQ
#define SEQ6_PART1_GUN

//______________________________________________________________________________
//---------------------------------ACTION7---------------------------------------
//_______________________________________________________________________________
#define SEQ7_DURATION 15000
#define SEQ7B_DURATION 10000
#include "sounds/boat/AuxSound/Gun.h"
XT_Wav_Class Gun(Gun_Data);
#define SEQ7_PART1_AAGUN
#define ACTION7_ENABLE
#define ACTION7CH 8
#define ACTION7NA 3 
#define ACTION7OFF 2
#define ACTION7ON 1
#define ACT7_SERVO_SEQ

//______________________________________________________________________________
//---------------------------------ACTION8---------------------------------------
//_______________________________________________________________________________
#define RINGALARM
#include "sounds/boat/AuxSound/Alarm.h"
XT_Wav_Class Alarm(Alarm_Data);
#include "sounds/boat/AuxSound/Ring.h"
XT_Wav_Class Ring(Ring_Data);
#define ACT8_SERVO_MANUAL
#define ACTION8_ENABLE
#define ACTION8CH 9
#define ACTION8ON 3
#define ACTION8NA 2
#define ACTION8OFF 1
#define ONTIME_8 250
#define OFFTIME_8 250



//______________________________________________________________________________
//---------------------------------ACTION9---------------------------------------
//_______________________________________________________________________________
#define ONTIME_9 250
#define OFFTIME_9 250

volatile boolean AutoLight =true;

//______________________________________________________________________________
//---------------------------------ACTION10---------------------------------------
//_______________________________________________________________________________
#define ONTIME_10 250
#define OFFTIME_10 250
//______________________________________________________________________________
//---------------------------------ACTION11---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Eleven_Perso_1.h"
XT_Wav_Class eleven1(eleven1_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_2.h"
XT_Wav_Class eleven2(eleven2_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_3.h"
XT_Wav_Class eleven3(eleven3_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_4.h"
XT_Wav_Class eleven4(eleven4_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_5.h"
XT_Wav_Class eleven5(eleven5_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_6.h"
XT_Wav_Class eleven6(eleven6_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_7.h"
XT_Wav_Class eleven7(eleven7_Data);
#include "sounds/boat/AuxSound/Eleven_Perso_8.h"
XT_Wav_Class eleven8(eleven8_Data);
#include "sounds/boat/AuxSound/Seagull.h"
XT_Wav_Class Seagull(Seagull_Data);
#include "sounds/boat/AuxSound/Ambient.h"
XT_Wav_Class Ambient(Ambient_Data);


#define ACTION11_ENABLE
#define ACTION11A_ENABLE
#define ACTION11ACH 10
#define ACTION11A_HIGH_SEAGULL
#define ACTION11A_HIGH_REPEAT 0
#define ACTION11A_LOW_PERSO_3
#define ACTION11A_LOW_REPEAT 0
#define ACTION11B_ENABLE
#define ACTION11BCH 12
#define ACTION11B_HIGH_AMBIENT
#define ACTION11B_HIGH_REPEAT_FOREVER


//______________________________________________________________________________
//---------------------------------ACTION12---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Twelve_Perso_1.h"
XT_Wav_Class twelve1(twelve1_Data);
#include "sounds/boat/AuxSound/Twelve_Perso_2.h"
XT_Wav_Class twelve2(twelve2_Data);
#include "sounds/boat/AuxSound/Twelve_Perso_3.h"
XT_Wav_Class twelve3(twelve3_Data);
#define SERVO_MIN 500
#define SERVO_MAX 2400
#define ACT12_ACT1_SWITCH
#define ACT12SERVOSWITCH
#define SERVO1_HOME
#define SERVO2_HOME
#define SERVO3_HOME
#define SERVO4_HOME
#define SERVO5_HOME
#define SERVO6_HOME

#define SERVO1_SWITCH 1
#define SERVO2_SWITCH 2
#define SERVO3_SWITCH 3
#define SERVO4_SWITCH 4
#define SERVO5_SWITCH 5
#define SERVO6_SWITCH 6
#define END_SWITCH 7
#define ACTION_SERVO1 1
#define ACTION_SERVO2 2
#define ACTION_SERVO3 99
#define ACTION_SERVO4 99
#define ACTION_SERVO5 99
#define ACTION_SERVO6 99
#define ACTION12_ENABLE

#define ACTION12CH 11
#define ACTION12ON 3
#define ACTION12NA 2
#define ACTION12OFF 1
int16_t SERVO_START[7] {1500,1450,1450,1450,1450,1450,1450}; 
//______________________________________________________________________________
//---------------------------------SEQUENCE---------------------------------------
//_______________________________________________________________________________
#define SEQ1_DURATION 1000
#define SEQ1B_DURATION 1000

#define ONTIME_SEQ1_PART1 250
#define OFFTIME_SEQ1_PART1 250
#define ONTIME_SEQ1_PART2 250
#define OFFTIME_SEQ1_PART2 250
#define ONTIME_SEQ1_PART3 250
#define OFFTIME_SEQ1_PART3 250
#define ONTIME_SEQ1_PART4 250
#define OFFTIME_SEQ1_PART4 250

#define ONTIME_SEQ1B_PART1 250
#define OFFTIME_SEQ1B_PART1 250
#define ONTIME_SEQ1B_PART2 250
#define OFFTIME_SEQ1B_PART2 250
#define ONTIME_SEQ1B_PART3 250
#define OFFTIME_SEQ1B_PART3 250
#define ONTIME_SEQ1B_PART4 250
#define OFFTIME_SEQ1B_PART4 250

#define SEQ2_DURATION 1000
#define SEQ2B_DURATION 1000

#define ONTIME_SEQ2_PART1 250
#define OFFTIME_SEQ2_PART1 250
#define ONTIME_SEQ2_PART2 250
#define OFFTIME_SEQ2_PART2 250
#define ONTIME_SEQ2_PART3 250
#define OFFTIME_SEQ2_PART3 250
#define ONTIME_SEQ2_PART4 250
#define OFFTIME_SEQ2_PART4 250

#define ONTIME_SEQ2B_PART1 250
#define OFFTIME_SEQ2B_PART1 250
#define ONTIME_SEQ2B_PART2 250
#define OFFTIME_SEQ2B_PART2 250
#define ONTIME_SEQ2B_PART3 250
#define OFFTIME_SEQ2B_PART3 250
#define ONTIME_SEQ2B_PART4 250
#define OFFTIME_SEQ2B_PART4 250
#define SEQ1_CH_0
#define SEQ2_CH_0
