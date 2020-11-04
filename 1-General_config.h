/* ******* RECOMMENDED Audacity Settings: 22'050 Hz, 8 bit PCM **********

  // Sound files converted with: https://bitluni.net/wp-content/uploads/2018/01/Audio2Header.html
  // converter code by bitluni (send him a high five, if you like the code)

  // ********************************************************************************************************************* */
// ---------------------------------------------------------------------------------------------------------------------
// Choose the receiver communication mode (never uncomment more than one! If all commented out = classic PWM RC signal communication)--
// SBUS communication --------
#define SBUS_COMMUNICATION // control signals are coming in via the SBUS interface (comment it out for classic RC signals)
boolean sbusInverted = false; // false = wired to NPN transistor signal inverter or uninverted SBUS signal (for example from "Micro RC" receiver)

// PPM communication --------
//#define PPM_COMMUNICATION // control signals are coming in via the PPM interface (comment it out for classic RC signals)
#define NUM_OF_CHL 8          // The number of channels inside our PPM signal (usually max. 8)
#define NUM_OF_AVG 1          // Number of averaging passes (usually one, more will be slow)

//Timer engine off// lights off //  radar motor off

const uint32_t enginetimeoff = 15000; // 15s on neutral = engine off
const uint32_t lightstimeoff = 10000; // 10s after engine off lights off
const uint32_t motortimeoff =  15000; // 15s after engine off radar motor off


// PWM ESC output signal range calibration (connect crawler type ESC to pin 33)-------------------------------------------
const int16_t esc1PulseSpan = 500; // pulseZero +/- this value
const int16_t esc2PulseSpan = 500; // pulseZero +/- this value
const int16_t esc3PulseSpan = 500; // pulseZero +/- this value

// Engine RPM range (200 for big Diesels, 400 for fast running motors)

uint32_t MAX_RPM_PERCENTAGE = 250 ;
uint32_t  MAX_REV_RPM_PERCENTAGE = 200;

// Engine mass simulation

const int8_t acc = 5; // Acceleration step (2) 1 = slow for locomotive engine, 9 = fast for trophy truck
const int8_t dec = 4; // Deceleration step (1) 1 = slow for locomotive engine, 5 = fast for trophy truck


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
