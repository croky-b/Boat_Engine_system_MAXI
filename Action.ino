


void Action() {
volatile uint8_t Act1 = Action1.Pos();
volatile uint8_t Act2 = 0;
volatile uint8_t Act3 = Action3.Pos();
volatile uint8_t Act4 = Action4.Pos();
volatile uint8_t Act5 = Action5.Pos();
volatile uint8_t Act6 = Action6.momentaryPos();
volatile uint8_t Act7 = Action7.Pos();
volatile uint8_t Act8 = Action8.Pos();
volatile uint8_t Act9 = Action9.Pos();
volatile uint8_t Act10 = Action10.Pos();


#if defined AUTOMATIC_ANCHOR
if (engineRunning){
  Act2 = ACTION2OFF;
  }

  else {
  Act2 = Action2.Pos();
  }
# else 
   Act2 = Action2.Pos();

#endif 

  if(Init){


//Peche/remorquage
 #ifdef ACTION1_ENABLE
 switch (Act1) {
  case ACTION1ON:
    Fishing = true;
    Fishing_Led = true;
    break;
  case ACTION1OFF:
    Fishing = false;
    Fishing_Led = false;
    break;
 
}
#endif

//ACTION2=MOUILLAGE

 #ifdef ACTION2_ENABLE

  
 
 switch (Act2) {
  case ACTION2ON:
     Mouillage = true;
    break;
  case ACTION2OFF:
    Mouillage = false;
    BellMillis = millis();
    break;

}



#endif  

  //ACTION3= FOG
 #ifdef ACTION3_ENABLE 
 
 switch (Act3) {
  case ACTION3ON:
    Fog = true;
    Fog_Led = true;
    break;
  case ACTION3OFF:
    Fog_Led = false;
    Fog = false;
    FogSoundMillis = millis();
    break;
 }
#endif

  //ACTION4= MANOEUVRE

 switch (Act4) {
  case ACTION4ON:
    Maneuvre = true;
    Manoeuvre_Led = true;
    break;
  case ACTION4OFF:
    Maneuvre = false;
    Manoeuvre_Led = false;
    break;
 }

 
 
  //ACTION5=AVERTISSEMENT
  #ifdef ACTION5_ENABLE
  switch (Act5) {
  case ACTION5ON:
    Avertissement = true;
    break;
  case ACTION5OFF:
     Avertissement = false;
    break;
 
}
#endif
 
 //machine Gun
 
 #ifdef ACTION6_ENABLE
 switch (Act6) {
  case ACTION6ON:
    MachineGunSound= true;
    break;
  case ACTION6OFF:
     MachineGunSound= false;
    break;
}
#endif

//GUN
 #ifdef ACTION7_ENABLE
 switch (Act7) {
  case ACTION7ON:
    GunMove= true;
    break;
  case ACTION7OFF:
     GunMove= false;
    break;
 
}
#endif
//Alarm

 #ifdef ACTION8_ENABLE
 switch (Act8) {
  case ACTION8ON:
    Alarm_Led = true;
    Alarm_Sound = true;
    break;
	
  case ACTION8OFF:
  #if defined RINGALARM
	Alarm_Led = false;
    Alarm_Sound=false;
    Ring_Sound = false;
	
  #else 
	Alarm_Led = false;
    Alarm_Sound=false;
  
  #endif 
    
    break;
    
  case ACTION8NA:
  #if defined RINGALARM
	Alarm_Led = true;
    Alarm_Sound = false;
    Ring_Sound = true;
  #endif
  
	break;
 
}
#endif

//manuel light

#ifdef ACTION9_ENABLE
 switch (Act9) {
  case ACTION9ON:
    LightManualOn = true;
    break;
  case ACTION9OFF:
    LightManualOn = false;
    break;
 }
 #endif 
 
// action10

  #ifdef ACTION10_ENABLE
  switch (Act10) {
  case ACTION10ON:
    Action10_Led = true;
    break;
  case ACTION10OFF:
     Action10_Led = false;
    break;
 }
 #endif
 
}
}
