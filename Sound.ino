//
// =======================================================================================================
// HORN TRIGGERING, SIREN TRIGGERING, SOUND1 TRIGGERING
// =======================================================================================================
//
volatile boolean Maneuvre = false;
volatile boolean Fog = false;
volatile boolean Shipping = false;
volatile boolean Mouillage = false;
static unsigned long SoundMillis;
static unsigned long BellMillis;
static unsigned long GunMillis;

void triggerSound()
{
  if (Init)
  {
    //
    // =======================================================================================================
    // STANDARD SOUND
    // =======================================================================================================
    //


    if (CH6.Pos() == 3) {
      Shipping = true;
    }
    if (CH6.Pos() == 2) {
      Shipping = false;
      Mouillage = false;
      BellMillis = millis();
    }
    if (CH6.Pos() == 1) {
      Mouillage = true;
    }

    if (CH7.Pos() == 3) {
      Maneuvre = true;
    }
    if (CH7.Pos() == 2) {
      Maneuvre = false;
      Fog = false;
      SoundMillis = millis();
    }

    if (CH7.Pos() == 1) {
      Fog = true;
    }


    if (Fog)
    {
      //Son Long toutes les 2min
      if (engineOn && !Shipping && !Mouillage) {
        if (millis() - SoundMillis > 120000) {
          SoundMillis = millis();
          Sequence6.RemoveAllPlayItems();
          sequence6();
          DacAudio.Play(&Sequence6, true);
        }
      }

      // Sons Long et 2 courts toutes les 2min
      if (engineOn && Shipping) {
        if (millis() - SoundMillis > 120000) {
          SoundMillis = millis();
          Sequence8.RemoveAllPlayItems();
          sequence8();
          DacAudio.Play(&Sequence8, true);
        }
      }
      //2 sons Long toutes les 2min
      if (!engineOn && !Shipping && !Mouillage) {
        if (millis() - SoundMillis > 120000) {
          SoundMillis = millis();
          Sequence7.RemoveAllPlayItems();
          sequence7();
          DacAudio.Play(&Sequence7, true);
        }
      }
      //cloche tout le minute
      if (!engineOn && Mouillage) {
        if (millis() - BellMillis > 60000) {
          BellMillis = millis();
          Sequence10.RemoveAllPlayItems();
          sequence10();
          DacAudio.Play(&Sequence10, true);
        }
      }

    }



    if (Maneuvre) {
      /// marche arriere 3 Sons bref
      if (CH3.momentaryPos() == 1) {
        Sequence5.RemoveAllPlayItems();
        sequence5();
        DacAudio.Play(&Sequence5, true);
      }

      /// Vire a gauche deux sons court
      if (CH1.momentaryPos() == 1)
      {


        Sequence3.RemoveAllPlayItems();
        sequence3();
        DacAudio.Play(&Sequence3, true);


      }
      /// Vire a droite 1 son court
      else if (CH1.momentaryPos() == 3)
      {

        Sequence4.RemoveAllPlayItems();
        sequence4();
        DacAudio.Play(&Sequence4, true);

      }

      else if (CH1.momentaryPos() == 2) {

      }

    }


    /// Depasse par la gauche 2 Long 2 court
    if (CH4.momentaryPos() == 1)
    {

      Sequence1.RemoveAllPlayItems();
      sequence1();
      DacAudio.Play(&Sequence1, true);

    }
    /// Depasse par la droite  deux long 1 court
    if (CH4.momentaryPos() == 3)
    {
      Sequence2.RemoveAllPlayItems();
      sequence2();
      DacAudio.Play(&Sequence2, true);

    }

    else if (CH4.momentaryPos() == 2) {

    }


    //
    // =======================================================================================================
    // SPECIAL SOUND
    // =======================================================================================================
    //

    if (CH9.momentaryPos() == 3) {

    }
    if (CH9.momentaryPos() == 2) {

    }
    if (CH9.momentaryPos() == 1) {

      Sequence12.RemoveAllPlayItems();
      sequence12();
      DacAudio.Play(&Sequence12, true);

    }

    if (CH10.momentaryPos() == 3) {
      Alarm.RepeatForever = true;
      DacAudio.Play(&Alarm, true);
    }
    if (CH10.momentaryPos() == 2) {

    }
    if (CH10.momentaryPos() == 1) {
      DacAudio.StopAllSounds();

    }

    if (GunServo) {

      if (Sequence11.Playing == false) {
        Sequence11.RemoveAllPlayItems();

        sequence11();

        DacAudio.Play(&Sequence11, true);
      }

    }

    if (Gun.TimeElapsed > 50 && Gun.TimeElapsed < 100 ) {
      cannonFlash = true;
    }

    else cannonFlash = false;


  }
}

void sequence1() {



  Sequence1.AddPlayItem(&Long_blast);
  Sequence1.AddPlayItem(&Long_blast);
  Sequence1.AddPlayItem(&Short_blast);
  Sequence1.AddPlayItem(&Short_blast);

}


void sequence2() {


  Sequence2.AddPlayItem(&Long_blast);
  Sequence2.AddPlayItem(&Long_blast);
  Sequence2.AddPlayItem(&Short_blast);

}

void sequence3() {

  Sequence3.AddPlayItem(&Short_blast);
  Sequence3.AddPlayItem(&Short_blast);

}

void sequence4() {

  Sequence4.AddPlayItem(&Short_blast);

}
void sequence5() {

  Sequence5.AddPlayItem(&Short_blast);
  Sequence5.AddPlayItem(&Short_blast);
  Sequence5.AddPlayItem(&Short_blast);
}

void sequence6() {

  Sequence6.AddPlayItem(&Long_blast);

}
void sequence7() {

  Sequence7.AddPlayItem(&Long_blast);
  Sequence7.AddPlayItem(&Long_blast);
}
void sequence8() {

  Sequence8.AddPlayItem(&Long_blast);
  Sequence8.AddPlayItem(&Short_blast);
  Sequence8.AddPlayItem(&Short_blast);
}
void sequence10() {

  Sequence10.AddPlayItem(&Bell);

}
void sequence11() {

  Sequence11.AddPlayItem(&Gun);

}
void sequence12() {

  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);
  Sequence12.AddPlayItem(&AA_Gun_L);

}
