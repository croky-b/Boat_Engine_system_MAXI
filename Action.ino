


void Action() {
#if not defined ACT1_MULTISWITCH || ACT1_MULTISWITCH_UP1 || ACT1_MULTISWITCH_UP2 || ACT1_MULTISWITCH_UP3 || ACT1_MULTISWITCH_UP4 || ACT1_MULTISWITCH_DOWN1 || ACT1_MULTISWITCH_DOWN2 || ACT1_MULTISWITCH_DOWN3 || ACT1_MULTISWITCH_DOWN4
volatile uint8_t Act1 = Action1.Pos();
#endif 
#if not defined ACT2_MULTISWITCH || ACT2_MULTISWITCH_UP1 || ACT2_MULTISWITCH_UP2 || ACT2_MULTISWITCH_UP3 || ACT2_MULTISWITCH_UP4 || ACT2_MULTISWITCH_DOWN1 || ACT2_MULTISWITCH_DOWN2 || ACT2_MULTISWITCH_DOWN3 || ACT2_MULTISWITCH_DOWN4
volatile uint8_t Act2 = 0;
#endif 
#if not defined ACT3_MULTISWITCH || ACT3_MULTISWITCH_UP1 || ACT3_MULTISWITCH_UP2 || ACT3_MULTISWITCH_UP3 || ACT3_MULTISWITCH_UP4 || ACT3_MULTISWITCH_DOWN1 || ACT3_MULTISWITCH_DOWN2 || ACT3_MULTISWITCH_DOWN3 || ACT3_MULTISWITCH_DOWN4
volatile uint8_t Act3 = Action3.Pos();
#endif 
#if not defined ACT4_MULTISWITCH || ACT4_MULTISWITCH_UP1 || ACT4_MULTISWITCH_UP2 || ACT4_MULTISWITCH_UP3 || ACT4_MULTISWITCH_UP4 || ACT4_MULTISWITCH_DOWN1 || ACT4_MULTISWITCH_DOWN2 || ACT4_MULTISWITCH_DOWN3 || ACT4_MULTISWITCH_DOWN4
volatile uint8_t Act4 = Action4.Pos();
#endif 
#if not defined ACT5_MULTISWITCH || ACT5_MULTISWITCH_UP1 || ACT5_MULTISWITCH_UP2 || ACT5_MULTISWITCH_UP3 || ACT5_MULTISWITCH_UP4 || ACT5_MULTISWITCH_DOWN1 || ACT5_MULTISWITCH_DOWN2 || ACT5_MULTISWITCH_DOWN3 || ACT5_MULTISWITCH_DOWN4
volatile uint8_t Act5 = Action5.Pos();
#endif 
#if not defined ACT6_MULTISWITCH || ACT6_MULTISWITCH_UP1 || ACT6_MULTISWITCH_UP2 || ACT6_MULTISWITCH_UP3 || ACT6_MULTISWITCH_UP4 || ACT6_MULTISWITCH_DOWN1 || ACT6_MULTISWITCH_DOWN2 || ACT6_MULTISWITCH_DOWN3 || ACT6_MULTISWITCH_DOWN4
volatile uint8_t Act6 = Action6.Pos();
#endif 
#if not defined ACT7_MULTISWITCH || ACT7_MULTISWITCH_UP1 || ACT7_MULTISWITCH_UP2 || ACT7_MULTISWITCH_UP3 || ACT7_MULTISWITCH_UP4 || ACT7_MULTISWITCH_DOWN1 || ACT7_MULTISWITCH_DOWN2 || ACT7_MULTISWITCH_DOWN3 || ACT7_MULTISWITCH_DOWN4
volatile uint8_t Act7 = Action7.Pos();
#endif 
#if not defined ACT8_MULTISWITCH || ACT8_MULTISWITCH_UP1 || ACT8_MULTISWITCH_UP2 || ACT8_MULTISWITCH_UP3 || ACT8_MULTISWITCH_UP4 || ACT8_MULTISWITCH_DOWN1 || ACT8_MULTISWITCH_DOWN2 || ACT8_MULTISWITCH_DOWN3 || ACT8_MULTISWITCH_DOWN4
volatile uint8_t Act8 = Action8.Pos();
#endif 
#if not defined ACT9_MULTISWITCH || ACT9_MULTISWITCH_UP1 || ACT9_MULTISWITCH_UP2 || ACT9_MULTISWITCH_UP3 || ACT9_MULTISWITCH_UP4 || ACT9_MULTISWITCH_DOWN1 || ACT9_MULTISWITCH_DOWN2 || ACT9_MULTISWITCH_DOWN3 || ACT9_MULTISWITCH_DOWN4
volatile uint8_t Act9 = Action9.Pos();
#endif 
#if not defined ACT10_MULTISWITCH || ACT10_MULTISWITCH_UP1 || ACT10_MULTISWITCH_UP2 || ACT10_MULTISWITCH_UP3 || ACT10_MULTISWITCH_UP4 || ACT10_MULTISWITCH_DOWN1 || ACT10_MULTISWITCH_DOWN2 || ACT10_MULTISWITCH_DOWN3 || ACT10_MULTISWITCH_DOWN4
volatile uint8_t Act10 = Action10.Pos();
#endif 
#if not defined ACT11_MULTISWITCH
volatile uint8_t Act11 = 5;
#endif 
#if not defined ACT12_MULTISWITCH || ACT12_MULTISWITCH_UP1 || ACT12_MULTISWITCH_UP2 || ACT12_MULTISWITCH_UP3 || ACT12_MULTISWITCH_UP4 || ACT12_MULTISWITCH_DOWN1 || ACT12_MULTISWITCH_DOWN2 || ACT12_MULTISWITCH_DOWN3 || ACT12_MULTISWITCH_DOWN4
volatile uint8_t Act12 = 0;
#endif 


 #if defined AUTOMATIC_ANCHOR
if (engineRunning){
  #if not defined ACT2_MULTISWITCH
  Act2 = ACTION2OFF;
  #else 
  Act2 = false;
  #endif
  }

  else {
    #if not defined ACT2_MULTISWITCH
    Act2 = Action2.Pos();
    #else 
    Act2 = Act2;
    #endif
  }
# else 
    #if not defined ACT2_MULTISWITCH
    Act2 = Action2.Pos();
    #else 
    Act2 = Act2;
    #endif

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
    

action1Switch=0;
    break;
  
}
 #endif

//ACTION2=MOUILLAGE

 #ifdef ACTION2_ENABLE
 
 switch (Act2) {
  case ACTION2ON:
     Mouillage = true;
     Mouillage_Led=true;
    break;
  case ACTION2OFF:
    Mouillage = false;
    Mouillage_Led = false;
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

 #ifdef ACTION4_ENABLE
  //ACTION4= MANOEUVRE

 switch (Act4) {
  case ACTION4ON:
    Maneuvre = true;
    Manoeuvre_Led = true;
    Act5=ACTION5OFF;
   
    break;
  case ACTION4OFF:
    Maneuvre = false;
    Manoeuvre_Led = false;
   
    
    break;
 }
  #endif 
 
  
 
  //ACTION5=AVERTISSEMENT
  #ifdef ACTION5_ENABLE
  switch (Act5) {
  case ACTION5ON:
    Avertissement = true;
    Act4=ACTION4OFF;
    
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
	
  #ifdef ACT6_SERVO_MANUAL
	manualServo = true;
 #endif
 
  #ifdef ACT6_SERVO_SEQ
  
  #else
    MachineGunSound= true;
  #endif 
    
    break;
  case ACTION6OFF:
  
  #ifdef ACT6_SERVO_MANUAL
	manualServo = false;
  #endif
  
  #ifdef ACT6_SERVO_SEQ
  #else
    MachineGunSound= false;
  #endif 
    break;
}

#endif

//GUN
 #ifdef ACTION7_ENABLE
 switch (Act7) {
  case ACTION7ON:
  
  #ifdef ACT7_SERVO_MANUAL
	manualServo = true;
  #endif 
  
  #ifdef ACT7_SERVO_SEQ
  
  #else
   
    GunSound2= true;
  #endif 
  
    break;
  case ACTION7OFF:
  
  #ifdef ACT7_SERVO_MANUAL
	manualServo = false;
  #endif 
  
  #ifdef ACT7_SERVO_SEQ
  
  #else
    GunSound2= false;
  
  #endif
  
    break;
 
}
#endif
//Alarm

 #ifdef ACTION8_ENABLE
 switch (Act8) {
  case ACTION8ON:
    Alarm_Led = true;
    Alarm_Sound = true;
   
	
  #ifdef ACT8_SERVO_MANUAL
	manualServo = true;
  #endif 
	
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
  
  #ifdef ACT8_SERVO_MANUAL
	manualServo = false;
  #endif 
    
    break;
 #if not defined ACT8_MULTISWITCH    // change for multiswitch 
  case ACTION8NA:

  #ifdef ACT8_SERVO_MANUAL
  manualServo = true;
  #endif 
  
  #if defined RINGALARM
    Alarm_Led = true;
    Alarm_Sound = false;
    Ring_Sound = true;
  #endif
  
	break;
#endif    // change for multiswitch 
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
  #ifdef ACT10_SERVO_MANUAL
	
  manualServo = true;
  #endif 
    Action10_Led = true;
    break;
  case ACTION10OFF:
  #ifdef ACT10_SERVO_MANUAL
	 manualServo = false;
  #endif 
     Action10_Led = false;
    break;
 }
 #endif
 
 
 if (MotorOn){
  #ifdef ACT9_SERVO_MANUAL
	 manualServo = true;
  #endif 
 }
 else {
  #ifdef ACT9_SERVO_MANUAL
	 manualServo = false;
 #endif  
 }
 

 
#ifdef ACTION12_ENABLE 

#ifdef ACT12SERVOSWITCH
if (!manualServo){
  servoSwitch=0;

}


 switch (actionServoSwitch) {
  case 0:
    GunSound = false;
    MachineGunSound = false;
    Motor2On = false;
    Act12Sound1 = false;
    Act12Sound2 = false;
    Act12Sound3 = false;
    
    break;
  case 1:
    GunSound = true;
    
    break;
  case 2:
    MachineGunSound = true;
    
    break;
  case 3:
    Motor2On = true;
    
    break;
    
  case 4:
    Act12Sound1 = true;
    
    break;
    
  case 5:
    Act12Sound2 = true;
    
    break;

  case 6:
    Act12Sound3 = true;
    
    break;
    
 
}

	 
	 if  (Action12.Pos()== ACTION12ON){
		if (millis() - toggleTime > 1500){
			servoCtrl=false;
			toggleAction = true;
		}
	}
	 else if  (Action12.Pos()== ACTION12OFF){
		 toggleAction = false;
		 toggleTime= millis(); 
	 }
	 
	 else  toggleAction = false;
	 
	 
	 if (servoSwitch ==1 && toggleAction){
		 actionServoSwitch = ACTION_SERVO1;
	 }
	 
	 else if (servoSwitch ==2 && toggleAction){
		 actionServoSwitch = ACTION_SERVO2;
	 }
	 
	 else if (servoSwitch ==3 && toggleAction){
		 actionServoSwitch = ACTION_SERVO3;
	 }
	 
	 else if (servoSwitch ==4 && toggleAction){
		 actionServoSwitch = ACTION_SERVO4;
	 }
	 
	 else if (servoSwitch ==5 && toggleAction){
		 actionServoSwitch = ACTION_SERVO5;
	 }
	 
	 else if (servoSwitch ==6 && toggleAction){
		 actionServoSwitch = ACTION_SERVO6;
	 }
	 
	 else if (!toggleAction)
	 {actionServoSwitch = 0;}
	  
	  
	  
	 
	
	
 switch(servoSwitch){

    case 0 :
    
    if (manualServo &&! Fishing){
       servoSwitch=1;}

    break;
    
	  
	  case SERVO1_SWITCH :
		if (Action12.Pos()== ACTION12ON && !toggleAction ){
		  servoCtrl=true;     
		}
	

		if (Action12.Pos()== ACTION12OFF && servoCtrl) {
			servoSwitch = (SERVO1_SWITCH +1);
			 servoCtrl=false;
		  }
		break;
		
	  case SERVO2_SWITCH :
		if (Action12.Pos()== ACTION12ON && !toggleAction){
		  servoCtrl=true;     
		}
		

		if (Action12.Pos()== ACTION12OFF && servoCtrl){
			servoSwitch = (SERVO2_SWITCH+1);
			servoCtrl=false;
		  }
		break;
	 

	 case SERVO3_SWITCH :
		if (Action12.Pos()== ACTION12ON && !toggleAction){
		  servoCtrl=true;     
		}
		
		if (Action12.Pos()== ACTION12OFF && servoCtrl){
			servoSwitch = (SERVO3_SWITCH+1);
			 servoCtrl=false;
		  }
		break;
		
	  case SERVO4_SWITCH :
		if (Action12.Pos()== ACTION12ON && !toggleAction){
		  servoCtrl=true;     
		}
		

		if (Action12.Pos()== ACTION12OFF && servoCtrl){
			servoSwitch = (SERVO4_SWITCH +1) ;
			servoCtrl=false;
		  }
		break;

		case SERVO5_SWITCH :
		if (Action12.Pos()== ACTION12ON && !toggleAction){
		  servoCtrl=true;     
		}
	

		if (Action12.Pos()== ACTION12OFF && servoCtrl){
			servoSwitch = (SERVO5_SWITCH +1);
			 servoCtrl=false;
		  }
		break;
		
	  case SERVO6_SWITCH :
		if (Action12.Pos()== ACTION12ON && !toggleAction){
		  servoCtrl=true;     
		}
		

		if (Action12.Pos()== ACTION12OFF && servoCtrl){
			servoSwitch = (SERVO6_SWITCH +1);
			servoCtrl=false;
		  }
		break;
		
		case END_SWITCH  :
		
			servoSwitch = 1;
			
		break;
	 }

  #endif 

  #ifdef ACTION1_MULTI

   switch(action1Switch){

    case 0 :
    
    if (Fishing && ! manualServo){
       action1Switch=1;}

    break;
    
   
    case ACTION1_SWITCH1 :
    if (Action12.Pos()== ACTION12ON && Fishing ){
      action1Ctrl=true;     
    }
  

    if (Action12.Pos()== ACTION12OFF && action1Ctrl) {
      action1Switch = (ACTION1_SWITCH1 +1);
       action1Ctrl=false;
      }
    break;
    
    case ACTION1_SWITCH2  :
    if (Action12.Pos()== ACTION12ON && Fishing ){
      action1Ctrl=true;     
    }
    

    if (Action12.Pos()== ACTION12OFF && action1Ctrl){
      action1Switch = (ACTION1_SWITCH2 +1);
      action1Ctrl=false;
      }
    break;
   

   case ACTION1_SWITCH3  :
    if (Action12.Pos()== ACTION12ON && Fishing ){
      action1Ctrl=true;     
    }
    
    if (Action12.Pos()== ACTION12OFF && action1Ctrl){
      action1Switch = (ACTION1_SWITCH3 +1);
       action1Ctrl=false;
      }
    break;

    case ACTION1_SWITCH4  :
    if (Action12.Pos()== ACTION12ON && Fishing ){
      action1Ctrl=true;     
    }
    

    if (Action12.Pos()== ACTION12OFF && action1Ctrl){
      action1Switch = (ACTION1_SWITCH4 +1);
      action1Ctrl=false;
      }
    break;
   

   case ACTION1_SWITCH5  :
    if (Action12.Pos()== ACTION12ON && Fishing ){
      action1Ctrl=true;     
    }
    
    if (Action12.Pos()== ACTION12OFF && action1Ctrl){
      action1Switch = (ACTION1_SWITCH5 +1);
       action1Ctrl=false;
      }
    break;
    
    
    case ACTION1_END_SWITCH  :
    
      action1Switch = 2;
      
    break;
   }
	 
  #endif	 
	
	 
#endif 	  

 
}//init
}//action()
