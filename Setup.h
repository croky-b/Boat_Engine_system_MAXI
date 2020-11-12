const boolean STERRING_MOD = false;
const boolean STERRING_DIR = false;
#define NUM_OF_CHL 8 
#define NUM_OF_AVG 1  
#define SBUS_COMMUNICATION
boolean sbusInverted = false;
uint32_t MAX_RPM_PERCENTAGE =250;
uint32_t MAX_REV_RPM_PERCENTAGE =200;
const int8_t acc =5;
const int8_t dec =4;
volatile int startVolumePercentage = 100;
volatile int idleVolumePercentage = 100;;
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
#include "sounds/boat/turbo diesel start.h"
#include "sounds/boat/turbo diesel idle.h"
#define ENGINE_STOP
#include "sounds/boat/turbo_diesel_stop.h"
#define AIR_STARTER 
#include "sounds/boat/AIR_STARTER.h"
#include "sounds/boat/AIR_STOP.h"
#define MODE_FORWARD_1
#define MODE_BACKWARD_1
const boolean LINEAR = false;
const boolean LINEAR_REV = false;
const boolean ESC_INV = false;
const uint8_t thrustCh = 4;
const uint8_t ElCh= 1;
const uint8_t AilCh = 4; 
const uint8_t steeringCh = 4; 
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
const boolean CH13_ENABLE = true;   
const boolean CH14_ENABLE = true;   
const boolean CH15_ENABLE = true;   
const boolean CH16_ENABLE = false;   
const boolean engineManualOnOff = true;
const uint8_t chManualOnOff = 2;
const uint32_t enginetimeoff = 15000;
const uint32_t lightstimeoff = 10000;
const uint32_t motortimeoff = 15000;
#define VOLUME_CONTROLE
const uint16_t MIN_VOLUME =50;
const uint16_t INTER_VOLUME =100;
const uint16_t MAX_VOLUME =150;
