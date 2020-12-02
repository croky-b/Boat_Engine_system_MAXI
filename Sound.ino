//
// =======================================================================================================
// SOUND
// =======================================================================================================
//




void triggerSound()
{
  if (Init)
  {
    //
    // =======================================================================================================
    // STANDARD SOUND
    // =======================================================================================================
    //



#ifdef ANCHORSOUND     
     Ancre.Volume=50;

     if (Mouillage && !AncreBas ){
      AncreStop=false;
     
       if ( Ancre.Playing == true && Ancre.TimeElapsed > 10000){
          AncreBas=true;
       } 
       if (Ancre.Playing == false) {
       DacAudio.Play(&Ancre, true);
       }
    } 

    
     else if (!Mouillage && AncreBas ){
      AncreStop=false;
      
      if ( Ancre.Playing == true && Ancre.TimeElapsed > 10000){
          AncreBas=false;
         } 
      if (Ancre.Playing == false) {
       DacAudio.Play(&Ancre, true);
       }
    }
    

    if(Ancre.Playing==false){
      AncreStop=true;
     }


      if (!AncreBas && Ancre.Playing == true && Ancre.TimeElapsed > 8000 && Ancre.TimeElapsed < 10500){
          
           AnchorSpeedDown -= 8; 
           if (AnchorSpeedDown <1500 ){
            AnchorSpeedDown = 1500; 
        }
    }

     if (AncreBas && Ancre.Playing == true && Ancre.TimeElapsed > 8000 && Ancre.TimeElapsed < 10500){
          
           AnchorSpeedUp += 8; 
           if ( AnchorSpeedUp >1500 ){
            AnchorSpeedUp = 1500; 
        }
     }

  #endif 

  
  #ifdef ACTION3_ENABLE
    if (Fog)
    {
      
      if (engineOn && !Fishing && !Mouillage) {
        
       //Son Long toutes les 2min 
       #if not defined PILOTBOAT
       if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence6.RemoveAllPlayItems();
          sequence6();
          DacAudio.Play(&Sequence6, true);
    }

     #else
        //4 son courts
      if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence15.RemoveAllPlayItems();
          sequence15();
          DacAudio.Play(&Sequence15, true);
       
        }
      #endif  
        
      }

      // Sons Long et 2 courts toutes les 2min
      if (engineOn && Fishing) {
        // Bateau remorqué 1 Son long 3 courts  
    #if defined OTHERBOAT
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence16.RemoveAllPlayItems();
          sequence16();
          DacAudio.Play(&Sequence16, true);
        }
    // 4 sons courts toutes les 2min
    #elif PILOTBOAT
    if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence15.RemoveAllPlayItems();
          sequence15();
          DacAudio.Play(&Sequence15, true);
    } 
    // Sons Long et 2 courts toutes les 2min    
    #else
    if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence8.RemoveAllPlayItems();
          sequence8();
          DacAudio.Play(&Sequence8, true);
    }
  #endif
      }

      
      //2 sons Long toutes les 2min
      if (!engineOn && !Fishing && !Mouillage) {
        if (millis() - FogSoundMillis > 120000) {
          FogSoundMillis = millis();
          Sequence7.RemoveAllPlayItems();
          sequence7();
          DacAudio.Play(&Sequence7, true);
        }
      }
      //cloche tout le minute
      if (!engineOn && Mouillage) {
        if (millis() - BellMillis > 60000) {
    
          BellMillis = millis();
	 #ifdef INTER
          Sequence10.RemoveAllPlayItems();
          sequence10();
          DacAudio.Play(&Sequence10, true);
     #endif 
     
     #ifdef SHORT
     
          Sequence14.RemoveAllPlayItems();
          sequence14();
          DacAudio.Play(&Sequence14, true);
     #endif
     
        }
      }

    }
#endif

 #ifdef ACTION4_ENABLE
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

      else  {
      }

    }
	
 #endif
	
	#ifdef ACTION5_ENABLE

    if (Avertissement) {

				if ((Short_blast.TimeElapsed > 5 && Short_blast.TimeElapsed < 1200 )||(Long_blast.TimeElapsed > 5 && Long_blast.TimeElapsed < 3600 ))
					{ Manoeuvre_Led = true;}

				else { Manoeuvre_Led = false;}

    /// Depasse par la gauche 2 Long 2 court
    if (CH4.momentaryPos() == 1)
    { Sequence1.RemoveAllPlayItems();
      sequence1();
      DacAudio.Play(&Sequence1, true);

    }
    /// Depasse par la droite  deux long 1 court
    else if (CH4.momentaryPos() == 3)
    {
      Sequence2.RemoveAllPlayItems();
      sequence2();
      DacAudio.Play(&Sequence2, true);

    }

    else  {

    }

    /// Acceptation Long court long court
   if (CH2.momentaryPos() == 3)
    {
      Sequence13.RemoveAllPlayItems();
      sequence13();
      DacAudio.Play(&Sequence13, true);

    }

    
 }
 
	#endif

 
    
//
// =======================================================================================================
// SPECIAL SOUND
// =======================================================================================================
//

#ifdef ACTION8_ENABLE
	#if defined RINGALARM
    
	if (Ring_Sound){
		
		if (Ring.Playing == false) {
			
       		DacAudio.Play(&Ring, true);
		}
      }

    if (Alarm_Sound){
    
		if (Alarm.Playing == false) {
       
			DacAudio.Play(&Alarm, true);
			}

			if (Ring.Playing == false) {
			DacAudio.Play(&Ring, true);}
  }

 #else
    if (Alarm_Sound){
    
		if (Alarm.Playing == false) {
       
		DacAudio.Play(&Alarm, true);
		}
 
  }

	#endif

#endif 

 #ifdef ACTION6_ENABLE
    if(MachineGunSound ){

      if (Sequence12.Playing == false) {
      Sequence12.RemoveAllPlayItems();
      sequence12();
      DacAudio.Play(&Sequence12, true);
    }
    }
	
	
	 if (AAGun.TimeElapsed > 50 && AAGun.TimeElapsed < 80 ) {
      machinGunFlash = true;
    }

    else machinGunFlash = false;
 
#endif  

#ifdef ACTION7_ENABLE

    if (GunServo ) {

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

 #endif   


  } //fin init
}// fin triggersound 




// Avertissement demande par babord
void sequence1() {



  Sequence1.AddPlayItem(&Long_blast);
  Sequence1.AddPlayItem(&Long_blast);
  Sequence1.AddPlayItem(&Short_blast);
  Sequence1.AddPlayItem(&Short_blast);

}

// Avertissement demande par tribord
void sequence2() {


  Sequence2.AddPlayItem(&Long_blast);
  Sequence2.AddPlayItem(&Long_blast);
  Sequence2.AddPlayItem(&Short_blast);

}
//manoeuvre babord
void sequence3() {

  Sequence3.AddPlayItem(&Short_blast);
  Sequence3.AddPlayItem(&Short_blast);

}
//manoeuvre tribord
void sequence4() {

  Sequence4.AddPlayItem(&Short_blast);

}

//manoeuvre battre en arriere
void sequence5() {

  Sequence5.AddPlayItem(&Short_blast);
  Sequence5.AddPlayItem(&Short_blast);
  Sequence5.AddPlayItem(&Short_blast);
}

// avec erre 
void sequence6() {

  Sequence6.AddPlayItem(&Long_blast);

}
//sans erre
void sequence7() {

  Sequence7.AddPlayItem(&Long_blast);
  Sequence7.AddPlayItem(&Long_blast);
}
//navire privilegie
void sequence8() {

  Sequence8.AddPlayItem(&Long_blast);
  Sequence8.AddPlayItem(&Short_blast);
  Sequence8.AddPlayItem(&Short_blast);
}
//mouillage +20m
void sequence10() {

  Sequence10.AddPlayItem(&Bell);

}
//canon
void sequence11() {

  Sequence11.AddPlayItem(&Gun);

}
//mitraillette
void sequence12() {

  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  Sequence12.AddPlayItem(&AAGun);
  
  
}

// Avertissement acceptation 
void sequence13() { 


  Sequence13.AddPlayItem(&Long_blast);
  Sequence13.AddPlayItem(&Short_blast);
  Sequence13.AddPlayItem(&Long_blast);
  Sequence13.AddPlayItem(&Short_blast);

}
// mouillage -20m
void sequence14() { 
 
  Sequence14.AddPlayItem(&Short_blast);
  Sequence14.AddPlayItem(&Long_blast);
  Sequence14.AddPlayItem(&Short_blast);

}
// pilot boat 
void sequence15() { 
 
  Sequence15.AddPlayItem(&Short_blast);
  Sequence15.AddPlayItem(&Short_blast);
  Sequence15.AddPlayItem(&Short_blast);
  Sequence15.AddPlayItem(&Short_blast);

}

// Remorqué
void sequence16() { 
 
  Sequence16.AddPlayItem(&Long_blast);
  Sequence16.AddPlayItem(&Short_blast);
  Sequence16.AddPlayItem(&Short_blast);
  Sequence16.AddPlayItem(&Short_blast);

}
