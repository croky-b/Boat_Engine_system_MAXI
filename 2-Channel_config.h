

// Channels signal range calibration -----
const uint16_t pulseNeutral = 30;
const uint16_t pulseSpan = 480;

// CH1 CONFIGURATION (STEERING)

const boolean CH1_ENABLE = true;
const boolean STERRING_MOD = true;  // Mixage vitesse/ direction
const boolean STERRING_DIR = false; //Invertion G/D
const uint8_t steeringCh = 1; // if you want change the MODE RC controler MODE2 MODE1

// CH2 CONFIGURATION

const boolean CH2_ENABLE = true;
//Activate for "engine on off" by CH2
const boolean engineManualOnOff = true;
const uint8_t chManualOnOff = 2; // if you want change the channel of engineManualOnOff
const uint8_t ChTwo = 2; // if you want change the MODE RC controler MODE2 MODE1

// CH3 CONFIGURATION (THRUST)

const boolean ESC_INV = true; // invert the esc output if true
const uint16_t valreverse = 1250; // LIMITED REVERSE = 1400-1500�s  NORMAL = 1100-1500�s
const uint8_t thrustCh = 3; // if you want change the MODE RC controler MODE2 MODE1

// MODE MARCHE AVANT

// MODE1=PROPORTIONAL RUDDER MIXING NO REVERSE
// MODE2=PROPORTIONAL RUDDER MIXING REVERSE
// MODE3=TUG MODE RUDDER MIXING  LOW SPEED : 100% TURN = REVERSE 100%
// MODE4=MTB MODE 3 ESC // LOW SPEED = 1 ESC FAST SPEDD = 3 ESC // PROPORTIONAL RUDDER MIXING NO REVERSE


#define MODE_FORWARD_1
//#define MODE_FORWARD_2
//#define MODE_FORWARD_3
//#define MODE_FORWARD_4

//MIXAGE CONFIGURATION

const boolean LINEAR = false; // IF TRUE Linearpercentage SLOW >FAST // IF FALSE Adaptive percentage SLOW SPEED = modPercentage  RUDDER MIX >>> FAST SPEED = 10%
const uint8_t linearPercentage = 35;
const uint8_t modPercentage = 50; // SLOW SPEED = 50% RUDDER MIX >>> FAST SPEED = 10%

// MODE MARCHE ARRIERE

// MODE1= PROPORTIONAL RUDDER MIXING//LIMITED REVERSE SPEED
// MODE2= PROPORTIONAL RUDDER MIXING
// MODE3= MTB MODE REVERSE = 1 ESC

//#define MODE_BACKWARD_1
//#define MODE_BACKWARD_2
#define MODE_BACKWARD_3

//MIXAGE CONFIGURATION

const boolean LINEAR_REV = true; // IF TRUE Linearpercentage SLOW >FAST // IF FALSE Adaptive percentage SLOW SPEED = modPercentage  RUDDER MIX >>> FAST SPEED = 10%
const uint8_t linearPercentageRev = 25;
const uint8_t modPercentageRev = 50; // SLOW SPEED = 50% RUDDER MIX >>> FAST SPEED = 10%

// LED directly ON if Engine ON

/*

  PositionLight
  ExteriorLight 1 et 2

*/

//CH4 CONFIGURATION

const boolean CH4_ENABLE = true;                             // activation de la voie 4
const uint8_t ChFour = 4; // if you want change the MODE RC controler MODE2 MODE1

//CH5 CONFIGURATION

const boolean CH5_ENABLE = true;                             // activation de la voie 5

//CH6 CONFIGURATION

const boolean CH6_ENABLE = true;                             // activation de la voie 6

//CH7 CONFIGURATION

const boolean CH7_ENABLE = true;                           // activation de la voie 7

//CH8 CONFIGURATION

const boolean CH8_ENABLE = true;
#define VOLUME_CONTROLE
const uint16_t MIN_VOLUME = 50;
const uint16_t INTER_VOLUME = 100;
const uint16_t MAX_VOLUME = 150;
