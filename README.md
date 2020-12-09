# This is an Arduino RC engine sound & light controller for ESP32
Adaptation du projet de :https://github.com/TheDIYGuy999/Rc_Engine_Sound_ESP32
pour une utilisation "bateau" 



## :

### New in V 6.2:
- GAZ 66 redefinition bug fixed
- SMD version BOM error fixed
- Instructions PDF for ordering of pre assembled boards added
- STL data for SMD version bottom shell included
- Wastegate not triggered anymore while downshifting

### New in V 6.1:
- SMD version tested
- "INDICATOR_SIDE_MARKERS" option: indicators are always on with dimmed brightness, if side markeers / parking light is on. This is often used in US trucks. See "KenworthW900ACAT3408.h" vehicle configuration
- You need to install the latest version of the "statusLED" library: https://github.com/TheDIYGuy999/statusLED
- Experimental new throttle array for heavy trucks in "curves.h" you need to comment / uncomment it manually for now.

### New in V 6.0:
- Pig sound for Onkel_Tom ;-)
- Kenwworth W900A with CAT3408 made more aggressive (more bass) & alternative profile
- SMD version preview

### New in V 5.9:
- LED PWM frequency is now 20kHz instead of 500 Hz. No PWM noise anymore in the speakers
- New "SEPARATE_FULL_BEAM" option. Wire your high beam lamps to the roof lights pin in this case
- New "INDICATOR_SIDE_MARKERS" option. Indicators are used as side markers as well in this mode

### New in V 5.8:
- MAN TGX 680 vehicle profile
- SMD board v1.1, incl. Gerbers, BOM & Pick and Place file (still untestet)

### New in V 5.7:
- Experimental support for virtual 16 speed sequential transmission "VIRTUAL_16_SPEED_SEQUENTIAL"
- New, alternative URAL-375D vehicle preset
- Indicators are now swichting on and off "soft" like incandescent bulbs, using an on and off ramp, if not defined "LED_INDICATORS" in the vehicle preset file. You need to use the latest statusLED update: https://github.com/TheDIYGuy999/statusLED
- New, untested SMD board version included

### New in V 5.6:
- Horn & siren with variable length (as long as triggered). "Audio2Header.html" tool changed to add the required loop area (you need to adjust it manually) in the sound files.
- Horn & siren can play @ the same time
- New US fire truck (with CAT3408 V8 & Allison 6 speed automatic transmission) vehicle preset (use it to test the new variable length sounds)

### New in V 5.5 (another big update):
- Way more flexible channel assignment, can easily be configured for my "Micro RC" remote, for a FLSKY FS-i6X or others. New "2_adjustmentsRemote.h" config file. You don't have to change the main code anymore in order to assign your channels. For details refer to "adjustmentsRemote.xlsx"
- New, state machine controlled lights control, if "#define AUTO_LIGHTS" commented out. Otherwise lights are controlled by the engine state
- New, optional xenon bulb ignition flash for headlights, if "#define XENON_LIGHTS" defined
- New option "#define ESC_DIR" allows to change the motor spinning direction in software
- New option "#define VIRTUAL_3_SPEED" lets you use the 3 position switch controlled 3 speed transmission, even if it doesn't exist ;-)
- Engine can be started manually by CH5 or automatically with the throttle stick (or the "momentary1" button on the "Micro RC" remote). Depending on setting "#define AUTO_ENGINE_ON_OFF"
- Serial communication mode for "Micro RC" remote removed (replaced with SBUS)
- Actions triggering rewritten, using updated rcTrigger library. You have to use the latest version: https://github.com/TheDIYGuy999/rcTrigger
- Added the missing "shifting" file type & german dropdown translations in "Audio2Header.html"
- Bug in Mack Super Liner configuration fixed
- IBUS interface tested, works fine, but "MAX_RPM_PERCENTAGE" > 350 will crash the ESP32. I recommend to use SBUS instead, because current Flysky firmware can generate SBUS signals as well.
- "MAX_RPM_PERCENTAGE" automatically limited according to communication mode. Required to prevent the controller from crashing (see above)
- In PWM mode, we can now read 6 channels
- PPM interface moved to RX pin, pins "35" & "PPM" are now used for PWM channels 5 & 6
- Bug fixed: wasteghate not triggered anymore while releasing brake rapidly
- Two-stage triggering for bluelight and siren, so we can use the bluelight separately
- Changing between jake braking and the normal engine sound is locked unless the current sample is looping back. This eliminates erratic klicking noises, if enabling or disabling the jake brake!
- To prevent issues with the mode buttons, you should install the latest software v3.5 on the "Micro RC" receiver
- If you use your own vehicle preset, you have to edit them, so that they use the same structure as the pre made ones. example: remove "const" in front of "uint32_t MAX_RPM_PERCENTAGE"
- New jake brake sounds for: Actros, URAL 4320, URAL 375D, Tatra 813 & M35. New dixie horn.

### New in V 5.4:
- New: Volvo FH16 750, Dodge RAM 2500 with Cummins 12V
- "R6" knock pattern for inline 6 engines

### New in V 5.3:
- PWM RC signal processing completely rewritten. It's now using the interrupt based ESP32 "rmt" core function rather than pulseRead(). Thanks to croky_b for the hint! No "MAX_RPM_PERCENTAGE" limitations anymore in PWM mode. 400% can now be used as well.
- PWM CH5 is now accessible on pin 35. This means, that the CH5 functions can also be used in PWM mode!
- Gear manual shifting sound not triggered anymore in automatic or doubleClutch mode. No need to disable it in automatic vehicles anymore.
- URAL4320, Unimog 1000 optimised
- New: Kirovets K700 V12 Diesel monster tractor with extreme turbo sound!

### New in V 5.2 (a big update):
- New, comfortable .wav to .h sound file converting tool ("Audio2Header.html" included). Based on bitluni's work
- Experimental Flysky IBUS support (see comunications settings, untested, you need to install this library: https://github.com/bmellink/IBusBM)
- New vehicle configuration structure: separate .h preset files for vehicles. Select them in "Adjustments.h". Makes vehicle selection a lot easier.
- Vehicle presets complely reworked. Most of them are now including a rev sound, which is seamlessly mixed together with the idle sound. Huge sound quality improvements!
- All vehicle specific presets and sound files are now located in "/vehicles"
- New vehicles: Defender Td5, VW Käfer, Actros 1863, SCANIA V8 trucks, URAL 375D, Jaguar XJS, MGB GT V8, Ford Powerstroke 7.3l V8 Diesel
- Idle and rev sounds are now throttle dependent es well, not just RPM dependent. Adjustable with "fullThrottleVolumePercentage". Useful, if you don't want to use the separate knock sound.
- "TOP_SPEED_MULTIPLIER" renamed to "MAX_RPM_PERCENTAGE", Max. engine RPM now adjustable in % of idle RPM instead of integer multiplier. Allows to do finer adjustments.
- "ADAPTIVE_KNOCK_VOLUME" renamed to "V8", added "V2" (these are ignition volume patterns for different engine types)
- "CATERPILLAR_MODE" renamed to "TRACKED_MODE" (for track based vehicles with dual ESC)
- new "SUPER_SLOW" option for very heavy, slow responding engines like locomotive diesels (see UnionPacific2002.h)
- "NumberOfAutomaticGears" setting moved from "curves.h" to "Adjustments.h"
- Gear ratio of 6 speed automatic transmission 1st gear changed, was too high
- Experimental pulseRead function (using interrupts) for PWM mode (disabled)
- Less aggressive RPM rise while downshifting the manual transmission
- Removed experimental "Multi slot knock samples", takes too much processing power in interrupt and does not sound good

### New in V 5.1:
- Compiler warnings issue solved
- rcTrigger function moved to Core 1 (current Arduino IDE required, 1.8.7 does not work!)
- a lot of new functions (see below, triggered in "void rcTrigger()")
- Jake brake sound added (CH5, SBUS only) Uncomment //#define JAKE_BRAKE_SOUND, if you want to use it
- Headlight flasher and high / low beam switching added (CH5, SBUS only)
- Switchable master volume: indoor and outdoor mode (CH5, SBUS only)
- Switchable, virtual neutral for transmission, allows to rev the engine while standing still! (CH5, SBUS only)
- Kenworth W900A example configurations in Caterpillar 3408 (V8 4 stroke) and Detroit Diesel 8V71 (V8 2 stroke) version
- note, that you have to use the latest version of the rcTrigger library

### New in V 5.01:
- Configuration mistake solved: "ADAPTIVE_KNOCK_VOLUME" (for V8) was not enabled in "Cat3408Settings" and *Master" setting"
- CAT 3408 Peterbilt added

### New in V 5.0:
- The already existing "REV_SOUND" option is now fading over between the idle sound and the rev sound. This provides a very realistic behavior for heavy truck engines. Example see "Cat3408Settings", "Messerschmitt Bf109", "Unimog U1000". The fading threshold can be adjusted with the "revSwitchPoint" variable
- Optimized throttle fader for more realistic sound while gear shifting
- Optimised Wastegate triggering
- Optimised and new sound examples: Unimog U 1000 Turbo, Caterpillar 3408 (for King Hauler)
- Note, that only the "Master" settings example is listing all the .h files. Use this as a base for own settings

### New in V 4.9:
- Ignition knock sound is now triggered by the optional revving sound as well
- Sounds and configuration example for Messerschmitt Bf 109 added (first example, which uses rev sound)

### New in V 4.82:
- Missing .h files for the Ural 2 setting added
- Once again thanks to MAN Tgx for pointing out this issue

### New in V 4.81:
- Bugfix: Several file names contained "Scanıa" (with Turkish i) instead of "Scania". This appears to be a problem under Windows but works fine under macOS
- Example configurations and .h files were reworked accordingly
- Thanks to MAN Tgx on the German RC Modellbau Portal for reporting this bug: https://www.rc-modellbau-portal.de/index.php?threads/esp32-arduino-rc-sound-und-licht-controller.7183/page-14#post-229253

### New in V 4.8:
- Throttle fader for more natural knock behavior during take off
- Improved wiring and adjustments instructions down below
- New insanely loud supercharger sound option
- Example see "JeepCherokeeTrackhawkSettings" (use 6 gears in "curves.h)

### New in V 4.7:
- Experimental support for my new rcTrigger library added
- Allows to trigger multiple latching and non latching actions per analog channel
- Note, that you have to install this library: https://github.com/TheDIYGuy999/rcTrigger

### New in V 4.6:
- 75mm tank cannon fire sound and flash added
- Triggered via CH4
- Flash is using "Beacon 1" output
- Example settings: CATERPILLAR_MODE

### New in V 4.5:
- CATERPILLAR_MODE (dual throttle input on CH2 & CH3 for tanks, diggers, bulldozers etc.
- No ESC control support in this mode! Wire two crawler type ESC (with direct brake) in partallel with CH2 & CH3 inputs, use dual headers)
- Example settings: CATERPILLAR_MODE_Settings (copy and paste it in "Adjustments.h")
- Also working in SBUS mode (allows to use additional sounds)
- New V12 tank sound from JPS952

### New in V 4.4:
- Jeep Grand Cherokee Trackhawk added. Speaker with good bass reproduction needed!
- DAF XF truck added
- Adaptive knock volume added (the first knock per engine cycle will be louder, if defined "ADAPTIVE_KNOCK_VOLUME", adjust volume for others with "dieselKnockAdaptiveVolumePercentage" (see DAF XF settings)
- "Settings" files cleaned up

### New in V 4.3:
- Simulated sequential double clutch transmission added. Variable "doubleClutch" in "Adjustments.h". See Ferrari setting (use 6 gears in "curves.h")
- Automatic transmission shifting strategy is now more robust, no oscillation anymore. See Chevy Nova V8 setting (use 3 gears in "curves.h")
- Knock sound for Chevy Nova V8 added. Sounds just great in combination with the 3 speed automatic transmission!

### New in V 4.2:
- Dynamic, adaptive shift points for automatic transmission, depending on engine load allows economic driving
- Kick down detection will shift back, if instant full throttle is applied
- Replaced "sawtooth" arrays for automatic gear ratios with three one dimensional arrays for 3, 4 or 6 gears
- Reverse detection, only one gear in this case
- Gear ratios according to Allison datasheet (adjust reverse gear ratio according to your ESC reverse top speed)
- PROTOTYPE_36-PIN renamed to PROTOTYPE_36 to prevent compiler warnings
- Settings profiles for Ferrari & trophy truck with 6 speed automatic transmission & Chevy Nova with 3 speed automatic transmission added

### New in V 4.12:
- Further automatic transmission fine tuning after big test drive with the Actros

### New in V 4.11:
- Automatic transmission optimised in 1/14 scale Actros truck with Hobbywing 1080 ESC

### New in V 4.1:
- Inspired by Wombii's fork of this repo: optimised simulated automatic transmission: load dependent "torque converter slip" added, optimised "4 speed sawtooth array", which is simulating the shifting points. Now we have 4 gears instead of 3, but you still can uncomment the 3 speed version array and use it instead. I recommend to use "automatic = true" in "Adjustments.h", if your RC vehicle does not have a real shifting transmission. My solution is way more simplistic than Wombii's, but still sounding good. Example settings see Land Rover and fire truck
- Harley Davidson optimised

### New in V 4.0:
- Failsafe for SBUS now implemented and tested in the King Hauler build. The vehicle will do a controlled stop, if the SBUS wire is disconnected
- The SBUS failsafe flag from the receiver should in theory do the same, but I was not yet able to test it

### New in V 3.9:
- Initial SBUS support on pin 36 "VP". Tested in combination with my "Micro RC" receiver (SW v3.4). Only one single signal wire required!
- It's working fine, but failsafe is not yet ready. Use it at your own risk!
- Use variables "SBUS_COMMUNICATION" & "sbusInverted" (changing signal polarity without an additional transistor) in "Adjustments.h" for configuration
- if you want to change the channel assignment, do it in readSbusCommands()
- Throttle overflow bug solved
- New, optimized Detroit Diesel mix for the KingHauler see "KingHaulerSettings2"

### New in V 3.8:
- Experimental support for automatic transmission simulation. Use "automatic = true" to activate it
- Eagle schematic now including .brd PCB file -> upload it on www.oshpark.com to order your boards easily

### New in V 3.7:
- "PROTOTYPE_36-PIN" allows switching headlights pin between D0 & TX0 pin. Required for the change to a 30 pin ESP32 board, which will be used on the final PCB.
- On the final PCB, the ESP32 will be powered from the ESC, the amplifier, the shaker and the LED from the on board 5V regulator. This requires to remove the popping noise, which is generated, when the DAC offset of 128 is activated. So I added a fader for the DAC offset.

### New in V 3.61:
- Tatra 813 V12 8x8 sound optimised
- New cooling fan & knock sounds

### New in V 3.6:
- engine cooling fan sound added
- Scania 50 ton truck added
- Air cooled Tatra 813 V12 8x8 truck added

### New in V 3.5:
- "dieselKnockStartPoint" variable allows to adjust the point where the volume of the knock sound is starting to increase
- Diesel knock sound triggering bug fixed
- Mercedes Actros & Harley Davidson sounds added
- Example files for vehicle specific settings added

### New in V 3.4:
- Experimental support for separate engine revving sound. See "REV_SOUND" in Adjustments.h (don't use it)
- New Diesel ignition "knock" sound (fixed sample rate), played in synch with the engine sound (variable sample rate). This results in a way more realistic Diesel sound, because the ignition "knock" does not vary in pitch.
- engine sound is now mixed together from up to 4 sounds: idle, turbo, wastegate, Diesel knock. All of them are variable in volume, depending on throttle position or engine RPM. You can adjust everything, using a lot of variables in "Adjustments,h". The result is a very realistic engine sound. Allows to use an engine RPM range of 3 instead of 2 without sounding strange
- New squeaky brake sound
- Up to 11 sounds are now played in parallel!

### New in V 3.3:
- Dimmed headlights during engine start
- International DT-466 sounds added
- New SCANIA V8 added
- Brake sound moved to the fixed sample rate playback interrupt
- Cleaned up playback interrupt functions
- DAC offset 128 moved to dacWrite()
- Brake sounds don't have to start & end @ -128 anymore
- Parking brake sound added
- Pneumatic shifting sound added

### New in V 3.2:
- Added the new "Wastegate" sound. It is triggered, if the throttle is dropped rapidly
- Added Unimog U 1000, uses the new Wastegate sound
- Added AM General M35 truck

### New in V 3.1:
- Added a new, pretty realistic SCANIA R620 "Straight Pipe" engine sound (ScaniaR620Uphill2.h). Pure goose flesh!
- Detroit diesel sounds with more bass added
- A speaker with good bass reproduction is required!

### New in V 3.0:
- Ramping ESC signal faster below "clutchEngagingPoint" to prevent clutch from excessive slipping
- Solved a 2nd engine rpm bug during braking

### New in V 2.91:
- Engine sound was slowing down too much during braking. This bug is now solved
- No turbo sound while braking: Bug solved
- King Hauler parameters fine adjusted
- "clutchClosingPoint" renamed to "clutchEngagingPoint"

### New in V 2.9:
- "shiftingAutoThrottle" is altering throttle for synchronizing while shifting the TAMIYA 3 speed transmission -> Gearbox is protected, extreme realism in engine sound!
- More inertia added, engine idle volume lowered to 40%

### New in V 2.8:
- "clutchClosingPoint" configuration variable added. Prevents engine sound from "rubber band effect". Engine sound is in synch (clutch engaged) with ESC power above this value
- Virtual clutch is also disengaging during gear shifting, allowing the engine rpm to settle down during shifting
- Acceleration speed now variable, depending on throttle position
- Added way more inertia to make vehicle behavior even more realistic
- Brake has now much finer granularity

### New in V 2.7:
- Hornblasters train horns added
- Horns are now louder
- Trash removed
- Acceleratoin & deceleration now shifting transmission gear dependent

### New in V 2.6:
- Indicator activation point adjustable with "indicatorOn"
- Norwegian siren, new air brake sound
- Door noise
- sound files moved to /sounds
- optimized bluelight patterns, using the new, optional "delay" variable. Latest statusLED library update required: https://github.com/TheDIYGuy999/statusLED

### New in V 2.5:
- 3rd brake light on pin 32 added
- "escPulseSpan" > 1400 now working properly. Allows to accelerate and decelerate even smoother as well as limiting the top speed to a realistic level

### New in V 2.4:
- Bug fixed: direct transition from state "braking backwards" to "driving backwards" now working
- failsafe function for serial signal added. Emergency brake is triggered in case of RC signal loss (serial & PWM mode only, PPM will follow)

### New in V 2.3:
- Reversing light, reversing beep and brake light behaviour changed in order to interact correctly with the new vehicle mass simulation
- ESC is locked, if engine is not running ;-)
- Air brake sound now triggered correctly, as soon as the brake pedal is released
- I'm really amazed about this update! The vecihle almost behaves like a real truck now.

### New in V 2.2:
- Support for crawler ESC (with direct brake) on pin 33. Vehicle mass simulation with proportional brake! Tested in Tamiya King Hauler (REELY Model No H0050 ESC) and working fine, but use it at your own risk! If you want to test it, connect ESC to pin 33 of the ESP32 instead of the receiver output.
- LED pins rearranged  to fit my board layout (you can change it in the pin assignment section)
- Scania R620 sound added

### New in V 2.1:
- Additional turbo sound (playing in parallel with engine sound), volume and throttle dependent volume adjustable
- Caterpillar 3406B sound added
- VW Beetle sound added
- Indicator direction adjustable with "INDICATOR_DIR" = "true" or "false"
- Shaker rpm now adjustable for engine start, idle, full throttle & shutdown

### New in V 2.0:
- Swiss post bus horn moved to category "sirens" ---> Replace existing .h file!
- Experimental ESC output (do not use it). Latest statusLED library update required: https://github.com/TheDIYGuy999/statusLED
- Mack truck sounds added

### New in V 1.9:
- Kenworth W900 added
- Initial PPM signal input on pin 34 added. For now usable for steering and throttle signal. Uncomment "#define PPM_COMMUNICATION", if you want to use it.

### New in V 1.8:
- LED pins changed for trailer light driver
- Horn sounds, siren sounds & additional sounds variable names changed! ---> Replace them all!
- Added more horns
- Added indicator (blinker) ticking sound
- Added independent volume adjustment for every sound
- Engine sound volume is now throttle dependent (adjustable)

### New in V 1.7:
- Added shaker motor control on pin 23. Simulates engine vibration. IRLZ44N Mosfet and freewheel diode 1N5819 required
- Shaker power can be adjusted with the variables "shakerMin" & "shakerMax" in Adjustments.h
- Driver schematic down below
- I'm using a shaker motor from the G.T.Power kit 103061 (this controller is crap, but the accessories are useful)
- Foglight and side light pins moved to pins 18 & 19

### New in V 1.6:
- Servo input channels rearranged to match the pinout of the "Micro RC" receiver (you can change it in the pin assignment section)
- Cleaned up the code a bit
- An updated version (16 timers) of my "statusLED" library is required: https://github.com/TheDIYGuy999/statusLED
- Added experimental support for serial communication with my "Micro RC" receiver: https://github.com/TheDIYGuy999/Micro_RC_Receiver
- Uncomment "#define SERIAL_COMMUNICATION" in Adjustments.h
- Connect pin 36 "VP" to pin "TXO" of the receiver (disable "TXO_momentary1" & "TXO_toggle1" in vehicleConfig.h)
- The "RC Servo Signals" are not required in this mode!
- Added Scania R500 V8 sounds

### New in V 1.51:
- Solved issue: redefinition of 'const unsigned int sampleRate'

### New in V 1.5:
- More Detroit Diesels added

### New in V 1.4:
- Indicator (turn signal) support added
- RC signals now handled as arrays in order to simplify auto zero calibration of multiple channels

### New in V 1.3:
- Irish fire truck horn
- Double flash blue lights option
- US fire truck air horn and air siren

### New in V 1.2:
- Light functions added: reversing light, beacons (blue light), headlights, taillights with integrated brake lights
- My "statusLED" library is required: https://github.com/TheDIYGuy999/statusLED

### New in V 1.1:
- Truck reversing beep sound added
- Can play in parallel with other additional sound and with variable speed engine sound!

### New in V 1.0:
- Engine now slowing down, if switched off, not just fading out
- Fader bug fixed, now working smoothly
- HG P408 sounds added

### New in V 0.9:
- Humvee Diesel engine sound added
- Truck pneumatic brake release sound added

### New in V 0.8:
- volume offset bug was back and is fixed again!
- improved sound quality of Union Pacific 2002
- Detroit Diesel truck added
- Sine test tones added
- M2 sound added

### New in V 0.7:
- fixed auto throttle zero calibration bug
- fixed "gap" bug, if sounds were triggered in PWM mode
- PWM mode now allows to trigger 2 sounds

### New in V 0.6:
- fixed slow engine RPM response: The RC signal pulsewidth is now only read every 100ms, so much more processing time is available for other things

### New in V 0.5:
- added idle sound volume adjustment variable "idleVolumePercentage" in "Adjustments.h"
- added Union Pacific 2002 SD70M 16 cylinder Diesel locomotive sounds
- added Jaguar XJS HE car sound (bad quality)
- added "pwmHornTrigger" variable in Adjustments.h", which allows to trigger the horn, using a PWM signal. Allows to use standard receivers

### New in V 0.4:
- volume offset bug fixed
- added the typical Swisss post bus horn, an American police siren, a European Feuerwehr Martinshorn and a car horn
- added the varible "shifted", which allows to select between linear and shifted engine rpm response
- added schematic

### New in V 0.3:
- Engine start / stop implemented, including starter sounds
- Three different start sounds available
- Horn implemented. It is played on pin 26 (see wiring instructions in code) triggered by switch on input 12
- Two different horn sounds available
- The horn can play in parallel with the variable speed engine sound!
- For easier access, the "settings.h" file was renamed in "Adjustments.h"

### New in V 0.2:
- Many new 22'050Hz, 8bit sound files generated, mostly the same as in the ATmega 328 version, but in better quality :-)

### New in V 0.1:
- Runs on an ESP32 (240MHz)
- It's still quick and dirty, but works with the included V8 short course truck idle sound
- sounds way better than the ATmega 328 version, thanks to  22'050Hz sampling rate (instead of 8'000Hz)

## Prototypes:
![](pictures/top.jpg)

![](pictures/receiver_wiring.jpg)

![](pictures/Bestueckt_oben.jpg)

![](pictures/oben.jpg)

![](pictures/unten.jpg)


2019 - 2020, TheDIYGuy999
