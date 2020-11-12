
// PWM ESC output signal range calibration (connect crawler type ESC to pin 33)-------------------------------------------
const int16_t esc1PulseSpan = 500; // pulseZero +/- this value
const int16_t esc2PulseSpan = 500; // pulseZero +/- this value
const int16_t esc3PulseSpan = 500; // pulseZero +/- this value

// Channels signal range calibration -----
const uint16_t pulseNeutral = 30;
const uint16_t pulseSpan = 500;

const uint16_t valreverse = 1250; // LIMITED REVERSE = 1400-1500�s  NORMAL = 1100-1500�s


const uint8_t linearPercentage = 35;
const uint8_t modPercentage = 50; // SLOW SPEED = 50% RUDDER MIX >>> FAST SPEED = 10%



const uint8_t linearPercentageRev = 25;
const uint8_t modPercentageRev = 50; // SLOW SPEED = 50% RUDDER MIX >>> FAST SPEED = 10%
