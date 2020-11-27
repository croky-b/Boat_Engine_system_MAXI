//
// =======================================================================================================
// SERVOS
// =======================================================================================================
//
volatile boolean Gun1 = false;
static unsigned long GunServoMillis;
void Servos()


{ if ( Init) {

    

    if (monServo1.isStopped() && Action7.Pos() == ACTION7ON) {
      monServo1.goTo(1.0);

      if (monServo1.isStopped() && monServo2.isStopped() ) {
        monServo2.goTo(1.0);
        if (monServo1.isStopped() && monServo2.isStopped() ) {

          GunServo = true;
          GunServoMillis = millis();
        }

      }
    }



    else if (monServo2.isStopped() && monServo3.isStopped() && Action7.Pos() == ACTION7OFF)
    { GunServo = false;
      monServo3.goTo(0.5);

      if (millis() - GunServoMillis > 5000) {
        monServo2.goTo(0.0);


        if (monServo1.isStopped() && monServo2.isStopped() ) {
          monServo1.goTo(0.0);


        }
      }

    }

    else if (monServo3.isStopped() && Action6.Pos() == ACTION6ON) {
      monServo3.goTo(1.0);
      if (monServo3.isStopped()) {
        monServo3.goTo(0.0);

      }
    }

  }

}
