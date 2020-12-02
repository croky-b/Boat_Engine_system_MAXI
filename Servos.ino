//
// =======================================================================================================
// SERVOS
// =======================================================================================================
//


void Servos()


{ if ( Init) {
/*
static unsigned long lastStateTime;

 if (millis() - lastStateTime > 300)     // Print the data every 300ms
  {
    lastStateTime = millis();

    Serial.println(AnchorSpeedDown);
    Serial.println(Mouillage);
    
  }
*/
#ifdef ACTION2_ENABLE

     if (Mouillage && !AncreBas){
       ANCHOR.writeMicroseconds(AnchorSpeedDown);
     }

     else if (!Mouillage && AncreBas){
       ANCHOR.writeMicroseconds(AnchorSpeedUp);
     }
	 

     if(AncreStop){
      
       ANCHOR.writeMicroseconds(1500);
       AnchorSpeedDown = 1600;
       AnchorSpeedUp = 1400;
     }


    


  
#endif
    
#ifdef ACTION7_ENABLE

    if (monServo1.isStopped() && GunMove ) {
      monServo1.goTo(1.0);

      if (monServo1.isStopped() && monServo2.isStopped() ) {
        monServo2.goTo(1.0);
        if (monServo1.isStopped() && monServo2.isStopped() ) {

          GunServo = true;
          GunServoMillis = millis();
        }

      }
    }



    else if (monServo2.isStopped() && monServo3.isStopped() && !GunMove )
    { GunServo = false;
     

      if (millis() - GunServoMillis > 5000) {
        monServo2.goTo(0.0);


        if (monServo1.isStopped() && monServo2.isStopped() ) {
          monServo1.goTo(0.0);


        }
      }

    }
	
	
#endif	
	
	}
}
