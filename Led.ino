// =======================================================================================================
// LED
// =======================================================================================================

void led() {

      if(Seq1LedPart1OnOff){
                #ifdef SEQ1_LED_HALOGEN_PART1_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1_LED_NEON_PART1_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1_LED_PART1_1
                Led1.On(0);
                #endif
                #ifdef SEQ1_LED_PART1_2
                Led2.On(1);
                #endif
                #ifdef SEQ1_LED_PART1_3
                Led3.On(2);
                #endif
                #ifdef SEQ1_LED_PART1_4
                Led4.On(3);
                #endif
                #ifdef SEQ1_LED_PART1_5
                Led5.On(4);
                #endif
                #ifdef SEQ1_LED_PART1_6
                Led6.On(5);
                #endif
                #ifdef SEQ1_LED_PART1_7
                Led7.On(6);
                #endif
                #ifdef SEQ1_LED_PART1_8
                Led8.On(7);
                #endif
                #ifdef SEQ1_LED_PART1_9
                Led9.On(8);
                #endif
                #ifdef SEQ1_LED_PART1_10
                Led10.On(9);
                #endif
                #ifdef SEQ1_LED_PART1_11
                Led11.On(12);
                #endif
                #ifdef SEQ1_LED_PART1_12
                Led12.On(13);
                #endif
                #ifdef SEQ1_LED_PART1_13
                Led13.On(14);
                #endif
                #ifdef SEQ1_LED_PART1_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART1_1
                Led1.flash(0, ONTIME_SEQ1_SPEC_PART1_1 ,OFFTIME_SEQ1_SPEC_PART1_1,PAUSE_SEQ1_SPEC_PART1_1 ,PULSE_SEQ1_SPEC_PART1_1,DELAY_SEQ1_SPEC_PART1_1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_2
                Led2.flash(1, ONTIME_SEQ1_SPEC_PART1_2, OFFTIME_SEQ1_SPEC_PART1_2,PAUSE_SEQ1_SPEC_PART1_2 ,PULSE_SEQ1_SPEC_PART1_2,DELAY_SEQ1_SPEC_PART1_2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_3
                Led3.flash(2, ONTIME_SEQ1_SPEC_PART1_3, OFFTIME_SEQ1_SPEC_PART1_3,PAUSE_SEQ1_SPEC_PART1_3 ,PULSE_SEQ1_SPEC_PART1_3,DELAY_SEQ1_SPEC_PART1_3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_4
                Led4.flash(3, ONTIME_SEQ1_SPEC_PART1_4, OFFTIME_SEQ1_SPEC_PART1_4,PAUSE_SEQ1_SPEC_PART1_4 ,PULSE_SEQ1_SPEC_PART1_4,DELAY_SEQ1_SPEC_PART1_4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_5
                Led5.flash(4, ONTIME_SEQ1_SPEC_PART1_5, OFFTIME_SEQ1_SPEC_PART1_5,PAUSE_SEQ1_SPEC_PART1_5 ,PULSE_SEQ1_SPEC_PART1_5,DELAY_SEQ1_SPEC_PART1_5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_6
                Led6.flash(5, ONTIME_SEQ1_SPEC_PART1_6, OFFTIME_SEQ1_SPEC_PART1_6,PAUSE_SEQ1_SPEC_PART1_6 ,PULSE_SEQ1_SPEC_PART1_6,DELAY_SEQ1_SPEC_PART1_6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_7
                Led7.flash(6, ONTIME_SEQ1_SPEC_PART1_7, OFFTIME_SEQ1_SPEC_PART1_7,PAUSE_SEQ1_SPEC_PART1_7 ,PULSE_SEQ1_SPEC_PART1_7,DELAY_SEQ1_SPEC_PART1_7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_8
                Led8.flash(7, ONTIME_SEQ1_SPEC_PART1_8, OFFTIME_SEQ1_SPEC_PART1_8,PAUSE_SEQ1_SPEC_PART1_8 ,PULSE_SEQ1_SPEC_PART1_8,DELAY_SEQ1_SPEC_PART1_8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_9
                Led9.flash(8, ONTIME_SEQ1_SPEC_PART1_9, OFFTIME_SEQ1_SPEC_PART1_9,PAUSE_SEQ1_SPEC_PART1_9 ,PULSE_SEQ1_SPEC_PART1_9,DELAY_SEQ1_SPEC_PART1_9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_10
                Led10.flash(9, ONTIME_SEQ1_SPEC_PART1_10, OFFTIME_SEQ1_SPEC_PART1_10,PAUSE_SEQ1_SPEC_PART1_10 ,PULSE_SEQ1_SPEC_PART1_10,DELAY_SEQ1_SPEC_PART1_10);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_11
                Led11.flash(12, ONTIME_SEQ1_SPEC_PART1_11, OFFTIME_SEQ1_SPEC_PART1_11,PAUSE_SEQ1_SPEC_PART1_11 ,PULSE_SEQ1_SPEC_PART1_11,DELAY_SEQ1_SPEC_PART1_11);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_12
                Led12.flash(13, ONTIME_SEQ1_SPEC_PART1_12, OFFTIME_SEQ1_SPEC_PART1_12,PAUSE_SEQ1_SPEC_PART1_12 ,PULSE_SEQ1_SPEC_PART1_12,DELAY_SEQ1_SPEC_PART1_12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_13
                Led13.flash(14, ONTIME_SEQ1_SPEC_PART1_13, OFFTIME_SEQ1_SPEC_PART1_13,PAUSE_SEQ1_SPEC_PART1_13 ,PULSE_SEQ1_SPEC_PART1_13,DELAY_SEQ1_SPEC_PART1_13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_14
                Led14.flash(14, ONTIME_SEQ1_SPEC_PART1_14, OFFTIME_SEQ1_SPEC_PART1_14,PAUSE_SEQ1_SPEC_PART1_14 ,PULSE_SEQ1_SPEC_PART1_14,DELAY_SEQ1_SPEC_PART1_14);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_PART1_1
                Led1.blink(0, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_2
                Led2.blink(1, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_3
                Led3.blink(2, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_4
                Led4.blink(3, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_5
                Led5.blink(4, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_6
                Led6.blink(5, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_7
                Led7.blink(6, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_8
                Led8.blink(7, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_9
                Led9.blink(8, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_10
                Led10.blink(9, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_11
                Led11.blink(12, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_12
                Led12.blink(13, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_13
                Led13.blink(14, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_14
                Led14.blink(14, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
  }
  else if (!Seq1LedPart1OnOff && !Seq2LedPart1OnOff)  {
                
        #ifdef SEQ1_LED_HALOGEN_PART1_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART1_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_NEON_PART1_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1_LED_NEON_PART1_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_LED_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_PART1_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART1_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART1_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART1_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART1_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART1_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART1_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART1_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART1_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART1_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART1_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART1_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART1_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART1_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART1_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART1_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }


    if(Seq1LedPart2OnOff){
               #ifdef SEQ1_LED_HALOGEN_PART2_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1_LED_NEON_PART2_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1_LED_PART2_1
                Led1.On(0);
                #endif
                #ifdef SEQ1_LED_PART2_2
                Led2.On(1);
                #endif
                #ifdef SEQ1_LED_PART2_3
                Led3.On(2);
                #endif
                #ifdef SEQ1_LED_PART2_4
                Led4.On(3);
                #endif
                #ifdef SEQ1_LED_PART2_5
                Led5.On(4);
                #endif
                #ifdef SEQ1_LED_PART2_6
                Led6.On(5);
                #endif
                #ifdef SEQ1_LED_PART2_7
                Led7.On(6);
                #endif
                #ifdef SEQ1_LED_PART2_8
                Led8.On(7);
                #endif
                #ifdef SEQ1_LED_PART2_9
                Led9.On(8);
                #endif
                #ifdef SEQ1_LED_PART2_10
                Led10.On(9);
                #endif
                #ifdef SEQ1_LED_PART2_11
                Led11.On(12);
                #endif
                #ifdef SEQ1_LED_PART2_12
                Led12.On(13);
                #endif
                #ifdef SEQ1_LED_PART2_13
                Led13.On(14);
                #endif
                #ifdef SEQ1_LED_PART2_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART2_1
                Led1.flash(0, ONTIME_SEQ1_SPEC_PART2_1 ,OFFTIME_SEQ1_SPEC_PART2_1,PAUSE_SEQ1_SPEC_PART2_1 ,PULSE_SEQ1_SPEC_PART2_1,DELAY_SEQ1_SPEC_PART2_1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_2
                Led2.flash(1, ONTIME_SEQ1_SPEC_PART2_2, OFFTIME_SEQ1_SPEC_PART2_2,PAUSE_SEQ1_SPEC_PART2_2 ,PULSE_SEQ1_SPEC_PART2_2,DELAY_SEQ1_SPEC_PART2_2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_3
                Led3.flash(2, ONTIME_SEQ1_SPEC_PART2_3, OFFTIME_SEQ1_SPEC_PART2_3,PAUSE_SEQ1_SPEC_PART2_3 ,PULSE_SEQ1_SPEC_PART2_3,DELAY_SEQ1_SPEC_PART2_3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_4
                Led4.flash(3, ONTIME_SEQ1_SPEC_PART2_4, OFFTIME_SEQ1_SPEC_PART2_4,PAUSE_SEQ1_SPEC_PART2_4 ,PULSE_SEQ1_SPEC_PART2_4,DELAY_SEQ1_SPEC_PART2_4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_5
                Led5.flash(4, ONTIME_SEQ1_SPEC_PART2_5, OFFTIME_SEQ1_SPEC_PART2_5,PAUSE_SEQ1_SPEC_PART2_5 ,PULSE_SEQ1_SPEC_PART2_5,DELAY_SEQ1_SPEC_PART2_5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_6
                Led6.flash(5, ONTIME_SEQ1_SPEC_PART2_6, OFFTIME_SEQ1_SPEC_PART2_6,PAUSE_SEQ1_SPEC_PART2_6 ,PULSE_SEQ1_SPEC_PART2_6,DELAY_SEQ1_SPEC_PART2_6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_7
                Led7.flash(6, ONTIME_SEQ1_SPEC_PART2_7, OFFTIME_SEQ1_SPEC_PART2_7,PAUSE_SEQ1_SPEC_PART2_7 ,PULSE_SEQ1_SPEC_PART2_7,DELAY_SEQ1_SPEC_PART2_7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_8
                Led8.flash(7, ONTIME_SEQ1_SPEC_PART2_8, OFFTIME_SEQ1_SPEC_PART2_8,PAUSE_SEQ1_SPEC_PART2_8 ,PULSE_SEQ1_SPEC_PART2_8,DELAY_SEQ1_SPEC_PART2_8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_9
                Led9.flash(8, ONTIME_SEQ1_SPEC_PART2_9, OFFTIME_SEQ1_SPEC_PART2_9,PAUSE_SEQ1_SPEC_PART2_9 ,PULSE_SEQ1_SPEC_PART2_9,DELAY_SEQ1_SPEC_PART2_9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_10
                Led10.flash(9, ONTIME_SEQ1_SPEC_PART2_10, OFFTIME_SEQ1_SPEC_PART2_10,PAUSE_SEQ1_SPEC_PART2_10 ,PULSE_SEQ1_SPEC_PART2_10,DELAY_SEQ1_SPEC_PART2_10);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_11
                Led11.flash(12, ONTIME_SEQ1_SPEC_PART2_11, OFFTIME_SEQ1_SPEC_PART2_11,PAUSE_SEQ1_SPEC_PART2_11 ,PULSE_SEQ1_SPEC_PART2_11,DELAY_SEQ1_SPEC_PART2_11);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_12
                Led12.flash(13, ONTIME_SEQ1_SPEC_PART2_12, OFFTIME_SEQ1_SPEC_PART2_12,PAUSE_SEQ1_SPEC_PART2_12 ,PULSE_SEQ1_SPEC_PART2_12,DELAY_SEQ1_SPEC_PART2_12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_13
                Led13.flash(14, ONTIME_SEQ1_SPEC_PART2_13, OFFTIME_SEQ1_SPEC_PART2_13,PAUSE_SEQ1_SPEC_PART2_13 ,PULSE_SEQ1_SPEC_PART2_13,DELAY_SEQ1_SPEC_PART2_13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_14
                Led14.flash(14, ONTIME_SEQ1_SPEC_PART2_14, OFFTIME_SEQ1_SPEC_PART2_14,PAUSE_SEQ1_SPEC_PART2_14 ,PULSE_SEQ1_SPEC_PART2_14,DELAY_SEQ1_SPEC_PART2_14);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_PART2_1
                Led1.blink(0, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_2
                Led2.blink(1, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_3
                Led3.blink(2, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_4
                Led4.blink(3, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_5
                Led5.blink(4, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_6
                Led6.blink(5, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_7
                Led7.blink(6, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_8
                Led8.blink(7, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_9
                Led9.blink(8, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_10
                Led10.blink(9, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_11
                Led11.blink(12, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_12
                Led12.blink(13, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_13
                Led13.blink(14, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_14
                Led14.blink(14, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
        
        
  }
  else if (!Seq1LedPart2OnOff && !Seq2LedPart2OnOff)  {
    
        #ifdef SEQ1_LED_HALOGEN_PART2_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART2_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_NEON_PART2_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1_LED_NEON_PART2_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_LED_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_PART2_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART2_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART2_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART2_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART2_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART2_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART2_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART2_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART2_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART2_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART2_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART2_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART2_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART2_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART2_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART2_14
                Led14.Off(14);
                #endif
  }  
  
  
  if(Seq1LedPart3OnOff){
      #ifdef SEQ1_LED_HALOGEN_PART3_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1_LED_NEON_PART3_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1_LED_PART3_1
                Led1.On(0);
                #endif
                #ifdef SEQ1_LED_PART3_2
                Led2.On(1);
                #endif
                #ifdef SEQ1_LED_PART3_3
                Led3.On(2);
                #endif
                #ifdef SEQ1_LED_PART3_4
                Led4.On(3);
                #endif
                #ifdef SEQ1_LED_PART3_5
                Led5.On(4);
                #endif
                #ifdef SEQ1_LED_PART3_6
                Led6.On(5);
                #endif
                #ifdef SEQ1_LED_PART3_7
                Led7.On(6);
                #endif
                #ifdef SEQ1_LED_PART3_8
                Led8.On(7);
                #endif
                #ifdef SEQ1_LED_PART3_9
                Led9.On(8);
                #endif
                #ifdef SEQ1_LED_PART3_10
                Led10.On(9);
                #endif
                #ifdef SEQ1_LED_PART3_11
                Led11.On(12);
                #endif
                #ifdef SEQ1_LED_PART3_12
                Led12.On(13);
                #endif
                #ifdef SEQ1_LED_PART3_13
                Led13.On(14);
                #endif
                #ifdef SEQ1_LED_PART3_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART3_1
                Led1.flash(0, ONTIME_SEQ1_SPEC_PART3_1 ,OFFTIME_SEQ1_SPEC_PART3_1,PAUSE_SEQ1_SPEC_PART3_1 ,PULSE_SEQ1_SPEC_PART3_1,DELAY_SEQ1_SPEC_PART3_1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_2
                Led2.flash(1, ONTIME_SEQ1_SPEC_PART3_2, OFFTIME_SEQ1_SPEC_PART3_2,PAUSE_SEQ1_SPEC_PART3_2 ,PULSE_SEQ1_SPEC_PART3_2,DELAY_SEQ1_SPEC_PART3_2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_3
                Led3.flash(2, ONTIME_SEQ1_SPEC_PART3_3, OFFTIME_SEQ1_SPEC_PART3_3,PAUSE_SEQ1_SPEC_PART3_3 ,PULSE_SEQ1_SPEC_PART3_3,DELAY_SEQ1_SPEC_PART3_3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_4
                Led4.flash(3, ONTIME_SEQ1_SPEC_PART3_4, OFFTIME_SEQ1_SPEC_PART3_4,PAUSE_SEQ1_SPEC_PART3_4 ,PULSE_SEQ1_SPEC_PART3_4,DELAY_SEQ1_SPEC_PART3_4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_5
                Led5.flash(4, ONTIME_SEQ1_SPEC_PART3_5, OFFTIME_SEQ1_SPEC_PART3_5,PAUSE_SEQ1_SPEC_PART3_5 ,PULSE_SEQ1_SPEC_PART3_5,DELAY_SEQ1_SPEC_PART3_5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_6
                Led6.flash(5, ONTIME_SEQ1_SPEC_PART3_6, OFFTIME_SEQ1_SPEC_PART3_6,PAUSE_SEQ1_SPEC_PART3_6 ,PULSE_SEQ1_SPEC_PART3_6,DELAY_SEQ1_SPEC_PART3_6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_7
                Led7.flash(6, ONTIME_SEQ1_SPEC_PART3_7, OFFTIME_SEQ1_SPEC_PART3_7,PAUSE_SEQ1_SPEC_PART3_7 ,PULSE_SEQ1_SPEC_PART3_7,DELAY_SEQ1_SPEC_PART3_7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_8
                Led8.flash(7, ONTIME_SEQ1_SPEC_PART3_8, OFFTIME_SEQ1_SPEC_PART3_8,PAUSE_SEQ1_SPEC_PART3_8 ,PULSE_SEQ1_SPEC_PART3_8,DELAY_SEQ1_SPEC_PART3_8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_9
                Led9.flash(8, ONTIME_SEQ1_SPEC_PART3_9, OFFTIME_SEQ1_SPEC_PART3_9,PAUSE_SEQ1_SPEC_PART3_9 ,PULSE_SEQ1_SPEC_PART3_9,DELAY_SEQ1_SPEC_PART3_9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_10
                Led10.flash(9, ONTIME_SEQ1_SPEC_PART3_10, OFFTIME_SEQ1_SPEC_PART3_10,PAUSE_SEQ1_SPEC_PART3_10 ,PULSE_SEQ1_SPEC_PART3_10,DELAY_SEQ1_SPEC_PART3_10);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_11
                Led11.flash(12, ONTIME_SEQ1_SPEC_PART3_11, OFFTIME_SEQ1_SPEC_PART3_11,PAUSE_SEQ1_SPEC_PART3_11 ,PULSE_SEQ1_SPEC_PART3_11,DELAY_SEQ1_SPEC_PART3_11);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_12
                Led12.flash(13, ONTIME_SEQ1_SPEC_PART3_12, OFFTIME_SEQ1_SPEC_PART3_12,PAUSE_SEQ1_SPEC_PART3_12 ,PULSE_SEQ1_SPEC_PART3_12,DELAY_SEQ1_SPEC_PART3_12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_13
                Led13.flash(14, ONTIME_SEQ1_SPEC_PART3_13, OFFTIME_SEQ1_SPEC_PART3_13,PAUSE_SEQ1_SPEC_PART3_13 ,PULSE_SEQ1_SPEC_PART3_13,DELAY_SEQ1_SPEC_PART3_13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_14
                Led14.flash(14, ONTIME_SEQ1_SPEC_PART3_14, OFFTIME_SEQ1_SPEC_PART3_14,PAUSE_SEQ1_SPEC_PART3_14 ,PULSE_SEQ1_SPEC_PART3_14,DELAY_SEQ1_SPEC_PART3_14);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_PART3_1
                Led1.blink(0, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_2
                Led2.blink(1, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_3
                Led3.blink(2, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_4
                Led4.blink(3, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_5
                Led5.blink(4, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_6
                Led6.blink(5, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_7
                Led7.blink(6, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_8
                Led8.blink(7, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_9
                Led9.blink(8, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_10
                Led10.blink(9, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_11
                Led11.blink(12, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_12
                Led12.blink(13, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_13
                Led13.blink(14, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_14
                Led14.blink(14, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
        
        
        
  }
  else if (!Seq1LedPart3OnOff && !Seq2LedPart3OnOff)  {
                  
        
        #ifdef SEQ1_LED_HALOGEN_PART3_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART3_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_NEON_PART3_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1_LED_NEON_PART3_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_LED_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_PART3_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART3_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART3_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART3_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART3_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART3_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART3_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART3_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART3_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART3_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART3_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART3_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART3_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART3_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART3_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART3_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }

  
     if(Seq1LedPart4OnOff){
     #ifdef SEQ1_LED_HALOGEN_PART4_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1_LED_NEON_PART4_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1_LED_PART4_1
                Led1.On(0);
                #endif
                #ifdef SEQ1_LED_PART4_2
                Led2.On(1);
                #endif
                #ifdef SEQ1_LED_PART4_3
                Led3.On(2);
                #endif
                #ifdef SEQ1_LED_PART4_4
                Led4.On(3);
                #endif
                #ifdef SEQ1_LED_PART4_5
                Led5.On(4);
                #endif
                #ifdef SEQ1_LED_PART4_6
                Led6.On(5);
                #endif
                #ifdef SEQ1_LED_PART4_7
                Led7.On(6);
                #endif
                #ifdef SEQ1_LED_PART4_8
                Led8.On(7);
                #endif
                #ifdef SEQ1_LED_PART4_9
                Led9.On(8);
                #endif
                #ifdef SEQ1_LED_PART4_10
                Led10.On(9);
                #endif
                #ifdef SEQ1_LED_PART4_11
                Led11.On(12);
                #endif
                #ifdef SEQ1_LED_PART4_12
                Led12.On(13);
                #endif
                #ifdef SEQ1_LED_PART4_13
                Led13.On(14);
                #endif
                #ifdef SEQ1_LED_PART4_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART4_1
                Led1.flash(0, ONTIME_SEQ1_SPEC_PART4_1 ,OFFTIME_SEQ1_SPEC_PART4_1,PAUSE_SEQ1_SPEC_PART4_1 ,PULSE_SEQ1_SPEC_PART4_1,DELAY_SEQ1_SPEC_PART4_1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_2
                Led2.flash(1, ONTIME_SEQ1_SPEC_PART4_2, OFFTIME_SEQ1_SPEC_PART4_2,PAUSE_SEQ1_SPEC_PART4_2 ,PULSE_SEQ1_SPEC_PART4_2,DELAY_SEQ1_SPEC_PART4_2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_3
                Led3.flash(2, ONTIME_SEQ1_SPEC_PART4_3, OFFTIME_SEQ1_SPEC_PART4_3,PAUSE_SEQ1_SPEC_PART4_3 ,PULSE_SEQ1_SPEC_PART4_3,DELAY_SEQ1_SPEC_PART4_3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_4
                Led4.flash(3, ONTIME_SEQ1_SPEC_PART4_4, OFFTIME_SEQ1_SPEC_PART4_4,PAUSE_SEQ1_SPEC_PART4_4 ,PULSE_SEQ1_SPEC_PART4_4,DELAY_SEQ1_SPEC_PART4_4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_5
                Led5.flash(4, ONTIME_SEQ1_SPEC_PART4_5, OFFTIME_SEQ1_SPEC_PART4_5,PAUSE_SEQ1_SPEC_PART4_5 ,PULSE_SEQ1_SPEC_PART4_5,DELAY_SEQ1_SPEC_PART4_5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_6
                Led6.flash(5, ONTIME_SEQ1_SPEC_PART4_6, OFFTIME_SEQ1_SPEC_PART4_6,PAUSE_SEQ1_SPEC_PART4_6 ,PULSE_SEQ1_SPEC_PART4_6,DELAY_SEQ1_SPEC_PART4_6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_7
                Led7.flash(6, ONTIME_SEQ1_SPEC_PART4_7, OFFTIME_SEQ1_SPEC_PART4_7,PAUSE_SEQ1_SPEC_PART4_7 ,PULSE_SEQ1_SPEC_PART4_7,DELAY_SEQ1_SPEC_PART4_7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_8
                Led8.flash(7, ONTIME_SEQ1_SPEC_PART4_8, OFFTIME_SEQ1_SPEC_PART4_8,PAUSE_SEQ1_SPEC_PART4_8 ,PULSE_SEQ1_SPEC_PART4_8,DELAY_SEQ1_SPEC_PART4_8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_9
                Led9.flash(8, ONTIME_SEQ1_SPEC_PART4_9, OFFTIME_SEQ1_SPEC_PART4_9,PAUSE_SEQ1_SPEC_PART4_9 ,PULSE_SEQ1_SPEC_PART4_9,DELAY_SEQ1_SPEC_PART4_9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_10
                Led10.flash(9, ONTIME_SEQ1_SPEC_PART4_10, OFFTIME_SEQ1_SPEC_PART4_10,PAUSE_SEQ1_SPEC_PART4_10 ,PULSE_SEQ1_SPEC_PART4_10,DELAY_SEQ1_SPEC_PART4_10);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_11
                Led11.flash(12, ONTIME_SEQ1_SPEC_PART4_11, OFFTIME_SEQ1_SPEC_PART4_11,PAUSE_SEQ1_SPEC_PART4_11 ,PULSE_SEQ1_SPEC_PART4_11,DELAY_SEQ1_SPEC_PART4_11);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_12
                Led12.flash(13, ONTIME_SEQ1_SPEC_PART4_12, OFFTIME_SEQ1_SPEC_PART4_12,PAUSE_SEQ1_SPEC_PART4_12 ,PULSE_SEQ1_SPEC_PART4_12,DELAY_SEQ1_SPEC_PART4_12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_13
                Led13.flash(14, ONTIME_SEQ1_SPEC_PART4_13, OFFTIME_SEQ1_SPEC_PART4_13,PAUSE_SEQ1_SPEC_PART4_13 ,PULSE_SEQ1_SPEC_PART4_13,DELAY_SEQ1_SPEC_PART4_13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_14
                Led14.flash(14, ONTIME_SEQ1_SPEC_PART4_14, OFFTIME_SEQ1_SPEC_PART4_14,PAUSE_SEQ1_SPEC_PART4_14 ,PULSE_SEQ1_SPEC_PART4_14,DELAY_SEQ1_SPEC_PART4_14);
                #endif
        ////////////////////////
                #ifdef SEQ1_FLASH_PART4_1
                Led1.blink(0, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_2
                Led2.blink(1, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_3
                Led3.blink(2, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_4
                Led4.blink(3, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_5
                Led5.blink(4, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_6
                Led6.blink(5, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_7
                Led7.blink(6, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_8
                Led8.blink(7, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_9
                Led9.blink(8, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_10
                Led10.blink(9, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_11
                Led11.blink(12, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_12
                Led12.blink(13, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_13
                Led13.blink(14, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_14
                Led14.blink(14, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
        
        
  }
  else if (! Seq1LedPart4OnOff && !Seq2LedPart4OnOff ){
      #ifdef SEQ1_LED_HALOGEN_PART4_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_HALOGEN_PART4_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_NEON_PART4_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1_LED_NEON_PART4_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1_LED_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_LED_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_LED_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_LED_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_LED_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_LED_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_LED_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_LED_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_LED_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_LED_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_LED_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_LED_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_LED_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_LED_PART4_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART4_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART4_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART4_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART4_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART4_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART4_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART4_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART4_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART4_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART4_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART4_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART4_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART4_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART4_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1_FLASH_SPEC_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1_FLASH_SPEC_PART4_14
                Led14.Off(14);
                #endif
  }
 if(Seq2LedPart1OnOff){
        #ifdef SEQ2_LED_HALOGEN_PART1_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2_LED_NEON_PART1_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2_LED_PART1_1
                Led1.On(0);
                #endif
                #ifdef SEQ2_LED_PART1_2
                Led2.On(1);
                #endif
                #ifdef SEQ2_LED_PART1_3
                Led3.On(2);
                #endif
                #ifdef SEQ2_LED_PART1_4
                Led4.On(3);
                #endif
                #ifdef SEQ2_LED_PART1_5
                Led5.On(4);
                #endif
                #ifdef SEQ2_LED_PART1_6
                Led6.On(5);
                #endif
                #ifdef SEQ2_LED_PART1_7
                Led7.On(6);
                #endif
                #ifdef SEQ2_LED_PART1_8
                Led8.On(7);
                #endif
                #ifdef SEQ2_LED_PART1_9
                Led9.On(8);
                #endif
                #ifdef SEQ2_LED_PART1_10
                Led10.On(9);
                #endif
                #ifdef SEQ2_LED_PART1_11
                Led11.On(12);
                #endif
                #ifdef SEQ2_LED_PART1_12
                Led12.On(13);
                #endif
                #ifdef SEQ2_LED_PART1_13
                Led13.On(14);
                #endif
                #ifdef SEQ2_LED_PART1_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART1_1
                Led1.flash(0, ONTIME_SEQ2_SPEC_PART1_1 ,OFFTIME_SEQ2_SPEC_PART1_1,PAUSE_SEQ2_SPEC_PART1_1 ,PULSE_SEQ2_SPEC_PART1_1,DELAY_SEQ2_SPEC_PART1_1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_2
                Led2.flash(1, ONTIME_SEQ2_SPEC_PART1_2, OFFTIME_SEQ2_SPEC_PART1_2,PAUSE_SEQ2_SPEC_PART1_2 ,PULSE_SEQ2_SPEC_PART1_2,DELAY_SEQ2_SPEC_PART1_2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_3
                Led3.flash(2, ONTIME_SEQ2_SPEC_PART1_3, OFFTIME_SEQ2_SPEC_PART1_3,PAUSE_SEQ2_SPEC_PART1_3 ,PULSE_SEQ2_SPEC_PART1_3,DELAY_SEQ2_SPEC_PART1_3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_4
                Led4.flash(3, ONTIME_SEQ2_SPEC_PART1_4, OFFTIME_SEQ2_SPEC_PART1_4,PAUSE_SEQ2_SPEC_PART1_4 ,PULSE_SEQ2_SPEC_PART1_4,DELAY_SEQ2_SPEC_PART1_4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_5
                Led5.flash(4, ONTIME_SEQ2_SPEC_PART1_5, OFFTIME_SEQ2_SPEC_PART1_5,PAUSE_SEQ2_SPEC_PART1_5 ,PULSE_SEQ2_SPEC_PART1_5,DELAY_SEQ2_SPEC_PART1_5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_6
                Led6.flash(5, ONTIME_SEQ2_SPEC_PART1_6, OFFTIME_SEQ2_SPEC_PART1_6,PAUSE_SEQ2_SPEC_PART1_6 ,PULSE_SEQ2_SPEC_PART1_6,DELAY_SEQ2_SPEC_PART1_6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_7
                Led7.flash(6, ONTIME_SEQ2_SPEC_PART1_7, OFFTIME_SEQ2_SPEC_PART1_7,PAUSE_SEQ2_SPEC_PART1_7 ,PULSE_SEQ2_SPEC_PART1_7,DELAY_SEQ2_SPEC_PART1_7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_8
                Led8.flash(7, ONTIME_SEQ2_SPEC_PART1_8, OFFTIME_SEQ2_SPEC_PART1_8,PAUSE_SEQ2_SPEC_PART1_8 ,PULSE_SEQ2_SPEC_PART1_8,DELAY_SEQ2_SPEC_PART1_8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_9
                Led9.flash(8, ONTIME_SEQ2_SPEC_PART1_9, OFFTIME_SEQ2_SPEC_PART1_9,PAUSE_SEQ2_SPEC_PART1_9 ,PULSE_SEQ2_SPEC_PART1_9,DELAY_SEQ2_SPEC_PART1_9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_10
                Led10.flash(9, ONTIME_SEQ2_SPEC_PART1_10, OFFTIME_SEQ2_SPEC_PART1_10,PAUSE_SEQ2_SPEC_PART1_10 ,PULSE_SEQ2_SPEC_PART1_10,DELAY_SEQ2_SPEC_PART1_10);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_11
                Led11.flash(12, ONTIME_SEQ2_SPEC_PART1_11, OFFTIME_SEQ2_SPEC_PART1_11,PAUSE_SEQ2_SPEC_PART1_11 ,PULSE_SEQ2_SPEC_PART1_11,DELAY_SEQ2_SPEC_PART1_11);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_12
                Led12.flash(13, ONTIME_SEQ2_SPEC_PART1_12, OFFTIME_SEQ2_SPEC_PART1_12,PAUSE_SEQ2_SPEC_PART1_12 ,PULSE_SEQ2_SPEC_PART1_12,DELAY_SEQ2_SPEC_PART1_12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_13
                Led13.flash(14, ONTIME_SEQ2_SPEC_PART1_13, OFFTIME_SEQ2_SPEC_PART1_13,PAUSE_SEQ2_SPEC_PART1_13 ,PULSE_SEQ2_SPEC_PART1_13,DELAY_SEQ2_SPEC_PART1_13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_14
                Led14.flash(14, ONTIME_SEQ2_SPEC_PART1_14, OFFTIME_SEQ2_SPEC_PART1_14,PAUSE_SEQ2_SPEC_PART1_14 ,PULSE_SEQ2_SPEC_PART1_14,DELAY_SEQ2_SPEC_PART1_14);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_PART1_1
                Led1.blink(0, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_2
                Led2.blink(1, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_3
                Led3.blink(2, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_4
                Led4.blink(3, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_5
                Led5.blink(4, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_6
                Led6.blink(5, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_7
                Led7.blink(6, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_8
                Led8.blink(7, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_9
                Led9.blink(8, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_10
                Led10.blink(9, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_11
                Led11.blink(12, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_12
                Led12.blink(13, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_13
                Led13.blink(14, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_14
                Led14.blink(14, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
  }
  else if (!Seq1LedPart1OnOff && !Seq2LedPart1OnOff)  {
                
        #ifdef SEQ2_LED_HALOGEN_PART1_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART1_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_NEON_PART1_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2_LED_NEON_PART1_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_LED_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_PART1_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART1_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART1_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART1_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART1_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART1_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART1_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART1_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART1_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART1_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART1_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART1_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART1_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART1_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART1_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART1_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }


    if(Seq2LedPart2OnOff){
               #ifdef SEQ2_LED_HALOGEN_PART2_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2_LED_NEON_PART2_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2_LED_PART2_1
                Led1.On(0);
                #endif
                #ifdef SEQ2_LED_PART2_2
                Led2.On(1);
                #endif
                #ifdef SEQ2_LED_PART2_3
                Led3.On(2);
                #endif
                #ifdef SEQ2_LED_PART2_4
                Led4.On(3);
                #endif
                #ifdef SEQ2_LED_PART2_5
                Led5.On(4);
                #endif
                #ifdef SEQ2_LED_PART2_6
                Led6.On(5);
                #endif
                #ifdef SEQ2_LED_PART2_7
                Led7.On(6);
                #endif
                #ifdef SEQ2_LED_PART2_8
                Led8.On(7);
                #endif
                #ifdef SEQ2_LED_PART2_9
                Led9.On(8);
                #endif
                #ifdef SEQ2_LED_PART2_10
                Led10.On(9);
                #endif
                #ifdef SEQ2_LED_PART2_11
                Led11.On(12);
                #endif
                #ifdef SEQ2_LED_PART2_12
                Led12.On(13);
                #endif
                #ifdef SEQ2_LED_PART2_13
                Led13.On(14);
                #endif
                #ifdef SEQ2_LED_PART2_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART2_1
                Led1.flash(0, ONTIME_SEQ2_SPEC_PART2_1 ,OFFTIME_SEQ2_SPEC_PART2_1,PAUSE_SEQ2_SPEC_PART2_1 ,PULSE_SEQ2_SPEC_PART2_1,DELAY_SEQ2_SPEC_PART2_1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_2
                Led2.flash(1, ONTIME_SEQ2_SPEC_PART2_2, OFFTIME_SEQ2_SPEC_PART2_2,PAUSE_SEQ2_SPEC_PART2_2 ,PULSE_SEQ2_SPEC_PART2_2,DELAY_SEQ2_SPEC_PART2_2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_3
                Led3.flash(2, ONTIME_SEQ2_SPEC_PART2_3, OFFTIME_SEQ2_SPEC_PART2_3,PAUSE_SEQ2_SPEC_PART2_3 ,PULSE_SEQ2_SPEC_PART2_3,DELAY_SEQ2_SPEC_PART2_3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_4
                Led4.flash(3, ONTIME_SEQ2_SPEC_PART2_4, OFFTIME_SEQ2_SPEC_PART2_4,PAUSE_SEQ2_SPEC_PART2_4 ,PULSE_SEQ2_SPEC_PART2_4,DELAY_SEQ2_SPEC_PART2_4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_5
                Led5.flash(4, ONTIME_SEQ2_SPEC_PART2_5, OFFTIME_SEQ2_SPEC_PART2_5,PAUSE_SEQ2_SPEC_PART2_5 ,PULSE_SEQ2_SPEC_PART2_5,DELAY_SEQ2_SPEC_PART2_5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_6
                Led6.flash(5, ONTIME_SEQ2_SPEC_PART2_6, OFFTIME_SEQ2_SPEC_PART2_6,PAUSE_SEQ2_SPEC_PART2_6 ,PULSE_SEQ2_SPEC_PART2_6,DELAY_SEQ2_SPEC_PART2_6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_7
                Led7.flash(6, ONTIME_SEQ2_SPEC_PART2_7, OFFTIME_SEQ2_SPEC_PART2_7,PAUSE_SEQ2_SPEC_PART2_7 ,PULSE_SEQ2_SPEC_PART2_7,DELAY_SEQ2_SPEC_PART2_7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_8
                Led8.flash(7, ONTIME_SEQ2_SPEC_PART2_8, OFFTIME_SEQ2_SPEC_PART2_8,PAUSE_SEQ2_SPEC_PART2_8 ,PULSE_SEQ2_SPEC_PART2_8,DELAY_SEQ2_SPEC_PART2_8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_9
                Led9.flash(8, ONTIME_SEQ2_SPEC_PART2_9, OFFTIME_SEQ2_SPEC_PART2_9,PAUSE_SEQ2_SPEC_PART2_9 ,PULSE_SEQ2_SPEC_PART2_9,DELAY_SEQ2_SPEC_PART2_9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_10
                Led10.flash(9, ONTIME_SEQ2_SPEC_PART2_10, OFFTIME_SEQ2_SPEC_PART2_10,PAUSE_SEQ2_SPEC_PART2_10 ,PULSE_SEQ2_SPEC_PART2_10,DELAY_SEQ2_SPEC_PART2_10);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_11
                Led11.flash(12, ONTIME_SEQ2_SPEC_PART2_11, OFFTIME_SEQ2_SPEC_PART2_11,PAUSE_SEQ2_SPEC_PART2_11 ,PULSE_SEQ2_SPEC_PART2_11,DELAY_SEQ2_SPEC_PART2_11);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_12
                Led12.flash(13, ONTIME_SEQ2_SPEC_PART2_12, OFFTIME_SEQ2_SPEC_PART2_12,PAUSE_SEQ2_SPEC_PART2_12 ,PULSE_SEQ2_SPEC_PART2_12,DELAY_SEQ2_SPEC_PART2_12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_13
                Led13.flash(14, ONTIME_SEQ2_SPEC_PART2_13, OFFTIME_SEQ2_SPEC_PART2_13,PAUSE_SEQ2_SPEC_PART2_13 ,PULSE_SEQ2_SPEC_PART2_13,DELAY_SEQ2_SPEC_PART2_13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_14
                Led14.flash(14, ONTIME_SEQ2_SPEC_PART2_14, OFFTIME_SEQ2_SPEC_PART2_14,PAUSE_SEQ2_SPEC_PART2_14 ,PULSE_SEQ2_SPEC_PART2_14,DELAY_SEQ2_SPEC_PART2_14);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_PART2_1
                Led1.blink(0, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_2
                Led2.blink(1, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_3
                Led3.blink(2, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_4
                Led4.blink(3, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_5
                Led5.blink(4, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_6
                Led6.blink(5, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_7
                Led7.blink(6, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_8
                Led8.blink(7, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_9
                Led9.blink(8, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_10
                Led10.blink(9, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_11
                Led11.blink(12, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_12
                Led12.blink(13, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_13
                Led13.blink(14, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_14
                Led14.blink(14, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
        
        
  }
  else if (!Seq1LedPart2OnOff && !Seq2LedPart2OnOff)  {
    
        #ifdef SEQ2_LED_HALOGEN_PART2_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART2_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_NEON_PART2_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2_LED_NEON_PART2_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_LED_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_PART2_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART2_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART2_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART2_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART2_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART2_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART2_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART2_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART2_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART2_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART2_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART2_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART2_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART2_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART2_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART2_14
                Led14.Off(14);
                #endif
  }  
  
  
  if(Seq2LedPart3OnOff){
      #ifdef SEQ2_LED_HALOGEN_PART3_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2_LED_NEON_PART3_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2_LED_PART3_1
                Led1.On(0);
                #endif
                #ifdef SEQ2_LED_PART3_2
                Led2.On(1);
                #endif
                #ifdef SEQ2_LED_PART3_3
                Led3.On(2);
                #endif
                #ifdef SEQ2_LED_PART3_4
                Led4.On(3);
                #endif
                #ifdef SEQ2_LED_PART3_5
                Led5.On(4);
                #endif
                #ifdef SEQ2_LED_PART3_6
                Led6.On(5);
                #endif
                #ifdef SEQ2_LED_PART3_7
                Led7.On(6);
                #endif
                #ifdef SEQ2_LED_PART3_8
                Led8.On(7);
                #endif
                #ifdef SEQ2_LED_PART3_9
                Led9.On(8);
                #endif
                #ifdef SEQ2_LED_PART3_10
                Led10.On(9);
                #endif
                #ifdef SEQ2_LED_PART3_11
                Led11.On(12);
                #endif
                #ifdef SEQ2_LED_PART3_12
                Led12.On(13);
                #endif
                #ifdef SEQ2_LED_PART3_13
                Led13.On(14);
                #endif
                #ifdef SEQ2_LED_PART3_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART3_1
                Led1.flash(0, ONTIME_SEQ2_SPEC_PART3_1 ,OFFTIME_SEQ2_SPEC_PART3_1,PAUSE_SEQ2_SPEC_PART3_1 ,PULSE_SEQ2_SPEC_PART3_1,DELAY_SEQ2_SPEC_PART3_1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_2
                Led2.flash(1, ONTIME_SEQ2_SPEC_PART3_2, OFFTIME_SEQ2_SPEC_PART3_2,PAUSE_SEQ2_SPEC_PART3_2 ,PULSE_SEQ2_SPEC_PART3_2,DELAY_SEQ2_SPEC_PART3_2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_3
                Led3.flash(2, ONTIME_SEQ2_SPEC_PART3_3, OFFTIME_SEQ2_SPEC_PART3_3,PAUSE_SEQ2_SPEC_PART3_3 ,PULSE_SEQ2_SPEC_PART3_3,DELAY_SEQ2_SPEC_PART3_3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_4
                Led4.flash(3, ONTIME_SEQ2_SPEC_PART3_4, OFFTIME_SEQ2_SPEC_PART3_4,PAUSE_SEQ2_SPEC_PART3_4 ,PULSE_SEQ2_SPEC_PART3_4,DELAY_SEQ2_SPEC_PART3_4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_5
                Led5.flash(4, ONTIME_SEQ2_SPEC_PART3_5, OFFTIME_SEQ2_SPEC_PART3_5,PAUSE_SEQ2_SPEC_PART3_5 ,PULSE_SEQ2_SPEC_PART3_5,DELAY_SEQ2_SPEC_PART3_5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_6
                Led6.flash(5, ONTIME_SEQ2_SPEC_PART3_6, OFFTIME_SEQ2_SPEC_PART3_6,PAUSE_SEQ2_SPEC_PART3_6 ,PULSE_SEQ2_SPEC_PART3_6,DELAY_SEQ2_SPEC_PART3_6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_7
                Led7.flash(6, ONTIME_SEQ2_SPEC_PART3_7, OFFTIME_SEQ2_SPEC_PART3_7,PAUSE_SEQ2_SPEC_PART3_7 ,PULSE_SEQ2_SPEC_PART3_7,DELAY_SEQ2_SPEC_PART3_7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_8
                Led8.flash(7, ONTIME_SEQ2_SPEC_PART3_8, OFFTIME_SEQ2_SPEC_PART3_8,PAUSE_SEQ2_SPEC_PART3_8 ,PULSE_SEQ2_SPEC_PART3_8,DELAY_SEQ2_SPEC_PART3_8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_9
                Led9.flash(8, ONTIME_SEQ2_SPEC_PART3_9, OFFTIME_SEQ2_SPEC_PART3_9,PAUSE_SEQ2_SPEC_PART3_9 ,PULSE_SEQ2_SPEC_PART3_9,DELAY_SEQ2_SPEC_PART3_9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_10
                Led10.flash(9, ONTIME_SEQ2_SPEC_PART3_10, OFFTIME_SEQ2_SPEC_PART3_10,PAUSE_SEQ2_SPEC_PART3_10 ,PULSE_SEQ2_SPEC_PART3_10,DELAY_SEQ2_SPEC_PART3_10);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_11
                Led11.flash(12, ONTIME_SEQ2_SPEC_PART3_11, OFFTIME_SEQ2_SPEC_PART3_11,PAUSE_SEQ2_SPEC_PART3_11 ,PULSE_SEQ2_SPEC_PART3_11,DELAY_SEQ2_SPEC_PART3_11);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_12
                Led12.flash(13, ONTIME_SEQ2_SPEC_PART3_12, OFFTIME_SEQ2_SPEC_PART3_12,PAUSE_SEQ2_SPEC_PART3_12 ,PULSE_SEQ2_SPEC_PART3_12,DELAY_SEQ2_SPEC_PART3_12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_13
                Led13.flash(14, ONTIME_SEQ2_SPEC_PART3_13, OFFTIME_SEQ2_SPEC_PART3_13,PAUSE_SEQ2_SPEC_PART3_13 ,PULSE_SEQ2_SPEC_PART3_13,DELAY_SEQ2_SPEC_PART3_13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_14
                Led14.flash(14, ONTIME_SEQ2_SPEC_PART3_14, OFFTIME_SEQ2_SPEC_PART3_14,PAUSE_SEQ2_SPEC_PART3_14 ,PULSE_SEQ2_SPEC_PART3_14,DELAY_SEQ2_SPEC_PART3_14);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_PART3_1
                Led1.blink(0, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_2
                Led2.blink(1, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_3
                Led3.blink(2, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_4
                Led4.blink(3, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_5
                Led5.blink(4, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_6
                Led6.blink(5, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_7
                Led7.blink(6, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_8
                Led8.blink(7, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_9
                Led9.blink(8, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_10
                Led10.blink(9, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_11
                Led11.blink(12, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_12
                Led12.blink(13, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_13
                Led13.blink(14, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_14
                Led14.blink(14, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
        
        
        
  }
  else if (!Seq1LedPart3OnOff && !Seq2LedPart3OnOff)  {
                  
        
        #ifdef SEQ2_LED_HALOGEN_PART3_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART3_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_NEON_PART3_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2_LED_NEON_PART3_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_LED_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_PART3_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART3_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART3_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART3_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART3_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART3_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART3_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART3_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART3_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART3_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART3_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART3_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART3_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART3_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART3_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART3_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }

  
     if(Seq2LedPart4OnOff){
     #ifdef SEQ2_LED_HALOGEN_PART4_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2_LED_NEON_PART4_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2_LED_PART4_1
                Led1.On(0);
                #endif
                #ifdef SEQ2_LED_PART4_2
                Led2.On(1);
                #endif
                #ifdef SEQ2_LED_PART4_3
                Led3.On(2);
                #endif
                #ifdef SEQ2_LED_PART4_4
                Led4.On(3);
                #endif
                #ifdef SEQ2_LED_PART4_5
                Led5.On(4);
                #endif
                #ifdef SEQ2_LED_PART4_6
                Led6.On(5);
                #endif
                #ifdef SEQ2_LED_PART4_7
                Led7.On(6);
                #endif
                #ifdef SEQ2_LED_PART4_8
                Led8.On(7);
                #endif
                #ifdef SEQ2_LED_PART4_9
                Led9.On(8);
                #endif
                #ifdef SEQ2_LED_PART4_10
                Led10.On(9);
                #endif
                #ifdef SEQ2_LED_PART4_11
                Led11.On(12);
                #endif
                #ifdef SEQ2_LED_PART4_12
                Led12.On(13);
                #endif
                #ifdef SEQ2_LED_PART4_13
                Led13.On(14);
                #endif
                #ifdef SEQ2_LED_PART4_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART4_1
                Led1.flash(0, ONTIME_SEQ2_SPEC_PART4_1 ,OFFTIME_SEQ2_SPEC_PART4_1,PAUSE_SEQ2_SPEC_PART4_1 ,PULSE_SEQ2_SPEC_PART4_1,DELAY_SEQ2_SPEC_PART4_1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_2
                Led2.flash(1, ONTIME_SEQ2_SPEC_PART4_2, OFFTIME_SEQ2_SPEC_PART4_2,PAUSE_SEQ2_SPEC_PART4_2 ,PULSE_SEQ2_SPEC_PART4_2,DELAY_SEQ2_SPEC_PART4_2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_3
                Led3.flash(2, ONTIME_SEQ2_SPEC_PART4_3, OFFTIME_SEQ2_SPEC_PART4_3,PAUSE_SEQ2_SPEC_PART4_3 ,PULSE_SEQ2_SPEC_PART4_3,DELAY_SEQ2_SPEC_PART4_3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_4
                Led4.flash(3, ONTIME_SEQ2_SPEC_PART4_4, OFFTIME_SEQ2_SPEC_PART4_4,PAUSE_SEQ2_SPEC_PART4_4 ,PULSE_SEQ2_SPEC_PART4_4,DELAY_SEQ2_SPEC_PART4_4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_5
                Led5.flash(4, ONTIME_SEQ2_SPEC_PART4_5, OFFTIME_SEQ2_SPEC_PART4_5,PAUSE_SEQ2_SPEC_PART4_5 ,PULSE_SEQ2_SPEC_PART4_5,DELAY_SEQ2_SPEC_PART4_5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_6
                Led6.flash(5, ONTIME_SEQ2_SPEC_PART4_6, OFFTIME_SEQ2_SPEC_PART4_6,PAUSE_SEQ2_SPEC_PART4_6 ,PULSE_SEQ2_SPEC_PART4_6,DELAY_SEQ2_SPEC_PART4_6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_7
                Led7.flash(6, ONTIME_SEQ2_SPEC_PART4_7, OFFTIME_SEQ2_SPEC_PART4_7,PAUSE_SEQ2_SPEC_PART4_7 ,PULSE_SEQ2_SPEC_PART4_7,DELAY_SEQ2_SPEC_PART4_7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_8
                Led8.flash(7, ONTIME_SEQ2_SPEC_PART4_8, OFFTIME_SEQ2_SPEC_PART4_8,PAUSE_SEQ2_SPEC_PART4_8 ,PULSE_SEQ2_SPEC_PART4_8,DELAY_SEQ2_SPEC_PART4_8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_9
                Led9.flash(8, ONTIME_SEQ2_SPEC_PART4_9, OFFTIME_SEQ2_SPEC_PART4_9,PAUSE_SEQ2_SPEC_PART4_9 ,PULSE_SEQ2_SPEC_PART4_9,DELAY_SEQ2_SPEC_PART4_9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_10
                Led10.flash(9, ONTIME_SEQ2_SPEC_PART4_10, OFFTIME_SEQ2_SPEC_PART4_10,PAUSE_SEQ2_SPEC_PART4_10 ,PULSE_SEQ2_SPEC_PART4_10,DELAY_SEQ2_SPEC_PART4_10);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_11
                Led11.flash(12, ONTIME_SEQ2_SPEC_PART4_11, OFFTIME_SEQ2_SPEC_PART4_11,PAUSE_SEQ2_SPEC_PART4_11 ,PULSE_SEQ2_SPEC_PART4_11,DELAY_SEQ2_SPEC_PART4_11);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_12
                Led12.flash(13, ONTIME_SEQ2_SPEC_PART4_12, OFFTIME_SEQ2_SPEC_PART4_12,PAUSE_SEQ2_SPEC_PART4_12 ,PULSE_SEQ2_SPEC_PART4_12,DELAY_SEQ2_SPEC_PART4_12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_13
                Led13.flash(14, ONTIME_SEQ2_SPEC_PART4_13, OFFTIME_SEQ2_SPEC_PART4_13,PAUSE_SEQ2_SPEC_PART4_13 ,PULSE_SEQ2_SPEC_PART4_13,DELAY_SEQ2_SPEC_PART4_13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_14
                Led14.flash(14, ONTIME_SEQ2_SPEC_PART4_14, OFFTIME_SEQ2_SPEC_PART4_14,PAUSE_SEQ2_SPEC_PART4_14 ,PULSE_SEQ2_SPEC_PART4_14,DELAY_SEQ2_SPEC_PART4_14);
                #endif
        ////////////////////////
                #ifdef SEQ2_FLASH_PART4_1
                Led1.blink(0, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_2
                Led2.blink(1, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_3
                Led3.blink(2, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_4
                Led4.blink(3, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_5
                Led5.blink(4, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_6
                Led6.blink(5, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_7
                Led7.blink(6, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_8
                Led8.blink(7, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_9
                Led9.blink(8, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_10
                Led10.blink(9, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_11
                Led11.blink(12, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_12
                Led12.blink(13, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_13
                Led13.blink(14, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_14
                Led14.blink(14, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
        
        
  }
  else if (! Seq1LedPart4OnOff && !Seq2LedPart4OnOff ){
      #ifdef SEQ2_LED_HALOGEN_PART4_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_HALOGEN_PART4_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_NEON_PART4_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2_LED_NEON_PART4_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2_LED_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_LED_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_LED_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_LED_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_LED_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_LED_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_LED_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_LED_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_LED_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_LED_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_LED_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_LED_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_LED_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_LED_PART4_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART4_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART4_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART4_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART4_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART4_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART4_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART4_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART4_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART4_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART4_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART4_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART4_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART4_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART4_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2_FLASH_SPEC_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2_FLASH_SPEC_PART4_14
                Led14.Off(14);
                #endif
  }

   if(Seq10LedPart1OnOff){
        #ifdef SEQ1B_LED_HALOGEN_PART1_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1B_LED_NEON_PART1_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1B_LED_PART1_1
                Led1.On(0);
                #endif
                #ifdef SEQ1B_LED_PART1_2
                Led2.On(1);
                #endif
                #ifdef SEQ1B_LED_PART1_3
                Led3.On(2);
                #endif
                #ifdef SEQ1B_LED_PART1_4
                Led4.On(3);
                #endif
                #ifdef SEQ1B_LED_PART1_5
                Led5.On(4);
                #endif
                #ifdef SEQ1B_LED_PART1_6
                Led6.On(5);
                #endif
                #ifdef SEQ1B_LED_PART1_7
                Led7.On(6);
                #endif
                #ifdef SEQ1B_LED_PART1_8
                Led8.On(7);
                #endif
                #ifdef SEQ1B_LED_PART1_9
                Led9.On(8);
                #endif
                #ifdef SEQ1B_LED_PART1_10
                Led10.On(9);
                #endif
                #ifdef SEQ1B_LED_PART1_11
                Led11.On(12);
                #endif
                #ifdef SEQ1B_LED_PART1_12
                Led12.On(13);
                #endif
                #ifdef SEQ1B_LED_PART1_13
                Led13.On(14);
                #endif
                #ifdef SEQ1B_LED_PART1_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART1_1
                Led1.flash(0, ONTIME_SEQ1B_SPEC_PART1_1 ,OFFTIME_SEQ1B_SPEC_PART1_1,PAUSE_SEQ1B_SPEC_PART1_1 ,PULSE_SEQ1B_SPEC_PART1_1,DELAY_SEQ1B_SPEC_PART1_1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_2
                Led2.flash(1, ONTIME_SEQ1B_SPEC_PART1_2, OFFTIME_SEQ1B_SPEC_PART1_2,PAUSE_SEQ1B_SPEC_PART1_2 ,PULSE_SEQ1B_SPEC_PART1_2,DELAY_SEQ1B_SPEC_PART1_2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_3
                Led3.flash(2, ONTIME_SEQ1B_SPEC_PART1_3, OFFTIME_SEQ1B_SPEC_PART1_3,PAUSE_SEQ1B_SPEC_PART1_3 ,PULSE_SEQ1B_SPEC_PART1_3,DELAY_SEQ1B_SPEC_PART1_3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_4
                Led4.flash(3, ONTIME_SEQ1B_SPEC_PART1_4, OFFTIME_SEQ1B_SPEC_PART1_4,PAUSE_SEQ1B_SPEC_PART1_4 ,PULSE_SEQ1B_SPEC_PART1_4,DELAY_SEQ1B_SPEC_PART1_4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_5
                Led5.flash(4, ONTIME_SEQ1B_SPEC_PART1_5, OFFTIME_SEQ1B_SPEC_PART1_5,PAUSE_SEQ1B_SPEC_PART1_5 ,PULSE_SEQ1B_SPEC_PART1_5,DELAY_SEQ1B_SPEC_PART1_5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_6
                Led6.flash(5, ONTIME_SEQ1B_SPEC_PART1_6, OFFTIME_SEQ1B_SPEC_PART1_6,PAUSE_SEQ1B_SPEC_PART1_6 ,PULSE_SEQ1B_SPEC_PART1_6,DELAY_SEQ1B_SPEC_PART1_6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_7
                Led7.flash(6, ONTIME_SEQ1B_SPEC_PART1_7, OFFTIME_SEQ1B_SPEC_PART1_7,PAUSE_SEQ1B_SPEC_PART1_7 ,PULSE_SEQ1B_SPEC_PART1_7,DELAY_SEQ1B_SPEC_PART1_7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_8
                Led8.flash(7, ONTIME_SEQ1B_SPEC_PART1_8, OFFTIME_SEQ1B_SPEC_PART1_8,PAUSE_SEQ1B_SPEC_PART1_8 ,PULSE_SEQ1B_SPEC_PART1_8,DELAY_SEQ1B_SPEC_PART1_8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_9
                Led9.flash(8, ONTIME_SEQ1B_SPEC_PART1_9, OFFTIME_SEQ1B_SPEC_PART1_9,PAUSE_SEQ1B_SPEC_PART1_9 ,PULSE_SEQ1B_SPEC_PART1_9,DELAY_SEQ1B_SPEC_PART1_9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_10
                Led10.flash(9, ONTIME_SEQ1B_SPEC_PART1_10, OFFTIME_SEQ1B_SPEC_PART1_10,PAUSE_SEQ1B_SPEC_PART1_10 ,PULSE_SEQ1B_SPEC_PART1_10,DELAY_SEQ1B_SPEC_PART1_10);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_11
                Led11.flash(12, ONTIME_SEQ1B_SPEC_PART1_11, OFFTIME_SEQ1B_SPEC_PART1_11,PAUSE_SEQ1B_SPEC_PART1_11 ,PULSE_SEQ1B_SPEC_PART1_11,DELAY_SEQ1B_SPEC_PART1_11);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_12
                Led12.flash(13, ONTIME_SEQ1B_SPEC_PART1_12, OFFTIME_SEQ1B_SPEC_PART1_12,PAUSE_SEQ1B_SPEC_PART1_12 ,PULSE_SEQ1B_SPEC_PART1_12,DELAY_SEQ1B_SPEC_PART1_12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_13
                Led13.flash(14, ONTIME_SEQ1B_SPEC_PART1_13, OFFTIME_SEQ1B_SPEC_PART1_13,PAUSE_SEQ1B_SPEC_PART1_13 ,PULSE_SEQ1B_SPEC_PART1_13,DELAY_SEQ1B_SPEC_PART1_13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_14
                Led14.flash(14, ONTIME_SEQ1B_SPEC_PART1_14, OFFTIME_SEQ1B_SPEC_PART1_14,PAUSE_SEQ1B_SPEC_PART1_14 ,PULSE_SEQ1B_SPEC_PART1_14,DELAY_SEQ1B_SPEC_PART1_14);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_PART1_1
                Led1.blink(0, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_2
                Led2.blink(1, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_3
                Led3.blink(2, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_4
                Led4.blink(3, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_5
                Led5.blink(4, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_6
                Led6.blink(5, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_7
                Led7.blink(6, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_8
                Led8.blink(7, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_9
                Led9.blink(8, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_10
                Led10.blink(9, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_11
                Led11.blink(12, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_12
                Led12.blink(13, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_13
                Led13.blink(14, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_14
                Led14.blink(14, OFFTIME_SEQ1B_PART1, ONTIME_SEQ1B_PART1);
                #endif
  }
  else if (!Seq10LedPart1OnOff && !Seq20LedPart1OnOff)  {
                
        #ifdef SEQ1B_LED_HALOGEN_PART1_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART1_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_NEON_PART1_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1B_LED_NEON_PART1_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_LED_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_PART1_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1B_FLASH_PART1_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1B_FLASH_PART1_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1B_FLASH_PART1_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1B_FLASH_PART1_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1B_FLASH_PART1_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1B_FLASH_PART1_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1B_FLASH_PART1_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1B_FLASH_PART1_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1B_FLASH_PART1_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1B_FLASH_PART1_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1B_FLASH_PART1_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1B_FLASH_PART1_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1B_FLASH_PART1_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1B_FLASH_PART1_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART1_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }


    if(Seq10LedPart2OnOff){
               #ifdef SEQ1B_LED_HALOGEN_PART2_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1B_LED_NEON_PART2_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1B_LED_PART2_1
                Led1.On(0);
                #endif
                #ifdef SEQ1B_LED_PART2_2
                Led2.On(1);
                #endif
                #ifdef SEQ1B_LED_PART2_3
                Led3.On(2);
                #endif
                #ifdef SEQ1B_LED_PART2_4
                Led4.On(3);
                #endif
                #ifdef SEQ1B_LED_PART2_5
                Led5.On(4);
                #endif
                #ifdef SEQ1B_LED_PART2_6
                Led6.On(5);
                #endif
                #ifdef SEQ1B_LED_PART2_7
                Led7.On(6);
                #endif
                #ifdef SEQ1B_LED_PART2_8
                Led8.On(7);
                #endif
                #ifdef SEQ1B_LED_PART2_9
                Led9.On(8);
                #endif
                #ifdef SEQ1B_LED_PART2_10
                Led10.On(9);
                #endif
                #ifdef SEQ1B_LED_PART2_11
                Led11.On(12);
                #endif
                #ifdef SEQ1B_LED_PART2_12
                Led12.On(13);
                #endif
                #ifdef SEQ1B_LED_PART2_13
                Led13.On(14);
                #endif
                #ifdef SEQ1B_LED_PART2_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART2_1
                Led1.flash(0, ONTIME_SEQ1B_SPEC_PART2_1 ,OFFTIME_SEQ1B_SPEC_PART2_1,PAUSE_SEQ1B_SPEC_PART2_1 ,PULSE_SEQ1B_SPEC_PART2_1,DELAY_SEQ1B_SPEC_PART2_1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_2
                Led2.flash(1, ONTIME_SEQ1B_SPEC_PART2_2, OFFTIME_SEQ1B_SPEC_PART2_2,PAUSE_SEQ1B_SPEC_PART2_2 ,PULSE_SEQ1B_SPEC_PART2_2,DELAY_SEQ1B_SPEC_PART2_2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_3
                Led3.flash(2, ONTIME_SEQ1B_SPEC_PART2_3, OFFTIME_SEQ1B_SPEC_PART2_3,PAUSE_SEQ1B_SPEC_PART2_3 ,PULSE_SEQ1B_SPEC_PART2_3,DELAY_SEQ1B_SPEC_PART2_3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_4
                Led4.flash(3, ONTIME_SEQ1B_SPEC_PART2_4, OFFTIME_SEQ1B_SPEC_PART2_4,PAUSE_SEQ1B_SPEC_PART2_4 ,PULSE_SEQ1B_SPEC_PART2_4,DELAY_SEQ1B_SPEC_PART2_4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_5
                Led5.flash(4, ONTIME_SEQ1B_SPEC_PART2_5, OFFTIME_SEQ1B_SPEC_PART2_5,PAUSE_SEQ1B_SPEC_PART2_5 ,PULSE_SEQ1B_SPEC_PART2_5,DELAY_SEQ1B_SPEC_PART2_5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_6
                Led6.flash(5, ONTIME_SEQ1B_SPEC_PART2_6, OFFTIME_SEQ1B_SPEC_PART2_6,PAUSE_SEQ1B_SPEC_PART2_6 ,PULSE_SEQ1B_SPEC_PART2_6,DELAY_SEQ1B_SPEC_PART2_6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_7
                Led7.flash(6, ONTIME_SEQ1B_SPEC_PART2_7, OFFTIME_SEQ1B_SPEC_PART2_7,PAUSE_SEQ1B_SPEC_PART2_7 ,PULSE_SEQ1B_SPEC_PART2_7,DELAY_SEQ1B_SPEC_PART2_7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_8
                Led8.flash(7, ONTIME_SEQ1B_SPEC_PART2_8, OFFTIME_SEQ1B_SPEC_PART2_8,PAUSE_SEQ1B_SPEC_PART2_8 ,PULSE_SEQ1B_SPEC_PART2_8,DELAY_SEQ1B_SPEC_PART2_8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_9
                Led9.flash(8, ONTIME_SEQ1B_SPEC_PART2_9, OFFTIME_SEQ1B_SPEC_PART2_9,PAUSE_SEQ1B_SPEC_PART2_9 ,PULSE_SEQ1B_SPEC_PART2_9,DELAY_SEQ1B_SPEC_PART2_9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_10
                Led10.flash(9, ONTIME_SEQ1B_SPEC_PART2_10, OFFTIME_SEQ1B_SPEC_PART2_10,PAUSE_SEQ1B_SPEC_PART2_10 ,PULSE_SEQ1B_SPEC_PART2_10,DELAY_SEQ1B_SPEC_PART2_10);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_11
                Led11.flash(12, ONTIME_SEQ1B_SPEC_PART2_11, OFFTIME_SEQ1B_SPEC_PART2_11,PAUSE_SEQ1B_SPEC_PART2_11 ,PULSE_SEQ1B_SPEC_PART2_11,DELAY_SEQ1B_SPEC_PART2_11);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_12
                Led12.flash(13, ONTIME_SEQ1B_SPEC_PART2_12, OFFTIME_SEQ1B_SPEC_PART2_12,PAUSE_SEQ1B_SPEC_PART2_12 ,PULSE_SEQ1B_SPEC_PART2_12,DELAY_SEQ1B_SPEC_PART2_12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_13
                Led13.flash(14, ONTIME_SEQ1B_SPEC_PART2_13, OFFTIME_SEQ1B_SPEC_PART2_13,PAUSE_SEQ1B_SPEC_PART2_13 ,PULSE_SEQ1B_SPEC_PART2_13,DELAY_SEQ1B_SPEC_PART2_13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_14
                Led14.flash(14, ONTIME_SEQ1B_SPEC_PART2_14, OFFTIME_SEQ1B_SPEC_PART2_14,PAUSE_SEQ1B_SPEC_PART2_14 ,PULSE_SEQ1B_SPEC_PART2_14,DELAY_SEQ1B_SPEC_PART2_14);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_PART2_1
                Led1.blink(0, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_2
                Led2.blink(1, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_3
                Led3.blink(2, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_4
                Led4.blink(3, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_5
                Led5.blink(4, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_6
                Led6.blink(5, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_7
                Led7.blink(6, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_8
                Led8.blink(7, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_9
                Led9.blink(8, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_10
                Led10.blink(9, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_11
                Led11.blink(12, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_12
                Led12.blink(13, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_13
                Led13.blink(14, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_14
                Led14.blink(14, OFFTIME_SEQ1B_PART2, ONTIME_SEQ1B_PART2);
                #endif
        
        
  }
  else if (!Seq10LedPart2OnOff && !Seq20LedPart2OnOff)  {
    
        #ifdef SEQ1B_LED_HALOGEN_PART2_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART2_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_NEON_PART2_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1B_LED_NEON_PART2_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_LED_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_PART2_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1B_FLASH_PART2_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1B_FLASH_PART2_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1B_FLASH_PART2_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1B_FLASH_PART2_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1B_FLASH_PART2_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1B_FLASH_PART2_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1B_FLASH_PART2_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1B_FLASH_PART2_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1B_FLASH_PART2_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1B_FLASH_PART2_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1B_FLASH_PART2_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1B_FLASH_PART2_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1B_FLASH_PART2_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1B_FLASH_PART2_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART2_14
                Led14.Off(14);
                #endif
  }  
  
  
  if(Seq10LedPart3OnOff){
      #ifdef SEQ1B_LED_HALOGEN_PART3_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1B_LED_NEON_PART3_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1B_LED_PART3_1
                Led1.On(0);
                #endif
                #ifdef SEQ1B_LED_PART3_2
                Led2.On(1);
                #endif
                #ifdef SEQ1B_LED_PART3_3
                Led3.On(2);
                #endif
                #ifdef SEQ1B_LED_PART3_4
                Led4.On(3);
                #endif
                #ifdef SEQ1B_LED_PART3_5
                Led5.On(4);
                #endif
                #ifdef SEQ1B_LED_PART3_6
                Led6.On(5);
                #endif
                #ifdef SEQ1B_LED_PART3_7
                Led7.On(6);
                #endif
                #ifdef SEQ1B_LED_PART3_8
                Led8.On(7);
                #endif
                #ifdef SEQ1B_LED_PART3_9
                Led9.On(8);
                #endif
                #ifdef SEQ1B_LED_PART3_10
                Led10.On(9);
                #endif
                #ifdef SEQ1B_LED_PART3_11
                Led11.On(12);
                #endif
                #ifdef SEQ1B_LED_PART3_12
                Led12.On(13);
                #endif
                #ifdef SEQ1B_LED_PART3_13
                Led13.On(14);
                #endif
                #ifdef SEQ1B_LED_PART3_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART3_1
                Led1.flash(0, ONTIME_SEQ1B_SPEC_PART3_1 ,OFFTIME_SEQ1B_SPEC_PART3_1,PAUSE_SEQ1B_SPEC_PART3_1 ,PULSE_SEQ1B_SPEC_PART3_1,DELAY_SEQ1B_SPEC_PART3_1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_2
                Led2.flash(1, ONTIME_SEQ1B_SPEC_PART3_2, OFFTIME_SEQ1B_SPEC_PART3_2,PAUSE_SEQ1B_SPEC_PART3_2 ,PULSE_SEQ1B_SPEC_PART3_2,DELAY_SEQ1B_SPEC_PART3_2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_3
                Led3.flash(2, ONTIME_SEQ1B_SPEC_PART3_3, OFFTIME_SEQ1B_SPEC_PART3_3,PAUSE_SEQ1B_SPEC_PART3_3 ,PULSE_SEQ1B_SPEC_PART3_3,DELAY_SEQ1B_SPEC_PART3_3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_4
                Led4.flash(3, ONTIME_SEQ1B_SPEC_PART3_4, OFFTIME_SEQ1B_SPEC_PART3_4,PAUSE_SEQ1B_SPEC_PART3_4 ,PULSE_SEQ1B_SPEC_PART3_4,DELAY_SEQ1B_SPEC_PART3_4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_5
                Led5.flash(4, ONTIME_SEQ1B_SPEC_PART3_5, OFFTIME_SEQ1B_SPEC_PART3_5,PAUSE_SEQ1B_SPEC_PART3_5 ,PULSE_SEQ1B_SPEC_PART3_5,DELAY_SEQ1B_SPEC_PART3_5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_6
                Led6.flash(5, ONTIME_SEQ1B_SPEC_PART3_6, OFFTIME_SEQ1B_SPEC_PART3_6,PAUSE_SEQ1B_SPEC_PART3_6 ,PULSE_SEQ1B_SPEC_PART3_6,DELAY_SEQ1B_SPEC_PART3_6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_7
                Led7.flash(6, ONTIME_SEQ1B_SPEC_PART3_7, OFFTIME_SEQ1B_SPEC_PART3_7,PAUSE_SEQ1B_SPEC_PART3_7 ,PULSE_SEQ1B_SPEC_PART3_7,DELAY_SEQ1B_SPEC_PART3_7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_8
                Led8.flash(7, ONTIME_SEQ1B_SPEC_PART3_8, OFFTIME_SEQ1B_SPEC_PART3_8,PAUSE_SEQ1B_SPEC_PART3_8 ,PULSE_SEQ1B_SPEC_PART3_8,DELAY_SEQ1B_SPEC_PART3_8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_9
                Led9.flash(8, ONTIME_SEQ1B_SPEC_PART3_9, OFFTIME_SEQ1B_SPEC_PART3_9,PAUSE_SEQ1B_SPEC_PART3_9 ,PULSE_SEQ1B_SPEC_PART3_9,DELAY_SEQ1B_SPEC_PART3_9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_10
                Led10.flash(9, ONTIME_SEQ1B_SPEC_PART3_10, OFFTIME_SEQ1B_SPEC_PART3_10,PAUSE_SEQ1B_SPEC_PART3_10 ,PULSE_SEQ1B_SPEC_PART3_10,DELAY_SEQ1B_SPEC_PART3_10);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_11
                Led11.flash(12, ONTIME_SEQ1B_SPEC_PART3_11, OFFTIME_SEQ1B_SPEC_PART3_11,PAUSE_SEQ1B_SPEC_PART3_11 ,PULSE_SEQ1B_SPEC_PART3_11,DELAY_SEQ1B_SPEC_PART3_11);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_12
                Led12.flash(13, ONTIME_SEQ1B_SPEC_PART3_12, OFFTIME_SEQ1B_SPEC_PART3_12,PAUSE_SEQ1B_SPEC_PART3_12 ,PULSE_SEQ1B_SPEC_PART3_12,DELAY_SEQ1B_SPEC_PART3_12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_13
                Led13.flash(14, ONTIME_SEQ1B_SPEC_PART3_13, OFFTIME_SEQ1B_SPEC_PART3_13,PAUSE_SEQ1B_SPEC_PART3_13 ,PULSE_SEQ1B_SPEC_PART3_13,DELAY_SEQ1B_SPEC_PART3_13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_14
                Led14.flash(14, ONTIME_SEQ1B_SPEC_PART3_14, OFFTIME_SEQ1B_SPEC_PART3_14,PAUSE_SEQ1B_SPEC_PART3_14 ,PULSE_SEQ1B_SPEC_PART3_14,DELAY_SEQ1B_SPEC_PART3_14);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_PART3_1
                Led1.blink(0, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_2
                Led2.blink(1, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_3
                Led3.blink(2, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_4
                Led4.blink(3, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_5
                Led5.blink(4, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_6
                Led6.blink(5, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_7
                Led7.blink(6, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_8
                Led8.blink(7, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_9
                Led9.blink(8, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_10
                Led10.blink(9, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_11
                Led11.blink(12, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_12
                Led12.blink(13, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_13
                Led13.blink(14, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_14
                Led14.blink(14, OFFTIME_SEQ1B_PART3, ONTIME_SEQ1B_PART3);
                #endif
        
        
        
  }
  else if (!Seq10LedPart3OnOff && !Seq20LedPart3OnOff)  {
                  
        
        #ifdef SEQ1B_LED_HALOGEN_PART3_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART3_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_NEON_PART3_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1B_LED_NEON_PART3_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_LED_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_PART3_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1B_FLASH_PART3_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1B_FLASH_PART3_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1B_FLASH_PART3_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1B_FLASH_PART3_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1B_FLASH_PART3_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1B_FLASH_PART3_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1B_FLASH_PART3_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1B_FLASH_PART3_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1B_FLASH_PART3_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1B_FLASH_PART3_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1B_FLASH_PART3_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1B_FLASH_PART3_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1B_FLASH_PART3_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1B_FLASH_PART3_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART3_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }

  
     if(Seq10LedPart4OnOff){
     #ifdef SEQ1B_LED_HALOGEN_PART4_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ1B_LED_NEON_PART4_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ1B_LED_PART4_1
                Led1.On(0);
                #endif
                #ifdef SEQ1B_LED_PART4_2
                Led2.On(1);
                #endif
                #ifdef SEQ1B_LED_PART4_3
                Led3.On(2);
                #endif
                #ifdef SEQ1B_LED_PART4_4
                Led4.On(3);
                #endif
                #ifdef SEQ1B_LED_PART4_5
                Led5.On(4);
                #endif
                #ifdef SEQ1B_LED_PART4_6
                Led6.On(5);
                #endif
                #ifdef SEQ1B_LED_PART4_7
                Led7.On(6);
                #endif
                #ifdef SEQ1B_LED_PART4_8
                Led8.On(7);
                #endif
                #ifdef SEQ1B_LED_PART4_9
                Led9.On(8);
                #endif
                #ifdef SEQ1B_LED_PART4_10
                Led10.On(9);
                #endif
                #ifdef SEQ1B_LED_PART4_11
                Led11.On(12);
                #endif
                #ifdef SEQ1B_LED_PART4_12
                Led12.On(13);
                #endif
                #ifdef SEQ1B_LED_PART4_13
                Led13.On(14);
                #endif
                #ifdef SEQ1B_LED_PART4_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART4_1
                Led1.flash(0, ONTIME_SEQ1B_SPEC_PART4_1 ,OFFTIME_SEQ1B_SPEC_PART4_1,PAUSE_SEQ1B_SPEC_PART4_1 ,PULSE_SEQ1B_SPEC_PART4_1,DELAY_SEQ1B_SPEC_PART4_1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_2
                Led2.flash(1, ONTIME_SEQ1B_SPEC_PART4_2, OFFTIME_SEQ1B_SPEC_PART4_2,PAUSE_SEQ1B_SPEC_PART4_2 ,PULSE_SEQ1B_SPEC_PART4_2,DELAY_SEQ1B_SPEC_PART4_2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_3
                Led3.flash(2, ONTIME_SEQ1B_SPEC_PART4_3, OFFTIME_SEQ1B_SPEC_PART4_3,PAUSE_SEQ1B_SPEC_PART4_3 ,PULSE_SEQ1B_SPEC_PART4_3,DELAY_SEQ1B_SPEC_PART4_3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_4
                Led4.flash(3, ONTIME_SEQ1B_SPEC_PART4_4, OFFTIME_SEQ1B_SPEC_PART4_4,PAUSE_SEQ1B_SPEC_PART4_4 ,PULSE_SEQ1B_SPEC_PART4_4,DELAY_SEQ1B_SPEC_PART4_4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_5
                Led5.flash(4, ONTIME_SEQ1B_SPEC_PART4_5, OFFTIME_SEQ1B_SPEC_PART4_5,PAUSE_SEQ1B_SPEC_PART4_5 ,PULSE_SEQ1B_SPEC_PART4_5,DELAY_SEQ1B_SPEC_PART4_5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_6
                Led6.flash(5, ONTIME_SEQ1B_SPEC_PART4_6, OFFTIME_SEQ1B_SPEC_PART4_6,PAUSE_SEQ1B_SPEC_PART4_6 ,PULSE_SEQ1B_SPEC_PART4_6,DELAY_SEQ1B_SPEC_PART4_6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_7
                Led7.flash(6, ONTIME_SEQ1B_SPEC_PART4_7, OFFTIME_SEQ1B_SPEC_PART4_7,PAUSE_SEQ1B_SPEC_PART4_7 ,PULSE_SEQ1B_SPEC_PART4_7,DELAY_SEQ1B_SPEC_PART4_7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_8
                Led8.flash(7, ONTIME_SEQ1B_SPEC_PART4_8, OFFTIME_SEQ1B_SPEC_PART4_8,PAUSE_SEQ1B_SPEC_PART4_8 ,PULSE_SEQ1B_SPEC_PART4_8,DELAY_SEQ1B_SPEC_PART4_8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_9
                Led9.flash(8, ONTIME_SEQ1B_SPEC_PART4_9, OFFTIME_SEQ1B_SPEC_PART4_9,PAUSE_SEQ1B_SPEC_PART4_9 ,PULSE_SEQ1B_SPEC_PART4_9,DELAY_SEQ1B_SPEC_PART4_9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_10
                Led10.flash(9, ONTIME_SEQ1B_SPEC_PART4_10, OFFTIME_SEQ1B_SPEC_PART4_10,PAUSE_SEQ1B_SPEC_PART4_10 ,PULSE_SEQ1B_SPEC_PART4_10,DELAY_SEQ1B_SPEC_PART4_10);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_11
                Led11.flash(12, ONTIME_SEQ1B_SPEC_PART4_11, OFFTIME_SEQ1B_SPEC_PART4_11,PAUSE_SEQ1B_SPEC_PART4_11 ,PULSE_SEQ1B_SPEC_PART4_11,DELAY_SEQ1B_SPEC_PART4_11);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_12
                Led12.flash(13, ONTIME_SEQ1B_SPEC_PART4_12, OFFTIME_SEQ1B_SPEC_PART4_12,PAUSE_SEQ1B_SPEC_PART4_12 ,PULSE_SEQ1B_SPEC_PART4_12,DELAY_SEQ1B_SPEC_PART4_12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_13
                Led13.flash(14, ONTIME_SEQ1B_SPEC_PART4_13, OFFTIME_SEQ1B_SPEC_PART4_13,PAUSE_SEQ1B_SPEC_PART4_13 ,PULSE_SEQ1B_SPEC_PART4_13,DELAY_SEQ1B_SPEC_PART4_13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_14
                Led14.flash(14, ONTIME_SEQ1B_SPEC_PART4_14, OFFTIME_SEQ1B_SPEC_PART4_14,PAUSE_SEQ1B_SPEC_PART4_14 ,PULSE_SEQ1B_SPEC_PART4_14,DELAY_SEQ1B_SPEC_PART4_14);
                #endif
        ////////////////////////
                #ifdef SEQ1B_FLASH_PART4_1
                Led1.blink(0, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_2
                Led2.blink(1, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_3
                Led3.blink(2, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_4
                Led4.blink(3, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_5
                Led5.blink(4, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_6
                Led6.blink(5, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_7
                Led7.blink(6, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_8
                Led8.blink(7, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_9
                Led9.blink(8, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_10
                Led10.blink(9, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_11
                Led11.blink(12, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_12
                Led12.blink(13, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_13
                Led13.blink(14, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_14
                Led14.blink(14, OFFTIME_SEQ1B_PART4, ONTIME_SEQ1B_PART4);
                #endif
        
        
  }
  else if (! Seq10LedPart4OnOff && !Seq20LedPart4OnOff ){
      #ifdef SEQ1B_LED_HALOGEN_PART4_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_HALOGEN_PART4_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_NEON_PART4_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ1B_LED_NEON_PART4_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ1B_LED_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_LED_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_LED_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_LED_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_LED_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_LED_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_LED_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_LED_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_LED_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_LED_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_LED_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_LED_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_LED_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_LED_PART4_14
                Led14.Off(15);
                #endif
                #ifdef SEQ1B_FLASH_PART4_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ1B_FLASH_PART4_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ1B_FLASH_PART4_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ1B_FLASH_PART4_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ1B_FLASH_PART4_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ1B_FLASH_PART4_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ1B_FLASH_PART4_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ1B_FLASH_PART4_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ1B_FLASH_PART4_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ1B_FLASH_PART4_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ1B_FLASH_PART4_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ1B_FLASH_PART4_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ1B_FLASH_PART4_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ1B_FLASH_PART4_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ1B_FLASH_SPEC_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ1B_FLASH_SPEC_PART4_14
                Led14.Off(14);
                #endif
  }


 if(Seq20LedPart1OnOff){
        #ifdef SEQ2B_LED_HALOGEN_PART1_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2B_LED_NEON_PART1_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2B_LED_PART1_1
                Led1.On(0);
                #endif
                #ifdef SEQ2B_LED_PART1_2
                Led2.On(1);
                #endif
                #ifdef SEQ2B_LED_PART1_3
                Led3.On(2);
                #endif
                #ifdef SEQ2B_LED_PART1_4
                Led4.On(3);
                #endif
                #ifdef SEQ2B_LED_PART1_5
                Led5.On(4);
                #endif
                #ifdef SEQ2B_LED_PART1_6
                Led6.On(5);
                #endif
                #ifdef SEQ2B_LED_PART1_7
                Led7.On(6);
                #endif
                #ifdef SEQ2B_LED_PART1_8
                Led8.On(7);
                #endif
                #ifdef SEQ2B_LED_PART1_9
                Led9.On(8);
                #endif
                #ifdef SEQ2B_LED_PART1_10
                Led10.On(9);
                #endif
                #ifdef SEQ2B_LED_PART1_11
                Led11.On(12);
                #endif
                #ifdef SEQ2B_LED_PART1_12
                Led12.On(13);
                #endif
                #ifdef SEQ2B_LED_PART1_13
                Led13.On(14);
                #endif
                #ifdef SEQ2B_LED_PART1_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART1_1
                Led1.flash(0, ONTIME_SEQ2B_SPEC_PART1_1 ,OFFTIME_SEQ2B_SPEC_PART1_1,PAUSE_SEQ2B_SPEC_PART1_1 ,PULSE_SEQ2B_SPEC_PART1_1,DELAY_SEQ2B_SPEC_PART1_1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_2
                Led2.flash(1, ONTIME_SEQ2B_SPEC_PART1_2, OFFTIME_SEQ2B_SPEC_PART1_2,PAUSE_SEQ2B_SPEC_PART1_2 ,PULSE_SEQ2B_SPEC_PART1_2,DELAY_SEQ2B_SPEC_PART1_2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_3
                Led3.flash(2, ONTIME_SEQ2B_SPEC_PART1_3, OFFTIME_SEQ2B_SPEC_PART1_3,PAUSE_SEQ2B_SPEC_PART1_3 ,PULSE_SEQ2B_SPEC_PART1_3,DELAY_SEQ2B_SPEC_PART1_3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_4
                Led4.flash(3, ONTIME_SEQ2B_SPEC_PART1_4, OFFTIME_SEQ2B_SPEC_PART1_4,PAUSE_SEQ2B_SPEC_PART1_4 ,PULSE_SEQ2B_SPEC_PART1_4,DELAY_SEQ2B_SPEC_PART1_4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_5
                Led5.flash(4, ONTIME_SEQ2B_SPEC_PART1_5, OFFTIME_SEQ2B_SPEC_PART1_5,PAUSE_SEQ2B_SPEC_PART1_5 ,PULSE_SEQ2B_SPEC_PART1_5,DELAY_SEQ2B_SPEC_PART1_5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_6
                Led6.flash(5, ONTIME_SEQ2B_SPEC_PART1_6, OFFTIME_SEQ2B_SPEC_PART1_6,PAUSE_SEQ2B_SPEC_PART1_6 ,PULSE_SEQ2B_SPEC_PART1_6,DELAY_SEQ2B_SPEC_PART1_6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_7
                Led7.flash(6, ONTIME_SEQ2B_SPEC_PART1_7, OFFTIME_SEQ2B_SPEC_PART1_7,PAUSE_SEQ2B_SPEC_PART1_7 ,PULSE_SEQ2B_SPEC_PART1_7,DELAY_SEQ2B_SPEC_PART1_7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_8
                Led8.flash(7, ONTIME_SEQ2B_SPEC_PART1_8, OFFTIME_SEQ2B_SPEC_PART1_8,PAUSE_SEQ2B_SPEC_PART1_8 ,PULSE_SEQ2B_SPEC_PART1_8,DELAY_SEQ2B_SPEC_PART1_8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_9
                Led9.flash(8, ONTIME_SEQ2B_SPEC_PART1_9, OFFTIME_SEQ2B_SPEC_PART1_9,PAUSE_SEQ2B_SPEC_PART1_9 ,PULSE_SEQ2B_SPEC_PART1_9,DELAY_SEQ2B_SPEC_PART1_9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_10
                Led10.flash(9, ONTIME_SEQ2B_SPEC_PART1_10, OFFTIME_SEQ2B_SPEC_PART1_10,PAUSE_SEQ2B_SPEC_PART1_10 ,PULSE_SEQ2B_SPEC_PART1_10,DELAY_SEQ2B_SPEC_PART1_10);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_11
                Led11.flash(12, ONTIME_SEQ2B_SPEC_PART1_11, OFFTIME_SEQ2B_SPEC_PART1_11,PAUSE_SEQ2B_SPEC_PART1_11 ,PULSE_SEQ2B_SPEC_PART1_11,DELAY_SEQ2B_SPEC_PART1_11);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_12
                Led12.flash(13, ONTIME_SEQ2B_SPEC_PART1_12, OFFTIME_SEQ2B_SPEC_PART1_12,PAUSE_SEQ2B_SPEC_PART1_12 ,PULSE_SEQ2B_SPEC_PART1_12,DELAY_SEQ2B_SPEC_PART1_12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_13
                Led13.flash(14, ONTIME_SEQ2B_SPEC_PART1_13, OFFTIME_SEQ2B_SPEC_PART1_13,PAUSE_SEQ2B_SPEC_PART1_13 ,PULSE_SEQ2B_SPEC_PART1_13,DELAY_SEQ2B_SPEC_PART1_13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_14
                Led14.flash(14, ONTIME_SEQ2B_SPEC_PART1_14, OFFTIME_SEQ2B_SPEC_PART1_14,PAUSE_SEQ2B_SPEC_PART1_14 ,PULSE_SEQ2B_SPEC_PART1_14,DELAY_SEQ2B_SPEC_PART1_14);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_PART1_1
                Led1.blink(0, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_2
                Led2.blink(1, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_3
                Led3.blink(2, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_4
                Led4.blink(3, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_5
                Led5.blink(4, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_6
                Led6.blink(5, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_7
                Led7.blink(6, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_8
                Led8.blink(7, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_9
                Led9.blink(8, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_10
                Led10.blink(9, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_11
                Led11.blink(12, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_12
                Led12.blink(13, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_13
                Led13.blink(14, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_14
                Led14.blink(14, OFFTIME_SEQ2B_PART1, ONTIME_SEQ2B_PART1);
                #endif
  }
  else if (!Seq10LedPart1OnOff && !Seq20LedPart1OnOff)  {
                
        #ifdef SEQ2B_LED_HALOGEN_PART1_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART1_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_NEON_PART1_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2B_LED_NEON_PART1_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_LED_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_PART1_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2B_FLASH_PART1_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2B_FLASH_PART1_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2B_FLASH_PART1_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2B_FLASH_PART1_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2B_FLASH_PART1_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2B_FLASH_PART1_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2B_FLASH_PART1_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2B_FLASH_PART1_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2B_FLASH_PART1_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2B_FLASH_PART1_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2B_FLASH_PART1_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2B_FLASH_PART1_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2B_FLASH_PART1_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2B_FLASH_PART1_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART1_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART1_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }


    if(Seq20LedPart2OnOff){
               #ifdef SEQ2B_LED_HALOGEN_PART2_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2B_LED_NEON_PART2_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2B_LED_PART2_1
                Led1.On(0);
                #endif
                #ifdef SEQ2B_LED_PART2_2
                Led2.On(1);
                #endif
                #ifdef SEQ2B_LED_PART2_3
                Led3.On(2);
                #endif
                #ifdef SEQ2B_LED_PART2_4
                Led4.On(3);
                #endif
                #ifdef SEQ2B_LED_PART2_5
                Led5.On(4);
                #endif
                #ifdef SEQ2B_LED_PART2_6
                Led6.On(5);
                #endif
                #ifdef SEQ2B_LED_PART2_7
                Led7.On(6);
                #endif
                #ifdef SEQ2B_LED_PART2_8
                Led8.On(7);
                #endif
                #ifdef SEQ2B_LED_PART2_9
                Led9.On(8);
                #endif
                #ifdef SEQ2B_LED_PART2_10
                Led10.On(9);
                #endif
                #ifdef SEQ2B_LED_PART2_11
                Led11.On(12);
                #endif
                #ifdef SEQ2B_LED_PART2_12
                Led12.On(13);
                #endif
                #ifdef SEQ2B_LED_PART2_13
                Led13.On(14);
                #endif
                #ifdef SEQ2B_LED_PART2_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART2_1
                Led1.flash(0, ONTIME_SEQ2B_SPEC_PART2_1 ,OFFTIME_SEQ2B_SPEC_PART2_1,PAUSE_SEQ2B_SPEC_PART2_1 ,PULSE_SEQ2B_SPEC_PART2_1,DELAY_SEQ2B_SPEC_PART2_1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_2
                Led2.flash(1, ONTIME_SEQ2B_SPEC_PART2_2, OFFTIME_SEQ2B_SPEC_PART2_2,PAUSE_SEQ2B_SPEC_PART2_2 ,PULSE_SEQ2B_SPEC_PART2_2,DELAY_SEQ2B_SPEC_PART2_2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_3
                Led3.flash(2, ONTIME_SEQ2B_SPEC_PART2_3, OFFTIME_SEQ2B_SPEC_PART2_3,PAUSE_SEQ2B_SPEC_PART2_3 ,PULSE_SEQ2B_SPEC_PART2_3,DELAY_SEQ2B_SPEC_PART2_3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_4
                Led4.flash(3, ONTIME_SEQ2B_SPEC_PART2_4, OFFTIME_SEQ2B_SPEC_PART2_4,PAUSE_SEQ2B_SPEC_PART2_4 ,PULSE_SEQ2B_SPEC_PART2_4,DELAY_SEQ2B_SPEC_PART2_4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_5
                Led5.flash(4, ONTIME_SEQ2B_SPEC_PART2_5, OFFTIME_SEQ2B_SPEC_PART2_5,PAUSE_SEQ2B_SPEC_PART2_5 ,PULSE_SEQ2B_SPEC_PART2_5,DELAY_SEQ2B_SPEC_PART2_5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_6
                Led6.flash(5, ONTIME_SEQ2B_SPEC_PART2_6, OFFTIME_SEQ2B_SPEC_PART2_6,PAUSE_SEQ2B_SPEC_PART2_6 ,PULSE_SEQ2B_SPEC_PART2_6,DELAY_SEQ2B_SPEC_PART2_6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_7
                Led7.flash(6, ONTIME_SEQ2B_SPEC_PART2_7, OFFTIME_SEQ2B_SPEC_PART2_7,PAUSE_SEQ2B_SPEC_PART2_7 ,PULSE_SEQ2B_SPEC_PART2_7,DELAY_SEQ2B_SPEC_PART2_7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_8
                Led8.flash(7, ONTIME_SEQ2B_SPEC_PART2_8, OFFTIME_SEQ2B_SPEC_PART2_8,PAUSE_SEQ2B_SPEC_PART2_8 ,PULSE_SEQ2B_SPEC_PART2_8,DELAY_SEQ2B_SPEC_PART2_8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_9
                Led9.flash(8, ONTIME_SEQ2B_SPEC_PART2_9, OFFTIME_SEQ2B_SPEC_PART2_9,PAUSE_SEQ2B_SPEC_PART2_9 ,PULSE_SEQ2B_SPEC_PART2_9,DELAY_SEQ2B_SPEC_PART2_9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_10
                Led10.flash(9, ONTIME_SEQ2B_SPEC_PART2_10, OFFTIME_SEQ2B_SPEC_PART2_10,PAUSE_SEQ2B_SPEC_PART2_10 ,PULSE_SEQ2B_SPEC_PART2_10,DELAY_SEQ2B_SPEC_PART2_10);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_11
                Led11.flash(12, ONTIME_SEQ2B_SPEC_PART2_11, OFFTIME_SEQ2B_SPEC_PART2_11,PAUSE_SEQ2B_SPEC_PART2_11 ,PULSE_SEQ2B_SPEC_PART2_11,DELAY_SEQ2B_SPEC_PART2_11);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_12
                Led12.flash(13, ONTIME_SEQ2B_SPEC_PART2_12, OFFTIME_SEQ2B_SPEC_PART2_12,PAUSE_SEQ2B_SPEC_PART2_12 ,PULSE_SEQ2B_SPEC_PART2_12,DELAY_SEQ2B_SPEC_PART2_12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_13
                Led13.flash(14, ONTIME_SEQ2B_SPEC_PART2_13, OFFTIME_SEQ2B_SPEC_PART2_13,PAUSE_SEQ2B_SPEC_PART2_13 ,PULSE_SEQ2B_SPEC_PART2_13,DELAY_SEQ2B_SPEC_PART2_13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_14
                Led14.flash(14, ONTIME_SEQ2B_SPEC_PART2_14, OFFTIME_SEQ2B_SPEC_PART2_14,PAUSE_SEQ2B_SPEC_PART2_14 ,PULSE_SEQ2B_SPEC_PART2_14,DELAY_SEQ2B_SPEC_PART2_14);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_PART2_1
                Led1.blink(0, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_2
                Led2.blink(1, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_3
                Led3.blink(2, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_4
                Led4.blink(3, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_5
                Led5.blink(4, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_6
                Led6.blink(5, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_7
                Led7.blink(6, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_8
                Led8.blink(7, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_9
                Led9.blink(8, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_10
                Led10.blink(9, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_11
                Led11.blink(12, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_12
                Led12.blink(13, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_13
                Led13.blink(14, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_14
                Led14.blink(14, OFFTIME_SEQ2B_PART2, ONTIME_SEQ2B_PART2);
                #endif
        
        
  }
  else if (!Seq10LedPart2OnOff && !Seq20LedPart2OnOff)  {
    
        #ifdef SEQ2B_LED_HALOGEN_PART2_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART2_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_NEON_PART2_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2B_LED_NEON_PART2_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_LED_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_PART2_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2B_FLASH_PART2_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2B_FLASH_PART2_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2B_FLASH_PART2_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2B_FLASH_PART2_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2B_FLASH_PART2_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2B_FLASH_PART2_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2B_FLASH_PART2_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2B_FLASH_PART2_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2B_FLASH_PART2_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2B_FLASH_PART2_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2B_FLASH_PART2_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2B_FLASH_PART2_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2B_FLASH_PART2_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2B_FLASH_PART2_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART2_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART2_14
                Led14.Off(14);
                #endif
  }  
  
  
  if(Seq20LedPart3OnOff){
      #ifdef SEQ2B_LED_HALOGEN_PART3_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2B_LED_NEON_PART3_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2B_LED_PART3_1
                Led1.On(0);
                #endif
                #ifdef SEQ2B_LED_PART3_2
                Led2.On(1);
                #endif
                #ifdef SEQ2B_LED_PART3_3
                Led3.On(2);
                #endif
                #ifdef SEQ2B_LED_PART3_4
                Led4.On(3);
                #endif
                #ifdef SEQ2B_LED_PART3_5
                Led5.On(4);
                #endif
                #ifdef SEQ2B_LED_PART3_6
                Led6.On(5);
                #endif
                #ifdef SEQ2B_LED_PART3_7
                Led7.On(6);
                #endif
                #ifdef SEQ2B_LED_PART3_8
                Led8.On(7);
                #endif
                #ifdef SEQ2B_LED_PART3_9
                Led9.On(8);
                #endif
                #ifdef SEQ2B_LED_PART3_10
                Led10.On(9);
                #endif
                #ifdef SEQ2B_LED_PART3_11
                Led11.On(12);
                #endif
                #ifdef SEQ2B_LED_PART3_12
                Led12.On(13);
                #endif
                #ifdef SEQ2B_LED_PART3_13
                Led13.On(14);
                #endif
                #ifdef SEQ2B_LED_PART3_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART3_1
                Led1.flash(0, ONTIME_SEQ2B_SPEC_PART3_1 ,OFFTIME_SEQ2B_SPEC_PART3_1,PAUSE_SEQ2B_SPEC_PART3_1 ,PULSE_SEQ2B_SPEC_PART3_1,DELAY_SEQ2B_SPEC_PART3_1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_2
                Led2.flash(1, ONTIME_SEQ2B_SPEC_PART3_2, OFFTIME_SEQ2B_SPEC_PART3_2,PAUSE_SEQ2B_SPEC_PART3_2 ,PULSE_SEQ2B_SPEC_PART3_2,DELAY_SEQ2B_SPEC_PART3_2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_3
                Led3.flash(2, ONTIME_SEQ2B_SPEC_PART3_3, OFFTIME_SEQ2B_SPEC_PART3_3,PAUSE_SEQ2B_SPEC_PART3_3 ,PULSE_SEQ2B_SPEC_PART3_3,DELAY_SEQ2B_SPEC_PART3_3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_4
                Led4.flash(3, ONTIME_SEQ2B_SPEC_PART3_4, OFFTIME_SEQ2B_SPEC_PART3_4,PAUSE_SEQ2B_SPEC_PART3_4 ,PULSE_SEQ2B_SPEC_PART3_4,DELAY_SEQ2B_SPEC_PART3_4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_5
                Led5.flash(4, ONTIME_SEQ2B_SPEC_PART3_5, OFFTIME_SEQ2B_SPEC_PART3_5,PAUSE_SEQ2B_SPEC_PART3_5 ,PULSE_SEQ2B_SPEC_PART3_5,DELAY_SEQ2B_SPEC_PART3_5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_6
                Led6.flash(5, ONTIME_SEQ2B_SPEC_PART3_6, OFFTIME_SEQ2B_SPEC_PART3_6,PAUSE_SEQ2B_SPEC_PART3_6 ,PULSE_SEQ2B_SPEC_PART3_6,DELAY_SEQ2B_SPEC_PART3_6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_7
                Led7.flash(6, ONTIME_SEQ2B_SPEC_PART3_7, OFFTIME_SEQ2B_SPEC_PART3_7,PAUSE_SEQ2B_SPEC_PART3_7 ,PULSE_SEQ2B_SPEC_PART3_7,DELAY_SEQ2B_SPEC_PART3_7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_8
                Led8.flash(7, ONTIME_SEQ2B_SPEC_PART3_8, OFFTIME_SEQ2B_SPEC_PART3_8,PAUSE_SEQ2B_SPEC_PART3_8 ,PULSE_SEQ2B_SPEC_PART3_8,DELAY_SEQ2B_SPEC_PART3_8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_9
                Led9.flash(8, ONTIME_SEQ2B_SPEC_PART3_9, OFFTIME_SEQ2B_SPEC_PART3_9,PAUSE_SEQ2B_SPEC_PART3_9 ,PULSE_SEQ2B_SPEC_PART3_9,DELAY_SEQ2B_SPEC_PART3_9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_10
                Led10.flash(9, ONTIME_SEQ2B_SPEC_PART3_10, OFFTIME_SEQ2B_SPEC_PART3_10,PAUSE_SEQ2B_SPEC_PART3_10 ,PULSE_SEQ2B_SPEC_PART3_10,DELAY_SEQ2B_SPEC_PART3_10);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_11
                Led11.flash(12, ONTIME_SEQ2B_SPEC_PART3_11, OFFTIME_SEQ2B_SPEC_PART3_11,PAUSE_SEQ2B_SPEC_PART3_11 ,PULSE_SEQ2B_SPEC_PART3_11,DELAY_SEQ2B_SPEC_PART3_11);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_12
                Led12.flash(13, ONTIME_SEQ2B_SPEC_PART3_12, OFFTIME_SEQ2B_SPEC_PART3_12,PAUSE_SEQ2B_SPEC_PART3_12 ,PULSE_SEQ2B_SPEC_PART3_12,DELAY_SEQ2B_SPEC_PART3_12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_13
                Led13.flash(14, ONTIME_SEQ2B_SPEC_PART3_13, OFFTIME_SEQ2B_SPEC_PART3_13,PAUSE_SEQ2B_SPEC_PART3_13 ,PULSE_SEQ2B_SPEC_PART3_13,DELAY_SEQ2B_SPEC_PART3_13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_14
                Led14.flash(14, ONTIME_SEQ2B_SPEC_PART3_14, OFFTIME_SEQ2B_SPEC_PART3_14,PAUSE_SEQ2B_SPEC_PART3_14 ,PULSE_SEQ2B_SPEC_PART3_14,DELAY_SEQ2B_SPEC_PART3_14);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_PART3_1
                Led1.blink(0, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_2
                Led2.blink(1, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_3
                Led3.blink(2, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_4
                Led4.blink(3, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_5
                Led5.blink(4, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_6
                Led6.blink(5, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_7
                Led7.blink(6, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_8
                Led8.blink(7, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_9
                Led9.blink(8, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_10
                Led10.blink(9, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_11
                Led11.blink(12, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_12
                Led12.blink(13, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_13
                Led13.blink(14, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_14
                Led14.blink(14, OFFTIME_SEQ2B_PART3, ONTIME_SEQ2B_PART3);
                #endif
        
        
        
  }
  else if (!Seq10LedPart3OnOff && !Seq20LedPart3OnOff)  {
                  
        
        #ifdef SEQ2B_LED_HALOGEN_PART3_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART3_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_NEON_PART3_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2B_LED_NEON_PART3_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_LED_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_PART3_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2B_FLASH_PART3_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2B_FLASH_PART3_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2B_FLASH_PART3_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2B_FLASH_PART3_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2B_FLASH_PART3_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2B_FLASH_PART3_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2B_FLASH_PART3_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2B_FLASH_PART3_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2B_FLASH_PART3_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2B_FLASH_PART3_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2B_FLASH_PART3_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2B_FLASH_PART3_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2B_FLASH_PART3_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2B_FLASH_PART3_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART3_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART3_14
                Led14.Off(14);
                #endif
        ////////////////////////
  }

  
     if(Seq20LedPart4OnOff){
     #ifdef SEQ2B_LED_HALOGEN_PART4_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef SEQ2B_LED_NEON_PART4_1
                Led1.neonOn(0,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_2
                Led2.neonOn(1,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_3
                Led3.neonOn(2,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_4
                Led4.neonOn(3,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_5
                Led5.neonOn(4,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_6
                Led6.neonOn(5,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_7
                Led7.neonOn(6,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_8
                Led8.neonOn(7,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_9
                Led9.neonOn(8,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_10
                Led10.neonOn(9,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_11
                Led11.neonOn(12,0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_12
                Led12.neonOn(13,1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_13
                Led13.neonOn(14,2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef SEQ2B_LED_PART4_1
                Led1.On(0);
                #endif
                #ifdef SEQ2B_LED_PART4_2
                Led2.On(1);
                #endif
                #ifdef SEQ2B_LED_PART4_3
                Led3.On(2);
                #endif
                #ifdef SEQ2B_LED_PART4_4
                Led4.On(3);
                #endif
                #ifdef SEQ2B_LED_PART4_5
                Led5.On(4);
                #endif
                #ifdef SEQ2B_LED_PART4_6
                Led6.On(5);
                #endif
                #ifdef SEQ2B_LED_PART4_7
                Led7.On(6);
                #endif
                #ifdef SEQ2B_LED_PART4_8
                Led8.On(7);
                #endif
                #ifdef SEQ2B_LED_PART4_9
                Led9.On(8);
                #endif
                #ifdef SEQ2B_LED_PART4_10
                Led10.On(9);
                #endif
                #ifdef SEQ2B_LED_PART4_11
                Led11.On(12);
                #endif
                #ifdef SEQ2B_LED_PART4_12
                Led12.On(13);
                #endif
                #ifdef SEQ2B_LED_PART4_13
                Led13.On(14);
                #endif
                #ifdef SEQ2B_LED_PART4_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART4_1
                Led1.flash(0, ONTIME_SEQ2B_SPEC_PART4_1 ,OFFTIME_SEQ2B_SPEC_PART4_1,PAUSE_SEQ2B_SPEC_PART4_1 ,PULSE_SEQ2B_SPEC_PART4_1,DELAY_SEQ2B_SPEC_PART4_1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_2
                Led2.flash(1, ONTIME_SEQ2B_SPEC_PART4_2, OFFTIME_SEQ2B_SPEC_PART4_2,PAUSE_SEQ2B_SPEC_PART4_2 ,PULSE_SEQ2B_SPEC_PART4_2,DELAY_SEQ2B_SPEC_PART4_2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_3
                Led3.flash(2, ONTIME_SEQ2B_SPEC_PART4_3, OFFTIME_SEQ2B_SPEC_PART4_3,PAUSE_SEQ2B_SPEC_PART4_3 ,PULSE_SEQ2B_SPEC_PART4_3,DELAY_SEQ2B_SPEC_PART4_3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_4
                Led4.flash(3, ONTIME_SEQ2B_SPEC_PART4_4, OFFTIME_SEQ2B_SPEC_PART4_4,PAUSE_SEQ2B_SPEC_PART4_4 ,PULSE_SEQ2B_SPEC_PART4_4,DELAY_SEQ2B_SPEC_PART4_4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_5
                Led5.flash(4, ONTIME_SEQ2B_SPEC_PART4_5, OFFTIME_SEQ2B_SPEC_PART4_5,PAUSE_SEQ2B_SPEC_PART4_5 ,PULSE_SEQ2B_SPEC_PART4_5,DELAY_SEQ2B_SPEC_PART4_5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_6
                Led6.flash(5, ONTIME_SEQ2B_SPEC_PART4_6, OFFTIME_SEQ2B_SPEC_PART4_6,PAUSE_SEQ2B_SPEC_PART4_6 ,PULSE_SEQ2B_SPEC_PART4_6,DELAY_SEQ2B_SPEC_PART4_6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_7
                Led7.flash(6, ONTIME_SEQ2B_SPEC_PART4_7, OFFTIME_SEQ2B_SPEC_PART4_7,PAUSE_SEQ2B_SPEC_PART4_7 ,PULSE_SEQ2B_SPEC_PART4_7,DELAY_SEQ2B_SPEC_PART4_7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_8
                Led8.flash(7, ONTIME_SEQ2B_SPEC_PART4_8, OFFTIME_SEQ2B_SPEC_PART4_8,PAUSE_SEQ2B_SPEC_PART4_8 ,PULSE_SEQ2B_SPEC_PART4_8,DELAY_SEQ2B_SPEC_PART4_8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_9
                Led9.flash(8, ONTIME_SEQ2B_SPEC_PART4_9, OFFTIME_SEQ2B_SPEC_PART4_9,PAUSE_SEQ2B_SPEC_PART4_9 ,PULSE_SEQ2B_SPEC_PART4_9,DELAY_SEQ2B_SPEC_PART4_9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_10
                Led10.flash(9, ONTIME_SEQ2B_SPEC_PART4_10, OFFTIME_SEQ2B_SPEC_PART4_10,PAUSE_SEQ2B_SPEC_PART4_10 ,PULSE_SEQ2B_SPEC_PART4_10,DELAY_SEQ2B_SPEC_PART4_10);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_11
                Led11.flash(12, ONTIME_SEQ2B_SPEC_PART4_11, OFFTIME_SEQ2B_SPEC_PART4_11,PAUSE_SEQ2B_SPEC_PART4_11 ,PULSE_SEQ2B_SPEC_PART4_11,DELAY_SEQ2B_SPEC_PART4_11);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_12
                Led12.flash(13, ONTIME_SEQ2B_SPEC_PART4_12, OFFTIME_SEQ2B_SPEC_PART4_12,PAUSE_SEQ2B_SPEC_PART4_12 ,PULSE_SEQ2B_SPEC_PART4_12,DELAY_SEQ2B_SPEC_PART4_12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_13
                Led13.flash(14, ONTIME_SEQ2B_SPEC_PART4_13, OFFTIME_SEQ2B_SPEC_PART4_13,PAUSE_SEQ2B_SPEC_PART4_13 ,PULSE_SEQ2B_SPEC_PART4_13,DELAY_SEQ2B_SPEC_PART4_13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_14
                Led14.flash(14, ONTIME_SEQ2B_SPEC_PART4_14, OFFTIME_SEQ2B_SPEC_PART4_14,PAUSE_SEQ2B_SPEC_PART4_14 ,PULSE_SEQ2B_SPEC_PART4_14,DELAY_SEQ2B_SPEC_PART4_14);
                #endif
        ////////////////////////
                #ifdef SEQ2B_FLASH_PART4_1
                Led1.blink(0, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_2
                Led2.blink(1, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_3
                Led3.blink(2, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_4
                Led4.blink(3, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_5
                Led5.blink(4, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_6
                Led6.blink(5, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_7
                Led7.blink(6, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_8
                Led8.blink(7, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_9
                Led9.blink(8, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_10
                Led10.blink(9, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_11
                Led11.blink(12, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_12
                Led12.blink(13, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_13
                Led13.blink(14, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_14
                Led14.blink(14, OFFTIME_SEQ2B_PART4, ONTIME_SEQ2B_PART4);
                #endif
        
        
  }
  else if (! Seq10LedPart4OnOff && !Seq20LedPart4OnOff ){
      #ifdef SEQ2B_LED_HALOGEN_PART4_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_HALOGEN_PART4_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_NEON_PART4_1
                Led1.neonOff(0);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_2
                Led2.neonOff(1);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_3
                Led3.neonOff(2);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_4
                Led4.neonOff(3);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_5
                Led5.neonOff(4);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_6
                Led6.neonOff(5);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_7
                Led7.neonOff(6);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_8
                Led8.neonOff(7);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_9
                Led9.neonOff(8);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_10
                Led10.neonOff(9);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_11
                Led11.neonOff(12);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_12
                Led12.neonOff(13);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_13
                Led13.neonOff(14);
                #endif
                #ifdef SEQ2B_LED_NEON_PART4_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef SEQ2B_LED_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_LED_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_LED_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_LED_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_LED_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_LED_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_LED_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_LED_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_LED_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_LED_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_LED_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_LED_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_LED_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_LED_PART4_14
                Led14.Off(15);
                #endif
                #ifdef SEQ2B_FLASH_PART4_1
                Led1.blinkStop(0);
                #endif
                #ifdef SEQ2B_FLASH_PART4_2
                Led2.blinkStop(1);
                #endif
                #ifdef SEQ2B_FLASH_PART4_3
                Led3.blinkStop(2);
                #endif
                #ifdef SEQ2B_FLASH_PART4_4
                Led4.blinkStop(3);
                #endif
                #ifdef SEQ2B_FLASH_PART4_5
                Led5.blinkStop(4);
                #endif
                #ifdef SEQ2B_FLASH_PART4_6
                Led6.blinkStop(5);
                #endif
                #ifdef SEQ2B_FLASH_PART4_7
                Led7.blinkStop(6);
                #endif
                #ifdef SEQ2B_FLASH_PART4_8
                Led8.blinkStop(7);
                #endif
                #ifdef SEQ2B_FLASH_PART4_9
                Led9.blinkStop(8);
                #endif
                #ifdef SEQ2B_FLASH_PART4_10
                Led10.blinkStop(9);
                #endif
                #ifdef SEQ2B_FLASH_PART4_11
                Led11.blinkStop(12);
                #endif
                #ifdef SEQ2B_FLASH_PART4_12
                Led12.blinkStop(13);
                #endif
                #ifdef SEQ2B_FLASH_PART4_13
                Led13.blinkStop(14);
                #endif
                #ifdef SEQ2B_FLASH_PART4_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef SEQ2B_FLASH_SPEC_PART4_1
                Led1.Off(0);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_2
                Led2.Off(1);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_3
                Led3.Off(2);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_4
                Led4.Off(3);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_5
                Led5.Off(4);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_6
                Led6.Off(5);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_7
                Led7.Off(6);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_8
                Led8.Off(7);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_9
                Led9.Off(8);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_10
                Led10.Off(9);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_11
                Led11.Off(12);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_12
                Led12.Off(13);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_13
                Led13.Off(14);
                #endif
                #ifdef SEQ2B_FLASH_SPEC_PART4_14
                Led14.Off(14);
                #endif
  }





#ifdef ACTION1_MULTI

 if (Fishing_Led /*&& lightsOn*/ ) {

    if (action1Switch==1){
                 #ifdef ACTION1A_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
                #ifdef ACTION1A_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1A_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1A_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1A_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1A_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1A_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1A_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1A_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1A_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1A_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1A_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1A_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1A_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1A_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1A_1
                Led1.On(0);
                #endif
                #ifdef ACTION1A_2
                Led2.On(1);
                #endif
                #ifdef ACTION1A_3
                Led3.On(2);
                #endif
                #ifdef ACTION1A_4
                Led4.On(3);
                #endif
                #ifdef ACTION1A_5
                Led5.On(4);
                #endif
                #ifdef ACTION1A_6
                Led6.On(5);
                #endif
                #ifdef ACTION1A_7
                Led7.On(6);
                #endif
                #ifdef ACTION1A_8
                Led8.On(7);
                #endif
                #ifdef ACTION1A_9
                Led9.On(8);
                #endif
                #ifdef ACTION1A_10
                Led10.On(9);
                #endif
                #ifdef ACTION1A_11
                Led11.On(12);
                #endif
                #ifdef ACTION1A_12
                Led12.On(13);
                #endif
                #ifdef ACTION1A_13
                Led13.On(14);
                #endif
                #ifdef ACTION1A_14
                Led14.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1A_SPEC_1 ,OFFTIME_ACTION1A_SPEC_1,PAUSE_ACTION1A_SPEC_1 ,PULSE_ACTION1A_SPEC_1,DELAY_ACTION1A_SPEC_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1A_SPEC_2, OFFTIME_ACTION1A_SPEC_2,PAUSE_ACTION1A_SPEC_2 ,PULSE_ACTION1A_SPEC_2,DELAY_ACTION1A_SPEC_2);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1A_SPEC_3, OFFTIME_ACTION1A_SPEC_3,PAUSE_ACTION1A_SPEC_3 ,PULSE_ACTION1A_SPEC_3,DELAY_ACTION1A_SPEC_3);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1A_SPEC_4, OFFTIME_ACTION1A_SPEC_4,PAUSE_ACTION1A_SPEC_4 ,PULSE_ACTION1A_SPEC_4,DELAY_ACTION1A_SPEC_4);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1A_SPEC_5, OFFTIME_ACTION1A_SPEC_5,PAUSE_ACTION1A_SPEC_5 ,PULSE_ACTION1A_SPEC_5,DELAY_ACTION1A_SPEC_5);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1A_SPEC_6, OFFTIME_ACTION1A_SPEC_6,PAUSE_ACTION1A_SPEC_6 ,PULSE_ACTION1A_SPEC_6,DELAY_ACTION1A_SPEC_6);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1A_SPEC_7, OFFTIME_ACTION1A_SPEC_7,PAUSE_ACTION1A_SPEC_7 ,PULSE_ACTION1A_SPEC_7,DELAY_ACTION1A_SPEC_7);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1A_SPEC_8, OFFTIME_ACTION1A_SPEC_8,PAUSE_ACTION1A_SPEC_8 ,PULSE_ACTION1A_SPEC_8,DELAY_ACTION1A_SPEC_8);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1A_SPEC_9, OFFTIME_ACTION1A_SPEC_9,PAUSE_ACTION1A_SPEC_9 ,PULSE_ACTION1A_SPEC_9,DELAY_ACTION1A_SPEC_9);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1A_SPEC_10, OFFTIME_ACTION1A_SPEC_10,PAUSE_ACTION1A_SPEC_10 ,PULSE_ACTION1A_SPEC_10,DELAY_ACTION1A_SPEC_10);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1A_SPEC_11, OFFTIME_ACTION1A_SPEC_11,PAUSE_ACTION1A_SPEC_11 ,PULSE_ACTION1A_SPEC_11,DELAY_ACTION1A_SPEC_11);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1A_SPEC_12, OFFTIME_ACTION1A_SPEC_12,PAUSE_ACTION1A_SPEC_12 ,PULSE_ACTION1A_SPEC_12,DELAY_ACTION1A_SPEC_12);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1A_SPEC_13, OFFTIME_ACTION1A_SPEC_13,PAUSE_ACTION1A_SPEC_13 ,PULSE_ACTION1A_SPEC_13,DELAY_ACTION1A_SPEC_13);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1A_SPEC_14, OFFTIME_ACTION1A_SPEC_14,PAUSE_ACTION1A_SPEC_14 ,PULSE_ACTION1A_SPEC_14,DELAY_ACTION1A_SPEC_14);
                #endif

    }

     else if (action1Switch==2){

                #ifdef ACTION1A_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
                #ifdef ACTION1A_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1A_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1A_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1A_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1A_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1A_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1A_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1A_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1A_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1A_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1A_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1A_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1A_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1A_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1A_1
                Led1.On(0);
                #endif
                #ifdef ACTION1A_2
                Led2.On(1);
                #endif
                #ifdef ACTION1A_3
                Led3.On(2);
                #endif
                #ifdef ACTION1A_4
                Led4.On(3);
                #endif
                #ifdef ACTION1A_5
                Led5.On(4);
                #endif
                #ifdef ACTION1A_6
                Led6.On(5);
                #endif
                #ifdef ACTION1A_7
                Led7.On(6);
                #endif
                #ifdef ACTION1A_8
                Led8.On(7);
                #endif
                #ifdef ACTION1A_9
                Led9.On(8);
                #endif
                #ifdef ACTION1A_10
                Led10.On(9);
                #endif
                #ifdef ACTION1A_11
                Led11.On(12);
                #endif
                #ifdef ACTION1A_12
                Led12.On(13);
                #endif
                #ifdef ACTION1A_13
                Led13.On(14);
                #endif
                #ifdef ACTION1A_14
                Led14.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1A_SPEC_1 ,OFFTIME_ACTION1A_SPEC_1,PAUSE_ACTION1A_SPEC_1 ,PULSE_ACTION1A_SPEC_1,DELAY_ACTION1A_SPEC_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1A_SPEC_2, OFFTIME_ACTION1A_SPEC_2,PAUSE_ACTION1A_SPEC_2 ,PULSE_ACTION1A_SPEC_2,DELAY_ACTION1A_SPEC_2);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1A_SPEC_3, OFFTIME_ACTION1A_SPEC_3,PAUSE_ACTION1A_SPEC_3 ,PULSE_ACTION1A_SPEC_3,DELAY_ACTION1A_SPEC_3);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1A_SPEC_4, OFFTIME_ACTION1A_SPEC_4,PAUSE_ACTION1A_SPEC_4 ,PULSE_ACTION1A_SPEC_4,DELAY_ACTION1A_SPEC_4);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1A_SPEC_5, OFFTIME_ACTION1A_SPEC_5,PAUSE_ACTION1A_SPEC_5 ,PULSE_ACTION1A_SPEC_5,DELAY_ACTION1A_SPEC_5);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1A_SPEC_6, OFFTIME_ACTION1A_SPEC_6,PAUSE_ACTION1A_SPEC_6 ,PULSE_ACTION1A_SPEC_6,DELAY_ACTION1A_SPEC_6);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1A_SPEC_7, OFFTIME_ACTION1A_SPEC_7,PAUSE_ACTION1A_SPEC_7 ,PULSE_ACTION1A_SPEC_7,DELAY_ACTION1A_SPEC_7);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1A_SPEC_8, OFFTIME_ACTION1A_SPEC_8,PAUSE_ACTION1A_SPEC_8 ,PULSE_ACTION1A_SPEC_8,DELAY_ACTION1A_SPEC_8);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1A_SPEC_9, OFFTIME_ACTION1A_SPEC_9,PAUSE_ACTION1A_SPEC_9 ,PULSE_ACTION1A_SPEC_9,DELAY_ACTION1A_SPEC_9);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1A_SPEC_10, OFFTIME_ACTION1A_SPEC_10,PAUSE_ACTION1A_SPEC_10 ,PULSE_ACTION1A_SPEC_10,DELAY_ACTION1A_SPEC_10);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1A_SPEC_11, OFFTIME_ACTION1A_SPEC_11,PAUSE_ACTION1A_SPEC_11 ,PULSE_ACTION1A_SPEC_11,DELAY_ACTION1A_SPEC_11);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1A_SPEC_12, OFFTIME_ACTION1A_SPEC_12,PAUSE_ACTION1A_SPEC_12 ,PULSE_ACTION1A_SPEC_12,DELAY_ACTION1A_SPEC_12);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1A_SPEC_13, OFFTIME_ACTION1A_SPEC_13,PAUSE_ACTION1A_SPEC_13 ,PULSE_ACTION1A_SPEC_13,DELAY_ACTION1A_SPEC_13);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1A_SPEC_14, OFFTIME_ACTION1A_SPEC_14,PAUSE_ACTION1A_SPEC_14 ,PULSE_ACTION1A_SPEC_14,DELAY_ACTION1A_SPEC_14);
                #endif

                 #ifdef ACTION1B_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
                #ifdef ACTION1B_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1B_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1B_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1B_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1B_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1B_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1B_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1B_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1B_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1B_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1B_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1B_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1B_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1B_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1B_1
                Led1.On(0);
                #endif
                #ifdef ACTION1B_2
                Led2.On(1);
                #endif
                #ifdef ACTION1B_3
                Led3.On(2);
                #endif
                #ifdef ACTION1B_4
                Led4.On(3);
                #endif
                #ifdef ACTION1B_5
                Led5.On(4);
                #endif
                #ifdef ACTION1B_6
                Led6.On(5);
                #endif
                #ifdef ACTION1B_7
                Led7.On(6);
                #endif
                #ifdef ACTION1B_8
                Led8.On(7);
                #endif
                #ifdef ACTION1B_9
                Led9.On(8);
                #endif
                #ifdef ACTION1B_10
                Led10.On(9);
                #endif
                #ifdef ACTION1B_11
                Led11.On(12);
                #endif
                #ifdef ACTION1B_12
                Led12.On(13);
                #endif
                #ifdef ACTION1B_13
                Led13.On(14);
                #endif
                #ifdef ACTION1B_14
                Led14.On(15);
                #endif
                
                #ifdef ACTION1B_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif

                #ifdef ACTION1B_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1B_SPEC_1 ,OFFTIME_ACTION1B_SPEC_1,PAUSE_ACTION1B_SPEC_1 ,PULSE_ACTION1B_SPEC_1,DELAY_ACTION1B_SPEC_1);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1B_SPEC_2, OFFTIME_ACTION1B_SPEC_2,PAUSE_ACTION1B_SPEC_2 ,PULSE_ACTION1B_SPEC_2,DELAY_ACTION1B_SPEC_2);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1B_SPEC_3, OFFTIME_ACTION1B_SPEC_3,PAUSE_ACTION1B_SPEC_3 ,PULSE_ACTION1B_SPEC_3,DELAY_ACTION1B_SPEC_3);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1B_SPEC_4, OFFTIME_ACTION1B_SPEC_4,PAUSE_ACTION1B_SPEC_4 ,PULSE_ACTION1B_SPEC_4,DELAY_ACTION1B_SPEC_4);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1B_SPEC_5, OFFTIME_ACTION1B_SPEC_5,PAUSE_ACTION1B_SPEC_5 ,PULSE_ACTION1B_SPEC_5,DELAY_ACTION1B_SPEC_5);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1B_SPEC_6, OFFTIME_ACTION1B_SPEC_6,PAUSE_ACTION1B_SPEC_6 ,PULSE_ACTION1B_SPEC_6,DELAY_ACTION1B_SPEC_6);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1B_SPEC_7, OFFTIME_ACTION1B_SPEC_7,PAUSE_ACTION1B_SPEC_7 ,PULSE_ACTION1B_SPEC_7,DELAY_ACTION1B_SPEC_7);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1B_SPEC_8, OFFTIME_ACTION1B_SPEC_8,PAUSE_ACTION1B_SPEC_8 ,PULSE_ACTION1B_SPEC_8,DELAY_ACTION1B_SPEC_8);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1B_SPEC_9, OFFTIME_ACTION1B_SPEC_9,PAUSE_ACTION1B_SPEC_9 ,PULSE_ACTION1B_SPEC_9,DELAY_ACTION1B_SPEC_9);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1B_SPEC_10, OFFTIME_ACTION1B_SPEC_10,PAUSE_ACTION1B_SPEC_10 ,PULSE_ACTION1B_SPEC_10,DELAY_ACTION1B_SPEC_10);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1B_SPEC_11, OFFTIME_ACTION1B_SPEC_11,PAUSE_ACTION1B_SPEC_11 ,PULSE_ACTION1B_SPEC_11,DELAY_ACTION1B_SPEC_11);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1B_SPEC_12, OFFTIME_ACTION1B_SPEC_12,PAUSE_ACTION1B_SPEC_12 ,PULSE_ACTION1B_SPEC_12,DELAY_ACTION1B_SPEC_12);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1B_SPEC_13, OFFTIME_ACTION1B_SPEC_13,PAUSE_ACTION1B_SPEC_13 ,PULSE_ACTION1B_SPEC_13,DELAY_ACTION1B_SPEC_13);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1B_SPEC_14, OFFTIME_ACTION1B_SPEC_14,PAUSE_ACTION1B_SPEC_14 ,PULSE_ACTION1B_SPEC_14,DELAY_ACTION1B_SPEC_14);
                #endif
     } 
     else if (action1Switch==3){
   
                 #ifdef ACTION1A_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
                #ifdef ACTION1A_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1A_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1A_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1A_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1A_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1A_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1A_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1A_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1A_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1A_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1A_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1A_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1A_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1A_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1A_1
                Led1.On(0);
                #endif
                #ifdef ACTION1A_2
                Led2.On(1);
                #endif
                #ifdef ACTION1A_3
                Led3.On(2);
                #endif
                #ifdef ACTION1A_4
                Led4.On(3);
                #endif
                #ifdef ACTION1A_5
                Led5.On(4);
                #endif
                #ifdef ACTION1A_6
                Led6.On(5);
                #endif
                #ifdef ACTION1A_7
                Led7.On(6);
                #endif
                #ifdef ACTION1A_8
                Led8.On(7);
                #endif
                #ifdef ACTION1A_9
                Led9.On(8);
                #endif
                #ifdef ACTION1A_10
                Led10.On(9);
                #endif
                #ifdef ACTION1A_11
                Led11.On(12);
                #endif
                #ifdef ACTION1A_12
                Led12.On(13);
                #endif
                #ifdef ACTION1A_13
                Led13.On(14);
                #endif
                #ifdef ACTION1A_14
                Led14.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif 

                #ifdef ACTION1A_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1A_SPEC_1 ,OFFTIME_ACTION1A_SPEC_1,PAUSE_ACTION1A_SPEC_1 ,PULSE_ACTION1A_SPEC_1,DELAY_ACTION1A_SPEC_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1A_SPEC_2, OFFTIME_ACTION1A_SPEC_2,PAUSE_ACTION1A_SPEC_2 ,PULSE_ACTION1A_SPEC_2,DELAY_ACTION1A_SPEC_2);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1A_SPEC_3, OFFTIME_ACTION1A_SPEC_3,PAUSE_ACTION1A_SPEC_3 ,PULSE_ACTION1A_SPEC_3,DELAY_ACTION1A_SPEC_3);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1A_SPEC_4, OFFTIME_ACTION1A_SPEC_4,PAUSE_ACTION1A_SPEC_4 ,PULSE_ACTION1A_SPEC_4,DELAY_ACTION1A_SPEC_4);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1A_SPEC_5, OFFTIME_ACTION1A_SPEC_5,PAUSE_ACTION1A_SPEC_5 ,PULSE_ACTION1A_SPEC_5,DELAY_ACTION1A_SPEC_5);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1A_SPEC_6, OFFTIME_ACTION1A_SPEC_6,PAUSE_ACTION1A_SPEC_6 ,PULSE_ACTION1A_SPEC_6,DELAY_ACTION1A_SPEC_6);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1A_SPEC_7, OFFTIME_ACTION1A_SPEC_7,PAUSE_ACTION1A_SPEC_7 ,PULSE_ACTION1A_SPEC_7,DELAY_ACTION1A_SPEC_7);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1A_SPEC_8, OFFTIME_ACTION1A_SPEC_8,PAUSE_ACTION1A_SPEC_8 ,PULSE_ACTION1A_SPEC_8,DELAY_ACTION1A_SPEC_8);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1A_SPEC_9, OFFTIME_ACTION1A_SPEC_9,PAUSE_ACTION1A_SPEC_9 ,PULSE_ACTION1A_SPEC_9,DELAY_ACTION1A_SPEC_9);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1A_SPEC_10, OFFTIME_ACTION1A_SPEC_10,PAUSE_ACTION1A_SPEC_10 ,PULSE_ACTION1A_SPEC_10,DELAY_ACTION1A_SPEC_10);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1A_SPEC_11, OFFTIME_ACTION1A_SPEC_11,PAUSE_ACTION1A_SPEC_11 ,PULSE_ACTION1A_SPEC_11,DELAY_ACTION1A_SPEC_11);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1A_SPEC_12, OFFTIME_ACTION1A_SPEC_12,PAUSE_ACTION1A_SPEC_12 ,PULSE_ACTION1A_SPEC_12,DELAY_ACTION1A_SPEC_12);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1A_SPEC_13, OFFTIME_ACTION1A_SPEC_13,PAUSE_ACTION1A_SPEC_13 ,PULSE_ACTION1A_SPEC_13,DELAY_ACTION1A_SPEC_13);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1A_SPEC_14, OFFTIME_ACTION1A_SPEC_14,PAUSE_ACTION1A_SPEC_14 ,PULSE_ACTION1A_SPEC_14,DELAY_ACTION1A_SPEC_14);
                #endif

                 #ifdef ACTION1B_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION1B_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1B_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1B_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1B_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1B_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1B_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1B_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1B_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1B_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1B_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1B_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1B_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1B_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1B_NEON_14
                Led14.neonOn(15,0);
                #endif   
                 #ifdef ACTION1B_1
                Led1.On(0);
                #endif
                #ifdef ACTION1B_2
                Led2.On(1);
                #endif
                #ifdef ACTION1B_3
                Led3.On(2);
                #endif
                #ifdef ACTION1B_4
                Led4.On(3);
                #endif
                #ifdef ACTION1B_5
                Led5.On(4);
                #endif
                #ifdef ACTION1B_6
                Led6.On(5);
                #endif
                #ifdef ACTION1B_7
                Led7.On(6);
                #endif
                #ifdef ACTION1B_8
                Led8.On(7);
                #endif
                #ifdef ACTION1B_9
                Led9.On(8);
                #endif
                #ifdef ACTION1B_10
                Led10.On(9);
                #endif
                #ifdef ACTION1B_11
                Led11.On(12);
                #endif
                #ifdef ACTION1B_12
                Led12.On(13);
                #endif
                #ifdef ACTION1B_13
                Led13.On(14);
                #endif
                #ifdef ACTION1B_14
                Led14.On(15);
                #endif
                
                #ifdef ACTION1B_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif

                #ifdef ACTION1B_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1B_SPEC_1 ,OFFTIME_ACTION1B_SPEC_1,PAUSE_ACTION1B_SPEC_1 ,PULSE_ACTION1B_SPEC_1,DELAY_ACTION1B_SPEC_1);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1B_SPEC_2, OFFTIME_ACTION1B_SPEC_2,PAUSE_ACTION1B_SPEC_2 ,PULSE_ACTION1B_SPEC_2,DELAY_ACTION1B_SPEC_2);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1B_SPEC_3, OFFTIME_ACTION1B_SPEC_3,PAUSE_ACTION1B_SPEC_3 ,PULSE_ACTION1B_SPEC_3,DELAY_ACTION1B_SPEC_3);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1B_SPEC_4, OFFTIME_ACTION1B_SPEC_4,PAUSE_ACTION1B_SPEC_4 ,PULSE_ACTION1B_SPEC_4,DELAY_ACTION1B_SPEC_4);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1B_SPEC_5, OFFTIME_ACTION1B_SPEC_5,PAUSE_ACTION1B_SPEC_5 ,PULSE_ACTION1B_SPEC_5,DELAY_ACTION1B_SPEC_5);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1B_SPEC_6, OFFTIME_ACTION1B_SPEC_6,PAUSE_ACTION1B_SPEC_6 ,PULSE_ACTION1B_SPEC_6,DELAY_ACTION1B_SPEC_6);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1B_SPEC_7, OFFTIME_ACTION1B_SPEC_7,PAUSE_ACTION1B_SPEC_7 ,PULSE_ACTION1B_SPEC_7,DELAY_ACTION1B_SPEC_7);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1B_SPEC_8, OFFTIME_ACTION1B_SPEC_8,PAUSE_ACTION1B_SPEC_8 ,PULSE_ACTION1B_SPEC_8,DELAY_ACTION1B_SPEC_8);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1B_SPEC_9, OFFTIME_ACTION1B_SPEC_9,PAUSE_ACTION1B_SPEC_9 ,PULSE_ACTION1B_SPEC_9,DELAY_ACTION1B_SPEC_9);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1B_SPEC_10, OFFTIME_ACTION1B_SPEC_10,PAUSE_ACTION1B_SPEC_10 ,PULSE_ACTION1B_SPEC_10,DELAY_ACTION1B_SPEC_10);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1B_SPEC_11, OFFTIME_ACTION1B_SPEC_11,PAUSE_ACTION1B_SPEC_11 ,PULSE_ACTION1B_SPEC_11,DELAY_ACTION1B_SPEC_11);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1B_SPEC_12, OFFTIME_ACTION1B_SPEC_12,PAUSE_ACTION1B_SPEC_12 ,PULSE_ACTION1B_SPEC_12,DELAY_ACTION1B_SPEC_12);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1B_SPEC_13, OFFTIME_ACTION1B_SPEC_13,PAUSE_ACTION1B_SPEC_13 ,PULSE_ACTION1B_SPEC_13,DELAY_ACTION1B_SPEC_13);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1B_SPEC_14, OFFTIME_ACTION1B_SPEC_14,PAUSE_ACTION1B_SPEC_14 ,PULSE_ACTION1B_SPEC_14,DELAY_ACTION1B_SPEC_14);
                #endif

                 #ifdef ACTION1C_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1C_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION1C_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1C_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1C_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1C_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1C_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1C_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1C_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1C_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1C_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1C_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1C_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1C_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1C_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1C_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1C_1
                Led1.On(0);
                #endif
                #ifdef ACTION1C_2
                Led2.On(1);
                #endif
                #ifdef ACTION1C_3
                Led3.On(2);
                #endif
                #ifdef ACTION1C_4
                Led4.On(3);
                #endif
                #ifdef ACTION1C_5
                Led5.On(4);
                #endif
                #ifdef ACTION1C_6
                Led6.On(5);
                #endif
                #ifdef ACTION1C_7
                Led7.On(6);
                #endif
                #ifdef ACTION1C_8
                Led8.On(7);
                #endif
                #ifdef ACTION1C_9
                Led9.On(8);
                #endif
                #ifdef ACTION1C_10
                Led10.On(9);
                #endif
                #ifdef ACTION1C_11
                Led11.On(12);
                #endif
                #ifdef ACTION1C_12
                Led12.On(13);
                #endif
                #ifdef ACTION1C_13
                Led13.On(14);
                #endif
                #ifdef ACTION1C_14
                Led14.On(15);
                #endif
                
                #ifdef ACTION1C_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif

                #ifdef ACTION1C_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1C_SPEC_1 ,OFFTIME_ACTION1C_SPEC_1,PAUSE_ACTION1C_SPEC_1 ,PULSE_ACTION1C_SPEC_1,DELAY_ACTION1C_SPEC_1);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1C_SPEC_2, OFFTIME_ACTION1C_SPEC_2,PAUSE_ACTION1C_SPEC_2 ,PULSE_ACTION1C_SPEC_2,DELAY_ACTION1C_SPEC_2);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1C_SPEC_3, OFFTIME_ACTION1C_SPEC_3,PAUSE_ACTION1C_SPEC_3 ,PULSE_ACTION1C_SPEC_3,DELAY_ACTION1C_SPEC_3);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1C_SPEC_4, OFFTIME_ACTION1C_SPEC_4,PAUSE_ACTION1C_SPEC_4 ,PULSE_ACTION1C_SPEC_4,DELAY_ACTION1C_SPEC_4);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1C_SPEC_5, OFFTIME_ACTION1C_SPEC_5,PAUSE_ACTION1C_SPEC_5 ,PULSE_ACTION1C_SPEC_5,DELAY_ACTION1C_SPEC_5);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1C_SPEC_6, OFFTIME_ACTION1C_SPEC_6,PAUSE_ACTION1C_SPEC_6 ,PULSE_ACTION1C_SPEC_6,DELAY_ACTION1C_SPEC_6);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1C_SPEC_7, OFFTIME_ACTION1C_SPEC_7,PAUSE_ACTION1C_SPEC_7 ,PULSE_ACTION1C_SPEC_7,DELAY_ACTION1C_SPEC_7);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1C_SPEC_8, OFFTIME_ACTION1C_SPEC_8,PAUSE_ACTION1C_SPEC_8 ,PULSE_ACTION1C_SPEC_8,DELAY_ACTION1C_SPEC_8);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1C_SPEC_9, OFFTIME_ACTION1C_SPEC_9,PAUSE_ACTION1C_SPEC_9 ,PULSE_ACTION1C_SPEC_9,DELAY_ACTION1C_SPEC_9);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1C_SPEC_10, OFFTIME_ACTION1C_SPEC_10,PAUSE_ACTION1C_SPEC_10 ,PULSE_ACTION1C_SPEC_10,DELAY_ACTION1C_SPEC_10);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1C_SPEC_11, OFFTIME_ACTION1C_SPEC_11,PAUSE_ACTION1C_SPEC_11 ,PULSE_ACTION1C_SPEC_11,DELAY_ACTION1C_SPEC_11);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1C_SPEC_12, OFFTIME_ACTION1C_SPEC_12,PAUSE_ACTION1C_SPEC_12 ,PULSE_ACTION1C_SPEC_12,DELAY_ACTION1C_SPEC_12);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1C_SPEC_13, OFFTIME_ACTION1C_SPEC_13,PAUSE_ACTION1C_SPEC_13 ,PULSE_ACTION1C_SPEC_13,DELAY_ACTION1C_SPEC_13);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1C_SPEC_14, OFFTIME_ACTION1C_SPEC_14,PAUSE_ACTION1C_SPEC_14 ,PULSE_ACTION1C_SPEC_14,DELAY_ACTION1C_SPEC_14);
                #endif
     }
     else if (action1Switch==4){

        #ifdef ACTION1B_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1B_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION1B_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1B_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1B_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1B_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1B_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1B_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1B_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1B_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1B_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1B_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1B_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1B_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1B_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1B_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1B_1
                Led1.On(0);
                #endif
                #ifdef ACTION1B_2
                Led2.On(1);
                #endif
                #ifdef ACTION1B_3
                Led3.On(2);
                #endif
                #ifdef ACTION1B_4
                Led4.On(3);
                #endif
                #ifdef ACTION1B_5
                Led5.On(4);
                #endif
                #ifdef ACTION1B_6
                Led6.On(5);
                #endif
                #ifdef ACTION1B_7
                Led7.On(6);
                #endif
                #ifdef ACTION1B_8
                Led8.On(7);
                #endif
                #ifdef ACTION1B_9
                Led9.On(8);
                #endif
                #ifdef ACTION1B_10
                Led10.On(9);
                #endif
                #ifdef ACTION1B_11
                Led11.On(12);
                #endif
                #ifdef ACTION1B_12
                Led12.On(13);
                #endif
                #ifdef ACTION1B_13
                Led13.On(14);
                #endif
                #ifdef ACTION1B_14
                Led14.On(15);
                #endif
                
                #ifdef ACTION1B_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif

                #ifdef ACTION1B_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1B_SPEC_1 ,OFFTIME_ACTION1B_SPEC_1,PAUSE_ACTION1B_SPEC_1 ,PULSE_ACTION1B_SPEC_1,DELAY_ACTION1B_SPEC_1);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1B_SPEC_2, OFFTIME_ACTION1B_SPEC_2,PAUSE_ACTION1B_SPEC_2 ,PULSE_ACTION1B_SPEC_2,DELAY_ACTION1B_SPEC_2);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1B_SPEC_3, OFFTIME_ACTION1B_SPEC_3,PAUSE_ACTION1B_SPEC_3 ,PULSE_ACTION1B_SPEC_3,DELAY_ACTION1B_SPEC_3);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1B_SPEC_4, OFFTIME_ACTION1B_SPEC_4,PAUSE_ACTION1B_SPEC_4 ,PULSE_ACTION1B_SPEC_4,DELAY_ACTION1B_SPEC_4);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1B_SPEC_5, OFFTIME_ACTION1B_SPEC_5,PAUSE_ACTION1B_SPEC_5 ,PULSE_ACTION1B_SPEC_5,DELAY_ACTION1B_SPEC_5);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1B_SPEC_6, OFFTIME_ACTION1B_SPEC_6,PAUSE_ACTION1B_SPEC_6 ,PULSE_ACTION1B_SPEC_6,DELAY_ACTION1B_SPEC_6);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1B_SPEC_7, OFFTIME_ACTION1B_SPEC_7,PAUSE_ACTION1B_SPEC_7 ,PULSE_ACTION1B_SPEC_7,DELAY_ACTION1B_SPEC_7);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1B_SPEC_8, OFFTIME_ACTION1B_SPEC_8,PAUSE_ACTION1B_SPEC_8 ,PULSE_ACTION1B_SPEC_8,DELAY_ACTION1B_SPEC_8);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1B_SPEC_9, OFFTIME_ACTION1B_SPEC_9,PAUSE_ACTION1B_SPEC_9 ,PULSE_ACTION1B_SPEC_9,DELAY_ACTION1B_SPEC_9);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1B_SPEC_10, OFFTIME_ACTION1B_SPEC_10,PAUSE_ACTION1B_SPEC_10 ,PULSE_ACTION1B_SPEC_10,DELAY_ACTION1B_SPEC_10);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1B_SPEC_11, OFFTIME_ACTION1B_SPEC_11,PAUSE_ACTION1B_SPEC_11 ,PULSE_ACTION1B_SPEC_11,DELAY_ACTION1B_SPEC_11);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1B_SPEC_12, OFFTIME_ACTION1B_SPEC_12,PAUSE_ACTION1B_SPEC_12 ,PULSE_ACTION1B_SPEC_12,DELAY_ACTION1B_SPEC_12);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1B_SPEC_13, OFFTIME_ACTION1B_SPEC_13,PAUSE_ACTION1B_SPEC_13 ,PULSE_ACTION1B_SPEC_13,DELAY_ACTION1B_SPEC_13);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1B_SPEC_14, OFFTIME_ACTION1B_SPEC_14,PAUSE_ACTION1B_SPEC_14 ,PULSE_ACTION1B_SPEC_14,DELAY_ACTION1B_SPEC_14);
                #endif
     
                #ifdef ACTION1C_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION1C_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION1C_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION1C_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION1C_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION1C_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION1C_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION1C_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION1C_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION1C_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION1C_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION1C_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION1C_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION1C_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1C_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION1C_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION1C_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION1C_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION1C_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION1C_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION1C_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION1C_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION1C_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION1C_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION1C_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION1C_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION1C_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION1C_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1C_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1C_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1C_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1C_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1C_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1C_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1C_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1C_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1C_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1C_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1C_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1C_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1C_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1C_14
                Led14.Off(15);
                #endif
                #ifdef ACTION1C_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION1C_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION1C_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION1C_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION1C_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION1C_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION1C_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION1C_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION1C_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION1C_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION1C_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_14
                Led14.Off(14);
                #endif
     
     
     
     
     }
     
     else if (action1Switch==5){
     
                #ifdef ACTION1B_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION1B_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION1B_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION1B_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION1B_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION1B_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION1B_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION1B_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION1B_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION1B_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION1B_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION1B_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION1B_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION1B_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1B_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION1B_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION1B_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION1B_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION1B_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION1B_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION1B_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION1B_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION1B_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION1B_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION1B_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION1B_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION1B_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION1B_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1B_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1B_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1B_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1B_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1B_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1B_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1B_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1B_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1B_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1B_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1B_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1B_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1B_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1B_14
                Led14.Off(15);
                #endif
                #ifdef ACTION1B_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION1B_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_14
                Led14.Off(14);
                #endif
     
     
     
     }
            }
            else {

        
                
                #ifdef ACTION1A_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION1A_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION1A_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION1A_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION1A_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION1A_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION1A_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION1A_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION1A_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION1A_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION1A_HALOGEN_11
                Led11.halogenOff(12,3,1);
                Led11.Off(12);
                #endif
                #ifdef ACTION1A_HALOGEN_12
                Led12.halogenOff(13,3,1);
                Led12.Off(13);
                #endif
                #ifdef ACTION1A_HALOGEN_13
                Led13.halogenOff(14,3,1);
                Led13.Off(14);
                #endif
                #ifdef ACTION1A_HALOGEN_14
                Led14.halogenOff(15,3,1);
                Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
                #ifdef ACTION1A_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION1A_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION1A_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION1A_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION1A_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION1A_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION1A_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION1A_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION1A_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION1A_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION1A_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION1A_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION1A_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION1A_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
                #ifdef ACTION1A_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1A_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1A_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1A_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1A_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1A_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1A_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1A_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1A_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1A_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1A_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1A_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1A_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1A_14
                Led14.Off(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION1A_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_14
                Led14.Off(14);
                #endif
        
                #ifdef ACTION1B_HALOGEN_1
                Led1.halogenOff(0,3,1);
                Led1.Off(0);
                #endif
                #ifdef ACTION1B_HALOGEN_2
                Led2.halogenOff(1,3,1);
                Led2.Off(1);
                #endif
                #ifdef ACTION1B_HALOGEN_3
                Led3.halogenOff(2,3,1);
                Led3.Off(2);
                #endif
                #ifdef ACTION1B_HALOGEN_4
                Led4.halogenOff(3,3,1);
                Led4.Off(3);
                #endif
                #ifdef ACTION1B_HALOGEN_5
                Led5.halogenOff(4,3,1);
                Led5.Off(4);
                #endif
                #ifdef ACTION1B_HALOGEN_6
                Led6.halogenOff(5,3,1);
                Led6.Off(5);
                #endif
                #ifdef ACTION1B_HALOGEN_7
                Led7.halogenOff(6,3,1);
                Led7.Off(6);
                #endif
                #ifdef ACTION1B_HALOGEN_8
                Led8.halogenOff(7,3,1);
                Led8.Off(7);
                #endif
                #ifdef ACTION1B_HALOGEN_9
                Led9.halogenOff(8,3,1);
                Led9.Off(8);
                #endif
                #ifdef ACTION1B_HALOGEN_10
                Led10.halogenOff(9,3,1);
                Led10.Off(9);
                #endif
                #ifdef ACTION1B_HALOGEN_11
                Led11.halogenOff(12,3,1);
                Led11.Off(12);
                #endif
                #ifdef ACTION1B_HALOGEN_12
                Led12.halogenOff(13,3,1);
                Led12.Off(13);
                #endif
                #ifdef ACTION1B_HALOGEN_13
                Led13.halogenOff(14,3,1);
                Led13.Off(14);
                #endif
                #ifdef ACTION1B_HALOGEN_14
                Led14.halogenOff(15,3,1);
                Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1B_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION1B_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION1B_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION1B_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION1B_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION1B_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION1B_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION1B_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION1B_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION1B_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION1B_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION1B_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION1B_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION1B_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1B_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1B_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1B_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1B_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1B_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1B_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1B_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1B_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1B_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1B_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1B_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1B_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1B_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1B_14
                Led14.Off(15);
                #endif
                #ifdef ACTION1B_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION1B_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1B_FLASH_SPEC_14
                Led14.Off(14);
                #endif
     
     
     
        
                #ifdef ACTION1C_HALOGEN_1
                Led1.halogenOff(0,3,1);
                Led1.Off(0);
                #endif
                #ifdef ACTION1C_HALOGEN_2
                Led2.halogenOff(1,3,1);
                Led2.Off(1);
                #endif
                #ifdef ACTION1C_HALOGEN_3
                Led3.halogenOff(2,3,1);
                Led3.Off(2);
                #endif
                #ifdef ACTION1C_HALOGEN_4
                Led4.halogenOff(3,3,1);
                Led4.Off(3);
                #endif
                #ifdef ACTION1C_HALOGEN_5
                Led5.halogenOff(4,3,1);
                Led5.Off(4);
                #endif
                #ifdef ACTION1C_HALOGEN_6
                Led6.halogenOff(5,3,1);
                Led6.Off(5);
                #endif
                #ifdef ACTION1C_HALOGEN_7
                Led7.halogenOff(6,3,1);
                Led7.Off(6);
                #endif
                #ifdef ACTION1C_HALOGEN_8
                Led8.halogenOff(7,3,1);
                Led8.Off(7);
                #endif
                #ifdef ACTION1C_HALOGEN_9
                Led9.halogenOff(8,3,1);
                Led9.Off(8);
                #endif
                #ifdef ACTION1C_HALOGEN_10
                Led10.halogenOff(9,3,1);
                Led10.Off(9);
                #endif
                #ifdef ACTION1C_HALOGEN_11
                Led11.halogenOff(12,3,1);
                Led11.Off(12);
                #endif
                #ifdef ACTION1C_HALOGEN_12
                Led12.halogenOff(13,3,1);
                Led12.Off(13);
                #endif
                #ifdef ACTION1C_HALOGEN_13
                Led13.halogenOff(14,3,1);
                Led13.Off(14);
                #endif
                #ifdef ACTION1C_HALOGEN_14
                Led14.halogenOff(15,3,1);
                Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
                #ifdef ACTION1C_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION1C_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION1C_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION1C_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION1C_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION1C_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION1C_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION1C_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION1C_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION1C_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION1C_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION1C_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION1C_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION1C_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1C_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1C_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1C_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1C_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1C_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1C_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1C_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1C_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1C_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1C_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1C_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1C_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1C_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1C_14
                Led14.Off(15);
                #endif
                #ifdef ACTION1C_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION1C_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION1C_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION1C_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION1C_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION1C_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION1C_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION1C_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION1C_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION1C_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION1C_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1C_FLASH_SPEC_14
                Led14.Off(14);
                #endif
                
            }
    #else

             if (Fishing_Led) {
                 #ifdef ACTION1A_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION1A_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION1A_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION1A_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION1A_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION1A_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION1A_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION1A_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION1A_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION1A_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION1A_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION1A_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION1A_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION1A_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION1A_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION1A_NEON_14
                Led14.neonOn(15,0);
                #endif  
                #ifdef ACTION1A_1
                Led1.On(0);
                #endif
                #ifdef ACTION1A_2
                Led2.On(1);
                #endif
                #ifdef ACTION1A_3
                Led3.On(2);
                #endif
                #ifdef ACTION1A_4
                Led4.On(3);
                #endif
                #ifdef ACTION1A_5
                Led5.On(4);
                #endif
                #ifdef ACTION1A_6
                Led6.On(5);
                #endif
                #ifdef ACTION1A_7
                Led7.On(6);
                #endif
                #ifdef ACTION1A_8
                Led8.On(7);
                #endif
                #ifdef ACTION1A_9
                Led9.On(8);
                #endif
                #ifdef ACTION1A_10
                Led10.On(9);
                #endif
                #ifdef ACTION1A_11
                Led11.On(12);
                #endif
                #ifdef ACTION1A_12
                Led12.On(13);
                #endif
                #ifdef ACTION1A_13
                Led13.On(14);
                #endif
                #ifdef ACTION1A_14
                Led14.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led1.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led6.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led7.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led8.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led9.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led10.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led11.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led12.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led13.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led14.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION1A_SPEC_1 ,OFFTIME_ACTION1A_SPEC_1,PAUSE_ACTION1A_SPEC_1 ,PULSE_ACTION1A_SPEC_1,DELAY_ACTION1A_SPEC_1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION1A_SPEC_2, OFFTIME_ACTION1A_SPEC_2,PAUSE_ACTION1A_SPEC_2 ,PULSE_ACTION1A_SPEC_2,DELAY_ACTION1A_SPEC_2);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION1A_SPEC_3, OFFTIME_ACTION1A_SPEC_3,PAUSE_ACTION1A_SPEC_3 ,PULSE_ACTION1A_SPEC_3,DELAY_ACTION1A_SPEC_3);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION1A_SPEC_4, OFFTIME_ACTION1A_SPEC_4,PAUSE_ACTION1A_SPEC_4 ,PULSE_ACTION1A_SPEC_4,DELAY_ACTION1A_SPEC_4);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION1A_SPEC_5, OFFTIME_ACTION1A_SPEC_5,PAUSE_ACTION1A_SPEC_5 ,PULSE_ACTION1A_SPEC_5,DELAY_ACTION1A_SPEC_5);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION1A_SPEC_6, OFFTIME_ACTION1A_SPEC_6,PAUSE_ACTION1A_SPEC_6 ,PULSE_ACTION1A_SPEC_6,DELAY_ACTION1A_SPEC_6);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION1A_SPEC_7, OFFTIME_ACTION1A_SPEC_7,PAUSE_ACTION1A_SPEC_7 ,PULSE_ACTION1A_SPEC_7,DELAY_ACTION1A_SPEC_7);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION1A_SPEC_8, OFFTIME_ACTION1A_SPEC_8,PAUSE_ACTION1A_SPEC_8 ,PULSE_ACTION1A_SPEC_8,DELAY_ACTION1A_SPEC_8);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION1A_SPEC_9, OFFTIME_ACTION1A_SPEC_9,PAUSE_ACTION1A_SPEC_9 ,PULSE_ACTION1A_SPEC_9,DELAY_ACTION1A_SPEC_9);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION1A_SPEC_10, OFFTIME_ACTION1A_SPEC_10,PAUSE_ACTION1A_SPEC_10 ,PULSE_ACTION1A_SPEC_10,DELAY_ACTION1A_SPEC_10);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION1A_SPEC_11, OFFTIME_ACTION1A_SPEC_11,PAUSE_ACTION1A_SPEC_11 ,PULSE_ACTION1A_SPEC_11,DELAY_ACTION1A_SPEC_11);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION1A_SPEC_12, OFFTIME_ACTION1A_SPEC_12,PAUSE_ACTION1A_SPEC_12 ,PULSE_ACTION1A_SPEC_12,DELAY_ACTION1A_SPEC_12);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION1A_SPEC_13, OFFTIME_ACTION1A_SPEC_13,PAUSE_ACTION1A_SPEC_13 ,PULSE_ACTION1A_SPEC_13,DELAY_ACTION1A_SPEC_13);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION1A_SPEC_14, OFFTIME_ACTION1A_SPEC_14,PAUSE_ACTION1A_SPEC_14 ,PULSE_ACTION1A_SPEC_14,DELAY_ACTION1A_SPEC_14);
                #endif
                
            }
            else {
                
               #ifdef ACTION1A_HALOGEN_1
                Led1.halogenOff(0,3,1);
       Led1.Off(0);
                #endif
                #ifdef ACTION1A_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION1A_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION1A_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION1A_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION1A_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION1A_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION1A_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION1A_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION1A_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION1A_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION1A_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION1A_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION1A_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION1A_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION1A_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION1A_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION1A_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION1A_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION1A_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION1A_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION1A_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION1A_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION1A_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION1A_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION1A_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION1A_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION1A_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
                #ifdef ACTION1A_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1A_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1A_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1A_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1A_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1A_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1A_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1A_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1A_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1A_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1A_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1A_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1A_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1A_14
                Led14.Off(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION1A_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION1A_FLASH_SPEC_14
                Led14.Off(14);
                #endif
                
            }
    #endif

#ifdef ACTION2_ENABLE 

if (Mouillage_Led ) {
                
                #ifdef ACTION2_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION2_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION2_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION2_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION2_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION2_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION2_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION2_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION2_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION2_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION2_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION2_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION2_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION2_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION2_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION2_NEON_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef ACTION2_1
                Led1.On(0);
                #endif
                #ifdef ACTION2_2
                Led2.On(1);
                #endif
                #ifdef ACTION2_3
                Led3.On(2);
                #endif
                #ifdef ACTION2_4
                Led4.On(3);
                #endif
                #ifdef ACTION2_5
                Led5.On(4);
                #endif
                #ifdef ACTION2_6
                Led6.On(5);
                #endif
                #ifdef ACTION2_7
                Led7.On(6);
                #endif
                #ifdef ACTION2_8
                Led8.On(7);
                #endif
                #ifdef ACTION2_9
                Led9.On(8);
                #endif
                #ifdef ACTION2_10
                Led10.On(9);
                #endif
                #ifdef ACTION2_11
                Led11.On(12);
                #endif
                #ifdef ACTION2_12
                Led12.On(13);
                #endif
                #ifdef ACTION2_13
                Led13.On(14);
                #endif
                #ifdef ACTION2_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef ACTION2_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION2_SPEC_1 ,OFFTIME_ACTION2_SPEC_1,PAUSE_ACTION2_SPEC_1 ,PULSE_ACTION2_SPEC_1,DELAY_ACTION2_SPEC_1);
                #endif
                #ifdef ACTION2_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION2_SPEC_2, OFFTIME_ACTION2_SPEC_2,PAUSE_ACTION2_SPEC_2 ,PULSE_ACTION2_SPEC_2,DELAY_ACTION2_SPEC_2);
                #endif
                #ifdef ACTION2_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION2_SPEC_3, OFFTIME_ACTION2_SPEC_3,PAUSE_ACTION2_SPEC_3 ,PULSE_ACTION2_SPEC_3,DELAY_ACTION2_SPEC_3);
                #endif
                #ifdef ACTION2_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION2_SPEC_4, OFFTIME_ACTION2_SPEC_4,PAUSE_ACTION2_SPEC_4 ,PULSE_ACTION2_SPEC_4,DELAY_ACTION2_SPEC_4);
                #endif
                #ifdef ACTION2_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION2_SPEC_5, OFFTIME_ACTION2_SPEC_5,PAUSE_ACTION2_SPEC_5 ,PULSE_ACTION2_SPEC_5,DELAY_ACTION2_SPEC_5);
                #endif
                #ifdef ACTION2_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION2_SPEC_6, OFFTIME_ACTION2_SPEC_6,PAUSE_ACTION2_SPEC_6 ,PULSE_ACTION2_SPEC_6,DELAY_ACTION2_SPEC_6);
                #endif
                #ifdef ACTION2_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION2_SPEC_7, OFFTIME_ACTION2_SPEC_7,PAUSE_ACTION2_SPEC_7 ,PULSE_ACTION2_SPEC_7,DELAY_ACTION2_SPEC_7);
                #endif
                #ifdef ACTION2_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION2_SPEC_8, OFFTIME_ACTION2_SPEC_8,PAUSE_ACTION2_SPEC_8 ,PULSE_ACTION2_SPEC_8,DELAY_ACTION2_SPEC_8);
                #endif
                #ifdef ACTION2_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION2_SPEC_9, OFFTIME_ACTION2_SPEC_9,PAUSE_ACTION2_SPEC_9 ,PULSE_ACTION2_SPEC_9,DELAY_ACTION2_SPEC_9);
                #endif
                #ifdef ACTION2_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION2_SPEC_10, OFFTIME_ACTION2_SPEC_10,PAUSE_ACTION2_SPEC_10 ,PULSE_ACTION2_SPEC_10,DELAY_ACTION2_SPEC_10);
                #endif
                #ifdef ACTION2_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION2_SPEC_11, OFFTIME_ACTION2_SPEC_11,PAUSE_ACTION2_SPEC_11 ,PULSE_ACTION2_SPEC_11,DELAY_ACTION2_SPEC_11);
                #endif
                #ifdef ACTION2_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION2_SPEC_12, OFFTIME_ACTION2_SPEC_12,PAUSE_ACTION2_SPEC_12 ,PULSE_ACTION2_SPEC_12,DELAY_ACTION2_SPEC_12);
                #endif
                #ifdef ACTION2_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION2_SPEC_13, OFFTIME_ACTION2_SPEC_13,PAUSE_ACTION2_SPEC_13 ,PULSE_ACTION2_SPEC_13,DELAY_ACTION2_SPEC_13);
                #endif
                #ifdef ACTION2_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION2_SPEC_14, OFFTIME_ACTION2_SPEC_14,PAUSE_ACTION2_SPEC_14 ,PULSE_ACTION2_SPEC_14,DELAY_ACTION2_SPEC_14);
                #endif
        ////////////////////////
                #ifdef ACTION2_FLASH_1
                Led1.blink(0, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_2
                Led2.blink(1, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_3
                Led3.blink(2, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_4
                Led4.blink(3, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_5
                Led5.blink(4, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_6
                Led6.blink(5, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_7
                Led7.blink(6, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_8
                Led8.blink(7, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_9
                Led9.blink(8, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_10
                Led10.blink(9, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_11
                Led11.blink(12, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_12
                Led12.blink(13, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_13
                Led13.blink(14, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                #ifdef ACTION2_FLASH_14
                Led14.blink(14, OFFTIME_ACTION2_PART1, ONTIME_ACTION2_PART1);
                #endif
                
            }
            else {
                
                  #ifdef ACTION2_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION2_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION2_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION2_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION2_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION2_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION2_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION2_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION2_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION2_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION2_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION2_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION2_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION2_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION2_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION2_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION2_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION2_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION2_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION2_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION2_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION2_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION2_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION2_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION2_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION2_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION2_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION2_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION2_1
                Led1.Off(0);
                #endif
                #ifdef ACTION2_2
                Led2.Off(1);
                #endif
                #ifdef ACTION2_3
                Led3.Off(2);
                #endif
                #ifdef ACTION2_4
                Led4.Off(3);
                #endif
                #ifdef ACTION2_5
                Led5.Off(4);
                #endif
                #ifdef ACTION2_6
                Led6.Off(5);
                #endif
                #ifdef ACTION2_7
                Led7.Off(6);
                #endif
                #ifdef ACTION2_8
                Led8.Off(7);
                #endif
                #ifdef ACTION2_9
                Led9.Off(8);
                #endif
                #ifdef ACTION2_10
                Led10.Off(9);
                #endif
                #ifdef ACTION2_11
                Led11.Off(12);
                #endif
                #ifdef ACTION2_12
                Led12.Off(13);
                #endif
                #ifdef ACTION2_13
                Led13.Off(14);
                #endif
                #ifdef ACTION2_14
                Led14.Off(15);
                #endif
                #ifdef ACTION2_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION2_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION2_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION2_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION2_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION2_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION2_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION2_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION2_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION2_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION2_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION2_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION2_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION2_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION2_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION2_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION2_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION2_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION2_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION2_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION2_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION2_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION2_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION2_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION2_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION2_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION2_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION2_FLASH_SPEC_14
                Led14.Off(14);
                #endif
        ////////////////////////
                
            }
  #endif
#ifdef ACTION3_ENABLE 

if (Fog_Led /*&& lightsOn*/ ) {
                
                #ifdef ACTION3_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION3_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION3_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION3_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION3_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION3_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION3_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION3_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION3_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION3_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION3_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION3_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION3_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION3_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION3_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION3_NEON_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef ACTION3_1
                Led1.On(0);
                #endif
                #ifdef ACTION3_2
                Led2.On(1);
                #endif
                #ifdef ACTION3_3
                Led3.On(2);
                #endif
                #ifdef ACTION3_4
                Led4.On(3);
                #endif
                #ifdef ACTION3_5
                Led5.On(4);
                #endif
                #ifdef ACTION3_6
                Led6.On(5);
                #endif
                #ifdef ACTION3_7
                Led7.On(6);
                #endif
                #ifdef ACTION3_8
                Led8.On(7);
                #endif
                #ifdef ACTION3_9
                Led9.On(8);
                #endif
                #ifdef ACTION3_10
                Led10.On(9);
                #endif
                #ifdef ACTION3_11
                Led11.On(12);
                #endif
                #ifdef ACTION3_12
                Led12.On(13);
                #endif
                #ifdef ACTION3_13
                Led13.On(14);
                #endif
                #ifdef ACTION3_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef ACTION3_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION3_SPEC_1 ,OFFTIME_ACTION3_SPEC_1,PAUSE_ACTION3_SPEC_1 ,PULSE_ACTION3_SPEC_1,DELAY_ACTION3_SPEC_1);
                #endif
                #ifdef ACTION3_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION3_SPEC_2, OFFTIME_ACTION3_SPEC_2,PAUSE_ACTION3_SPEC_2 ,PULSE_ACTION3_SPEC_2,DELAY_ACTION3_SPEC_2);
                #endif
                #ifdef ACTION3_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION3_SPEC_3, OFFTIME_ACTION3_SPEC_3,PAUSE_ACTION3_SPEC_3 ,PULSE_ACTION3_SPEC_3,DELAY_ACTION3_SPEC_3);
                #endif
                #ifdef ACTION3_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION3_SPEC_4, OFFTIME_ACTION3_SPEC_4,PAUSE_ACTION3_SPEC_4 ,PULSE_ACTION3_SPEC_4,DELAY_ACTION3_SPEC_4);
                #endif
                #ifdef ACTION3_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION3_SPEC_5, OFFTIME_ACTION3_SPEC_5,PAUSE_ACTION3_SPEC_5 ,PULSE_ACTION3_SPEC_5,DELAY_ACTION3_SPEC_5);
                #endif
                #ifdef ACTION3_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION3_SPEC_6, OFFTIME_ACTION3_SPEC_6,PAUSE_ACTION3_SPEC_6 ,PULSE_ACTION3_SPEC_6,DELAY_ACTION3_SPEC_6);
                #endif
                #ifdef ACTION3_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION3_SPEC_7, OFFTIME_ACTION3_SPEC_7,PAUSE_ACTION3_SPEC_7 ,PULSE_ACTION3_SPEC_7,DELAY_ACTION3_SPEC_7);
                #endif
                #ifdef ACTION3_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION3_SPEC_8, OFFTIME_ACTION3_SPEC_8,PAUSE_ACTION3_SPEC_8 ,PULSE_ACTION3_SPEC_8,DELAY_ACTION3_SPEC_8);
                #endif
                #ifdef ACTION3_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION3_SPEC_9, OFFTIME_ACTION3_SPEC_9,PAUSE_ACTION3_SPEC_9 ,PULSE_ACTION3_SPEC_9,DELAY_ACTION3_SPEC_9);
                #endif
                #ifdef ACTION3_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION3_SPEC_10, OFFTIME_ACTION3_SPEC_10,PAUSE_ACTION3_SPEC_10 ,PULSE_ACTION3_SPEC_10,DELAY_ACTION3_SPEC_10);
                #endif
                #ifdef ACTION3_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION3_SPEC_11, OFFTIME_ACTION3_SPEC_11,PAUSE_ACTION3_SPEC_11 ,PULSE_ACTION3_SPEC_11,DELAY_ACTION3_SPEC_11);
                #endif
                #ifdef ACTION3_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION3_SPEC_12, OFFTIME_ACTION3_SPEC_12,PAUSE_ACTION3_SPEC_12 ,PULSE_ACTION3_SPEC_12,DELAY_ACTION3_SPEC_12);
                #endif
                #ifdef ACTION3_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION3_SPEC_13, OFFTIME_ACTION3_SPEC_13,PAUSE_ACTION3_SPEC_13 ,PULSE_ACTION3_SPEC_13,DELAY_ACTION3_SPEC_13);
                #endif
                #ifdef ACTION3_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION3_SPEC_14, OFFTIME_ACTION3_SPEC_14,PAUSE_ACTION3_SPEC_14 ,PULSE_ACTION3_SPEC_14,DELAY_ACTION3_SPEC_14);
                #endif
        ////////////////////////
                #ifdef ACTION3_FLASH_1
                Led1.blink(0, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_2
                Led2.blink(1, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_3
                Led3.blink(2, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_4
                Led4.blink(3, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_5
                Led5.blink(4, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_6
                Led6.blink(5, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_7
                Led7.blink(6, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_8
                Led8.blink(7, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_9
                Led9.blink(8, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_10
                Led10.blink(9, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_11
                Led11.blink(12, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_12
                Led12.blink(13, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_13
                Led13.blink(14, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                #ifdef ACTION3_FLASH_14
                Led14.blink(14, OFFTIME_ACTION3_PART1, ONTIME_ACTION3_PART1);
                #endif
                
            }
            else {
                
                  #ifdef ACTION3_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION3_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION3_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION3_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION3_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION3_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION3_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION3_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION3_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION3_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION3_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION3_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION3_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION3_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION3_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION3_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION3_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION3_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION3_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION3_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION3_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION3_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION3_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION3_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION3_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION3_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION3_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION3_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION3_1
                Led1.Off(0);
                #endif
                #ifdef ACTION3_2
                Led2.Off(1);
                #endif
                #ifdef ACTION3_3
                Led3.Off(2);
                #endif
                #ifdef ACTION3_4
                Led4.Off(3);
                #endif
                #ifdef ACTION3_5
                Led5.Off(4);
                #endif
                #ifdef ACTION3_6
                Led6.Off(5);
                #endif
                #ifdef ACTION3_7
                Led7.Off(6);
                #endif
                #ifdef ACTION3_8
                Led8.Off(7);
                #endif
                #ifdef ACTION3_9
                Led9.Off(8);
                #endif
                #ifdef ACTION3_10
                Led10.Off(9);
                #endif
                #ifdef ACTION3_11
                Led11.Off(12);
                #endif
                #ifdef ACTION3_12
                Led12.Off(13);
                #endif
                #ifdef ACTION3_13
                Led13.Off(14);
                #endif
                #ifdef ACTION3_14
                Led14.Off(15);
                #endif
                #ifdef ACTION3_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION3_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION3_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION3_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION3_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION3_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION3_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION3_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION3_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION3_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION3_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION3_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION3_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION3_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION3_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION3_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION3_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION3_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION3_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION3_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION3_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION3_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION3_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION3_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION3_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION3_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION3_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION3_FLASH_SPEC_14
                Led14.Off(14);
                #endif
        ////////////////////////
                
            }
  #endif
  
  #ifdef ACTION4_ENABLE
    
    if (Manoeuvre_Led && lightsOn) {
        
        #ifdef ACTION4_1
        Led1.On(0);
        #endif
        #ifdef ACTION4_2
        Led2.On(1);
        #endif
        #ifdef ACTION4_3
        Led3.On(2);
        #endif
        #ifdef ACTION4_4
        Led4.On(3);
        #endif
        #ifdef ACTION4_5
        Led5.On(4);
        #endif
        #ifdef ACTION4_6
        Led6.On(5);
        #endif
        #ifdef ACTION4_7
        Led7.On(6);
        #endif
        #ifdef ACTION4_8
        Led8.On(7);
        #endif
        #ifdef ACTION4_9
        Led9.On(8);
        #endif
        #ifdef ACTION4_10
        Led10.On(9);
        #endif
        #ifdef ACTION4_11
        Led11.On(12);
        #endif
        #ifdef ACTION4_12
        Led12.On(13);
        #endif
        #ifdef ACTION4_13
        Led13.On(14);
        #endif
        #ifdef ACTION4_14
        Led14.On(15);
        #endif
        
    }
    else {
        
        #ifdef ACTION4_1
        Led1.Off(0);
        #endif
        #ifdef ACTION4_2
        Led2.Off(1);
        #endif
        #ifdef ACTION4_3
        Led3.Off(2);
        #endif
        #ifdef ACTION4_4
        Led4.Off(3);
        #endif
        #ifdef ACTION4_5
        Led5.Off(4);
        #endif
        #ifdef ACTION4_6
        Led6.Off(5);
        #endif
        #ifdef ACTION4_7
        Led7.Off(6);
        #endif
        #ifdef ACTION4_8
        Led8.Off(7);
        #endif
        #ifdef ACTION4_9
        Led9.Off(8);
        #endif
        #ifdef ACTION4_10
        Led10.Off(9);
        #endif
        #ifdef ACTION4_11
        Led11.Off(12);
        #endif
        #ifdef ACTION4_12
        Led12.Off(13);
        #endif
        #ifdef ACTION4_13
        Led13.Off(14);
        #endif
        #ifdef ACTION4_14
        Led14.Off(15);
        #endif
        
    }
  
  #endif
    
  
  #ifdef ACTION6_ENABLE
    if (machinGunFlash) {
        
        #ifdef ACTION6_1
        Led1.On(0);
        #endif
        #ifdef ACTION6_2
        Led2.On(1);
        #endif
        #ifdef ACTION6_3
        Led3.On(2);
        #endif
        #ifdef ACTION6_4
        Led4.On(3);
        #endif
        #ifdef ACTION6_5
        Led5.On(4);
        #endif
        #ifdef ACTION6_6
        Led6.On(5);
        #endif
        #ifdef ACTION6_7
        Led7.On(6);
        #endif
        #ifdef ACTION6_8
        Led8.On(7);
        #endif
        #ifdef ACTION6_9
        Led9.On(8);
        #endif
        #ifdef ACTION6_10
        Led10.On(9);
        #endif
        #ifdef ACTION6_11
        Led11.On(12);
        #endif
        #ifdef ACTION6_12
        Led12.On(13);
        #endif
        #ifdef ACTION6_13
        Led13.On(14);
        #endif
        #ifdef ACTION6_14
        Led14.On(15);
        #endif
        
    }
    else {
        
        #ifdef ACTION6_1
        Led1.Off(0);
        #endif
        #ifdef ACTION6_2
        Led2.Off(1);
        #endif
        #ifdef ACTION6_3
        Led3.Off(2);
        #endif
        #ifdef ACTION6_4
        Led4.Off(3);
        #endif
        #ifdef ACTION6_5
        Led5.Off(4);
        #endif
        #ifdef ACTION6_6
        Led6.Off(5);
        #endif
        #ifdef ACTION6_7
        Led7.Off(6);
        #endif
        #ifdef ACTION6_8
        Led8.Off(7);
        #endif
        #ifdef ACTION6_9
        Led9.Off(8);
        #endif
        #ifdef ACTION6_10
        Led10.Off(9);
        #endif
        #ifdef ACTION6_11
        Led11.Off(12);
        #endif
        #ifdef ACTION6_12
        Led12.Off(13);
        #endif
        #ifdef ACTION6_13
        Led13.Off(14);
        #endif
        #ifdef ACTION6_14
        Led14.Off(15);
        #endif
        
    }
  
  #endif
  
  
  #ifdef ACTION7_ENABLE
    
    if (cannonFlash) {
        
        #ifdef ACTION7_1
        Led1.On(0);
        #endif
        #ifdef ACTION7_2
        Led2.On(1);
        #endif
        #ifdef ACTION7_3
        Led3.On(2);
        #endif
        #ifdef ACTION7_4
        Led4.On(3);
        #endif
        #ifdef ACTION7_5
        Led5.On(4);
        #endif
        #ifdef ACTION7_6
        Led6.On(5);
        #endif
        #ifdef ACTION7_7
        Led7.On(6);
        #endif
        #ifdef ACTION7_8
        Led8.On(7);
        #endif
        #ifdef ACTION7_9
        Led9.On(8);
        #endif
        #ifdef ACTION7_10
        Led10.On(9);
        #endif
        #ifdef ACTION7_11
        Led11.On(12);
        #endif
        #ifdef ACTION7_12
        Led12.On(13);
        #endif
        #ifdef ACTION7_13
        Led13.On(14);
        #endif
        #ifdef ACTION7_14
        Led14.On(15);
        #endif
        
    }
    else {
        
        #ifdef ACTION7_1
        Led1.Off(0);
        #endif
        #ifdef ACTION7_2
        Led2.Off(1);
        #endif
        #ifdef ACTION7_3
        Led3.Off(2);
        #endif
        #ifdef ACTION7_4
        Led4.Off(3);
        #endif
        #ifdef ACTION7_5
        Led5.Off(4);
        #endif
        #ifdef ACTION7_6
        Led6.Off(5);
        #endif
        #ifdef ACTION7_7
        Led7.Off(6);
        #endif
        #ifdef ACTION7_8
        Led8.Off(7);
        #endif
        #ifdef ACTION7_9
        Led9.Off(8);
        #endif
        #ifdef ACTION7_10
        Led10.Off(9);
        #endif
        #ifdef ACTION7_11
        Led11.Off(12);
        #endif
        #ifdef ACTION7_12
        Led12.Off(13);
        #endif
        #ifdef ACTION7_13
        Led13.Off(14);
        #endif
        #ifdef ACTION7_14
        Led14.Off(15);
        #endif
        
    }
  
  #endif
  
  #ifdef ACTION8_ENABLE 
    if (Alarm_Led) {
        
        #ifdef ACTION8_FLASH_1
        Led1.blink(0, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_2
        Led2.blink(1, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_3
        Led3.blink(2, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_4
        Led4.blink(3, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_5
        Led5.blink(4, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_6
        Led6.blink(5, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_7
        Led7.blink(6, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_8
        Led8.blink(7, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_9
        Led9.blink(8, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_10
        Led10.blink(9, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_11
        Led11.blink(12, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_12
        Led12.blink(13, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_13
        Led13.blink(14, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_14
        Led13.blink(14, OFFTIME_8, ONTIME_8);
        #endif
        
    }
    else {
        
        #ifdef ACTION8_FLASH_1
        Led1.blinkStop(0);
        #endif
        #ifdef ACTION8_FLASH_2
        Led2.blinkStop(1);
        #endif
        #ifdef ACTION8_FLASH_3
        Led3.blinkStop(2);
        #endif
        #ifdef ACTION8_FLASH_4
        Led4.blinkStop(3);
        #endif
        #ifdef ACTION8_FLASH_5
        Led5.blinkStop(4);
        #endif
        #ifdef ACTION8_FLASH_6
        Led6.blinkStop(5);
        #endif
        #ifdef ACTION8_FLASH_7
        Led7.blinkStop(6);
        #endif
        #ifdef ACTION8_FLASH_8
        Led8.blinkStop(7);
        #endif
        #ifdef ACTION8_FLASH_9
        Led9.blinkStop(8);
        #endif
        #ifdef ACTION8_FLASH_10
        Led10.blinkStop(9);
        #endif
        #ifdef ACTION8_FLASH_11
        Led11.blinkStop(12);
        #endif
        #ifdef ACTION8_FLASH_12
        Led12.blinkStop(13);
        #endif
        #ifdef ACTION8_FLASH_13
        Led13.blinkStop(14);
        #endif
        #ifdef ACTION8_FLASH_14
        Led13.blinkStop(14);
        #endif
        
    }
  
  #endif
  
 
    if (AutoLight) {
        
        if (lightsOn) {
            
                #ifdef ACTION9_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION9_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION9_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION9_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION9_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION9_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION9_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION9_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION9_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION9_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION9_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION9_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION9_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION9_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION9_NEON_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef ACTION9_1
                Led1.On(0);
                #endif
                #ifdef ACTION9_2
                Led2.On(1);
                #endif
                #ifdef ACTION9_3
                Led3.On(2);
                #endif
                #ifdef ACTION9_4
                Led4.On(3);
                #endif
                #ifdef ACTION9_5
                Led5.On(4);
                #endif
                #ifdef ACTION9_6
                Led6.On(5);
                #endif
                #ifdef ACTION9_7
                Led7.On(6);
                #endif
                #ifdef ACTION9_8
                Led8.On(7);
                #endif
                #ifdef ACTION9_9
                Led9.On(8);
                #endif
                #ifdef ACTION9_10
                Led10.On(9);
                #endif
                #ifdef ACTION9_11
                Led11.On(12);
                #endif
                #ifdef ACTION9_12
                Led12.On(13);
                #endif
                #ifdef ACTION9_13
                Led13.On(14);
                #endif
                #ifdef ACTION9_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef ACTION9_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION9_SPEC_1 ,OFFTIME_ACTION9_SPEC_1,PAUSE_ACTION9_SPEC_1 ,PULSE_ACTION9_SPEC_1,DELAY_ACTION9_SPEC_1);
                #endif
                #ifdef ACTION9_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION9_SPEC_2, OFFTIME_ACTION9_SPEC_2,PAUSE_ACTION9_SPEC_2 ,PULSE_ACTION9_SPEC_2,DELAY_ACTION9_SPEC_2);
                #endif
                #ifdef ACTION9_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION9_SPEC_3, OFFTIME_ACTION9_SPEC_3,PAUSE_ACTION9_SPEC_3 ,PULSE_ACTION9_SPEC_3,DELAY_ACTION9_SPEC_3);
                #endif
                #ifdef ACTION9_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION9_SPEC_4, OFFTIME_ACTION9_SPEC_4,PAUSE_ACTION9_SPEC_4 ,PULSE_ACTION9_SPEC_4,DELAY_ACTION9_SPEC_4);
                #endif
                #ifdef ACTION9_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION9_SPEC_5, OFFTIME_ACTION9_SPEC_5,PAUSE_ACTION9_SPEC_5 ,PULSE_ACTION9_SPEC_5,DELAY_ACTION9_SPEC_5);
                #endif
                #ifdef ACTION9_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION9_SPEC_6, OFFTIME_ACTION9_SPEC_6,PAUSE_ACTION9_SPEC_6 ,PULSE_ACTION9_SPEC_6,DELAY_ACTION9_SPEC_6);
                #endif
                #ifdef ACTION9_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION9_SPEC_7, OFFTIME_ACTION9_SPEC_7,PAUSE_ACTION9_SPEC_7 ,PULSE_ACTION9_SPEC_7,DELAY_ACTION9_SPEC_7);
                #endif
                #ifdef ACTION9_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION9_SPEC_8, OFFTIME_ACTION9_SPEC_8,PAUSE_ACTION9_SPEC_8 ,PULSE_ACTION9_SPEC_8,DELAY_ACTION9_SPEC_8);
                #endif
                #ifdef ACTION9_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION9_SPEC_9, OFFTIME_ACTION9_SPEC_9,PAUSE_ACTION9_SPEC_9 ,PULSE_ACTION9_SPEC_9,DELAY_ACTION9_SPEC_9);
                #endif
                #ifdef ACTION9_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION9_SPEC_10, OFFTIME_ACTION9_SPEC_10,PAUSE_ACTION9_SPEC_10 ,PULSE_ACTION9_SPEC_10,DELAY_ACTION9_SPEC_10);
                #endif
                #ifdef ACTION9_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION9_SPEC_11, OFFTIME_ACTION9_SPEC_11,PAUSE_ACTION9_SPEC_11 ,PULSE_ACTION9_SPEC_11,DELAY_ACTION9_SPEC_11);
                #endif
                #ifdef ACTION9_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION9_SPEC_12, OFFTIME_ACTION9_SPEC_12,PAUSE_ACTION9_SPEC_12 ,PULSE_ACTION9_SPEC_12,DELAY_ACTION9_SPEC_12);
                #endif
                #ifdef ACTION9_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION9_SPEC_13, OFFTIME_ACTION9_SPEC_13,PAUSE_ACTION9_SPEC_13 ,PULSE_ACTION9_SPEC_13,DELAY_ACTION9_SPEC_13);
                #endif
                #ifdef ACTION9_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION9_SPEC_14, OFFTIME_ACTION9_SPEC_14,PAUSE_ACTION9_SPEC_14 ,PULSE_ACTION9_SPEC_14,DELAY_ACTION9_SPEC_14);
                #endif
        ////////////////////////
                #ifdef ACTION9_FLASH_1
                Led1.blink(0, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_2
                Led2.blink(1, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_3
                Led3.blink(2, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_4
                Led4.blink(3, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_5
                Led5.blink(4, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_6
                Led6.blink(5, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_7
                Led7.blink(6, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_8
                Led8.blink(7, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_9
                Led9.blink(8, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_10
                Led10.blink(9, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_11
                Led11.blink(12, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_12
                Led12.blink(13, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_13
                Led13.blink(14, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_14
                Led14.blink(14, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif

      
            
        }

         else {
            
            #ifdef ACTION9_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION9_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION9_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION9_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION9_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION9_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION9_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION9_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION9_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION9_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION9_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION9_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION9_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION9_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION9_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION9_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION9_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION9_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION9_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION9_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION9_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION9_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION9_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION9_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION9_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION9_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION9_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION9_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION9_1
                Led1.Off(0);
                #endif
                #ifdef ACTION9_2
                Led2.Off(1);
                #endif
                #ifdef ACTION9_3
                Led3.Off(2);
                #endif
                #ifdef ACTION9_4
                Led4.Off(3);
                #endif
                #ifdef ACTION9_5
                Led5.Off(4);
                #endif
                #ifdef ACTION9_6
                Led6.Off(5);
                #endif
                #ifdef ACTION9_7
                Led7.Off(6);
                #endif
                #ifdef ACTION9_8
                Led8.Off(7);
                #endif
                #ifdef ACTION9_9
                Led9.Off(8);
                #endif
                #ifdef ACTION9_10
                Led10.Off(9);
                #endif
                #ifdef ACTION9_11
                Led11.Off(12);
                #endif
                #ifdef ACTION9_12
                Led12.Off(13);
                #endif
                #ifdef ACTION9_13
                Led13.Off(14);
                #endif
                #ifdef ACTION9_14
                Led14.Off(15);
                #endif
                #ifdef ACTION9_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION9_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION9_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION9_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION9_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION9_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION9_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION9_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION9_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION9_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION9_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION9_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION9_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION9_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION9_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION9_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION9_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION9_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION9_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION9_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION9_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION9_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION9_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION9_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION9_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION9_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION9_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION9_FLASH_SPEC_14
                Led14.Off(14);
                #endif
        ////////////////////////
            
        }
        
        
    }
     else {
        
        if (LightManualOn) {
            
                  #ifdef ACTION9_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION9_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION9_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION9_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION9_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION9_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION9_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION9_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION9_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION9_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION9_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION9_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION9_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION9_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION9_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION9_NEON_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef ACTION9_1
                Led1.On(0);
                #endif
                #ifdef ACTION9_2
                Led2.On(1);
                #endif
                #ifdef ACTION9_3
                Led3.On(2);
                #endif
                #ifdef ACTION9_4
                Led4.On(3);
                #endif
                #ifdef ACTION9_5
                Led5.On(4);
                #endif
                #ifdef ACTION9_6
                Led6.On(5);
                #endif
                #ifdef ACTION9_7
                Led7.On(6);
                #endif
                #ifdef ACTION9_8
                Led8.On(7);
                #endif
                #ifdef ACTION9_9
                Led9.On(8);
                #endif
                #ifdef ACTION9_10
                Led10.On(9);
                #endif
                #ifdef ACTION9_11
                Led11.On(12);
                #endif
                #ifdef ACTION9_12
                Led12.On(13);
                #endif
                #ifdef ACTION9_13
                Led13.On(14);
                #endif
                #ifdef ACTION9_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef ACTION9_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION9_SPEC_1 ,OFFTIME_ACTION9_SPEC_1,PAUSE_ACTION9_SPEC_1 ,PULSE_ACTION9_SPEC_1,DELAY_ACTION9_SPEC_1);
                #endif
                #ifdef ACTION9_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION9_SPEC_2, OFFTIME_ACTION9_SPEC_2,PAUSE_ACTION9_SPEC_2 ,PULSE_ACTION9_SPEC_2,DELAY_ACTION9_SPEC_2);
                #endif
                #ifdef ACTION9_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION9_SPEC_3, OFFTIME_ACTION9_SPEC_3,PAUSE_ACTION9_SPEC_3 ,PULSE_ACTION9_SPEC_3,DELAY_ACTION9_SPEC_3);
                #endif
                #ifdef ACTION9_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION9_SPEC_4, OFFTIME_ACTION9_SPEC_4,PAUSE_ACTION9_SPEC_4 ,PULSE_ACTION9_SPEC_4,DELAY_ACTION9_SPEC_4);
                #endif
                #ifdef ACTION9_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION9_SPEC_5, OFFTIME_ACTION9_SPEC_5,PAUSE_ACTION9_SPEC_5 ,PULSE_ACTION9_SPEC_5,DELAY_ACTION9_SPEC_5);
                #endif
                #ifdef ACTION9_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION9_SPEC_6, OFFTIME_ACTION9_SPEC_6,PAUSE_ACTION9_SPEC_6 ,PULSE_ACTION9_SPEC_6,DELAY_ACTION9_SPEC_6);
                #endif
                #ifdef ACTION9_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION9_SPEC_7, OFFTIME_ACTION9_SPEC_7,PAUSE_ACTION9_SPEC_7 ,PULSE_ACTION9_SPEC_7,DELAY_ACTION9_SPEC_7);
                #endif
                #ifdef ACTION9_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION9_SPEC_8, OFFTIME_ACTION9_SPEC_8,PAUSE_ACTION9_SPEC_8 ,PULSE_ACTION9_SPEC_8,DELAY_ACTION9_SPEC_8);
                #endif
                #ifdef ACTION9_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION9_SPEC_9, OFFTIME_ACTION9_SPEC_9,PAUSE_ACTION9_SPEC_9 ,PULSE_ACTION9_SPEC_9,DELAY_ACTION9_SPEC_9);
                #endif
                #ifdef ACTION9_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION9_SPEC_10, OFFTIME_ACTION9_SPEC_10,PAUSE_ACTION9_SPEC_10 ,PULSE_ACTION9_SPEC_10,DELAY_ACTION9_SPEC_10);
                #endif
                #ifdef ACTION9_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION9_SPEC_11, OFFTIME_ACTION9_SPEC_11,PAUSE_ACTION9_SPEC_11 ,PULSE_ACTION9_SPEC_11,DELAY_ACTION9_SPEC_11);
                #endif
                #ifdef ACTION9_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION9_SPEC_12, OFFTIME_ACTION9_SPEC_12,PAUSE_ACTION9_SPEC_12 ,PULSE_ACTION9_SPEC_12,DELAY_ACTION9_SPEC_12);
                #endif
                #ifdef ACTION9_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION9_SPEC_13, OFFTIME_ACTION9_SPEC_13,PAUSE_ACTION9_SPEC_13 ,PULSE_ACTION9_SPEC_13,DELAY_ACTION9_SPEC_13);
                #endif
                #ifdef ACTION9_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION9_SPEC_14, OFFTIME_ACTION9_SPEC_14,PAUSE_ACTION9_SPEC_14 ,PULSE_ACTION9_SPEC_14,DELAY_ACTION9_SPEC_14);
                #endif
        ////////////////////////
                #ifdef ACTION9_FLASH_1
                Led1.blink(0, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_2
                Led2.blink(1, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_3
                Led3.blink(2, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_4
                Led4.blink(3, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_5
                Led5.blink(4, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_6
                Led6.blink(5, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_7
                Led7.blink(6, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_8
                Led8.blink(7, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_9
                Led9.blink(8, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_10
                Led10.blink(9, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_11
                Led11.blink(12, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_12
                Led12.blink(13, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_13
                Led13.blink(14, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif
                #ifdef ACTION9_FLASH_14
                Led14.blink(14, OFFTIME_ACTION9_PART1, ONTIME_ACTION9_PART1);
                #endif

            
        }
        else {
            
            #ifdef ACTION9_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION9_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION9_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION9_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION9_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION9_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION9_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION9_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION9_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION9_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION9_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION9_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION9_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION9_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION9_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION9_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION9_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION9_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION9_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION9_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION9_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION9_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION9_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION9_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION9_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION9_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION9_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION9_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION9_1
                Led1.Off(0);
                #endif
                #ifdef ACTION9_2
                Led2.Off(1);
                #endif
                #ifdef ACTION9_3
                Led3.Off(2);
                #endif
                #ifdef ACTION9_4
                Led4.Off(3);
                #endif
                #ifdef ACTION9_5
                Led5.Off(4);
                #endif
                #ifdef ACTION9_6
                Led6.Off(5);
                #endif
                #ifdef ACTION9_7
                Led7.Off(6);
                #endif
                #ifdef ACTION9_8
                Led8.Off(7);
                #endif
                #ifdef ACTION9_9
                Led9.Off(8);
                #endif
                #ifdef ACTION9_10
                Led10.Off(9);
                #endif
                #ifdef ACTION9_11
                Led11.Off(12);
                #endif
                #ifdef ACTION9_12
                Led12.Off(13);
                #endif
                #ifdef ACTION9_13
                Led13.Off(14);
                #endif
                #ifdef ACTION9_14
                Led14.Off(15);
                #endif
                #ifdef ACTION9_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION9_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION9_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION9_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION9_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION9_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION9_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION9_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION9_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION9_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION9_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION9_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION9_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION9_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION9_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION9_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION9_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION9_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION9_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION9_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION9_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION9_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION9_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION9_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION9_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION9_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION9_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION9_FLASH_SPEC_14
                Led14.Off(14);
                #endif
        ////////////////////////
            
        }
        
        
    }
    
        
    
   
   
  
    if (Action10_Led){
  #ifdef ACTION10_HALOGEN_1
                Led1.halogenOn(0,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_2
                Led2.halogenOn(1,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_3
                Led3.halogenOn(2,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_4
                Led4.halogenOn(3,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_5
                Led5.halogenOn(4,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_6
                Led6.halogenOn(5,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_7
                Led7.halogenOn(6,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_8
                Led8.halogenOn(7,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_9
                Led9.halogenOn(8,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_10
                Led10.halogenOn(9,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_11
                Led11.halogenOn(12,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_12
                Led12.halogenOn(13,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_13
                Led13.halogenOn(14,1,1);
                #endif
                #ifdef ACTION10_HALOGEN_14
                Led14.halogenOn(15,1,1);
                #endif  
        /////////////////////////
        #ifdef ACTION10_NEON_1
                Led1.neonOn(0,1);
                #endif
                #ifdef ACTION10_NEON_2
                Led2.neonOn(1,0);
                #endif
                #ifdef ACTION10_NEON_3
                Led3.neonOn(2,2);
                #endif
                #ifdef ACTION10_NEON_4
                Led4.neonOn(3,1);
                #endif
                #ifdef ACTION10_NEON_5
                Led5.neonOn(4,2);
                #endif
                #ifdef ACTION10_NEON_6
                Led6.neonOn(5,0);
                #endif
                #ifdef ACTION10_NEON_7
                Led7.neonOn(6,1);
                #endif
                #ifdef ACTION10_NEON_8
                Led8.neonOn(7,2);
                #endif
                #ifdef ACTION10_NEON_9
                Led9.neonOn(8,0);
                #endif
                #ifdef ACTION10_NEON_10
                Led10.neonOn(9,1);
                #endif
                #ifdef ACTION10_NEON_11
                Led11.neonOn(12,0);
                #endif
                #ifdef ACTION10_NEON_12
                Led12.neonOn(13,1);
                #endif
                #ifdef ACTION10_NEON_13
                Led13.neonOn(14,2);
                #endif
                #ifdef ACTION10_NEON_14
                Led14.neonOn(15,0);
                #endif  
        /////////////////////////
               #ifdef ACTION10_1
                Led1.On(0);
                #endif
                #ifdef ACTION10_2
                Led2.On(1);
                #endif
                #ifdef ACTION10_3
                Led3.On(2);
                #endif
                #ifdef ACTION10_4
                Led4.On(3);
                #endif
                #ifdef ACTION10_5
                Led5.On(4);
                #endif
                #ifdef ACTION10_6
                Led6.On(5);
                #endif
                #ifdef ACTION10_7
                Led7.On(6);
                #endif
                #ifdef ACTION10_8
                Led8.On(7);
                #endif
                #ifdef ACTION10_9
                Led9.On(8);
                #endif
                #ifdef ACTION10_10
                Led10.On(9);
                #endif
                #ifdef ACTION10_11
                Led11.On(12);
                #endif
                #ifdef ACTION10_12
                Led12.On(13);
                #endif
                #ifdef ACTION10_13
                Led13.On(14);
                #endif
                #ifdef ACTION10_14
                Led14.On(15);
                #endif
        ////////////////////////
                #ifdef ACTION10_FLASH_SPEC_1
                Led1.flash(0, ONTIME_ACTION10_SPEC_1 ,OFFTIME_ACTION10_SPEC_1,PAUSE_ACTION10_SPEC_1 ,PULSE_ACTION10_SPEC_1,DELAY_ACTION10_SPEC_1);
                #endif
                #ifdef ACTION10_FLASH_SPEC_2
                Led2.flash(1, ONTIME_ACTION10_SPEC_2, OFFTIME_ACTION10_SPEC_2,PAUSE_ACTION10_SPEC_2 ,PULSE_ACTION10_SPEC_2,DELAY_ACTION10_SPEC_2);
                #endif
                #ifdef ACTION10_FLASH_SPEC_3
                Led3.flash(2, ONTIME_ACTION10_SPEC_3, OFFTIME_ACTION10_SPEC_3,PAUSE_ACTION10_SPEC_3 ,PULSE_ACTION10_SPEC_3,DELAY_ACTION10_SPEC_3);
                #endif
                #ifdef ACTION10_FLASH_SPEC_4
                Led4.flash(3, ONTIME_ACTION10_SPEC_4, OFFTIME_ACTION10_SPEC_4,PAUSE_ACTION10_SPEC_4 ,PULSE_ACTION10_SPEC_4,DELAY_ACTION10_SPEC_4);
                #endif
                #ifdef ACTION10_FLASH_SPEC_5
                Led5.flash(4, ONTIME_ACTION10_SPEC_5, OFFTIME_ACTION10_SPEC_5,PAUSE_ACTION10_SPEC_5 ,PULSE_ACTION10_SPEC_5,DELAY_ACTION10_SPEC_5);
                #endif
                #ifdef ACTION10_FLASH_SPEC_6
                Led6.flash(5, ONTIME_ACTION10_SPEC_6, OFFTIME_ACTION10_SPEC_6,PAUSE_ACTION10_SPEC_6 ,PULSE_ACTION10_SPEC_6,DELAY_ACTION10_SPEC_6);
                #endif
                #ifdef ACTION10_FLASH_SPEC_7
                Led7.flash(6, ONTIME_ACTION10_SPEC_7, OFFTIME_ACTION10_SPEC_7,PAUSE_ACTION10_SPEC_7 ,PULSE_ACTION10_SPEC_7,DELAY_ACTION10_SPEC_7);
                #endif
                #ifdef ACTION10_FLASH_SPEC_8
                Led8.flash(7, ONTIME_ACTION10_SPEC_8, OFFTIME_ACTION10_SPEC_8,PAUSE_ACTION10_SPEC_8 ,PULSE_ACTION10_SPEC_8,DELAY_ACTION10_SPEC_8);
                #endif
                #ifdef ACTION10_FLASH_SPEC_9
                Led9.flash(8, ONTIME_ACTION10_SPEC_9, OFFTIME_ACTION10_SPEC_9,PAUSE_ACTION10_SPEC_9 ,PULSE_ACTION10_SPEC_9,DELAY_ACTION10_SPEC_9);
                #endif
                #ifdef ACTION10_FLASH_SPEC_10
                Led10.flash(9, ONTIME_ACTION10_SPEC_10, OFFTIME_ACTION10_SPEC_10,PAUSE_ACTION10_SPEC_10 ,PULSE_ACTION10_SPEC_10,DELAY_ACTION10_SPEC_10);
                #endif
                #ifdef ACTION10_FLASH_SPEC_11
                Led11.flash(12, ONTIME_ACTION10_SPEC_11, OFFTIME_ACTION10_SPEC_11,PAUSE_ACTION10_SPEC_11 ,PULSE_ACTION10_SPEC_11,DELAY_ACTION10_SPEC_11);
                #endif
                #ifdef ACTION10_FLASH_SPEC_12
                Led12.flash(13, ONTIME_ACTION10_SPEC_12, OFFTIME_ACTION10_SPEC_12,PAUSE_ACTION10_SPEC_12 ,PULSE_ACTION10_SPEC_12,DELAY_ACTION10_SPEC_12);
                #endif
                #ifdef ACTION10_FLASH_SPEC_13
                Led13.flash(14, ONTIME_ACTION10_SPEC_13, OFFTIME_ACTION10_SPEC_13,PAUSE_ACTION10_SPEC_13 ,PULSE_ACTION10_SPEC_13,DELAY_ACTION10_SPEC_13);
                #endif
                #ifdef ACTION10_FLASH_SPEC_14
                Led14.flash(14, ONTIME_ACTION10_SPEC_14, OFFTIME_ACTION10_SPEC_14,PAUSE_ACTION10_SPEC_14 ,PULSE_ACTION10_SPEC_14,DELAY_ACTION10_SPEC_14);
                #endif
        ////////////////////////
                #ifdef ACTION10_FLASH_1
                Led1.blink(0, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_2
                Led2.blink(1, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_3
                Led3.blink(2, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_4
                Led4.blink(3, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_5
                Led5.blink(4, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_6
                Led6.blink(5, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_7
                Led7.blink(6, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_8
                Led8.blink(7, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_9
                Led9.blink(8, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_10
                Led10.blink(9, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_11
                Led11.blink(12, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_12
                Led12.blink(13, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_13
                Led13.blink(14, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif
                #ifdef ACTION10_FLASH_14
                Led14.blink(14, OFFTIME_ACTION10_PART1, ONTIME_ACTION10_PART1);
                #endif

  
  }
  
  else{
  
    #ifdef ACTION10_HALOGEN_1
                Led1.halogenOff(0,3,1);
        Led1.Off(0);
                #endif
                #ifdef ACTION10_HALOGEN_2
                Led2.halogenOff(1,3,1);
        Led2.Off(1);
                #endif
                #ifdef ACTION10_HALOGEN_3
                Led3.halogenOff(2,3,1);
        Led3.Off(2);
        #endif
                #ifdef ACTION10_HALOGEN_4
                Led4.halogenOff(3,3,1);
        Led4.Off(3);
                #endif
                #ifdef ACTION10_HALOGEN_5
                Led5.halogenOff(4,3,1);
        Led5.Off(4);
                #endif
                #ifdef ACTION10_HALOGEN_6
                Led6.halogenOff(5,3,1);
        Led6.Off(5);
                #endif
                #ifdef ACTION10_HALOGEN_7
                Led7.halogenOff(6,3,1);
        Led7.Off(6);
                #endif
                #ifdef ACTION10_HALOGEN_8
                Led8.halogenOff(7,3,1);
        Led8.Off(7);
                #endif
                #ifdef ACTION10_HALOGEN_9
                Led9.halogenOff(8,3,1);
        Led9.Off(8);
                #endif
                #ifdef ACTION10_HALOGEN_10
                Led10.halogenOff(9,3,1);
        Led10.Off(9);
                #endif
                #ifdef ACTION10_HALOGEN_11
                Led11.halogenOff(12,3,1);
        Led11.Off(12);
                #endif
                #ifdef ACTION10_HALOGEN_12
                Led12.halogenOff(13,3,1);
        Led12.Off(13);
                #endif
                #ifdef ACTION10_HALOGEN_13
                Led13.halogenOff(14,3,1);
        Led13.Off(14);
                #endif
                #ifdef ACTION10_HALOGEN_14
                Led14.halogenOff(15,3,1);
        Led14.Off(15,3,1);
                #endif  
        /////////////////////////
        
        #ifdef ACTION10_NEON_1
                Led1.neonOff(0);
                #endif
                #ifdef ACTION10_NEON_2
                Led2.neonOff(1);
                #endif
                #ifdef ACTION10_NEON_3
                Led3.neonOff(2);
                #endif
                #ifdef ACTION10_NEON_4
                Led4.neonOff(3);
                #endif
                #ifdef ACTION10_NEON_5
                Led5.neonOff(4);
                #endif
                #ifdef ACTION10_NEON_6
                Led6.neonOff(5);
                #endif
                #ifdef ACTION10_NEON_7
                Led7.neonOff(6);
                #endif
                #ifdef ACTION10_NEON_8
                Led8.neonOff(7);
                #endif
                #ifdef ACTION10_NEON_9
                Led9.neonOff(8);
                #endif
                #ifdef ACTION10_NEON_10
                Led10.neonOff(9);
                #endif
                #ifdef ACTION10_NEON_11
                Led11.neonOff(12);
                #endif
                #ifdef ACTION10_NEON_12
                Led12.neonOff(13);
                #endif
                #ifdef ACTION10_NEON_13
                Led13.neonOff(14);
                #endif
                #ifdef ACTION10_NEON_14
                Led14.neonOff(15);
                #endif  
        /////////////////////////
        
        #ifdef ACTION10_1
                Led1.Off(0);
                #endif
                #ifdef ACTION10_2
                Led2.Off(1);
                #endif
                #ifdef ACTION10_3
                Led3.Off(2);
                #endif
                #ifdef ACTION10_4
                Led4.Off(3);
                #endif
                #ifdef ACTION10_5
                Led5.Off(4);
                #endif
                #ifdef ACTION10_6
                Led6.Off(5);
                #endif
                #ifdef ACTION10_7
                Led7.Off(6);
                #endif
                #ifdef ACTION10_8
                Led8.Off(7);
                #endif
                #ifdef ACTION10_9
                Led9.Off(8);
                #endif
                #ifdef ACTION10_10
                Led10.Off(9);
                #endif
                #ifdef ACTION10_11
                Led11.Off(12);
                #endif
                #ifdef ACTION10_12
                Led12.Off(13);
                #endif
                #ifdef ACTION10_13
                Led13.Off(14);
                #endif
                #ifdef ACTION10_14
                Led14.Off(15);
                #endif
                #ifdef ACTION10_FLASH_1
                Led1.blinkStop(0);
                #endif
                #ifdef ACTION10_FLASH_2
                Led2.blinkStop(1);
                #endif
                #ifdef ACTION10_FLASH_3
                Led3.blinkStop(2);
                #endif
                #ifdef ACTION10_FLASH_4
                Led4.blinkStop(3);
                #endif
                #ifdef ACTION10_FLASH_5
                Led5.blinkStop(4);
                #endif
                #ifdef ACTION10_FLASH_6
                Led6.blinkStop(5);
                #endif
                #ifdef ACTION10_FLASH_7
                Led7.blinkStop(6);
                #endif
                #ifdef ACTION10_FLASH_8
                Led8.blinkStop(7);
                #endif
                #ifdef ACTION10_FLASH_9
                Led9.blinkStop(8);
                #endif
                #ifdef ACTION10_FLASH_10
                Led10.blinkStop(9);
                #endif
                #ifdef ACTION10_FLASH_11
                Led11.blinkStop(12);
                #endif
                #ifdef ACTION10_FLASH_12
                Led12.blinkStop(13);
                #endif
                #ifdef ACTION10_FLASH_13
                Led13.blinkStop(14);
                #endif
                #ifdef ACTION10_FLASH_14
                Led13.blinkStop(14);
                #endif
        
        ////////////////////////
                #ifdef ACTION10_FLASH_SPEC_1
                Led1.Off(0);
                #endif
                #ifdef ACTION10_FLASH_SPEC_2
                Led2.Off(1);
                #endif
                #ifdef ACTION10_FLASH_SPEC_3
                Led3.Off(2);
                #endif
                #ifdef ACTION10_FLASH_SPEC_4
                Led4.Off(3);
                #endif
                #ifdef ACTION10_FLASH_SPEC_5
                Led5.Off(4);
                #endif
                #ifdef ACTION10_FLASH_SPEC_6
                Led6.Off(5);
                #endif
                #ifdef ACTION10_FLASH_SPEC_7
                Led7.Off(6);
                #endif
                #ifdef ACTION10_FLASH_SPEC_8
                Led8.Off(7);
                #endif
                #ifdef ACTION10_FLASH_SPEC_9
                Led9.Off(8);
                #endif
                #ifdef ACTION10_FLASH_SPEC_10
                Led10.Off(9);
                #endif
                #ifdef ACTION10_FLASH_SPEC_11
                Led11.Off(12);
                #endif
                #ifdef ACTION10_FLASH_SPEC_12
                Led12.Off(13);
                #endif
                #ifdef ACTION10_FLASH_SPEC_13
                Led13.Off(14);
                #endif
                #ifdef ACTION10_FLASH_SPEC_14
                Led14.Off(14);
                #endif
        ////////////////////////
  
  
  }
}

//
