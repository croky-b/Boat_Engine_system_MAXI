
void Multiswitch() {


#ifdef MULTISWITCH_TYPE2
 
if (pulseWidth[MULTI_2_CH-1] > 1550){
    CountUpok=true;
    CountUp2=0;
    MomentaryCountUpok=true;
    MomentaryCountUp2=0;
    }

if (pulseWidth[MULTI_2_CH-1] < 1450){
    CountDownok=true;     
    CountDown2=0;
    MomentaryCountDownok=true;
    MomentaryCountDown2=0;
    }  
    
if ((pulseWidth[MULTI_2_CH-1]> 1450)&&(pulseWidth[MULTI_2_CH-1]< 1550)&& (CountUpok) ){
       if (!CountUpStop){
       CountUp++;
       CountMillis= millis();
       CountUp2=CountUp;
       CountUpok=false;
      }
     
      }


if ((pulseWidth[MULTI_2_CH-1]> 1450)&&(pulseWidth[MULTI_2_CH-1]< 1550)&& (CountDownok) ){
       if (!CountDownStop){
       CountDown++;
       CountMillis= millis();
       CountDown2=CountDown;
       CountDownok=false;
      }
     
      }
if ((pulseWidth[MULTI_2_CH-1]> 1450)&&( pulseWidth[MULTI_2_CH-1]< 1550)){
      if ((millis() - CountMillis > 100 )&&(millis() - CountMillis <= 250 ))     
      {  CountUp=0;
         CountDown=0;
         }
      
      if ((millis() - CountMillis > 200 )&&(millis() - CountMillis <= 1500 )) 
     { CountUpStop=true;
       CountDownStop=true;
       MultiSwitch=true;
     
     
      }
      else {
      CountUpStop=false;
      CountDownStop=false;
      }
      }
      


if ((pulseWidth[MULTI_2_CH-1]> 1450)&&(pulseWidth[MULTI_2_CH-1]< 1550)&& MomentaryCountUpok){
        if (!MomentaryCountUpStop){
       MomentaryCountUp++;
       MomentaryCountMillis= millis();
       MomentaryCountUp2=MomentaryCountUp;
       MomentaryCountUpok=false;}
     
      }
if ((pulseWidth[MULTI_2_CH-1]> 1450)&&(pulseWidth[MULTI_2_CH-1]< 1550)&& MomentaryCountDownok){
        if (!MomentaryCountDownStop){
       MomentaryCountDown++;
       MomentaryCountMillis= millis();
       MomentaryCountDown2=MomentaryCountDown;
       MomentaryCountDownok=false;}
     
      }
          
if ((pulseWidth[MULTI_2_CH-1]> 1450)&&( pulseWidth[MULTI_2_CH-1]< 1550)){
     
      if ((millis() - MomentaryCountMillis > 100 )&&(millis() - MomentaryCountMillis <= 250 )) 
     { MomentaryCountUp=0;
       MomentaryCountDown=0;
       MomentaryMultiSwitch=true;
     
     
      }
      else {
      MomentaryMultiSwitch=false;
      }
       if ((millis() - MomentaryCountMillis > 350 )&&(millis() - MomentaryCountMillis <= 600 ))
       {
        
        MomentaryMultiSwitch=true;
        MomentaryCountUp2=0;
        MomentaryCountDown2=0;
      }

      
      }


#endif




#ifdef MULTISWITCH_TYPE2
if (MomentaryMultiSwitch){
  
    switch (MomentaryCountUp2) {
  case 0:
 #ifdef ACT1_MULTISWITCH
      if (!Act1Permanent){
      Act1=false;}
 #endif
 #ifdef ACT2_MULTISWITCH
     if (!Act2Permanent){
      Act2=false;}
 #endif     
#ifdef ACT3_MULTISWITCH      
    if (!Act3Permanent){
      Act3=false;}
#endif
#ifdef ACT4_MULTISWITCH
    if (!Act4Permanent){
      Act4=false;}
#endif
#ifdef ACT5_MULTISWITCH      
    if (!Act5Permanent){
      Act5=false;}
#endif      
#ifdef ACT6_MULTISWITCH
    if (!Act6Permanent){
      Act6=false;}
#endif
#ifdef ACT7_MULTISWITCH
    if (!Act7Permanent){
      Act7=false;}
#endif
#ifdef ACT8_MULTISWITCH      
    if (!Act8Permanent){
      Act8=false;}
#endif
#ifdef ACT9_MULTISWITCH
    if (!Act9Permanent){
      Act9=false;}
#endif
#ifdef ACT10_MULTISWITCH
    if (!Act10Permanent){
      Act10=false;}
#endif
#ifdef ACT12_MULTISWITCH
    if (!Act12Permanent){
      Act12=false;}
#endif
#ifdef SEQ6_MULTISWITCH
      Seq6=false;
      Seq60=false;

#endif
#ifdef SEQ7_MULTISWITCH
      Seq7=false;
      Seq70=false;

#endif
#ifdef SEQ1_MULTISWITCH
      Seq1=false;
      Seq10=false;

#endif
#ifdef SEQ2_MULTISWITCH
      Seq2=false;
      Seq20=false;

#endif 

 #ifdef ACTION11A_UP_MULTISWITCH
      if (!Act11A_UpPermanent){
      Act11A_UP=false;}
  #endif
 
  #ifdef ACTION11A_DOWN_MULTISWITCH
     if (!Act11A_DownPermanent){
      Act11A_DOWN=false;}
  #endif
  
  #ifdef ACTION11B_UP_MULTISWITCH
      if (!Act11B_UpPermanent){
      Act11B_UP=false;}
  #endif
 
  #ifdef ACTION11B_DOWN_MULTISWITCH
     if (!Act11B_DownPermanent){
      Act11B_DOWN=false;}
  #endif 
  
  #ifdef ACTION11C_UP_MULTISWITCH
      if (!Act11C_UpPermanent){
      Act11C_UP=false;}
  #endif
 
  #ifdef ACTION11C_DOWN_MULTISWITCH
     if (!Act11C_DownPermanent){
      Act11C_DOWN=false;}
  #endif 
  
  #ifdef ACTION11D_UP_MULTISWITCH
      if (!Act11D_UpPermanent){
      Act11D_UP=false;}
  #endif
 
  #ifdef ACTION11D_DOWN_MULTISWITCH
     if (!Act11D_DownPermanent){
      Act11D_DOWN=false;}
  #endif 

       

      MomentaryCountUp2=1;
    break;

 
  case 1:
      Act12Millis = millis();
      MomentaryMultiSwitch=false;
    ///Wait
    
    break;

 #ifdef ACT1_MULTISWITCH 
    
 case ACT1_MOM_MULTI_UP:
    
    #ifdef ACTION1_ENABLE
     
    Act1=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;

#endif    

#ifdef ACT2_MULTISWITCH    
  case ACT2_MOM_MULTI_UP:

   #ifdef ACTION2_ENABLE
   
 
    Act2=true;
  
  #endif 
  MomentaryCountUp2=1;
    
    break;

#endif

#ifdef ACT3_MULTISWITCH    
  case ACT3_MOM_MULTI_UP:


   #ifdef ACTION3_ENABLE
   
  
    Act3=true;
  
  #endif
  
  MomentaryCountUp2=1;
    break;
#endif
#ifdef ACT4_MULTISWITCH    
    
  case ACT4_MOM_MULTI_UP:
  
   #ifdef ACTION4_ENABLE
   

    Act4=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break; 
 #endif
 #ifdef ACT5_MULTISWITCH        
 case ACT5_MOM_MULTI_UP:
  
   #ifdef ACTION5_ENABLE
   
 
    Act5=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break; 
#endif
#ifdef ACT6_MULTISWITCH    
case ACT6_MOM_MULTI_UP:
  
   #ifdef ACTION6_ENABLE
   
  
    Act6=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break;
#endif
#ifdef ACT7_MULTISWITCH    
case ACT7_MOM_MULTI_UP:
  
   #ifdef ACTION7_ENABLE
   
  
    Act7=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break;
#endif
#ifdef ACT8_MULTISWITCH    
case ACT8_MOM_MULTI_UP:
  
   #ifdef ACTION8_ENABLE
   
  
    Act8=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break;
#endif
#ifdef ACT9_MULTISWITCH    
  case ACT9_MOM_MULTI_UP:
  
   #ifdef ACTION9_ENABLE
   
   
    Act9=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break;
#endif
#ifdef ACT10_MULTISWITCH    
  case ACT10_MOM_MULTI_UP:
  
   #ifdef ACTION10_ENABLE
   
   
    Act10=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break;

  #endif
  
  #ifdef ACT12_MULTISWITCH    
  case ACT12_MOM_MULTI_UP:
  
   #ifdef ACTION12_ENABLE
   
   
    Act12=true;
  
  #endif
  
  MomentaryCountUp2=1;
   break;

  #endif

 #ifdef SEQ6_MULTISWITCH 
 case SEQ6_MULTI_MOM_UP:
  
    #ifdef ACTION6_ENABLE
    
     Seq6=true;
    
     #endif
 
  MomentaryCountUp2=1;
   
    break;




case SEQ60_MULTI_MOM_UP:
  
    #ifdef ACTION6_ENABLE
    
     Seq6b=true;
    
     #endif
 
  MomentaryCountUp2=1;
   
    break;

#endif

#ifdef SEQ7_MULTISWITCH 
    
  case SEQ7_MULTI_MOM_UP:
  
    #ifdef ACTION7_ENABLE
     
     Seq7=true;
     
     #endif
 
  MomentaryCountUp2=1;
   
    break;

  case SEQ70_MULTI_MOM_UP:
  
    #ifdef ACTION7_ENABLE
   
     Seq7b=true;
    
     #endif
 
  MomentaryCountUp2=1;
   
    break;

#endif

#ifdef SEQ1_MULTISWITCH 
    
  case SEQ1_MULTI_MOM_UP:
  
    #ifdef SEQ1_ENABLE
    
     Seq1=true;
      
     #endif
 
  MomentaryCountUp2=1;
   
    break;

  case SEQ10_MULTI_MOM_UP:
  
    #ifdef ACTION1_ENABLE
    
     Seq1b=true;
     
     #endif
 
  MomentaryCountUp2=1;
   
    break;

#endif

#ifdef SEQ2_MULTISWITCH 
    
  case SEQ2_MULTI_MOM_UP:
  
    #ifdef SEQ2_ENABLE
     
     Seq2=true;
     
     #endif
 
  MomentaryCountUp2=1;
   
    break;

  case SEQ20_MULTI_MOM_UP:
  
    #ifdef ACTION2_ENABLE

     Seq2b=true;
    
     #endif
 
  MomentaryCountUp2=1;
   
    break;

#endif 

#ifdef ACTION11A_UP_MULTISWITCH 
    
 case ACTION11A_UP_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11A_UP=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
 

#endif
 
#ifdef ACTION11A_DOWN_MULTISWITCH 
    
 case ACTION11A_DOWN_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11A_DOWN=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;

  
  
#endif 

#ifdef ACTION11B_UP_MULTISWITCH 
    
 case ACTION11B_UP_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11B_UP=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
  

#endif
 
#ifdef ACTION11B_DOWN_MULTISWITCH 
    
 case ACTION11B_DOWN_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11B_DOWN=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
  

#endif


#ifdef ACTION11C_UP_MULTISWITCH 
    
 case ACTION11C_UP_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11C_UP=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
  


#endif
 
#ifdef ACTION11C_DOWN_MULTISWITCH 
    
 case ACTION11C_DOWN_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11C_DOWN=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
  

#endif


#ifdef ACTION11D_UP_MULTISWITCH 
    
 case ACTION11D_UP_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11D_UP=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
  

#endif
 
#ifdef ACTION11D_DOWN_MULTISWITCH 
    
 case ACTION11D_DOWN_MOM_MULTI_UP:
    
    #ifdef ACTION11_ENABLE
     
    Act11D_DOWN=true;
     #endif
 
  MomentaryCountUp2=1;
   
    break;
  
  

#endif


  }
 


switch (MomentaryCountDown2) {
  case 0:
 
 #ifdef ACT1_MULTISWITCH
      if (!Act1Permanent){
      Act1=false;}
 #endif
 #ifdef ACT2_MULTISWITCH
     if (!Act2Permanent){
      Act2=false;}
 #endif     
#ifdef ACT3_MULTISWITCH      
    if (!Act3Permanent){
      Act3=false;}
#endif
#ifdef ACT4_MULTISWITCH
    if (!Act4Permanent){
      Act4=false;}
#endif
#ifdef ACT5_MULTISWITCH      
    if (!Act5Permanent){
      Act5=false;}
#endif      
#ifdef ACT6_MULTISWITCH
    if (!Act6Permanent){
      Act6=false;}
#endif
#ifdef ACT7_MULTISWITCH
    if (!Act7Permanent){
      Act7=false;}
#endif
#ifdef ACT8_MULTISWITCH      
    if (!Act8Permanent){
      Act8=false;}
#endif
#ifdef ACT9_MULTISWITCH
    if (!Act9Permanent){
      Act9=false;}
#endif
#ifdef ACT10_MULTISWITCH
    if (!Act10Permanent){
      Act10=false;}
#endif
#ifdef ACT12_MULTISWITCH
    if (!Act12Permanent){
      Act12=false;}
#endif
#ifdef SEQ6_MULTISWITCH
      Seq6=false;
      Seq60=false;

#endif
#ifdef SEQ7_MULTISWITCH
      Seq7=false;
      Seq70=false;

#endif
#ifdef SEQ1_MULTISWITCH
      Seq1=false;
      Seq10=false;

#endif
#ifdef SEQ2_MULTISWITCH
      Seq2=false;
      Seq20=false;

#endif    
 #ifdef ACTION11A_UP_MULTISWITCH
      if (!Act11A_UpPermanent){
      Act11A_UP=false;}
  #endif
 
  #ifdef ACTION11A_DOWN_MULTISWITCH
     if (!Act11A_DownPermanent){
      Act11A_DOWN=false;}
  #endif
  
  #ifdef ACTION11B_UP_MULTISWITCH
      if (!Act11B_UpPermanent){
      Act11B_UP=false;}
  #endif
 
  #ifdef ACTION11B_DOWN_MULTISWITCH
     if (!Act11B_DownPermanent){
      Act11B_DOWN=false;}
  #endif 
  
  #ifdef ACTION11C_UP_MULTISWITCH
      if (!Act11C_UpPermanent){
      Act11C_UP=false;}
  #endif
 
  #ifdef ACTION11C_DOWN_MULTISWITCH
     if (!Act11C_DownPermanent){
      Act11C_DOWN=false;}
  #endif 
  
  #ifdef ACTION11D_UP_MULTISWITCH
      if (!Act11D_UpPermanent){
      Act11D_UP=false;}
  #endif
 
  #ifdef ACTION11D_DOWN_MULTISWITCH
     if (!Act11D_DownPermanent){
      Act11D_DOWN=false;}
  #endif 
    
      MomentaryCountDown2=1;
    break;
  case 1:
      Act12Millis = millis();
      MomentaryMultiSwitch=false;
    ///Wait
    
    break;

 #ifdef ACT1_MULTISWITCH 
    
 case ACT1_MOM_MULTI_DOWN:
  
    
    #ifdef ACTION1_ENABLE
     
    Act1=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif    

#ifdef ACT2_MULTISWITCH    
  case ACT2_MOM_MULTI_DOWN:

   #ifdef ACTION2_ENABLE
   
 
    Act2=true;
  
  #endif 
  MomentaryCountDown2=1;
    
    break;

#endif

#ifdef ACT3_MULTISWITCH    
  case ACT3_MOM_MULTI_DOWN:


   #ifdef ACTION3_ENABLE
   
  
    Act3=true;
  
  #endif
  
  MomentaryCountDown2=1;
    break;
#endif
#ifdef ACT4_MULTISWITCH    
    
  case ACT4_MOM_MULTI_DOWN:
  
   #ifdef ACTION4_ENABLE
   

    Act4=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break; 
 #endif
 #ifdef ACT5_MULTISWITCH        
 case ACT5_MOM_MULTI_DOWN:
  
   #ifdef ACTION5_ENABLE
   
 
    Act5=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break; 
#endif
#ifdef ACT6_MULTISWITCH    
case ACT6_MOM_MULTI_DOWN:
  
   #ifdef ACTION6_ENABLE
   
  
    Act6=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break;
#endif
#ifdef ACT7_MULTISWITCH    
case ACT7_MOM_MULTI_DOWN:
  
   #ifdef ACTION7_ENABLE
   
  
    Act7=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break;
#endif
#ifdef ACT8_MULTISWITCH    
case ACT8_MOM_MULTI_DOWN:
  
   #ifdef ACTION8_ENABLE
   
  
    Act8=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break;
#endif
#ifdef ACT9_MULTISWITCH    
  case ACT9_MOM_MULTI_DOWN:
  
   #ifdef ACTION9_ENABLE
   
   
    Act9=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break;
#endif
#ifdef ACT10_MULTISWITCH    
  case ACT10_MOM_MULTI_DOWN:
  
   #ifdef ACTION10_ENABLE
   
   
    Act10=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break;

  #endif
  
  #ifdef ACT12_MULTISWITCH    
  case ACT12_MOM_MULTI_DOWN:
  
   #ifdef ACTION12_ENABLE
   
   
    Act12=true;
  
  #endif
  
  MomentaryCountDown2=1;
   break;

  #endif


#ifdef SEQ6_MULTISWITCH 
 case SEQ6_MULTI_MOM_UP:
  
    #ifdef ACTION6_ENABLE
    
     Seq6=true;
    
     #endif
 
  MomentaryCountDown2=1;
   
    break;


case SEQ60_MULTI_MOM_UP:
  
    #ifdef ACTION6_ENABLE
    
     Seq6b=true;
    
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif

#ifdef SEQ7_MULTISWITCH 
    
  case SEQ7_MULTI_MOM_UP:
  
    #ifdef ACTION7_ENABLE
     
     Seq7=true;
     
     #endif
 
 MomentaryCountDown2=1;
   
    break;

  case SEQ70_MULTI_MOM_UP:
  
    #ifdef ACTION7_ENABLE
   
     Seq7b=true;
    
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif

#ifdef SEQ1_MULTISWITCH 
    
  case SEQ1_MULTI_MOM_UP:
  
    #ifdef SEQ1_ENABLE
    
     Seq1=true;
      
     #endif
 
  MomentaryCountDown2=1;
   
    break;

  case SEQ10_MULTI_MOM_UP:
  
    #ifdef ACTION1_ENABLE
    
     Seq1b=true;
     
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif

#ifdef SEQ2_MULTISWITCH 
    
  case SEQ2_MULTI_MOM_UP:
  
    #ifdef SEQ2_ENABLE
     
     Seq2=true;
     
     #endif
 
  MomentaryCountDown2=1;
   
    break;

  case SEQ20_MULTI_MOM_UP:
  
    #ifdef ACTION2_ENABLE

     Seq2b=true;
    
     #endif
 
  MomentaryCountUp2=1;
   
    break;

#endif


#ifdef ACTION11A_UP_MULTISWITCH 
    
 
  
 case ACTION11A_UP_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11A_UP=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif
 
#ifdef ACTION11A_DOWN_MULTISWITCH 
    
 

  case ACTION11A_DOWN_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11A_DOWN=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;
  
#endif 

#ifdef ACTION11B_UP_MULTISWITCH 
    

  
  case ACTION11B_UP_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11B_UP=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif
 
#ifdef ACTION11B_DOWN_MULTISWITCH 
    
 
  
  case ACTION11B_DOWN_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11B_DOWN=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif


#ifdef ACTION11C_UP_MULTISWITCH 
    
 
  
  case ACTION11C_UP_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11C_UP=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;


#endif
 
#ifdef ACTION11C_DOWN_MULTISWITCH 
    
 
  
  case ACTION11C_DOWN_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11C_DOWN=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif


#ifdef ACTION11D_UP_MULTISWITCH 
    
 
  
  case ACTION11D_UP_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11D_UP=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif
 
#ifdef ACTION11D_DOWN_MULTISWITCH 
    
 
  
  case ACTION11D_DOWN_MOM_MULTI_DOWN:
    
    #ifdef ACTION11_ENABLE
     
    Act11D_DOWN=true;
     #endif
 
  MomentaryCountDown2=1;
   
    break;

#endif  
  
  }
}


    
if (MultiSwitch){
  
   switch (CountUp2) {
  case 0:
      CountUp2=1;
    break;

  
  case 1:
     
      MultiSwitch=false;
    ///Wait
    
    break;

 #ifdef ACT1_MULTISWITCH 
    
  case ACT1_MULTI_UP:
  
    #ifdef ACTION1_ENABLE
     Act1=!Act1;
      if (Act1){
        Act1Permanent=true;
      }

      else Act1Permanent=false;
     #endif
 
  CountUp2=1;
   
    break;

#endif    

#ifdef ACT2_MULTISWITCH    
  case ACT2_MULTI_UP:

  #ifdef ACTION2_ENABLE
   
 Act2=!Act2;
      if (Act2){
        Act2Permanent=true;
      }

      else Act2Permanent=false;
  #endif 
  CountUp2=1;
    
    break;

#endif

#ifdef ACT3_MULTISWITCH    
  case ACT3_MULTI_UP:


   #ifdef ACTION3_ENABLE
   
  Act3=!Act3;
      if (Act3){
        Act3Permanent=true;
      }

      else Act3Permanent=false;
  #endif
  
  CountUp2=1;
    break;
#endif
#ifdef ACT4_MULTISWITCH    
    
  case ACT4_MULTI_UP:
  
   #ifdef ACTION4_ENABLE
   
   Act4=!Act4;
      if (Act4){
        Act5 = false;
        Act4Permanent=true;
      }

      else Act4Permanent=false;
  #endif
  
  CountUp2=1;
   break; 
 #endif
 #ifdef ACT5_MULTISWITCH        
 case ACT5_MULTI_UP:
  
   #ifdef ACTION5_ENABLE
   
  Act5=!Act5;
      if (Act5){
        Act4 = false;
        Act5Permanent=true;
      }

      else Act5Permanent=false;
  #endif
  
  CountUp2=1;
   break; 
#endif
#ifdef ACT6_MULTISWITCH    
case ACT6_MULTI_UP:
  
   #ifdef ACTION6_ENABLE
   
   Act6=!Act6;
      if (Act6){
        Act6Permanent=true;
      }

      else Act6Permanent=false;
  #endif
  
  CountUp2=1;
   break;
#endif
#ifdef ACT7_MULTISWITCH    
case ACT7_MULTI_UP:
  
   #ifdef ACTION7_ENABLE
   
  Act7=!Act7;
      if (Act7){
        Act7Permanent=true;
      }

      else Act7Permanent=false;
  #endif
  
  CountUp2=1;
   break;
#endif
#ifdef ACT8_MULTISWITCH    
case ACT8_MULTI_UP:
  
   #ifdef ACTION8_ENABLE
   
   Act8=!Act8;
      if (Act8){
        Act8Permanent=true;
      }

      else Act8Permanent=false;
  #endif
  
  CountUp2=1;
   break;
#endif
#ifdef ACT9_MULTISWITCH    
  case ACT9_MULTI_UP:
  
   #ifdef ACTION9_ENABLE
   
   Act9=!Act9;
      if (Act9){
        Act9Permanent=true;
      }

      else Act9Permanent=false;
  #endif
  
  CountUp2=1;
   break;
#endif
#ifdef ACT10_MULTISWITCH    
  case ACT10_MULTI_UP:
  
   #ifdef ACTION10_ENABLE
   
   Act10=!Act10;
      if (Act10){
        Act10Permanent=true;
      }

      else Act10Permanent=false;
     
  
  #endif
  
  CountUp2=1;
   break;

  #endif

 #ifdef SEQ6_MULTISWITCH 
    
  case SEQ6_MULTI_UP:
  
    #ifdef ACTION6_ENABLE
     Seq6b=false; 
     Seq6=true;
      if (Seq6){
        Seq6Permanent=true;
      }

      else Seq6Permanent=false;
     #endif
 
  CountUp2=1;
   
    break;

  case SEQ6B_MULTI_UP:
  
    #ifdef ACTION6_ENABLE
     Seq6=false;
     Seq6b=true;
      if (Seq6b){
        Seq6bPermanent=true;
      }

      else Seq6bPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;

#endif

#ifdef SEQ7_MULTISWITCH 
    
  case SEQ7_MULTI_UP:
  
    #ifdef ACTION7_ENABLE
     Seq7b=false;
     Seq7=true;
      if (Seq7){
        Seq7Permanent=true;
      }

      else Seq7Permanent=false;
     #endif
 
  CountUp2=1;
   
    break;

  case SEQ7B_MULTI_UP:
  
    #ifdef ACTION7_ENABLE
     Seq7=false;
     Seq7b=true;
      if (Seq7b){
        Seq7bPermanent=true;
      }

      else Seq7bPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;

#endif

#ifdef SEQ1_MULTISWITCH 
    
  case SEQ1_MULTI_UP:
  
    #ifdef SEQ1_ENABLE
     Seq1b=false;
     Seq1=true;
      if (Seq1){
        Seq1Permanent=true;
      }

      else Seq1Permanent=false;
     #endif
 
  CountUp2=1;
   
    break;

  case SEQ1B_MULTI_UP:
  
    #ifdef ACTION1_ENABLE
     Seq1=false;
     Seq1b=true;
      if (Seq1b){
        Seq1bPermanent=true;
      }

      else Seq1bPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;

#endif

#ifdef SEQ2_MULTISWITCH 
    
  case SEQ2_MULTI_UP:
  
    #ifdef SEQ2_ENABLE
     Seq2b=false;
     Seq2=true;
      if (Seq2){
        Seq2Permanent=true;
      }

      else Seq2Permanent=false;
     #endif
 
  CountUp2=1;
   
    break;

  case SEQ2B_MULTI_UP:
  
    #ifdef ACTION2_ENABLE
     Seq2=false;
     Seq2b=true;
      if (Seq2b){
        Seq2bPermanent=true;
      }

      else Seq2bPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;

#endif

#ifdef ACTION11A_UP_MULTISWITCH 
    
  case ACTION11A_UP_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11A_UP=!Act11A_UP;
      if (Act11A_UP){
        Act11A_UpPermanent=true;
      }

      else Act11A_UpPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;
  
 
  
#endif 
  
#ifdef ACTION11A_DOWN_MULTISWITCH 
    
  case ACTION11A_DOWN_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11A_DOWN=!Act11A_DOWN;
      if (Act11A_DOWN){
        Act11A_DownPermanent=true;
      }

      else Act11A_DownPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;
  
 
#endif 
#ifdef ACTION11B_UP_MULTISWITCH 
    
  case ACTION11B_UP_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11B_UP=!Act11B_UP;
      if (Act11B_UP){
        Act11B_UpPermanent=true;
      }

      else Act11B_UpPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;
  

  
 #endif 
#ifdef ACTION11B_DOWN_MULTISWITCH 
    
  case ACTION11B_DOWN_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11B_DOWN=!Act11B_DOWN;
      if (Act11B_DOWN){
        Act11B_DownPermanent=true;
      }

      else Act11B_DownPermanent=false;
     #endif
 
  CountUp2=1;
   
    break; 

      
#endif
#ifdef ACTION11C_UP_MULTISWITCH 
    
  case ACTION11C_UP_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11C_UP=!Act11C_UP;
      if (Act11C_UP){
        Act11C_UpPermanent=true;
      }

      else Act11C_UpPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;
  
  
 #endif 
#ifdef ACTION11C_DOWN_MULTISWITCH 
    
  case ACTION11C_DOWN_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11C_DOWN=!Act11C_DOWN;
      if (Act11C_DOWN){
        Act11C_DownPermanent=true;
      }

      else Act11C_DownPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;

  
 #endif 
#ifdef ACTION11D_UP_MULTISWITCH 
    
  case ACTION11D_UP_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11D_UP=!Act11D_UP;
      if (Act11D_UP){
        Act11D_UpPermanent=true;
      }

      else Act11D_UpPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;
  

  
 #endif 
#ifdef ACTION11D_DOWN_MULTISWITCH 
    
  case ACTION11D_DOWN_MULTI_UP:
  
    #ifdef ACTION11_ENABLE
     Act11D_DOWN=!Act11D_DOWN;
      if (Act11D_DOWN){
        Act11D_DownPermanent=true;
      }

      else Act11D_DownPermanent=false;
     #endif
 
  CountUp2=1;
   
    break;
  

#endif
  }
 
switch (CountDown2) {
  case 0:
      CountDown2=1;
    break;

  
  case 1:
     MultiSwitch=false;
    ///Wait
    
    break;

 #ifdef ACT1_MULTISWITCH 
    
  case ACT1_MULTI_DOWN:
    
    #ifdef ACTION1_ENABLE
     Act1=!Act1;
      if (Act1){
        Act1Permanent=true;
      }

      else Act1Permanent=false;
     #endif
 
  CountDown2=1;
   
    break;

#endif    

#ifdef ACT2_MULTISWITCH    
  case ACT2_MULTI_DOWN:

   #ifdef ACTION2_ENABLE
   
 Act2=!Act2;
      if (Act2){
        Act2Permanent=true;
      }

      else Act2Permanent=false;
  #endif 
  CountDown2=1;
    
    break;

#endif

#ifdef ACT3_MULTISWITCH    
  case ACT3_MULTI_DOWN:


   #ifdef ACTION3_ENABLE
   
  Act3=!Act3;
      if (Act3){
        Act3Permanent=true;
      }

      else Act3Permanent=false;
  #endif
  
  CountDown2=1;
    break;
#endif
#ifdef ACT4_MULTISWITCH    
    
  case ACT4_MULTI_DOWN:
  
   #ifdef ACTION4_ENABLE
   
   Act4=!Act4;
      if (Act4){
        Act5 = false;
        Act4Permanent=true;
      }

      else Act4Permanent=false;
  #endif
  
  CountDown2=1;
   break; 
 #endif
 #ifdef ACT5_MULTISWITCH        
 case ACT5_MULTI_DOWN:
  
   #ifdef ACTION5_ENABLE
   
  Act5=!Act5;
      if (Act5){
         Act4 = false;
        Act5Permanent=true;
      }

      else Act5Permanent=false;
  #endif
  
  CountDown2=1;
   break; 
#endif
#ifdef ACT6_MULTISWITCH    
case ACT6_MULTI_DOWN:
  
   #ifdef ACTION6_ENABLE
   
   Act6=!Act6;
      if (Act6){
        Act6Permanent=true;
      }

      else Act6Permanent=false;
  #endif
  
  CountDown2=1;
   break;
#endif
#ifdef ACT7_MULTISWITCH    
case ACT7_MULTI_DOWN:
  
   #ifdef ACTION7_ENABLE
   
  Act7=!Act7;
      if (Act7){
        Act7Permanent=true;
      }

      else Act7Permanent=false;
  #endif
  
  CountDown2=1;
   break;
#endif
#ifdef ACT8_MULTISWITCH    
case ACT8_MULTI_DOWN:
  
   #ifdef ACTION8_ENABLE
   
   Act8=!Act8;
      if (Act8){
        Act8Permanent=true;
      }

      else Act8Permanent=false;
  #endif
  
  CountDown2=1;
   break;
#endif
#ifdef ACT9_MULTISWITCH    
  case ACT9_MULTI_DOWN:
  
   #ifdef ACTION9_ENABLE
   
   Act9=!Act9;
      if (Act9){
        Act9Permanent=true;
      }

      else Act9Permanent=false;
  #endif
  
  CountDown2=1;
   break;
#endif
#ifdef ACT10_MULTISWITCH    
  case ACT10_MULTI_DOWN:
  
   #ifdef ACTION10_ENABLE
   
   Act10=!Act10;
      if (Act10){
        Act10Permanent=true;
      }

      else Act10Permanent=false;
     
  
  #endif
  
  CountDown2=1;
   break;

  #endif

  #ifdef ACTION11A_UP_MULTISWITCH 
    
   case ACTION11A_UP_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11A_UP=!Act11A_UP;
      if (Act11A_UP){
        Act11A_DownPermanent=true;
      }

      else Act11A_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
#endif 
  
#ifdef ACTION11A_DOWN_MULTISWITCH 
  
  case ACTION11A_DOWN_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11A_DOWN=!Act11A_DOWN;
      if (Act11A_DOWN){
        Act11A_DownPermanent=true;
      }

      else Act11A_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
#endif 
#ifdef ACTION11B_UP_MULTISWITCH 
    
 
  
  case ACTION11B_UP_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11B_UP=!Act11B_UP;
      if (Act11B_UP){
        Act11B_DownPermanent=true;
      }

      else Act11B_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
 #endif 
 
#ifdef ACTION11B_DOWN_MULTISWITCH 
    
 

  case ACTION11B_DOWN_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11B_DOWN=!Act11B_DOWN;
      if (Act11B_DOWN){
        Act11B_DownPermanent=true;
      }

      else Act11B_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;    
#endif


#ifdef ACTION11C_UP_MULTISWITCH 
    
  
  
  case ACTION11C_UP_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11C_UP=!Act11C_UP;
      if (Act11C_UP){
        Act11C_DownPermanent=true;
      }

      else Act11C_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
  
 #endif 
#ifdef ACTION11C_DOWN_MULTISWITCH 
    
 
  
 case ACTION11C_DOWN_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11C_DOWN=!Act11C_DOWN;
      if (Act11C_DOWN){
        Act11C_DownPermanent=true;
      }

      else Act11C_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
  
 #endif 
#ifdef ACTION11D_UP_MULTISWITCH 
    
 
  
  case ACTION11D_UP_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11D_UP=!Act11D_UP;
      if (Act11D_UP){
        Act11D_DownPermanent=true;
      }

      else Act11D_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
 #endif 
#ifdef ACTION11D_DOWN_MULTISWITCH 
    
 
  
  case ACTION11D_DOWN_MULTI_DOWN:
  
    #ifdef ACTION11_ENABLE
     Act11D_DOWN=!Act11D_DOWN;
      if (Act11D_DOWN){
        Act11D_DownPermanent=true;
      }

      else Act11D_DownPermanent=false;
     #endif
 
  CountDown2=1;
   
    break;
#endif


 }
}

#endif




#ifdef MULTISWITCH_TYPE1
 

  
 if (pulseWidth[MULTI_1_CH-1] > (NEUTRAL - 50) && pulseWidth[MULTI_1_CH-1] < (NEUTRAL+50)){
 MultiMillis=millis();
 Multi1Up =false;
 Multi2Up =false;
 Multi3Up =false;
 Multi4Up =false;
 Multi1Up_Momentary=false;
 Multi2Up_Momentary=false;
 Multi3Up_Momentary=false;
 Multi4Up_Momentary=false;
 Multi1Down =false;
 Multi2Down =false;
 Multi3Down =false;
 Multi4Down =false;
 Multi1Down_Momentary=false;
 Multi2Down_Momentary=false;
 Multi3Down_Momentary=false;
 Multi4Down_Momentary=false;
 
 
}
    
if (pulseWidth[MULTI_1_CH-1] > UP1_MIN && pulseWidth[MULTI_1_CH-1] < UP1_MAX){
 if (millis() - MultiMillis > 250){
  Multi1Up =true;
  Multi1Up_Momentary=true;
  
 }
 
}

if (pulseWidth[MULTI_1_CH-1] > UP2_MIN && pulseWidth[MULTI_1_CH-1] < UP2_MAX){
 if (millis() - MultiMillis > 250){
  Multi2Up =true;
  Multi2Up_Momentary=true;
 }
 
}

if (pulseWidth[MULTI_1_CH-1] > UP3_MIN && pulseWidth[MULTI_1_CH-1] < UP3_MAX){
 if (millis() - MultiMillis > 250){
  Multi3Up =true;
  Multi3Up_Momentary=true;
 }
 
}

if (pulseWidth[MULTI_1_CH-1] > UP4_MIN && pulseWidth[MULTI_1_CH-1] < UP4_MAX){
 if (millis() - MultiMillis > 250){
  Multi4Up =true;
  Multi4Up_Momentary=true;
 }
 
}


    
if (pulseWidth[MULTI_1_CH-1] < DOWN1_MIN && pulseWidth[MULTI_1_CH-1] > DOWN1_MAX){
 if (millis() - MultiMillis > 250){
  Multi1Down =true;
  Multi1Down_Momentary=true;
  
 }
 
}

if (pulseWidth[MULTI_1_CH-1] < DOWN2_MIN && pulseWidth[MULTI_1_CH-1] > DOWN2_MAX){
 if (millis() - MultiMillis > 250){
  Multi2Down =true;
  Multi2Down_Momentary=true;
 }
 
}

if (pulseWidth[MULTI_1_CH-1] < DOWN3_MIN && pulseWidth[MULTI_1_CH-1] > DOWN3_MAX){
 if (millis() - MultiMillis > 250){
  Multi3Down =true;
  Multi3Down_Momentary=true;
 }
 
}

if (pulseWidth[MULTI_1_CH-1] < DOWN4_MIN && pulseWidth[MULTI_1_CH-1] > DOWN4_MAX){
 if (millis() - MultiMillis > 250){
  Multi4Down =true;
  Multi4Down_Momentary=true;
 }
 
}



#ifdef MULTI1_UP_PERM
if ( Multi1Up && !Multi1UpCtrl){
  Multi1UpCtrl= true;
}
if ( !Multi1Up && Multi1UpCtrl){
  
  #ifdef ACT1_MULTISWITCH_UP1
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP1
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_UP1
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_UP1
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_UP1
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_UP1
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_UP1
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_UP1
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_UP1
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_UP1
  Act10= !Act10;
  #endif
  #ifdef ACT11A_UP_MULTISWITCH_UP1
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP1
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP1
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP1
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP1
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP1
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP1
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP1
  Act11D_DOWN= !Act11D_DOWN;
  #endif

  
  Multi1UpCtrl= false;
}
#endif 

#ifdef MULTI1_UP_MOM
if ( Multi1Up_Momentary){
  #ifdef ACT1_MULTISWITCH_UP1
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP1
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_UP1
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_UP1
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_UP1
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_UP1
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_UP1
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_UP1
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_UP1
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_UP1
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_UP1
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_UP1
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP1
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP1
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP1
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP1
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP1
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP1
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP1
  Seq10= true;
  #endif
  #ifdef ACT11A_UP_MULTISWITCH_UP1
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP1
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP1
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP1
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP1
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP1
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP1
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP1
  Act11D_DOWN= true;
  #endif
  
}
else {

  #ifdef ACT1_MULTISWITCH_UP1
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP1
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_UP1
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_UP1
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_UP1
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_UP1
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_UP1
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_UP1
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_UP1
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_UP1
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_UP1
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_UP1
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP1
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP1
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP1
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP1
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP1
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP1
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP1
  Seq10= false;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_UP1
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP1
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP1
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP1
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP1
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP1
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP1
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP1
  Act11D_DOWN= false;
  #endif
}
}

#endif 

#ifdef MULTI2_UP_PERM
if ( Multi2Up && !Multi2UpCtrl){
  Multi2UpCtrl= true;
}
if ( !Multi2Up && Multi2UpCtrl){
 #ifdef ACT1_MULTISWITCH_UP2
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP2
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_UP2
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_UP2
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_UP2
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_UP2
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_UP2
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_UP2
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_UP2
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_UP2
  Act10= !Act10;
  #endif
    #ifdef ACT11A_UP_MULTISWITCH_UP2
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP2
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP2
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP2
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP2
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP2
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP2
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP2
  Act11D_DOWN= !Act11D_DOWN;
  #endif
  Multi2UpCtrl= false;
}
#endif

#ifdef MULTI2_UP_MOM
if ( Multi2Up_Momentary){
  
  #ifdef ACT1_MULTISWITCH_UP2
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP2
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_UP2
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_UP2
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_UP2
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_UP2
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_UP2
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_UP2
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_UP2
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_UP2
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_UP2
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_UP2
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP2
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP2
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP2
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP2
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP2
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP2
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP2
  Seq10= true;
  #endif
  #ifdef ACT11A_UP_MULTISWITCH_UP2
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP2
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP2
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP2
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP2
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP2
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP2
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP2
  Act11D_DOWN= true;
  #endif
  
}
else {

  
#ifdef ACT1_MULTISWITCH_UP2
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP2
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_UP2
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_UP2
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_UP2
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_UP2
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_UP2
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_UP2
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_UP2
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_UP2
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_UP2
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_UP2
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP2
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP2
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP2
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP2
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP2
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP2
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP2
  Seq10= false;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_UP2
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP2
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP2
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP2
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP2
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP2
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP2
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP2
  Act11D_DOWN= false;
  #endif
}
}

#endif 

#ifdef MULTI3_UP_PERM

if ( Multi3Up && !Multi3UpCtrl){
  Multi3UpCtrl= true;
}
if ( !Multi3Up && Multi3UpCtrl){
 #ifdef ACT1_MULTISWITCH_UP3
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP3
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_UP3
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_UP3
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_UP3
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_UP3
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_UP3
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_UP3
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_UP3
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_UP3
  Act10= !Act10;
  #endif
    #ifdef ACT11A_UP_MULTISWITCH_UP3
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP3
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP3
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP3
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP3
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP3
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP3
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP3
  Act11D_DOWN= !Act11D_DOWN;
  #endif
  
  

  
  Multi3UpCtrl= false;
}
#endif
#ifdef MULTI3_UP_MOM
if ( Multi3Up_Momentary){
 
  #ifdef ACT1_MULTISWITCH_UP3
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP3
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_UP3
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_UP3
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_UP3
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_UP3
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_UP3
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_UP3
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_UP3
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_UP3
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_UP3
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_UP3
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP3
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP3
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP3
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP3
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP3
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP3
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP3
  Seq10= true;
  #endif
  
  #ifdef ACT11A_UP_MULTISWITCH_UP3
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP3
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP3
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP3
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP3
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP3
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP3
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP3
  Act11D_DOWN= true;
  #endif
  
  
}
else {

#ifdef ACT1_MULTISWITCH_UP3
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP3
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_UP3
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_UP3
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_UP3
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_UP3
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_UP3
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_UP3
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_UP3
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_UP3
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_UP3
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_UP3
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP3
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP3
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP3
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP3
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP3
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP3
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP3
  Seq10= false;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_UP3
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP3
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP3
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP3
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP3
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP3
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP3
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP3
  Act11D_DOWN= false;
  #endif
}
}

#endif 
  #ifdef MULTI4_UP_PERM

if ( Multi4Up && !Multi4UpCtrl){
  Multi4UpCtrl= true;
}
if ( !Multi4Up && Multi4UpCtrl){
 #ifdef ACT1_MULTISWITCH_UP4
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP4
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_UP4
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_UP4
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_UP4
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_UP4
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_UP4
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_UP4
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_UP4
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_UP4
  Act10= !Act10;
  #endif
    #ifdef ACT11A_UP_MULTISWITCH_UP4
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP4
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP4
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP4
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP4
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP4
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP4
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP4
  Act11D_DOWN= !Act11D_DOWN;
  #endif
  
  Multi4UpCtrl= false;
}
  #endif

  #ifdef MULTI4_UP_MOM
if ( Multi4Up_Momentary){
  
  #ifdef ACT1_MULTISWITCH_UP4
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP4
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_UP4
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_UP4
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_UP4
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_UP4
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_UP4
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_UP4
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_UP4
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_UP4
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_UP4
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_UP4
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP4
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP4
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP4
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP4
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP4
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP4
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP4
  Seq10= true;
  #endif

  #ifdef ACT11A_UP_MULTISWITCH_UP4
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP4
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP4
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP4
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP4
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP4
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP4
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP4
  Act11D_DOWN= true;
  #endif
  
  
  
}
else {

  #ifdef ACT1_MULTISWITCH_UP4
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_UP4
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_UP4
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_UP4
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_UP4
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_UP4
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_UP4
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_UP4
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_UP4
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_UP4
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_UP4
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_UP4
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_UP4
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_UP4
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_UP4
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_UP4
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_UP4
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_UP4
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_UP4
  Seq10= false;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_UP4
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_UP4
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_UP4
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_UP4
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_UP4
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_UP4
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_UP4
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_UP4
  Act11D_DOWN= false;
  #endif
}
}

#endif 

#ifdef MULTI1_DOWN_PERM
if ( Multi1Down && !Multi1DownCtrl){
  Multi1DownCtrl= true;
}
if ( !Multi1Down && Multi1DownCtrl){
  
#ifdef ACT1_MULTISWITCH_DOWN1
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN1
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN1
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN1
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN1
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN1
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN1
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN1
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN1
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN1
  Act10= !Act10;
  #endif
  #ifdef ACT11A_UP_MULTISWITCH_DOWN1
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN1
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN1
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN1
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN1
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN1
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN1
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN1
  Act11D_DOWN= !Act11D_DOWN;
  #endif

  
  Multi1DownCtrl= false;
}
#endif 

#ifdef MULTI1_DOWN_MOM
if ( Multi1Down_Momentary){
  
  #ifdef ACT1_MULTISWITCH_DOWN1
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN1
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN1
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN1
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN1
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN1
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN1
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN1
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN1
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN1
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN1
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_DOWN1
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN1
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN1
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN1
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN1
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN1
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN1
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN1
  Seq10= true;
  #endif
   
  #ifdef ACT11A_UP_MULTISWITCH_DOWN1
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN1
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN1
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN1
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN1
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN1
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN1
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN1
  Act11D_DOWN= true;
  #endif
}
else {
 
  #ifdef ACT1_MULTISWITCH_DOWN1
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN1
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN1
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN1
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN1
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN1
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN1
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN1
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN1
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN1
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN1
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_DOWN1
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN1
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN1
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN1
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN1
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN1
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN1
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN1
  Seq10= false;
  #endif
   
  #ifdef ACT11A_UP_MULTISWITCH_DOWN1
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN1
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN1
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN1
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN1
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN1
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN1
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN1
  Act11D_DOWN= false;
  #endif
}
}

#endif 

#ifdef MULTI2_DOWN_PERM
if ( Multi2Down && !Multi2DownCtrl){
  Multi2DownCtrl= true;
}
if ( !Multi2Down && Multi2DownCtrl){
 #ifdef ACT1_MULTISWITCH_DOWN2
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN2
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN2
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN2
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN2
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN2
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN2
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN2
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN2
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN2
  Act10= !Act10;
  #endif
    #ifdef ACT11A_UP_MULTISWITCH_DOWN2
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN2
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN2
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN2
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN2
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN2
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN2
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN2
  Act11D_DOWN= !Act11D_DOWN;
  #endif
  

  
  Multi2DownCtrl= false;
}
#endif

#ifdef MULTI2_DOWN_MOM
if ( Multi2Down_Momentary){
  #ifdef ACT1_MULTISWITCH_DOWN2
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN2
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN2
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN2
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN2
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN2
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN2
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN2
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN2
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN2
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN2
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_DOWN2
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN2
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN2
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN2
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN2
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN2
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN2
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN2
  Seq10= true;
  #endif
  #ifdef ACT11A_UP_MULTISWITCH_DOWN2
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN2
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN2
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN2
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN2
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN2
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN2
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN2
  Act11D_DOWN= true;
  #endif
}
else {
 
#ifdef ACT1_MULTISWITCH_DOWN2
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN2
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN2
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN2
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN2
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN2
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN2
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN2
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN2
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN2
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN2
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_DOWN2
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN2
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN2
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN2
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN2
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN2
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN2
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN2
  Seq10= false;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_DOWN2
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN2
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN2
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN2
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN2
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN2
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN2
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN2
  Act11D_DOWN= false;
  #endif
}
}

#endif 

#ifdef MULTI3_DOWN_PERM

if ( Multi3Down && !Multi3DownCtrl){
  Multi3DownCtrl= true;
}
if ( !Multi3Down && Multi3DownCtrl){
 #ifdef ACT1_MULTISWITCH_DOWN3
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN3
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN3
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN3
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN3
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN3
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN3
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN3
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN3
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN3
  Act10= !Act10;
  #endif
    #ifdef ACT11A_UP_MULTISWITCH_DOWN3
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN3
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN3
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN3
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN3
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN3
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN3
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN3
  Act11D_DOWN= !Act11D_DOWN;
  #endif

  
  Multi3DownCtrl= false;
}
#endif
#ifdef MULTI3_DOWN_MOM
if ( Multi3Down_Momentary){
 
  #ifdef ACT1_MULTISWITCH_DOWN3
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN3
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN3
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN3
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN3
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN3
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN3
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN3
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN3
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN3
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN3
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_DOWN3
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN3
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN3
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN3
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN3
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN3
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN3
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN3
  Seq10= true;
  #endif
   
  #ifdef ACT11A_UP_MULTISWITCH_DOWN3
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN3
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN3
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN3
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN3
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN3
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN3
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN3
  Act11D_DOWN= true;
  #endif
}
else {
 
#ifdef ACT1_MULTISWITCH_DOWN3
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN3
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN3
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN3
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN3
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN3
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN3
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN3
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN3
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN3
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN3
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_DOWN3
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN3
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN3
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN3
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN3
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN3
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN3
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN3
  Seq10= false;
  #endif
  
  #ifdef ACT11A_UP_MULTISWITCH_DOWN3
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN3
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN3
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN3
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN3
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN3
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN3
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN3
  Act11D_DOWN= false;
  #endif
}
}

#endif 
  #ifdef MULTI4_DOWN_PERM

if ( Multi4Down && !Multi4DownCtrl){
  Multi4DownCtrl= true;
}
if ( !Multi4Down && Multi4DownCtrl){
#ifdef ACT1_MULTISWITCH_DOWN4
  Act1= !Act1;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN4
  Act2= !Act2;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN4
  Act3= !Act3;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN4
  Act4= !Act4;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN4
  Act5= !Act5;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN4
  Act6= !Act6;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN4
  Act7= !Act7;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN4
  Act8= !Act8;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN4
  Act9= !Act9;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN4
  Act10= !Act10;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_DOWN4
  Act11A_UP= !Act11A_UP;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN4
  Act11A_DOWN= !Act11A_DOWN;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN4
  Act11B_UP= !Act11B_UP;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN4
  Act11B_DOWN= !Act11B_DOWN;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN4
  Act11C_UP= !Act11C_UP;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN4
  Act11C_DOWN= !Act11C_DOWN;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN4
  Act11D_UP= !Act11D_UP;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN4
  Act11D_DOWN= !Act11D_DOWN;
  #endif
  
  
  Multi4DownCtrl= false;
}
  #endif

  #ifdef MULTI4_DOWN_MOM
if ( Multi4Down_Momentary){
#ifdef ACT1_MULTISWITCH_DOWN4
  Act1= true;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN4
  Act2= true;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN4
  Act3= true;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN4
  Act4= true;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN4
  Act5= true;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN4
  Act6= true;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN4
  Act7= true;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN4
  Act8= true;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN4
  Act9= true;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN4
  Act10= true;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN4
  Act12= true;
  #endif
  #ifdef SEQ6_MULTISWITCH_DOWN4
  Seq6= true;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN4
  Seq60= true;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN4
  Seq7= true;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN4
  Seq70= true;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN4
  Seq2= true;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN4
  Seq20= true;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN4
  Seq1= true;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN4
  Seq10= true;
  #endif
   #ifdef ACT11A_UP_MULTISWITCH_DOWN4
  Act11A_UP= true;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN4
  Act11A_DOWN= true;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN4
  Act11B_UP= true;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN4
  Act11B_DOWN= true;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN4
  Act11C_UP= true;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN4
  Act11C_DOWN= true;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN4
  Act11D_UP= true;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN4
  Act11D_DOWN= true;
  #endif
  
}
else {

 #ifdef ACT1_MULTISWITCH_DOWN4
  Act1= false;
  #endif 
  #ifdef ACT2_MULTISWITCH_DOWN4
  Act2= false;
  #endif
  #ifdef ACT3_MULTISWITCH_DOWN4
  Act3= false;
  #endif
  #ifdef ACT4_MULTISWITCH_DOWN4
  Act4= false;
  #endif
  #ifdef ACT5_MULTISWITCH_DOWN4
  Act5= false;
  #endif
  #ifdef ACT6_MULTISWITCH_DOWN4
  Act6= false;
  #endif
  #ifdef ACT7_MULTISWITCH_DOWN4
  Act7= false;
  #endif
  #ifdef ACT8_MULTISWITCH_DOWN4
  Act8= false;
  #endif
  #ifdef ACT9_MULTISWITCH_DOWN4
  Act9= false;
  #endif
  #ifdef ACT10_MULTISWITCH_DOWN4
  Act10= false;
  #endif
  #ifdef ACT12_MULTISWITCH_DOWN4
  Act12= false;
  #endif
   #ifdef SEQ6_MULTISWITCH_DOWN4
  Seq6= false;
  #endif
  #ifdef SEQ60_MULTISWITCH_DOWN4
  Seq60= false;
  #endif
  #ifdef SEQ7_MULTISWITCH_DOWN4
  Seq7= false;
  #endif
  #ifdef SEQ70_MULTISWITCH_DOWN4
  Seq70= false;
  #endif
  #ifdef SEQ2_MULTISWITCH_DOWN4
  Seq2= false;
  #endif
  #ifdef SEQ20_MULTISWITCH_DOWN4
  Seq20= false;
  #endif
  #ifdef SEQ1_MULTISWITCH_DOWN4
  Seq1= false;
  #endif
  #ifdef SEQ10_MULTISWITCH_DOWN4
  Seq10= false;
  #endif
   
  #ifdef ACT11A_UP_MULTISWITCH_DOWN4
  Act11A_UP= false;
  #endif
  #ifdef ACT11A_DOWN_MULTISWITCH_DOWN4
  Act11A_DOWN= false;
  #endif
  #ifdef ACT11B_UP_MULTISWITCH_DOWN4
  Act11B_UP= false;
  #endif
  #ifdef ACT11B_DOWN_MULTISWITCH_DOWN4
  Act11B_DOWN= false;
  #endif
  #ifdef ACT11C_UP_MULTISWITCH_DOWN4
  Act11C_UP= false;
  #endif
  #ifdef ACT11C_DOWN_MULTISWITCH_DOWN4
  Act11C_DOWN= false;
  #endif
  #ifdef ACT11D_UP_MULTISWITCH_DOWN4
  Act11D_UP= false;
  #endif
  #ifdef ACT11D_DOWN_MULTISWITCH_DOWN4
  Act11D_DOWN= false;
  #endif
}
}

#endif 
#endif       
}
