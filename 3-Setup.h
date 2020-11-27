#include "XT_DAC_Audio.h"

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

volatile int startVolumePercentage = 100;
volatile int idleVolumePercentage = 100;
volatile int engineIdleVolumePercentage = 40;
volatile int fullThrottleVolumePercentage = 100;
volatile int stopVolumePercentage = 100;
volatile int revVolumePercentage = 100;
volatile int engineRevVolumePercentage = 50;
volatile const uint16_t revSwitchPoint = 150;
volatile const uint16_t idleEndPoint = 400;
volatile const uint16_t idleVolumeProportionPercentage = 80;
volatile int starterStopVolumePercentage = 150;
volatile int starterVolumePercentage = 150;
#include "sounds/boat/smal diesel start.h"
#include "sounds/boat/smal diesel idle.h"
#define ENGINE_STOP
#include "sounds/boat/Small_diesel_stop.h"
uint32_t MAX_RPM_PERCENTAGE =180;
uint32_t MAX_REV_RPM_PERCENTAGE =200;
const int8_t acc =5;
const int8_t dec =4;

//______________________________________________________________________________
//------------------------------MIXING CONFIG------------------------------------
//_______________________________________________________________________________

const boolean STERRING_MOD = false;
const boolean LINEAR = false;
const boolean LINEAR_REV = false;
const boolean ESC_INV = true;
#define MODE_FORWARD_1
#define MODE_BACKWARD_1

//______________________________________________________________________________
//---------------------------------CHANNEL CONFIG--------------------------------
//_______________________________________________________________________________

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
const boolean CH9_ENABLE = false;   
const boolean CH10_ENABLE = false;   
const boolean CH11_ENABLE = false;   
const boolean CH12_ENABLE = false;   
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
#define VOLUMECH 8

const uint8_t StartSound = 3; 
//______________________________________________________________________________
//---------------------------------ACTION1---------------------------------------
//_______________________________________________________________________________
#define ONTIME_1 250
#define OFFTIME_1 250
#define ACTION1_3
#define ACTION1_4
#define ACTION1CH 6
#define ACTION1ON 3
#define ACTION1OFF 2
#define ACTION1NA 1


//______________________________________________________________________________
//---------------------------------ACTION2---------------------------------------
//_______________________________________________________________________________
#define ANCHORTIME 6000
#define SHORT
#define ACTION2CH 6
#define ACTION2NA 3
#define ACTION2OFF 2
#define ACTION2ON 1

//______________________________________________________________________________
//---------------------------------ACTION3---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Bell.h"
XT_Wav_Class Bell(Bel_Data);
#include "sounds/boat/AuxSound/Short_blast.h"
XT_Wav_Class Short_blast(Short_Data);
#include "sounds/boat/AuxSound/Long_blast.h"
XT_Wav_Class Long_blast(LongB_Data);
#define TUGBOAT
#define ACTION3_5
#define ACTION3_6
#define ACTION3_13
#define ACTION3CH 7
#define ACTION3ON 3
#define ACTION3OFF 2
#define ACTION3NA 1

//______________________________________________________________________________
//---------------------------------ACTION4---------------------------------------
//_______________________________________________________________________________
#define ACTION4_7
#define ACTION4CH 5
#define ACTION4NA 3
#define ACTION4OFF 2
#define ACTION4ON 1

//______________________________________________________________________________
//---------------------------------ACTION5---------------------------------------
//_______________________________________________________________________________
#define ACTION5CH 5
#define ACTION5ON 3
#define ACTION5OFF 2
#define ACTION5NA 1

//______________________________________________________________________________
//---------------------------------ACTION6---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/AA_Gun.h"
XT_Wav_Class AAGun(AAGun_Data);
#define SERVOACTION6
#define ACTION6CH 9
#define ACTION6ON 3
#define ACTION6OFF 2
#define ACTION6NA 1

//______________________________________________________________________________
//---------------------------------ACTION7---------------------------------------
//_______________________________________________________________________________
#define SERVOACTION7
#include "sounds/boat/AuxSound/Gun.h"
XT_Wav_Class Gun(Gun_Data);
#define ACTION7CH 9
#define ACTION7NA 3
#define ACTION7OFF 2
#define ACTION7ON 1

#define ONTIME_8 250
#define OFFTIME_8 250
//______________________________________________________________________________
//---------------------------------ACTION8---------------------------------------
//_______________________________________________________________________________
#include "sounds/boat/AuxSound/Alarm.h"
XT_Wav_Class Alarm(Alarm_Data);
#define ACTION8CH 10
#define ACTION8ON 3
#define ACTION8NA 2
#define ACTION8OFF 1


//______________________________________________________________________________
//---------------------------------ACTION9---------------------------------------
//_______________________________________________________________________________
#define ONTIME_9 250
#define OFFTIME_9 250
#define ACTION9_1
#define ACTION9_2
volatile boolean AutoLight =true;
#define ACTION9CH 999
#define ACTION9ON 999
#define ACTION9OFF 999
#define ACTION9NA 999

//______________________________________________________________________________
//---------------------------------ACTION10---------------------------------------
//_______________________________________________________________________________
#define ONTIME_10 250
#define OFFTIME_10 250
#define ACTION10CH 7
#define ACTION10NA 3
#define ACTION10OFF 2
#define ACTION10ON 1
