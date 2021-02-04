// =======================================================================================================
// LED
// =======================================================================================================

void led() {

   if(Seq1LedPart1OnOff){
               #ifdef SEQ1_LED_PART1_1
                Led.On(0);
                #endif
                #ifdef SEQ1_LED_PART1_2
                Led.On(1);
                #endif
                #ifdef SEQ1_LED_PART1_3
                Led.On(2);
                #endif
                #ifdef SEQ1_LED_PART1_4
                Led.On(3);
                #endif
                #ifdef SEQ1_LED_PART1_5
                Led.On(4);
                #endif
                #ifdef SEQ1_LED_PART1_6
                Led.On(5);
                #endif
                #ifdef SEQ1_LED_PART1_7
                Led.On(6);
                #endif
                #ifdef SEQ1_LED_PART1_8
                Led.On(7);
                #endif
                #ifdef SEQ1_LED_PART1_9
                Led.On(8);
                #endif
                #ifdef SEQ1_LED_PART1_10
                Led.On(9);
                #endif
                #ifdef SEQ1_LED_PART1_11
                Led.On(12);
                #endif
                #ifdef SEQ1_LED_PART1_12
                Led.On(13);
                #endif
                #ifdef SEQ1_LED_PART1_13
                Led.On(14);
                #endif
                #ifdef SEQ1_LED_PART1_14
                Led.On(15);
                #endif
                #ifdef SEQ1_MOTOR2_PART1
                Led.On(10);
                #endif
                #ifdef SEQ1_FLASH_PART1_1
                Led.blink(0, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_2
                Led.blink(1, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_3
                Led.blink(2, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_4
                Led.blink(3, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_5
                Led.blink(4, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_6
                Led.blink(5, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_7
                Led.blink(6, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_8
                Led.blink(7, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_9
                Led.blink(8, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_10
                Led.blink(9, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_11
                Led.blink(12, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_12
                Led.blink(13, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_13
                Led.blink(14, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
                #ifdef SEQ1_FLASH_PART1_14
                Led.blink(14, OFFTIME_SEQ1_PART1, ONTIME_SEQ1_PART1);
                #endif
  }
  else if (!Seq1LedPart1OnOff && !Seq2LedPart1OnOff)  {
                #ifdef SEQ1_LED_PART1_1
                Led.Off(0);
                #endif
                #ifdef SEQ1_LED_PART1_2
                Led.Off(1);
                #endif
                #ifdef SEQ1_LED_PART1_3
                Led.Off(2);
                #endif
                #ifdef SEQ1_LED_PART1_4
                Led.Off(3);
                #endif
                #ifdef SEQ1_LED_PART1_5
                Led.Off(4);
                #endif
                #ifdef SEQ1_LED_PART1_6
                Led.Off(5);
                #endif
                #ifdef SEQ1_LED_PART1_7
                Led.Off(6);
                #endif
                #ifdef SEQ1_LED_PART1_8
                Led.Off(7);
                #endif
                #ifdef SEQ1_LED_PART1_9
                Led.Off(8);
                #endif
                #ifdef SEQ1_LED_PART1_10
                Led.Off(9);
                #endif
                #ifdef SEQ1_LED_PART1_11
                Led.Off(12);
                #endif
                #ifdef SEQ1_LED_PART1_12
                Led.Off(13);
                #endif
                #ifdef SEQ1_LED_PART1_13
                Led.Off(14);
                #endif
                #ifdef SEQ1_LED_PART1_14
                Led.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART1_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART1_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART1_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART1_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART1_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART1_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART1_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART1_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART1_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART1_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART1_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART1_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART1_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART1_14
                Led.blinkStop(14);
                #endif
  }


    if(Seq1LedPart2OnOff){
                #ifdef SEQ1_LED_PART2_1
                Led.On(0);
                #endif
                #ifdef SEQ1_LED_PART2_2
                Led.On(1);
                #endif
                #ifdef SEQ1_LED_PART2_3
                Led.On(2);
                #endif
                #ifdef SEQ1_LED_PART2_4
                Led.On(3);
                #endif
                #ifdef SEQ1_LED_PART2_5
                Led.On(4);
                #endif
                #ifdef SEQ1_LED_PART2_6
                Led.On(5);
                #endif
                #ifdef SEQ1_LED_PART2_7
                Led.On(6);
                #endif
                #ifdef SEQ1_LED_PART2_8
                Led.On(7);
                #endif
                #ifdef SEQ1_LED_PART2_9
                Led.On(8);
                #endif
                #ifdef SEQ1_LED_PART2_10
                Led.On(9);
                #endif
                #ifdef SEQ1_LED_PART2_11
                Led.On(12);
                #endif
                #ifdef SEQ1_LED_PART2_12
                Led.On(13);
                #endif
                #ifdef SEQ1_LED_PART2_13
                Led.On(14);
                #endif
                #ifdef SEQ1_LED_PART2_14
                Led.On(15);
                #endif
                #ifdef SEQ1_MOTOR2_PART2
                Led.On(10);
                #endif
                #ifdef SEQ1_FLASH_PART2_1
                Led.blink(0, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_2
                Led.blink(1, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_3
                Led.blink(2, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_4
                Led.blink(3, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_5
                Led.blink(4, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_6
                Led.blink(5, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_7
                Led.blink(6, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_8
                Led.blink(7, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_9
                Led.blink(8, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_10
                Led.blink(9, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_11
                Led.blink(12, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_12
                Led.blink(13, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_13
                Led.blink(14, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
                #ifdef SEQ1_FLASH_PART2_14
                Led.blink(14, OFFTIME_SEQ1_PART2, ONTIME_SEQ1_PART2);
                #endif
  }
  else if (!Seq1LedPart2OnOff && !Seq2LedPart2OnOff)  {
    #ifdef SEQ1_LED_PART2_1
                Led.Off(0);
                #endif
                #ifdef SEQ1_LED_PART2_2
                Led.Off(1);
                #endif
                #ifdef SEQ1_LED_PART2_3
                Led.Off(2);
                #endif
                #ifdef SEQ1_LED_PART2_4
                Led.Off(3);
                #endif
                #ifdef SEQ1_LED_PART2_5
                Led.Off(4);
                #endif
                #ifdef SEQ1_LED_PART2_6
                Led.Off(5);
                #endif
                #ifdef SEQ1_LED_PART2_7
                Led.Off(6);
                #endif
                #ifdef SEQ1_LED_PART2_8
                Led.Off(7);
                #endif
                #ifdef SEQ1_LED_PART2_9
                Led.Off(8);
                #endif
                #ifdef SEQ1_LED_PART2_10
                Led.Off(9);
                #endif
                #ifdef SEQ1_LED_PART2_11
                Led.Off(12);
                #endif
                #ifdef SEQ1_LED_PART2_12
                Led.Off(13);
                #endif
                #ifdef SEQ1_LED_PART2_13
                Led.Off(14);
                #endif
                #ifdef SEQ1_LED_PART2_14
                Led.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART2_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART2_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART2_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART2_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART2_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART2_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART2_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART2_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART2_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART2_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART2_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART2_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART2_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART2_14
                Led.blinkStop(14);
                #endif
  }  
  
  
  if(Seq1LedPart3OnOff){
                #ifdef SEQ1_LED_PART3_1
                Led.On(0);
                #endif
                #ifdef SEQ1_LED_PART3_2
                Led.On(1);
                #endif
                #ifdef SEQ1_LED_PART3_3
                Led.On(2);
                #endif
                #ifdef SEQ1_LED_PART3_4
                Led.On(3);
                #endif
                #ifdef SEQ1_LED_PART3_5
                Led.On(4);
                #endif
                #ifdef SEQ1_LED_PART3_6
                Led.On(5);
                #endif
                #ifdef SEQ1_LED_PART3_7
                Led.On(6);
                #endif
                #ifdef SEQ1_LED_PART3_8
                Led.On(7);
                #endif
                #ifdef SEQ1_LED_PART3_9
                Led.On(8);
                #endif
                #ifdef SEQ1_LED_PART3_10
                Led.On(9);
                #endif
                #ifdef SEQ1_LED_PART3_11
                Led.On(12);
                #endif
                #ifdef SEQ1_LED_PART3_12
                Led.On(13);
                #endif
                #ifdef SEQ1_LED_PART3_13
                Led.On(14);
                #endif
                #ifdef SEQ1_LED_PART3_14
                Led.On(15);
                #endif
                #ifdef SEQ1_MOTOR2_PART3
                Led.On(10);
                #endif
                #ifdef SEQ1_FLASH_PART3_1
                Led.blink(0, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_2
                Led.blink(1, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_3
                Led.blink(2, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_4
                Led.blink(3, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_5
                Led.blink(4, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_6
                Led.blink(5, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_7
                Led.blink(6, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_8
                Led.blink(7, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_9
                Led.blink(8, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_10
                Led.blink(9, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_11
                Led.blink(12, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_12
                Led.blink(13, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_13
                Led.blink(14, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
                #ifdef SEQ1_FLASH_PART3_14
                Led.blink(14, OFFTIME_SEQ1_PART3, ONTIME_SEQ1_PART3);
                #endif
  }
  else if (!Seq1LedPart3OnOff && !Seq2LedPart3OnOff)  {
                #ifdef SEQ1_LED_PART3_1
                Led.Off(0);
                #endif
                #ifdef SEQ1_LED_PART3_2
                Led.Off(1);
                #endif
                #ifdef SEQ1_LED_PART3_3
                Led.Off(2);
                #endif
                #ifdef SEQ1_LED_PART3_4
                Led.Off(3);
                #endif
                #ifdef SEQ1_LED_PART3_5
                Led.Off(4);
                #endif
                #ifdef SEQ1_LED_PART3_6
                Led.Off(5);
                #endif
                #ifdef SEQ1_LED_PART3_7
                Led.Off(6);
                #endif
                #ifdef SEQ1_LED_PART3_8
                Led.Off(7);
                #endif
                #ifdef SEQ1_LED_PART3_9
                Led.Off(8);
                #endif
                #ifdef SEQ1_LED_PART3_10
                Led.Off(9);
                #endif
                #ifdef SEQ1_LED_PART3_11
                Led.Off(12);
                #endif
                #ifdef SEQ1_LED_PART3_12
                Led.Off(13);
                #endif
                #ifdef SEQ1_LED_PART3_13
                Led.Off(14);
                #endif
                #ifdef SEQ1_LED_PART3_14
                Led.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART3_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART3_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART3_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART3_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART3_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART3_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART3_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART3_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART3_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART3_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART3_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART3_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART3_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART3_14
                Led.blinkStop(14);
                #endif
  }

  
     if(Seq1LedPart4OnOff){
     #ifdef SEQ1_LED_PART4_1
                Led.On(0);
                #endif
                #ifdef SEQ1_LED_PART4_2
                Led.On(1);
                #endif
                #ifdef SEQ1_LED_PART4_3
                Led.On(2);
                #endif
                #ifdef SEQ1_LED_PART4_4
                Led.On(3);
                #endif
                #ifdef SEQ1_LED_PART4_5
                Led.On(4);
                #endif
                #ifdef SEQ1_LED_PART4_6
                Led.On(5);
                #endif
                #ifdef SEQ1_LED_PART4_7
                Led.On(6);
                #endif
                #ifdef SEQ1_LED_PART4_8
                Led.On(7);
                #endif
                #ifdef SEQ1_LED_PART4_9
                Led.On(8);
                #endif
                #ifdef SEQ1_LED_PART4_10
                Led.On(9);
                #endif
                #ifdef SEQ1_LED_PART4_11
                Led.On(12);
                #endif
                #ifdef SEQ1_LED_PART4_12
                Led.On(13);
                #endif
                #ifdef SEQ1_LED_PART4_13
                Led.On(14);
                #endif
                #ifdef SEQ1_LED_PART4_14
                Led.On(15);
                #endif
                #ifdef SEQ1_MOTOR2_PART4
                Led.On(10);
                #endif
                #ifdef SEQ1_FLASH_PART4_1
                Led.blink(0, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_2
                Led.blink(1, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_3
                Led.blink(2, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_4
                Led.blink(3, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_5
                Led.blink(4, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_6
                Led.blink(5, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_7
                Led.blink(6, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_8
                Led.blink(7, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_9
                Led.blink(8, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_10
                Led.blink(9, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_11
                Led.blink(12, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_12
                Led.blink(13, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_13
                Led.blink(14, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
                #ifdef SEQ1_FLASH_PART4_14
                Led.blink(14, OFFTIME_SEQ1_PART4, ONTIME_SEQ1_PART4);
                #endif
  }
  else if (! Seq1LedPart4OnOff && !Seq2LedPart4OnOff ){
    #ifdef SEQ1_LED_PART4_1
                Led.Off(0);
                #endif
                #ifdef SEQ1_LED_PART4_2
                Led.Off(1);
                #endif
                #ifdef SEQ1_LED_PART4_3
                Led.Off(2);
                #endif
                #ifdef SEQ1_LED_PART4_4
                Led.Off(3);
                #endif
                #ifdef SEQ1_LED_PART4_5
                Led.Off(4);
                #endif
                #ifdef SEQ1_LED_PART4_6
                Led.Off(5);
                #endif
                #ifdef SEQ1_LED_PART4_7
                Led.Off(6);
                #endif
                #ifdef SEQ1_LED_PART4_8
                Led.Off(7);
                #endif
                #ifdef SEQ1_LED_PART4_9
                Led.Off(8);
                #endif
                #ifdef SEQ1_LED_PART4_10
                Led.Off(9);
                #endif
                #ifdef SEQ1_LED_PART4_11
                Led.Off(12);
                #endif
                #ifdef SEQ1_LED_PART4_12
                Led.Off(13);
                #endif
                #ifdef SEQ1_LED_PART4_13
                Led.Off(14);
                #endif
                #ifdef SEQ1_LED_PART4_14
                Led.Off(15);
                #endif
                #ifdef SEQ1_FLASH_PART4_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ1_FLASH_PART4_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ1_FLASH_PART4_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ1_FLASH_PART4_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ1_FLASH_PART4_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ1_FLASH_PART4_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ1_FLASH_PART4_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ1_FLASH_PART4_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ1_FLASH_PART4_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ1_FLASH_PART4_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ1_FLASH_PART4_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ1_FLASH_PART4_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ1_FLASH_PART4_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ1_FLASH_PART4_14
                Led.blinkStop(14);
                #endif
  }

if(Seq2LedPart1OnOff){
     #ifdef SEQ2_LED_PART1_1
                Led.On(0);
                #endif
                #ifdef SEQ2_LED_PART1_2
                Led.On(1);
                #endif
                #ifdef SEQ2_LED_PART1_3
                Led.On(2);
                #endif
                #ifdef SEQ2_LED_PART1_4
                Led.On(3);
                #endif
                #ifdef SEQ2_LED_PART1_5
                Led.On(4);
                #endif
                #ifdef SEQ2_LED_PART1_6
                Led.On(5);
                #endif
                #ifdef SEQ2_LED_PART1_7
                Led.On(6);
                #endif
                #ifdef SEQ2_LED_PART1_8
                Led.On(7);
                #endif
                #ifdef SEQ2_LED_PART1_9
                Led.On(8);
                #endif
                #ifdef SEQ2_LED_PART1_10
                Led.On(9);
                #endif
                #ifdef SEQ2_LED_PART1_11
                Led.On(12);
                #endif
                #ifdef SEQ2_LED_PART1_12
                Led.On(13);
                #endif
                #ifdef SEQ2_LED_PART1_13
                Led.On(14);
                #endif
                #ifdef SEQ2_LED_PART1_14
                Led.On(15);
                #endif
                #ifdef SEQ2_MOTOR2_PART1
                Led.On(10);
                #endif
                #ifdef SEQ2_FLASH_PART1_1
                Led.blink(0, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_2
                Led.blink(1, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_3
                Led.blink(2, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_4
                Led.blink(3, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_5
                Led.blink(4, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_6
                Led.blink(5, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_7
                Led.blink(6, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_8
                Led.blink(7, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_9
                Led.blink(8, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_10
                Led.blink(9, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_11
                Led.blink(12, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_12
                Led.blink(13, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_13
                Led.blink(14, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
                #ifdef SEQ2_FLASH_PART1_14
                Led.blink(14, OFFTIME_SEQ2_PART1, ONTIME_SEQ2_PART1);
                #endif
  }
  else if ( !Seq2LedPart1OnOff && !Seq1LedPart1OnOff)  {
    #ifdef SEQ2_LED_PART1_1
                Led.Off(0);
                #endif
                #ifdef SEQ2_LED_PART1_2
                Led.Off(1);
                #endif
                #ifdef SEQ2_LED_PART1_3
                Led.Off(2);
                #endif
                #ifdef SEQ2_LED_PART1_4
                Led.Off(3);
                #endif
                #ifdef SEQ2_LED_PART1_5
                Led.Off(4);
                #endif
                #ifdef SEQ2_LED_PART1_6
                Led.Off(5);
                #endif
                #ifdef SEQ2_LED_PART1_7
                Led.Off(6);
                #endif
                #ifdef SEQ2_LED_PART1_8
                Led.Off(7);
                #endif
                #ifdef SEQ2_LED_PART1_9
                Led.Off(8);
                #endif
                #ifdef SEQ2_LED_PART1_10
                Led.Off(9);
                #endif
                #ifdef SEQ2_LED_PART1_11
                Led.Off(12);
                #endif
                #ifdef SEQ2_LED_PART1_12
                Led.Off(13);
                #endif
                #ifdef SEQ2_LED_PART1_13
                Led.Off(14);
                #endif
                #ifdef SEQ2_LED_PART1_14
                Led.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART1_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART1_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART1_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART1_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART1_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART1_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART1_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART1_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART1_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART1_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART1_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART1_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART1_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART1_14
                Led.blinkStop(14);
                #endif
  }


    if(Seq2LedPart2OnOff){
     #ifdef SEQ2_LED_PART2_1
                Led.On(0);
                #endif
                #ifdef SEQ2_LED_PART2_2
                Led.On(1);
                #endif
                #ifdef SEQ2_LED_PART2_3
                Led.On(2);
                #endif
                #ifdef SEQ2_LED_PART2_4
                Led.On(3);
                #endif
                #ifdef SEQ2_LED_PART2_5
                Led.On(4);
                #endif
                #ifdef SEQ2_LED_PART2_6
                Led.On(5);
                #endif
                #ifdef SEQ2_LED_PART2_7
                Led.On(6);
                #endif
                #ifdef SEQ2_LED_PART2_8
                Led.On(7);
                #endif
                #ifdef SEQ2_LED_PART2_9
                Led.On(8);
                #endif
                #ifdef SEQ2_LED_PART2_10
                Led.On(9);
                #endif
                #ifdef SEQ2_LED_PART2_11
                Led.On(12);
                #endif
                #ifdef SEQ2_LED_PART2_12
                Led.On(13);
                #endif
                #ifdef SEQ2_LED_PART2_13
                Led.On(14);
                #endif
                #ifdef SEQ2_LED_PART2_14
                Led.On(15);
                #endif
                #ifdef SEQ2_MOTOR2_PART2
                Led.On(10);
                #endif
                #ifdef SEQ2_FLASH_PART2_1
                Led.blink(0, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_2
                Led.blink(1, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_3
                Led.blink(2, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_4
                Led.blink(3, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_5
                Led.blink(4, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_6
                Led.blink(5, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_7
                Led.blink(6, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_8
                Led.blink(7, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_9
                Led.blink(8, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_10
                Led.blink(9, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_11
                Led.blink(12, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_12
                Led.blink(13, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_13
                Led.blink(14, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
                #ifdef SEQ2_FLASH_PART2_14
                Led.blink(14, OFFTIME_SEQ2_PART2, ONTIME_SEQ2_PART2);
                #endif
  }
  else if ( ! Seq2LedPart2OnOff && !Seq1LedPart2OnOff) {
    #ifdef SEQ2_LED_PART2_1
                Led.Off(0);
                #endif
                #ifdef SEQ2_LED_PART2_2
                Led.Off(1);
                #endif
                #ifdef SEQ2_LED_PART2_3
                Led.Off(2);
                #endif
                #ifdef SEQ2_LED_PART2_4
                Led.Off(3);
                #endif
                #ifdef SEQ2_LED_PART2_5
                Led.Off(4);
                #endif
                #ifdef SEQ2_LED_PART2_6
                Led.Off(5);
                #endif
                #ifdef SEQ2_LED_PART2_7
                Led.Off(6);
                #endif
                #ifdef SEQ2_LED_PART2_8
                Led.Off(7);
                #endif
                #ifdef SEQ2_LED_PART2_9
                Led.Off(8);
                #endif
                #ifdef SEQ2_LED_PART2_10
                Led.Off(9);
                #endif
                #ifdef SEQ2_LED_PART2_11
                Led.Off(12);
                #endif
                #ifdef SEQ2_LED_PART2_12
                Led.Off(13);
                #endif
                #ifdef SEQ2_LED_PART2_13
                Led.Off(14);
                #endif
                #ifdef SEQ2_LED_PART2_14
                Led.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART2_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART2_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART2_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART2_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART2_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART2_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART2_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART2_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART2_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART2_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART2_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART2_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART2_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART2_14
                Led.blinkStop(14);
                #endif
  }  
  
  
  if(Seq2LedPart3OnOff){
     #ifdef SEQ2_LED_PART3_1
                Led.On(0);
                #endif
                #ifdef SEQ2_LED_PART3_2
                Led.On(1);
                #endif
                #ifdef SEQ2_LED_PART3_3
                Led.On(2);
                #endif
                #ifdef SEQ2_LED_PART3_4
                Led.On(3);
                #endif
                #ifdef SEQ2_LED_PART3_5
                Led.On(4);
                #endif
                #ifdef SEQ2_LED_PART3_6
                Led.On(5);
                #endif
                #ifdef SEQ2_LED_PART3_7
                Led.On(6);
                #endif
                #ifdef SEQ2_LED_PART3_8
                Led.On(7);
                #endif
                #ifdef SEQ2_LED_PART3_9
                Led.On(8);
                #endif
                #ifdef SEQ2_LED_PART3_10
                Led.On(9);
                #endif
                #ifdef SEQ2_LED_PART3_11
                Led.On(12);
                #endif
                #ifdef SEQ2_LED_PART3_12
                Led.On(13);
                #endif
                #ifdef SEQ2_LED_PART3_13
                Led.On(14);
                #endif
                #ifdef SEQ2_LED_PART3_14
                Led.On(15);
                #endif
                #ifdef SEQ2_MOTOR2_PART3
                Led.On(10);
                #endif
                #ifdef SEQ2_FLASH_PART3_1
                Led.blink(0, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_2
                Led.blink(1, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_3
                Led.blink(2, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_4
                Led.blink(3, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_5
                Led.blink(4, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_6
                Led.blink(5, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_7
                Led.blink(6, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_8
                Led.blink(7, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_9
                Led.blink(8, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_10
                Led.blink(9, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_11
                Led.blink(12, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_12
                Led.blink(13, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_13
                Led.blink(14, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
                #ifdef SEQ2_FLASH_PART3_14
                Led.blink(14, OFFTIME_SEQ2_PART3, ONTIME_SEQ2_PART3);
                #endif
  }
  else if (! Seq2LedPart3OnOff && ! Seq1LedPart3OnOff) {
    #ifdef SEQ2_LED_PART3_1
                Led.Off(0);
                #endif
                #ifdef SEQ2_LED_PART3_2
                Led.Off(1);
                #endif
                #ifdef SEQ2_LED_PART3_3
                Led.Off(2);
                #endif
                #ifdef SEQ2_LED_PART3_4
                Led.Off(3);
                #endif
                #ifdef SEQ2_LED_PART3_5
                Led.Off(4);
                #endif
                #ifdef SEQ2_LED_PART3_6
                Led.Off(5);
                #endif
                #ifdef SEQ2_LED_PART3_7
                Led.Off(6);
                #endif
                #ifdef SEQ2_LED_PART3_8
                Led.Off(7);
                #endif
                #ifdef SEQ2_LED_PART3_9
                Led.Off(8);
                #endif
                #ifdef SEQ2_LED_PART3_10
                Led.Off(9);
                #endif
                #ifdef SEQ2_LED_PART3_11
                Led.Off(12);
                #endif
                #ifdef SEQ2_LED_PART3_12
                Led.Off(13);
                #endif
                #ifdef SEQ2_LED_PART3_13
                Led.Off(14);
                #endif
                #ifdef SEQ2_LED_PART3_14
                Led.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART3_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART3_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART3_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART3_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART3_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART3_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART3_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART3_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART3_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART3_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART3_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART3_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART3_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART3_14
                Led.blinkStop(14);
                #endif
  }

  
     if(Seq2LedPart4OnOff){
     #ifdef SEQ2_LED_PART4_1
                Led.On(0);
                #endif
                #ifdef SEQ2_LED_PART4_2
                Led.On(1);
                #endif
                #ifdef SEQ2_LED_PART4_3
                Led.On(2);
                #endif
                #ifdef SEQ2_LED_PART4_4
                Led.On(3);
                #endif
                #ifdef SEQ2_LED_PART4_5
                Led.On(4);
                #endif
                #ifdef SEQ2_LED_PART4_6
                Led.On(5);
                #endif
                #ifdef SEQ2_LED_PART4_7
                Led.On(6);
                #endif
                #ifdef SEQ2_LED_PART4_8
                Led.On(7);
                #endif
                #ifdef SEQ2_LED_PART4_9
                Led.On(8);
                #endif
                #ifdef SEQ2_LED_PART4_10
                Led.On(9);
                #endif
                #ifdef SEQ2_LED_PART4_11
                Led.On(12);
                #endif
                #ifdef SEQ2_LED_PART4_12
                Led.On(13);
                #endif
                #ifdef SEQ2_LED_PART4_13
                Led.On(14);
                #endif
                #ifdef SEQ2_LED_PART4_14
                Led.On(15);
                #endif
                #ifdef SEQ2_MOTOR2_PART4
                Led.On(10);
                #endif
                #ifdef SEQ2_FLASH_PART4_1
                Led.blink(0, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_2
                Led.blink(1, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_3
                Led.blink(2, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_4
                Led.blink(3, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_5
                Led.blink(4, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_6
                Led.blink(5, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_7
                Led.blink(6, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_8
                Led.blink(7, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_9
                Led.blink(8, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_10
                Led.blink(9, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_11
                Led.blink(12, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_12
                Led.blink(13, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_13
                Led.blink(14, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
                #ifdef SEQ2_FLASH_PART4_14
                Led.blink(14, OFFTIME_SEQ2_PART4, ONTIME_SEQ2_PART4);
                #endif
  }
  else if (!Seq2LedPart4OnOff && ! Seq1LedPart4OnOff) {
 
                #ifdef SEQ2_LED_PART4_1
                Led.Off(0);
                #endif
                #ifdef SEQ2_LED_PART4_2
                Led.Off(1);
                #endif
                #ifdef SEQ2_LED_PART4_3
                Led.Off(2);
                #endif
                #ifdef SEQ2_LED_PART4_4
                Led.Off(3);
                #endif
                #ifdef SEQ2_LED_PART4_5
                Led.Off(4);
                #endif
                #ifdef SEQ2_LED_PART4_6
                Led.Off(5);
                #endif
                #ifdef SEQ2_LED_PART4_7
                Led.Off(6);
                #endif
                #ifdef SEQ2_LED_PART4_8
                Led.Off(7);
                #endif
                #ifdef SEQ2_LED_PART4_9
                Led.Off(8);
                #endif
                #ifdef SEQ2_LED_PART4_10
                Led.Off(9);
                #endif
                #ifdef SEQ2_LED_PART4_11
                Led.Off(12);
                #endif
                #ifdef SEQ2_LED_PART4_12
                Led.Off(13);
                #endif
                #ifdef SEQ2_LED_PART4_13
                Led.Off(14);
                #endif
                #ifdef SEQ2_LED_PART4_14
                Led.Off(15);
                #endif
                #ifdef SEQ2_FLASH_PART4_1
                Led.blinkStop(0);
                #endif
                #ifdef SEQ2_FLASH_PART4_2
                Led.blinkStop(1);
                #endif
                #ifdef SEQ2_FLASH_PART4_3
                Led.blinkStop(2);
                #endif
                #ifdef SEQ2_FLASH_PART4_4
                Led.blinkStop(3);
                #endif
                #ifdef SEQ2_FLASH_PART4_5
                Led.blinkStop(4);
                #endif
                #ifdef SEQ2_FLASH_PART4_6
                Led.blinkStop(5);
                #endif
                #ifdef SEQ2_FLASH_PART4_7
                Led.blinkStop(6);
                #endif
                #ifdef SEQ2_FLASH_PART4_8
                Led.blinkStop(7);
                #endif
                #ifdef SEQ2_FLASH_PART4_9
                Led.blinkStop(8);
                #endif
                #ifdef SEQ2_FLASH_PART4_10
                Led.blinkStop(9);
                #endif
                #ifdef SEQ2_FLASH_PART4_11
                Led.blinkStop(12);
                #endif
                #ifdef SEQ2_FLASH_PART4_12
                Led.blinkStop(13);
                #endif
                #ifdef SEQ2_FLASH_PART4_13
                Led.blinkStop(14);
                #endif
                #ifdef SEQ2_FLASH_PART4_14
                Led.blinkStop(14);
                #endif
  }
 
#ifdef ACTION1_MULTI
 if (Fishing_Led /*&& lightsOn*/ ) {

    if (action1Switch==1){
                
                #ifdef ACTION1A_1
                Led.On(0);
                #endif
                #ifdef ACTION1A_2
                Led.On(1);
                #endif
                #ifdef ACTION1A_3
                Led.On(2);
                #endif
                #ifdef ACTION1A_4
                Led.On(3);
                #endif
                #ifdef ACTION1A_5
                Led.On(4);
                #endif
                #ifdef ACTION1A_6
                Led.On(5);
                #endif
                #ifdef ACTION1A_7
                Led.On(6);
                #endif
                #ifdef ACTION1A_8
                Led.On(7);
                #endif
                #ifdef ACTION1A_9
                Led.On(8);
                #endif
                #ifdef ACTION1A_10
                Led.On(9);
                #endif
                #ifdef ACTION1A_11
                Led.On(12);
                #endif
                #ifdef ACTION1A_12
                Led.On(13);
                #endif
                #ifdef ACTION1A_13
                Led.On(14);
                #endif
                #ifdef ACTION1A_14
                Led.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif

    }

     else if (action1Switch==2){

      
                #ifdef ACTION1A_1
                Led.On(0);
                #endif
                #ifdef ACTION1A_2
                Led.On(1);
                #endif
                #ifdef ACTION1A_3
                Led.On(2);
                #endif
                #ifdef ACTION1A_4
                Led.On(3);
                #endif
                #ifdef ACTION1A_5
                Led.On(4);
                #endif
                #ifdef ACTION1A_6
                Led.On(5);
                #endif
                #ifdef ACTION1A_7
                Led.On(6);
                #endif
                #ifdef ACTION1A_8
                Led.On(7);
                #endif
                #ifdef ACTION1A_9
                Led.On(8);
                #endif
                #ifdef ACTION1A_10
                Led.On(9);
                #endif
                #ifdef ACTION1A_11
                Led.On(12);
                #endif
                #ifdef ACTION1A_12
                Led.On(13);
                #endif
                #ifdef ACTION1A_13
                Led.On(14);
                #endif
                #ifdef ACTION1A_14
                Led.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif   
                #ifdef ACTION1B_1
                Led.On(0);
                #endif
                #ifdef ACTION1B_2
                Led.On(1);
                #endif
                #ifdef ACTION1B_3
                Led.On(2);
                #endif
                #ifdef ACTION1B_4
                Led.On(3);
                #endif
                #ifdef ACTION1B_5
                Led.On(4);
                #endif
                #ifdef ACTION1B_6
                Led.On(5);
                #endif
                #ifdef ACTION1B_7
                Led.On(6);
                #endif
                #ifdef ACTION1B_8
                Led.On(7);
                #endif
                #ifdef ACTION1B_9
                Led.On(8);
                #endif
                #ifdef ACTION1B_10
                Led.On(9);
                #endif
                #ifdef ACTION1B_11
                Led.On(12);
                #endif
                #ifdef ACTION1B_12
                Led.On(13);
                #endif
                #ifdef ACTION1B_13
                Led.On(14);
                #endif
                #ifdef ACTION1B_14
                Led.On(15);
                #endif
                
                #ifdef ACTION1B_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
     } 
     else if (action1Switch==3){
   
        
                #ifdef ACTION1A_1
                Led.On(0);
                #endif
                #ifdef ACTION1A_2
                Led.On(1);
                #endif
                #ifdef ACTION1A_3
                Led.On(2);
                #endif
                #ifdef ACTION1A_4
                Led.On(3);
                #endif
                #ifdef ACTION1A_5
                Led.On(4);
                #endif
                #ifdef ACTION1A_6
                Led.On(5);
                #endif
                #ifdef ACTION1A_7
                Led.On(6);
                #endif
                #ifdef ACTION1A_8
                Led.On(7);
                #endif
                #ifdef ACTION1A_9
                Led.On(8);
                #endif
                #ifdef ACTION1A_10
                Led.On(9);
                #endif
                #ifdef ACTION1A_11
                Led.On(12);
                #endif
                #ifdef ACTION1A_12
                Led.On(13);
                #endif
                #ifdef ACTION1A_13
                Led.On(14);
                #endif
                #ifdef ACTION1A_14
                Led.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif   
                #ifdef ACTION1B_1
                Led.On(0);
                #endif
                #ifdef ACTION1B_2
                Led.On(1);
                #endif
                #ifdef ACTION1B_3
                Led.On(2);
                #endif
                #ifdef ACTION1B_4
                Led.On(3);
                #endif
                #ifdef ACTION1B_5
                Led.On(4);
                #endif
                #ifdef ACTION1B_6
                Led.On(5);
                #endif
                #ifdef ACTION1B_7
                Led.On(6);
                #endif
                #ifdef ACTION1B_8
                Led.On(7);
                #endif
                #ifdef ACTION1B_9
                Led.On(8);
                #endif
                #ifdef ACTION1B_10
                Led.On(9);
                #endif
                #ifdef ACTION1B_11
                Led.On(12);
                #endif
                #ifdef ACTION1B_12
                Led.On(13);
                #endif
                #ifdef ACTION1B_13
                Led.On(14);
                #endif
                #ifdef ACTION1B_14
                Led.On(15);
                #endif
                
                #ifdef ACTION1B_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_1
                Led.On(0);
                #endif
                #ifdef ACTION1C_2
                Led.On(1);
                #endif
                #ifdef ACTION1C_3
                Led.On(2);
                #endif
                #ifdef ACTION1C_4
                Led.On(3);
                #endif
                #ifdef ACTION1C_5
                Led.On(4);
                #endif
                #ifdef ACTION1C_6
                Led.On(5);
                #endif
                #ifdef ACTION1C_7
                Led.On(6);
                #endif
                #ifdef ACTION1C_8
                Led.On(7);
                #endif
                #ifdef ACTION1C_9
                Led.On(8);
                #endif
                #ifdef ACTION1C_10
                Led.On(9);
                #endif
                #ifdef ACTION1C_11
                Led.On(12);
                #endif
                #ifdef ACTION1C_12
                Led.On(13);
                #endif
                #ifdef ACTION1C_13
                Led.On(14);
                #endif
                #ifdef ACTION1C_14
                Led.On(15);
                #endif
                
                #ifdef ACTION1C_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1C_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
     }
     else if (action1Switch==4){
     
                #ifdef ACTION1C_1
                Led.Off(0);
                #endif
                #ifdef ACTION1C_2
                Led.Off(1);
                #endif
                #ifdef ACTION1C_3
                Led.Off(2);
                #endif
                #ifdef ACTION1C_4
                Led.Off(3);
                #endif
                #ifdef ACTION1C_5
                Led.Off(4);
                #endif
                #ifdef ACTION1C_6
                Led.Off(5);
                #endif
                #ifdef ACTION1C_7
                Led.Off(6);
                #endif
                #ifdef ACTION1C_8
                Led.Off(7);
                #endif
                #ifdef ACTION1C_9
                Led.Off(8);
                #endif
                #ifdef ACTION1C_10
                Led.Off(9);
                #endif
                #ifdef ACTION1C_11
                Led.Off(12);
                #endif
                #ifdef ACTION1C_12
                Led.Off(13);
                #endif
                #ifdef ACTION1C_13
                Led.Off(14);
                #endif
                #ifdef ACTION1C_14
                Led.Off(15);
                #endif
                #ifdef ACTION1C_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION1C_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION1C_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION1C_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION1C_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION1C_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION1C_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION1C_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION1C_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION1C_FLASH_14
                Led.blinkStop(14);
                #endif
     
     
     
     
     }
     
     else if (action1Switch==5){
     
                #ifdef ACTION1B_1
                Led.Off(0);
                #endif
                #ifdef ACTION1B_2
                Led.Off(1);
                #endif
                #ifdef ACTION1B_3
                Led.Off(2);
                #endif
                #ifdef ACTION1B_4
                Led.Off(3);
                #endif
                #ifdef ACTION1B_5
                Led.Off(4);
                #endif
                #ifdef ACTION1B_6
                Led.Off(5);
                #endif
                #ifdef ACTION1B_7
                Led.Off(6);
                #endif
                #ifdef ACTION1B_8
                Led.Off(7);
                #endif
                #ifdef ACTION1B_9
                Led.Off(8);
                #endif
                #ifdef ACTION1B_10
                Led.Off(9);
                #endif
                #ifdef ACTION1B_11
                Led.Off(12);
                #endif
                #ifdef ACTION1B_12
                Led.Off(13);
                #endif
                #ifdef ACTION1B_13
                Led.Off(14);
                #endif
                #ifdef ACTION1B_14
                Led.Off(15);
                #endif
                #ifdef ACTION1B_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led.blinkStop(14);
                #endif
     
     
     
     
     }
            }
            else {

        
                
                #ifdef ACTION1A_1
                Led.Off(0);
                #endif
                #ifdef ACTION1A_2
                Led.Off(1);
                #endif
                #ifdef ACTION1A_3
                Led.Off(2);
                #endif
                #ifdef ACTION1A_4
                Led.Off(3);
                #endif
                #ifdef ACTION1A_5
                Led.Off(4);
                #endif
                #ifdef ACTION1A_6
                Led.Off(5);
                #endif
                #ifdef ACTION1A_7
                Led.Off(6);
                #endif
                #ifdef ACTION1A_8
                Led.Off(7);
                #endif
                #ifdef ACTION1A_9
                Led.Off(8);
                #endif
                #ifdef ACTION1A_10
                Led.Off(9);
                #endif
                #ifdef ACTION1A_11
                Led.Off(12);
                #endif
                #ifdef ACTION1A_12
                Led.Off(13);
                #endif
                #ifdef ACTION1A_13
                Led.Off(14);
                #endif
                #ifdef ACTION1A_14
                Led.Off(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led.blinkStop(14);
                #endif
        
                #ifdef ACTION1B_1
                Led.Off(0);
                #endif
                #ifdef ACTION1B_2
                Led.Off(1);
                #endif
                #ifdef ACTION1B_3
                Led.Off(2);
                #endif
                #ifdef ACTION1B_4
                Led.Off(3);
                #endif
                #ifdef ACTION1B_5
                Led.Off(4);
                #endif
                #ifdef ACTION1B_6
                Led.Off(5);
                #endif
                #ifdef ACTION1B_7
                Led.Off(6);
                #endif
                #ifdef ACTION1B_8
                Led.Off(7);
                #endif
                #ifdef ACTION1B_9
                Led.Off(8);
                #endif
                #ifdef ACTION1B_10
                Led.Off(9);
                #endif
                #ifdef ACTION1B_11
                Led.Off(12);
                #endif
                #ifdef ACTION1B_12
                Led.Off(13);
                #endif
                #ifdef ACTION1B_13
                Led.Off(14);
                #endif
                #ifdef ACTION1B_14
                Led.Off(15);
                #endif
                #ifdef ACTION1B_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION1B_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION1B_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION1B_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION1B_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION1B_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION1B_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION1B_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION1B_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION1B_FLASH_14
                Led.blinkStop(14);
                #endif
        
                #ifdef ACTION1C_1
                Led.Off(0);
                #endif
                #ifdef ACTION1C_2
                Led.Off(1);
                #endif
                #ifdef ACTION1C_3
                Led.Off(2);
                #endif
                #ifdef ACTION1C_4
                Led.Off(3);
                #endif
                #ifdef ACTION1C_5
                Led.Off(4);
                #endif
                #ifdef ACTION1C_6
                Led.Off(5);
                #endif
                #ifdef ACTION1C_7
                Led.Off(6);
                #endif
                #ifdef ACTION1C_8
                Led.Off(7);
                #endif
                #ifdef ACTION1C_9
                Led.Off(8);
                #endif
                #ifdef ACTION1C_10
                Led.Off(9);
                #endif
                #ifdef ACTION1C_11
                Led.Off(12);
                #endif
                #ifdef ACTION1C_12
                Led.Off(13);
                #endif
                #ifdef ACTION1C_13
                Led.Off(14);
                #endif
                #ifdef ACTION1C_14
                Led.Off(15);
                #endif
                #ifdef ACTION1C_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION1C_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION1C_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION1C_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION1C_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION1C_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION1C_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION1C_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION1C_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION1C_FLASH_14
                Led.blinkStop(14);
                #endif
                
            }
            #else

             if (Fishing_Led && lightsOn ) {
                
                #ifdef ACTION1A_1
                Led.On(0);
                #endif
                #ifdef ACTION1A_2
                Led.On(1);
                #endif
                #ifdef ACTION1A_3
                Led.On(2);
                #endif
                #ifdef ACTION1A_4
                Led.On(3);
                #endif
                #ifdef ACTION1A_5
                Led.On(4);
                #endif
                #ifdef ACTION1A_6
                Led.On(5);
                #endif
                #ifdef ACTION1A_7
                Led.On(6);
                #endif
                #ifdef ACTION1A_8
                Led.On(7);
                #endif
                #ifdef ACTION1A_9
                Led.On(8);
                #endif
                #ifdef ACTION1A_10
                Led.On(9);
                #endif
                #ifdef ACTION1A_11
                Led.On(12);
                #endif
                #ifdef ACTION1A_12
                Led.On(13);
                #endif
                #ifdef ACTION1A_13
                Led.On(14);
                #endif
                #ifdef ACTION1A_14
                Led.On(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led.blink(0, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led.blink(1, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led.blink(2, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led.blink(3, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led.blink(4, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led.blink(5, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led.blink(6, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led.blink(7, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led.blink(8, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led.blink(9, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led.blink(12, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led.blink(13, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led.blink(14, OFFTIME_1, ONTIME_1);
                #endif
                
            }
            else {
                
                #ifdef ACTION1A_1
                Led.Off(0);
                #endif
                #ifdef ACTION1A_2
                Led.Off(1);
                #endif
                #ifdef ACTION1A_3
                Led.Off(2);
                #endif
                #ifdef ACTION1A_4
                Led.Off(3);
                #endif
                #ifdef ACTION1A_5
                Led.Off(4);
                #endif
                #ifdef ACTION1A_6
                Led.Off(5);
                #endif
                #ifdef ACTION1A_7
                Led.Off(6);
                #endif
                #ifdef ACTION1A_8
                Led.Off(7);
                #endif
                #ifdef ACTION1A_9
                Led.Off(8);
                #endif
                #ifdef ACTION1A_10
                Led.Off(9);
                #endif
                #ifdef ACTION1A_11
                Led.Off(12);
                #endif
                #ifdef ACTION1A_12
                Led.Off(13);
                #endif
                #ifdef ACTION1A_13
                Led.Off(14);
                #endif
                #ifdef ACTION1A_14
                Led.Off(15);
                #endif
                #ifdef ACTION1A_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION1A_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION1A_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION1A_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION1A_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION1A_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION1A_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION1A_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION1A_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION1A_FLASH_14
                Led.blinkStop(14);
                #endif
                
            }
        #endif

    if (Fog_Led /*&& lightsOn*/ ) {
                
                #ifdef ACTION3_1
                Led.On(0);
                #endif
                #ifdef ACTION3_2
                Led.On(1);
                #endif
                #ifdef ACTION3_3
                Led.On(2);
                #endif
                #ifdef ACTION3_4
                Led.On(3);
                #endif
                #ifdef ACTION3_5
                Led.On(4);
                #endif
                #ifdef ACTION3_6
                Led.On(5);
                #endif
                #ifdef ACTION3_7
                Led.On(6);
                #endif
                #ifdef ACTION3_8
                Led.On(7);
                #endif
                #ifdef ACTION3_9
                Led.On(8);
                #endif
                #ifdef ACTION3_10
                Led.On(9);
                #endif
                #ifdef ACTION3_11
                Led.On(12);
                #endif
                #ifdef ACTION3_12
                Led.On(13);
                #endif
                #ifdef ACTION3_13
                Led.On(14);
                #endif
                #ifdef ACTION3_14
                Led.On(15);
                #endif
                #ifdef ACTION3_FLASH_1
                Led.blink(0, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_2
                Led.blink(1, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_3
                Led.blink(2, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_4
                Led.blink(3, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_5
                Led.blink(4, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_6
                Led.blink(5, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_7
                Led.blink(6, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_8
                Led.blink(7, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_9
                Led.blink(8, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_10
                Led.blink(9, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_11
                Led.blink(12, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_12
                Led.blink(13, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_13
                Led.blink(14, OFFTIME_3, ONTIME_3);
                #endif
                #ifdef ACTION3_FLASH_14
                Led.blink(14, OFFTIME_3, ONTIME_3);
                #endif
                
            }
            else {
                
                #ifdef ACTION3_1
                Led.Off(0);
                #endif
                #ifdef ACTION3_2
                Led.Off(1);
                #endif
                #ifdef ACTION3_3
                Led.Off(2);
                #endif
                #ifdef ACTION3_4
                Led.Off(3);
                #endif
                #ifdef ACTION3_5
                Led.Off(4);
                #endif
                #ifdef ACTION3_6
                Led.Off(5);
                #endif
                #ifdef ACTION3_7
                Led.Off(6);
                #endif
                #ifdef ACTION3_8
                Led.Off(7);
                #endif
                #ifdef ACTION3_9
                Led.Off(8);
                #endif
                #ifdef ACTION3_10
                Led.Off(9);
                #endif
                #ifdef ACTION3_11
                Led.Off(12);
                #endif
                #ifdef ACTION3_12
                Led.Off(13);
                #endif
                #ifdef ACTION3_13
                Led.Off(14);
                #endif
                #ifdef ACTION3_14
                Led.Off(15);
                #endif
                #ifdef ACTION3_FLASH_1
                Led.blinkStop(0);
                #endif
                #ifdef ACTION3_FLASH_2
                Led.blinkStop(1);
                #endif
                #ifdef ACTION3_FLASH_3
                Led.blinkStop(2);
                #endif
                #ifdef ACTION3_FLASH_4
                Led.blinkStop(3);
                #endif
                #ifdef ACTION3_FLASH_5
                Led.blinkStop(4);
                #endif
                #ifdef ACTION3_FLASH_6
                Led.blinkStop(5);
                #endif
                #ifdef ACTION3_FLASH_7
                Led.blinkStop(6);
                #endif
                #ifdef ACTION3_FLASH_8
                Led.blinkStop(7);
                #endif
                #ifdef ACTION3_FLASH_9
                Led.blinkStop(8);
                #endif
                #ifdef ACTION3_FLASH_10
                Led.blinkStop(9);
                #endif
                #ifdef ACTION3_FLASH_11
                Led.blinkStop(12);
                #endif
                #ifdef ACTION3_FLASH_12
                Led.blinkStop(13);
                #endif
                #ifdef ACTION3_FLASH_13
                Led.blinkStop(14);
                #endif
                #ifdef ACTION3_FLASH_14
                Led.blinkStop(14);
                #endif
                
            }
  
  #ifdef ACTION4_ENABLE
    
    if (Manoeuvre_Led && lightsOn) {
        
        #ifdef ACTION4_1
        Led.On(0);
        #endif
        #ifdef ACTION4_2
        Led.On(1);
        #endif
        #ifdef ACTION4_3
        Led.On(2);
        #endif
        #ifdef ACTION4_4
        Led.On(3);
        #endif
        #ifdef ACTION4_5
        Led.On(4);
        #endif
        #ifdef ACTION4_6
        Led.On(5);
        #endif
        #ifdef ACTION4_7
        Led.On(6);
        #endif
        #ifdef ACTION4_8
        Led.On(7);
        #endif
        #ifdef ACTION4_9
        Led.On(8);
        #endif
        #ifdef ACTION4_10
        Led.On(9);
        #endif
        #ifdef ACTION4_11
        Led.On(12);
        #endif
        #ifdef ACTION4_12
        Led.On(13);
        #endif
        #ifdef ACTION4_13
        Led.On(14);
        #endif
        #ifdef ACTION4_14
        Led.On(15);
        #endif
        
    }
    else {
        
        #ifdef ACTION4_1
        Led.Off(0);
        #endif
        #ifdef ACTION4_2
        Led.Off(1);
        #endif
        #ifdef ACTION4_3
        Led.Off(2);
        #endif
        #ifdef ACTION4_4
        Led.Off(3);
        #endif
        #ifdef ACTION4_5
        Led.Off(4);
        #endif
        #ifdef ACTION4_6
        Led.Off(5);
        #endif
        #ifdef ACTION4_7
        Led.Off(6);
        #endif
        #ifdef ACTION4_8
        Led.Off(7);
        #endif
        #ifdef ACTION4_9
        Led.Off(8);
        #endif
        #ifdef ACTION4_10
        Led.Off(9);
        #endif
        #ifdef ACTION4_11
        Led.Off(12);
        #endif
        #ifdef ACTION4_12
        Led.Off(13);
        #endif
        #ifdef ACTION4_13
        Led.Off(14);
        #endif
        #ifdef ACTION4_14
        Led.Off(15);
        #endif
        
    }
  
  #endif
    
  
  #ifdef ACTION6_ENABLE
    if (machinGunFlash) {
        
        #ifdef ACTION6_1
        Led.On(0);
        #endif
        #ifdef ACTION6_2
        Led.On(1);
        #endif
        #ifdef ACTION6_3
        Led.On(2);
        #endif
        #ifdef ACTION6_4
        Led.On(3);
        #endif
        #ifdef ACTION6_5
        Led.On(4);
        #endif
        #ifdef ACTION6_6
        Led.On(5);
        #endif
        #ifdef ACTION6_7
        Led.On(6);
        #endif
        #ifdef ACTION6_8
        Led.On(7);
        #endif
        #ifdef ACTION6_9
        Led.On(8);
        #endif
        #ifdef ACTION6_10
        Led.On(9);
        #endif
        #ifdef ACTION6_11
        Led.On(12);
        #endif
        #ifdef ACTION6_12
        Led.On(13);
        #endif
        #ifdef ACTION6_13
        Led.On(14);
        #endif
        #ifdef ACTION6_14
        Led.On(15);
        #endif
        
    }
    else {
        
        #ifdef ACTION6_1
        Led.Off(0);
        #endif
        #ifdef ACTION6_2
        Led.Off(1);
        #endif
        #ifdef ACTION6_3
        Led.Off(2);
        #endif
        #ifdef ACTION6_4
        Led.Off(3);
        #endif
        #ifdef ACTION6_5
        Led.Off(4);
        #endif
        #ifdef ACTION6_6
        Led.Off(5);
        #endif
        #ifdef ACTION6_7
        Led.Off(6);
        #endif
        #ifdef ACTION6_8
        Led.Off(7);
        #endif
        #ifdef ACTION6_9
        Led.Off(8);
        #endif
        #ifdef ACTION6_10
        Led.Off(9);
        #endif
        #ifdef ACTION6_11
        Led.Off(12);
        #endif
        #ifdef ACTION6_12
        Led.Off(13);
        #endif
        #ifdef ACTION6_13
        Led.Off(14);
        #endif
        #ifdef ACTION6_14
        Led.Off(15);
        #endif
        
    }
  
  #endif
  
  
  #ifdef ACTION7_ENABLE
    
    if (cannonFlash) {
        
        #ifdef ACTION7_1
        Led.On(0);
        #endif
        #ifdef ACTION7_2
        Led.On(1);
        #endif
        #ifdef ACTION7_3
        Led.On(2);
        #endif
        #ifdef ACTION7_4
        Led.On(3);
        #endif
        #ifdef ACTION7_5
        Led.On(4);
        #endif
        #ifdef ACTION7_6
        Led.On(5);
        #endif
        #ifdef ACTION7_7
        Led.On(6);
        #endif
        #ifdef ACTION7_8
        Led.On(7);
        #endif
        #ifdef ACTION7_9
        Led.On(8);
        #endif
        #ifdef ACTION7_10
        Led.On(9);
        #endif
        #ifdef ACTION7_11
        Led.On(12);
        #endif
        #ifdef ACTION7_12
        Led.On(13);
        #endif
        #ifdef ACTION7_13
        Led.On(14);
        #endif
        #ifdef ACTION7_14
        Led.On(15);
        #endif
        
    }
    else {
        
        #ifdef ACTION7_1
        Led.Off(0);
        #endif
        #ifdef ACTION7_2
        Led.Off(1);
        #endif
        #ifdef ACTION7_3
        Led.Off(2);
        #endif
        #ifdef ACTION7_4
        Led.Off(3);
        #endif
        #ifdef ACTION7_5
        Led.Off(4);
        #endif
        #ifdef ACTION7_6
        Led.Off(5);
        #endif
        #ifdef ACTION7_7
        Led.Off(6);
        #endif
        #ifdef ACTION7_8
        Led.Off(7);
        #endif
        #ifdef ACTION7_9
        Led.Off(8);
        #endif
        #ifdef ACTION7_10
        Led.Off(9);
        #endif
        #ifdef ACTION7_11
        Led.Off(12);
        #endif
        #ifdef ACTION7_12
        Led.Off(13);
        #endif
        #ifdef ACTION7_13
        Led.Off(14);
        #endif
        #ifdef ACTION7_14
        Led.Off(15);
        #endif
        
    }
  
  #endif
  
  #ifdef ACTION8_ENABLE 
    if (Alarm_Led) {
        
        #ifdef ACTION8_FLASH_1
        Led.blink(0, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_2
        Led.blink(1, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_3
        Led.blink(2, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_4
        Led.blink(3, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_5
        Led.blink(4, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_6
        Led.blink(5, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_7
        Led.blink(6, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_8
        Led.blink(7, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_9
        Led.blink(8, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_10
        Led.blink(9, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_11
        Led.blink(12, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_12
        Led.blink(13, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_13
        Led.blink(14, OFFTIME_8, ONTIME_8);
        #endif
        #ifdef ACTION8_FLASH_14
        Led.blink(14, OFFTIME_8, ONTIME_8);
        #endif
        
    }
    else {
        
        #ifdef ACTION8_FLASH_1
        Led.blinkStop(0);
        #endif
        #ifdef ACTION8_FLASH_2
        Led.blinkStop(1);
        #endif
        #ifdef ACTION8_FLASH_3
        Led.blinkStop(2);
        #endif
        #ifdef ACTION8_FLASH_4
        Led.blinkStop(3);
        #endif
        #ifdef ACTION8_FLASH_5
        Led.blinkStop(4);
        #endif
        #ifdef ACTION8_FLASH_6
        Led.blinkStop(5);
        #endif
        #ifdef ACTION8_FLASH_7
        Led.blinkStop(6);
        #endif
        #ifdef ACTION8_FLASH_8
        Led.blinkStop(7);
        #endif
        #ifdef ACTION8_FLASH_9
        Led.blinkStop(8);
        #endif
        #ifdef ACTION8_FLASH_10
        Led.blinkStop(9);
        #endif
        #ifdef ACTION8_FLASH_11
        Led.blinkStop(12);
        #endif
        #ifdef ACTION8_FLASH_12
        Led.blinkStop(13);
        #endif
        #ifdef ACTION8_FLASH_13
        Led.blinkStop(14);
        #endif
        #ifdef ACTION8_FLASH_14
        Led.blinkStop(14);
        #endif
        
    }
  
  #endif
  
    
    if (AutoLight) {
        
        if (engineRunning) {
            
            #ifdef ACTION9_1
            Led.On(0);
            #endif
            #ifdef ACTION9_2
            Led.On(1);
            #endif
            #ifdef ACTION9_3
            Led.On(2);
            #endif
            #ifdef ACTION9_4
            Led.On(3);
            #endif
            #ifdef ACTION9_5
            Led.On(4);
            #endif
            #ifdef ACTION9_6
            Led.On(5);
            #endif
            #ifdef ACTION9_7
            Led.On(6);
            #endif
            #ifdef ACTION9_8
            Led.On(7);
            #endif
            #ifdef ACTION9_9
            Led.On(8);
            #endif
            #ifdef ACTION9_10
            Led.On(9);
            #endif
            #ifdef ACTION9_11
            Led.On(12);
            #endif
            #ifdef ACTION9_12
            Led.On(13);
            #endif
            #ifdef ACTION9_13
            Led.On(14);
            #endif
            #ifdef ACTION9_14
            Led.On(15);
            #endif
      
      
            #ifdef ACTION9_FLASH_1
            Led.blink(0, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_2
            Led.blink(1, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_3
            Led.blink(2, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_4
            Led.blink(3, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_5
            Led.blink(4, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_6
            Led.blink(5, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_7
            Led.blink(6, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_8
            Led.blink(7, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_9
            Led.blink(8, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_10
            Led.blink(9, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_11
            Led.blink(12, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_12
            Led.blink(13, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_13
            Led.blink(14, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_14
            Led.blink(14, OFFTIME_9, ONTIME_9);
            #endif
      
      
            
        }
        
        
    }
    else {
        
        if (LightManualOn) {
            
            #ifdef ACTION9_1
            Led.On(0);
            #endif
            #ifdef ACTION9_2
            Led.On(1);
            #endif
            #ifdef ACTION9_3
            Led.On(2);
            #endif
            #ifdef ACTION9_4
            Led.On(3);
            #endif
            #ifdef ACTION9_5
            Led.On(4);
            #endif
            #ifdef ACTION9_6
            Led.On(5);
            #endif
            #ifdef ACTION9_7
            Led.On(6);
            #endif
            #ifdef ACTION9_8
            Led.On(7);
            #endif
            #ifdef ACTION9_9
            Led.On(8);
            #endif
            #ifdef ACTION9_10
            Led.On(9);
            #endif
            #ifdef ACTION9_11
            Led.On(12);
            #endif
            #ifdef ACTION9_12
            Led.On(13);
            #endif
            #ifdef ACTION9_13
            Led.On(14);
            #endif
            #ifdef ACTION9_14
            Led.On(15);
            #endif
            #ifdef ACTION9_FLASH_1
            Led.blink(0, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_2
            Led.blink(1, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_3
            Led.blink(2, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_4
            Led.blink(3, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_5
            Led.blink(4, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_6
            Led.blink(5, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_7
            Led.blink(6, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_8
            Led.blink(7, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_9
            Led.blink(8, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_10
            Led.blink(9, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_11
            Led.blink(12, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_12
            Led.blink(13, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_13
            Led.blink(14, OFFTIME_9, ONTIME_9);
            #endif
            #ifdef ACTION9_FLASH_14
            Led.blink(14, O_9, ONTIME_9);
            #endif
            
            
            
        }
        else {
            
            #ifdef ACTION9_1
            Led.Off(0);
            #endif
            #ifdef ACTION9_2
            Led.Off(1);
            #endif
            #ifdef ACTION9_3
            Led.Off(2);
            #endif
            #ifdef ACTION9_4
            Led.Off(3);
            #endif
            #ifdef ACTION9_5
            Led.Off(4);
            #endif
            #ifdef ACTION9_6
            Led.Off(5);
            #endif
            #ifdef ACTION9_7
            Led.Off(6);
            #endif
            #ifdef ACTION9_8
            Led.Off(7);
            #endif
            #ifdef ACTION9_9
            Led.Off(8);
            #endif
            #ifdef ACTION9_10
            Led.Off(9);
            #endif
            #ifdef ACTION9_11
            Led.Off(12);
            #endif
            #ifdef ACTION9_12
            Led.Off(13);
            #endif
            #ifdef ACTION9_13
            Led.Off(14);
            #endif
            #ifdef ACTION9_14
            Led.Off(15);
            #endif
            #ifdef ACTION9_FLASH_1
            Led.blinkStop(0);
            #endif
            #ifdef ACTION9_FLASH_2
            Led.blinkStop(1);
            #endif
            #ifdef ACTION9_FLASH_3
            Led.blinkStop(2);
            #endif
            #ifdef ACTION9_FLASH_4
            Led.blinkStop(3);
            #endif
            #ifdef ACTION9_FLASH_5
            Led.blinkStop(4);
            #endif
            #ifdef ACTION9_FLASH_6
            Led.blinkStop(5);
            #endif
            #ifdef ACTION9_FLASH_7
            Led.blinkStop(6);
            #endif
            #ifdef ACTION9_FLASH_8
            Led.blinkStop(7);
            #endif
            #ifdef ACTION9_FLASH_9
            Led.blinkStop(8);
            #endif
            #ifdef ACTION9_FLASH_10
            Led.blinkStop(9);
            #endif
            #ifdef ACTION9_FLASH_11
            Led.blinkStop(12);
            #endif
            #ifdef ACTION9_FLASH_12
            Led.blinkStop(13);
            #endif
            #ifdef ACTION9_FLASH_13
            Led.blinkStop(14);
            #endif
            #ifdef ACTION9_FLASH_14
            Led.blinkStop(14);
            #endif
            
        }
        
        
    }
   
    if (!lightsOn ) {
      
            #ifdef ACTION9_1
            Led.Off(0);
            #endif
            #ifdef ACTION9_2
            Led.Off(1);
            #endif
            #ifdef ACTION9_3
            Led.Off(2);
            #endif
            #ifdef ACTION9_4
            Led.Off(3);
            #endif
            #ifdef ACTION9_5
            Led.Off(4);
            #endif
            #ifdef ACTION9_6
            Led.Off(5);
            #endif
            #ifdef ACTION9_7
            Led.Off(6);
            #endif
            #ifdef ACTION9_8
            Led.Off(7);
            #endif
            #ifdef ACTION9_9
            Led.Off(8);
            #endif
            #ifdef ACTION9_10
            Led.Off(9);
            #endif
            #ifdef ACTION9_11
            Led.Off(12);
            #endif
            #ifdef ACTION9_12
            Led.Off(13);
            #endif
            #ifdef ACTION9_13
            Led.Off(14);
            #endif
            #ifdef ACTION9_14
            Led.Off(15);
            #endif
            #ifdef ACTION9_FLASH_1
            Led.blinkStop(0);
            #endif
            #ifdef ACTION9_FLASH_2
            Led.blinkStop(1);
            #endif
            #ifdef ACTION9_FLASH_3
            Led.blinkStop(2);
            #endif
            #ifdef ACTION9_FLASH_4
            Led.blinkStop(3);
            #endif
            #ifdef ACTION9_FLASH_5
            Led.blinkStop(4);
            #endif
            #ifdef ACTION9_FLASH_6
            Led.blinkStop(5);
            #endif
            #ifdef ACTION9_FLASH_7
            Led.blinkStop(6);
            #endif
            #ifdef ACTION9_FLASH_8
            Led.blinkStop(7);
            #endif
            #ifdef ACTION9_FLASH_9
            Led.blinkStop(8);
            #endif
            #ifdef ACTION9_FLASH_10
            Led.blinkStop(9);
            #endif
            #ifdef ACTION9_FLASH_11
            Led.blinkStop(12);
            #endif
            #ifdef ACTION9_FLASH_12
            Led.blinkStop(13);
            #endif
            #ifdef ACTION9_FLASH_13
            Led.blinkStop(14);
            #endif
            #ifdef ACTION9_FLASH_14
            Led.blinkStop(14);
            #endif

       /*      
        Led.Off(0);
        Led.Off(1);
        Led.Off(2);
        Led.Off(2);
        Led.Off(3);
        Led.Off(4);
        Led.Off(5);
        Led.Off(6);
        Led.Off(8);
        Led.Off(9);
        Led.Off(12);
        Led.Off(13);
        Led.Off(14);
        Led.blinkStop(0);
        Led.blinkStop(1);
        Led.blinkStop(2);
        Led.blinkStop(2);
        Led.blinkStop(3);
        Led.blinkStop(4);
        Led.blinkStop(5);
        Led.blinkStop(6);
        Led.blinkStop(8);
        Led.blinkStop(9);
        Led.blinkStop(12);
        Led.blinkStop(13);
        Led.blinkStop(14);
       */   
    }
  
    
}

//
