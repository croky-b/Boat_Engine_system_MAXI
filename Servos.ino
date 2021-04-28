//
// =======================================================================================================
// 													SERVOS
// =======================================================================================================
//

void Servos()

{

//if (Init) {
     
 /*  

    static unsigned long lastStateTime;

     if (millis() - lastStateTime > 100)     // Print the data every 300ms
      {
        lastStateTime = millis();
      Serial.println(manualServo);
      Serial.println(CH4.momentaryPos());
     
  
    
     
 
             
      }


*/
      
 

    #ifdef ACTION2_ENABLE
     #ifdef ANCHORMOTOR

        #ifdef ANCHORMOTOR_1
    if (Mouillage && !AncreBas) {
      
      Servo1.writeMicroseconds(AnchorSpeedDown);
    } else if (!Mouillage && AncreBas) {
      Servo1.writeMicroseconds(AnchorSpeedUp);
    }

    if (AncreStop) {

      Servo1.writeMicroseconds(1500);
      AnchorSpeedDown = 1600;
      AnchorSpeedUp = 1400;
    }
        #endif
        
      #ifdef ANCHORMOTOR_2
    if (Mouillage && !AncreBas) {
      
      Servo2.writeMicroseconds(AnchorSpeedDown);
    } else if (!Mouillage && AncreBas) {
      Servo2.writeMicroseconds(AnchorSpeedUp);
    }

    if (AncreStop) {

      Servo2.writeMicroseconds(1500);
      AnchorSpeedDown = 1600;
      AnchorSpeedUp = 1400;
    }
        #endif 

       #ifdef ANCHORMOTOR_3
    if (Mouillage && !AncreBas) {
      
      Servo3.writeMicroseconds(AnchorSpeedDown);
    } else if (!Mouillage && AncreBas) {
      Servo3.writeMicroseconds(AnchorSpeedUp);
    }

    if (AncreStop) {

      Servo3.writeMicroseconds(1500);
      AnchorSpeedDown = 1600;
      AnchorSpeedUp = 1400;
    }
        #endif 

         #ifdef ANCHORMOTOR_4
    if (Mouillage && !AncreBas) {
      
      Servo4.writeMicroseconds(AnchorSpeedDown);
    } else if (!Mouillage && AncreBas) {
      Servo4.writeMicroseconds(AnchorSpeedUp);
    }

    if (AncreStop) {

      Servo4.writeMicroseconds(1500);
      AnchorSpeedDown = 1600;
      AnchorSpeedUp = 1400;
    }
        #endif 

       #ifdef ANCHORMOTOR_5
    if (Mouillage && !AncreBas) {
      
      Servo5.writeMicroseconds(AnchorSpeedDown);
    } else if (!Mouillage && AncreBas) {
      Servo5.writeMicroseconds(AnchorSpeedUp);
    }

    if (AncreStop) {

      Servo5.writeMicroseconds(1500);
      AnchorSpeedDown = 1600;
      AnchorSpeedUp = 1400;
    }
        #endif 
         #ifdef ANCHORMOTOR_6
    if (Mouillage && !AncreBas) {
      
      Servo6.writeMicroseconds(AnchorSpeedDown);
    } else if (!Mouillage && AncreBas) {
      Servo6.writeMicroseconds(AnchorSpeedUp);
    }

    if (AncreStop) {

      Servo6.writeMicroseconds(1500);
      AnchorSpeedDown = ANCOR_SPEED_DOWN;
      AnchorSpeedUp = ANCOR_SPEED_UP;
    }
        #endif           
    
      #endif 
    #endif

   

  
	
#ifdef ACTION12_ENABLE

  #ifdef ACT12SERVOSWITCH

    if ((!engineOn && !manualServo &&!servoHome)) {
     
    #ifdef SERVO1_HOME
        if (servoPulse[1]<SERVO_START[1]){
          
          if (millis() - servoTime[1] > 10) {
            servoTime[1] = millis();
            servoPulse[1] += servoStep;
            if (servoPulse[1] > SERVO_START[1])
              servoPulse[1] = SERVO_START[1];
          }
        }
      
      
         else if (servoPulse[1]>SERVO_START[1]){
          
          if (millis() - servoTime[1] > 10) {
            servoTime[1] = millis();
            servoPulse[1] -= servoStep;
            if (servoPulse[1] < SERVO_START[1])
              servoPulse[1] = SERVO_START[1];
          }
        } 

        #endif 

        #ifdef SERVO2_HOME

        if (servoPulse[2]<SERVO_START[2]){
          
          if (millis() - servoTime[2] > 10) {
            servoTime[2] = millis();
            servoPulse[2] += servoStep;
            if (servoPulse[2] > SERVO_START[2])
              servoPulse[2] = SERVO_START[2];
          }
        }
      
      
         else if (servoPulse[2]>SERVO_START[2]){
          
          if (millis() - servoTime[2] > 10) {
            servoTime[2] = millis();
            servoPulse[2] -= servoStep;
            if (servoPulse[2] < SERVO_START[2])
              servoPulse[2] = SERVO_START[2];
          }
        } 

        #endif

        #ifdef SERVO3_HOME

        if (servoPulse[3]<SERVO_START[3]){
          
          if (millis() - servoTime[3] > 10) {
            servoTime[3] = millis();
            servoPulse[3] += servoStep;
            if (servoPulse[3] > SERVO_START[3])
              servoPulse[3] = SERVO_START[3];
          }
        }
      
      
         else if (servoPulse[3]>SERVO_START[3]){
          
          if (millis() - servoTime[3] > 10) {
            servoTime[3] = millis();
            servoPulse[3] -= servoStep;
            if (servoPulse[3] < SERVO_START[3])
              servoPulse[3] = SERVO_START[3];
          }
        } 

        #endif 
        #ifdef SERVO4_HOME

        if (servoPulse[4]<SERVO_START[4]){
          
          if (millis() - servoTime[4] > 10) {
            servoTime[4] = millis();
            servoPulse[4] += servoStep;
            if (servoPulse[4] > SERVO_START[4])
              servoPulse[4] = SERVO_START[4];
          }
        }
      
      
         else if (servoPulse[4]>SERVO_START[4]){
          
          if (millis() - servoTime[4] > 10) {
            servoTime[4] = millis();
            servoPulse[4] -= servoStep;
            if (servoPulse[4] < SERVO_START[4])
              servoPulse[4] = SERVO_START[4];
          }
        } 

        #endif
        #ifdef SERVO5_HOME

        if (servoPulse[5]<SERVO_START[5]){
          
          if (millis() - servoTime[5] > 10) {
            servoTime[5] = millis();
            servoPulse[5] += servoStep;
            if (servoPulse[5] > SERVO_START[5])
              servoPulse[5] = SERVO_START[5];
          }
        }
      
      
         else if (servoPulse[5]>SERVO_START[5]){
          
          if (millis() - servoTime[5] > 10) {
            servoTime[5] = millis();
            servoPulse[5] -= servoStep;
            if (servoPulse[5] < SERVO_START[5])
              servoPulse[5] = SERVO_START[5];
          }
        }

        #endif

        #ifdef SERVO6_HOME

        if (servoPulse[6]<SERVO_START[6]){
          
          if (millis() - servoTime[6] > 10) {
            servoTime[6] = millis();
            servoPulse[6] += servoStep;
            if (servoPulse[6] > SERVO_START[6])
              servoPulse[6] = SERVO_START[6];
          }
        }
      
      
         else if (servoPulse[6]>SERVO_START[6]){
          
          if (millis() - servoTime[6] > 10) {
            servoTime[6] = millis();
            servoPulse[6] -= servoStep;
            if (servoPulse[6] < SERVO_START[6])
              servoPulse[6] = SERVO_START[6];
          }
        } 

        #endif 

        
        Servo1.writeMicroseconds(servoPulse[1]);
        Servo2.writeMicroseconds(servoPulse[2]);
        Servo3.writeMicroseconds(servoPulse[3]);
        Servo4.writeMicroseconds(servoPulse[4]);
        Servo5.writeMicroseconds(servoPulse[5]);
        Servo6.writeMicroseconds(servoPulse[6]);
        servoHome=true;

      }


    if ((servoPulse[1]>SERVO_START[1]) || (servoPulse[1]<SERVO_START[1])||(servoPulse[2]>SERVO_START[2]) || (servoPulse[2]<SERVO_START[2])||(servoPulse[3]>SERVO_START[3]) || (servoPulse[3]<SERVO_START[3])||(servoPulse[4]>SERVO_START[4]) || (servoPulse[4]<SERVO_START[4])||(servoPulse[5]>SERVO_START[5]) || (servoPulse[5]<SERVO_START[5])||(servoPulse[6]>SERVO_START[6]) || (servoPulse[6]<SERVO_START[6])){
       servoHome=false;
    }


 #ifdef TWO_AXIS_SERVO

      if (servoSwitch == 1) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 950)) {
          if (millis() - servoTime[1] > 10) {
            servoTime[1] = millis();
            servoPulse[1] += servoStep;
            if (servoPulse[1] > SERVO_MAX)
              servoPulse[1] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[1] > 10) {
            servoTime[1] = millis();
            servoPulse[1] -= servoStep;
            if (servoPulse[1] < SERVO_MIN)
              servoPulse[1] = SERVO_MIN;
          }
        } else {
          servoTime[1] = millis();
        }

        Servo1.writeMicroseconds(servoPulse[1]);

        if ((pulseWidth[ElCh - 1] < 1450) && (pulseWidth[ElCh - 1] > 900)) {
          if (millis() - servoTime[2] > 10) {
            servoTime[2] = millis();
            servoPulse[2] += servoStep;
            if (servoPulse[2] > SERVO_MAX)
              servoPulse[2] = SERVO_MAX;
          }
        } else if ((pulseWidth[ElCh - 1] > 1550) && (pulseWidth[ElCh - 1] < 2000))

        {
          if (millis() - servoTime[2] > 10) {
            servoTime[2] = millis();
            servoPulse[2] -= servoStep;
            if (servoPulse[2] < SERVO_MIN)
              servoPulse[2] = SERVO_MIN;
          }
        } else {
          servoTime[2] = millis();
        }

        Servo2.writeMicroseconds(servoPulse[2]);

      }

      if (servoSwitch == 2) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[3] > 10) {
            servoTime[3] = millis();
            servoPulse[3] += servoStep;
            if (servoPulse[3] > SERVO_MAX)
              servoPulse[3] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[3] > 10) {
            servoTime[3] = millis();
            servoPulse[3] -= servoStep;
            if (servoPulse[3] < SERVO_MIN)
              servoPulse[3] = SERVO_MIN;
          }
        } else {
          servoTime[3] = millis();
        }

        Servo3.writeMicroseconds(servoPulse[3]);

        if ((pulseWidth[ElCh - 1] < 1450) && (pulseWidth[ElCh - 1] > 900)) {
          if (millis() - servoTime[4] > 10) {
            servoTime[4] = millis();
            servoPulse[4] += servoStep;
            if (servoPulse[4] > SERVO_MAX)
              servoPulse[4] = SERVO_MAX;
          }
        } else if ((pulseWidth[ElCh - 1] > 1550) && (pulseWidth[ElCh - 1] < 2000))

        {
          if (millis() - servoTime[4] > 10) {
            servoTime[4] = millis();
            servoPulse[4] -= servoStep;
            if (servoPulse[4] < SERVO_MIN)
              servoPulse[4] = SERVO_MIN;
          }
        } else {
          servoTime[4] = millis();
        }

        Servo4.writeMicroseconds(servoPulse[4]);

      }

      if (servoSwitch == 3) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[5] > 10) {
            servoTime[5] = millis();
            servoPulse[5] += servoStep;
            if (servoPulse[5] > SERVO_MAX)
              servoPulse[5] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[5] > 10) {
            servoTime[5] = millis();
            servoPulse[5] -= servoStep;
            if (servoPulse[5] < SERVO_MIN)
              servoPulse[5] = SERVO_MIN;
          }
        } else {
          servoTime[5] = millis();
        }

        Servo5.writeMicroseconds(servoPulse[5]);

        

        if ((pulseWidth[ElCh - 1] < 1450) && (pulseWidth[ElCh - 1] > 900)) {
          if (millis() - servoTime[6] > 10) {
            servoTime[6] = millis();
            servoPulse[6] += servoStep;
            if (servoPulse[6] > SERVO_MAX)
              servoPulse[6] = SERVO_MAX;
          }
        } else if ((pulseWidth[ElCh - 1] > 1550) && (pulseWidth[ElCh - 1] < 2000))

        {
          if (millis() - servoTime[6] > 10) {
            servoTime[6] = millis();
            servoPulse[6] -= servoStep;
            if (servoPulse[6] < SERVO_MIN)
              servoPulse[6] = SERVO_MIN;
          }
        } else {
          servoTime[6] = millis();
        }

        Servo6.writeMicroseconds(servoPulse[6]);

       

      }

   #else

  

      if (servoSwitch == 1) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 950)) {
          if (millis() - servoTime[1] > 10) {
            servoTime[1] = millis();
            servoPulse[1] += servoStep;
            if (servoPulse[1] > SERVO_MAX)
              servoPulse[1] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[1] > 10) {
            servoTime[1] = millis();
            servoPulse[1] -= servoStep;
            if (servoPulse[1] < SERVO_MIN)
              servoPulse[1] = SERVO_MIN;
          }
        } else {
          servoTime[1] = millis();
        }

        Servo1.writeMicroseconds(servoPulse[1]);

      }

      if (servoSwitch == 2) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[2] > 10) {
            servoTime[2] = millis();
            servoPulse[2] += servoStep;
            if (servoPulse[2] > SERVO_MAX)
              servoPulse[2] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[2] > 10) {
            servoTime[2] = millis();
            servoPulse[2] -= servoStep;
            if (servoPulse[2] < SERVO_MIN)
              servoPulse[2] = SERVO_MIN;
          }
        } else {
          servoTime[2] = millis();
        }

        Servo2.writeMicroseconds(servoPulse[2]);

      }

      if (servoSwitch == 3) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[3] > 10) {
            servoTime[3] = millis();
            servoPulse[3] += servoStep;
            if (servoPulse[3] > SERVO_MAX)
              servoPulse[3] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[3] > 10) {
            servoTime[3] = millis();
            servoPulse[3] -= servoStep;
            if (servoPulse[3] < SERVO_MIN)
              servoPulse[3] = SERVO_MIN;
          }
        } else {
          servoTime[3] = millis();
        }

        Servo3.writeMicroseconds(servoPulse[3]);

      }

      if (servoSwitch == 4) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[4] > 10) {
            servoTime[4] = millis();
            servoPulse[4] += servoStep;
            if (servoPulse[4] > SERVO_MAX)
              servoPulse[4] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[4] > 10) {
            servoTime[4] = millis();
            servoPulse[4] -= servoStep;
            if (servoPulse[4] < SERVO_MIN)
              servoPulse[4] = SERVO_MIN;
          }
        } else {
          servoTime[4] = millis();
        }

        Servo4.writeMicroseconds(servoPulse[4]);

      }

      if (servoSwitch == 5) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[5] > 10) {
            servoTime[5] = millis();
            servoPulse[5] += servoStep;
            if (servoPulse[5] > SERVO_MAX)
              servoPulse[5] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[5] > 10) {
            servoTime[5] = millis();
            servoPulse[5] -= servoStep;
            if (servoPulse[5] < SERVO_MIN)
              servoPulse[5] = SERVO_MIN;
          }
        } else {
          servoTime[5] = millis();
        }

        Servo5.writeMicroseconds(servoPulse[5]);

      }

    

      if (servoSwitch == 6) {

        if ((pulseWidth[AilCh - 1] < 1450) && (pulseWidth[AilCh - 1] > 900)) {
          if (millis() - servoTime[6] > 10) {
            servoTime[6] = millis();
            servoPulse[6] += servoStep;
            if (servoPulse[6] > SERVO_MAX)
              servoPulse[6] = SERVO_MAX;
          }
        } else if ((pulseWidth[AilCh - 1] > 1550) && (pulseWidth[AilCh - 1] < 2000))

        {
          if (millis() - servoTime[6] > 10) {
            servoTime[6] = millis();
            servoPulse[6] -= servoStep;
            if (servoPulse[6] < SERVO_MIN)
              servoPulse[6] = SERVO_MIN;
          }
        } else {
          servoTime[6] = millis();
        }

        Servo6.writeMicroseconds(servoPulse[6]);

      }

     #endif 

     #endif
   
#endif 


  // }


}
