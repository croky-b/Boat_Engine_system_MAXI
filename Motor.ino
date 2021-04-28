//
// =======================================================================================================
// RADAR : Led11 = 5v_UBEC  Led10 = 5V
// =======================================================================================================
//


void Radar()
{
  if (MotorOn)
  {
    Motor1.On(11);
  }
  else
  {
    Motor1.Off(11);
  }
}

//
// =======================================================================================================
// MOTOR2 Led10 = 5v_UBEC  Led10 = 5V
// =======================================================================================================
//

void MotorTwo()

{

  if (Seq1LedPart1OnOff) {

#ifdef SEQ1_MOTOR2_PART1
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart1OnOff && !Seq2LedPart1OnOff) {

#ifdef SEQ1_MOTOR2_PART1
    Motor2.Off(10);
#endif



  }

  if (Seq1LedPart2OnOff) {

#ifdef SEQ1_MOTOR2_PART2
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart2OnOff && !Seq2LedPart2OnOff) {

#ifdef SEQ1_MOTOR2_PART2
    Motor2.Off(10);
#endif


  }
  if (Seq1LedPart3OnOff) {

#ifdef SEQ1_MOTOR2_PART3
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart3OnOff && !Seq2LedPart3OnOff) {

#ifdef SEQ1_MOTOR2_PART3
    Motor2.Off(10);
#endif



  }

  if (Seq1LedPart4OnOff) {

#ifdef SEQ1_MOTOR2_PART4
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart4OnOff && !Seq2LedPart4OnOff) {

#ifdef SEQ1_MOTOR2_PART4
    Motor2.Off(10);
#endif


  }

  if (Seq2LedPart1OnOff) {

#ifdef SEQ2_MOTOR2_PART1
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart1OnOff && !Seq2LedPart1OnOff) {

#ifdef SEQ2_MOTOR2_PART1
    Motor2.Off(10);
#endif



  }

  if (Seq2LedPart2OnOff) {

#ifdef SEQ2_MOTOR2_PART2
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart2OnOff && !Seq2LedPart2OnOff) {

#ifdef SEQ2_MOTOR2_PART2
    Motor2.Off(10);
#endif


  }
  if (Seq2LedPart3OnOff) {

#ifdef SEQ2_MOTOR2_PART3
    Motor2.On(10);
#endif

  }

  else if (!Seq1LedPart3OnOff && !Seq2LedPart3OnOff) {

#ifdef SEQ2_MOTOR2_PART3
    Motor2.Off(10);
#endif



  }

  if (Seq2LedPart4OnOff) {

#ifdef SEQ2_MOTOR2_PART4
    Motor2.On(11);
#endif

  }

  else if (!Seq1LedPart4OnOff && !Seq2LedPart4OnOff) {

#ifdef SEQ2_MOTOR2_PART4
    Motor2.Off(11);
#endif


  }



  if (Seq10LedPart1OnOff) {

#ifdef SEQ1B_MOTOR2_PART1
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart1OnOff && !Seq20LedPart1OnOff) {

#ifdef SEQ1B_MOTOR2_PART1
    Motor2.Off(11);
#endif



  }

  if (Seq10LedPart2OnOff) {

#ifdef SEQ1B_MOTOR2_PART2
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart2OnOff && !Seq20LedPart2OnOff) {

#ifdef SEQ1B_MOTOR2_PART2
    Motor2.Off(11);
#endif


  }
  if (Seq10LedPart3OnOff) {

#ifdef SEQ1B_MOTOR2_PART3
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart3OnOff && !Seq20LedPart3OnOff) {

#ifdef SEQ1B_MOTOR2_PART3
    Motor2.Off(11);
#endif



  }

  if (Seq10LedPart4OnOff) {

#ifdef SEQ1B_MOTOR2_PART4
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart4OnOff && !Seq20LedPart4OnOff) {

#ifdef SEQ1B_MOTOR2_PART4
    Motor2.Off(11);
#endif


  }

  if (Seq20LedPart1OnOff) {

#ifdef SEQ2B_MOTOR2_PART1
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart1OnOff && !Seq20LedPart1OnOff) {

#ifdef SEQ2_MOTOR2_PART1
    Motor2.Off(11);
#endif



  }

  if (Seq20LedPart2OnOff) {

#ifdef SEQ2B_MOTOR2_PART2
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart2OnOff && !Seq20LedPart2OnOff) {

#ifdef SEQ2B_MOTOR2_PART2
    Motor2.Off(11);
#endif


  }
  if (Seq20LedPart3OnOff) {

#ifdef SEQ2B_MOTOR2_PART3
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart3OnOff && !Seq20LedPart3OnOff) {

#ifdef SEQ2B_MOTOR2_PART3
    Motor2.Off(11);
#endif



  }

  if (Seq20LedPart4OnOff) {

#ifdef SEQ2B_MOTOR2_PART4
    Motor2.On(11);
#endif

  }

  else if (!Seq10LedPart4OnOff && !Seq20LedPart4OnOff) {

#ifdef SEQ2B_MOTOR2_PART4
    Motor2.Off(11);
#endif


  }




}
