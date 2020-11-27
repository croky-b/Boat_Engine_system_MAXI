
volatile boolean AncreBas = false;
volatile boolean AncreStop = false;


void Action() {
  // ACTION1= PECHE
  if (Action1.Pos() == ACTION1ON) {
    Fishing = true;
    Fishing_Led = true;
  }
  if (Action1.Pos() == ACTION1OFF) {
    Fishing = false;
    Fishing_Led = false;
  }
  if (Action1.Pos() == ACTION1NA) {
  }
  ////////////////////////////////////
  //ACTION2=MOUILLAGE
  if (Action2.Pos() == ACTION2NA) {
  }
  if (Action2.Pos() == ACTION2OFF) {
    Mouillage = false;
    BellMillis = millis();
  }
  if (Action2.Pos() == ACTION2ON) {
    Mouillage = true;
  }

   if (Action2.momentaryPos() == ACTION2NA) {
  }
  if (Action2.Pos() == ACTION2OFF) {
    if (AncreBas &&  AncreStop){
       DacAudio.Play(&Ancre);
       if(Ancre.Playing==false){
        AncreBas=false;
        AncreStop=true;
       }
    }
  }
  if (Action2.momentaryPos() == ACTION2ON) {

  if (!AncreBas &&  AncreStop){
             DacAudio.Play(&Ancre);
              if(Ancre.Playing==false){
               AncreStop= true;
               AncreBas = true;    
               }
   }
  }


  
  ////////////////////////////////////
  //ACTION3= FOG
  if (Action3.Pos() == ACTION3NA) {
  }
  if (Action3.Pos() == ACTION3OFF) {
    Fog_Led = false;
    Fog = false;
    SoundMillis = millis();
  }
  if (Action3.Pos() == ACTION3ON) {
    Fog = true;
    Fog_Led = true;
  }
  ////////////////////////////////////
  //ACTION4= MANOEUVRE
  if (Action4.Pos() == ACTION4ON) {
    Maneuvre = true;
    Manoeuvre_Led = true;
  }
  if (Action4.Pos() == ACTION4OFF) {
    Maneuvre = false;
    Manoeuvre_Led = false;
  }
  if (Action4.Pos() == ACTION4NA) {
  }
  ////////////////////////////////////
  //ACTION5=AVERTISSEMENT
  if (Action5.Pos() == ACTION5ON) {
    Avertissement = true;
  }
  if (Action5.Pos() == ACTION5OFF) {
    Avertissement = false;
  }
  if (Action5.Pos() == ACTION5NA) {
  }

//////////////////////////////////////////
  if (Action6.momentaryPos() == ACTION6NA) {

    }
  if (Action6.momentaryPos() == ACTION6OFF) {

    }
  if (Action6.momentaryPos() == ACTION6ON) {

      Sequence12.RemoveAllPlayItems();
      sequence12();
      DacAudio.Play(&Sequence12, true);

    }
//////////////////////////////////////////
  if (Action7.momentaryPos() == ACTION7NA) {

    }
  if (Action7.momentaryPos() == ACTION7OFF) {

    }
  if (Action7.momentaryPos() == ACTION7ON) {

      Sequence11.RemoveAllPlayItems();
      sequence11();
      DacAudio.Play(&Sequence11, true);

    }  
    
//////////////////////////////////////////

 if (Action8.momentaryPos() == ACTION8ON) {
      Alarm_Sound = true;
	  
	  Alarm.RepeatForever = true;
      DacAudio.Play(&Alarm, true);
	  
    }
 if (Action8.momentaryPos() == ACTION8NA) {

    }
 if (Action8.momentaryPos() == ACTION8OFF) {
      
	  Alarm_Sound=false;
	  DacAudio.StopAllSounds();

    }
 
 
  if (Action8.Pos() == ACTION8ON) {
    Alarm_Led = true;
  }
  if (Action8.Pos() == ACTION8OFF) {
    Alarm_Led = false;
  }
  if (Action8.Pos() == ACTION8NA) {
  }
  //////////////////////////////////////////
 
  if (Action9.Pos() == ACTION9ON) {
    LightManualOn = true;
  }
  if (Action9.Pos() == ACTION9OFF) {
    LightManualOn = false;
  }
  if (Action9.Pos() == ACTION9NA) {
  }
  //////////////////////////////////////////
  if (Action10.Pos() == ACTION10NA) {
  }
  if (Action10.Pos() == ACTION10OFF) {
    Action10_Led = false;
  }
  if (Action10.Pos() == ACTION10ON) {
    Action10_Led = true;
  }
}
