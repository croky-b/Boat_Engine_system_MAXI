// =======================================================================================================
// LED
// =======================================================================================================
/* statusLED:flash(onDuration,offDuration,pauseDuration, pulses, delay)
   statusLED on()
   statusLED off()

*/

volatile boolean Fog_Led = false;
volatile boolean Shipping_Led = false;


void led()
{

  if (cannonFlash) {
    Led_builtin.on();
  }
  else Led_builtin.off();


  if (CH6.Pos() == 3) {
    Shipping_Led = true;
  }
  if (CH6.Pos() == 2) {
    Shipping_Led = false;
  }

  if (CH6.Pos() == 1) {
    //Mouillage= true;
  }

  if (CH7.Pos() == 3) {
    //Maneuvre = true;
  }
  if (CH7.Pos() == 2) {
    Fog_Led = false;
  }

  if (CH7.Pos() == 1) {
    Fog_Led = true;
  }






  if (engineRunning)
  {
    //Position Led
    Led.On(0);
    Led.On(1);

    //
    if (Shipping_Led) {
      // Led Mat
      Led.On(2);
      Led.On(3);
      // Led Projecteur
      Led.On(4);
      Led.On(5);

    }
    else {
      // Led Mat
      Led.Off(2);
      Led.Off(3);
      // Led Projecteur
      Led.Off(4);
      Led.Off(5);
    }

    if (Fog_Led) {
      // Led Cabine
      Led.On(6);

      // Led Projecteur pont exterieur
      Led.On(7);
      Led.On(8);

    }
    else {
      // Led Cabine
      Led.Off(6);

      // Led Projecteur pont exterieur
      Led.Off(7);
      Led.Off(8);
    }

  }

  if (!lightsOn)
  {

    //Position Led
    Led.Off(0);
    Led.Off(1);
    // Led Mat
    Led.Off(2);
    Led.Off(3);
    // Led Projecteur
    Led.Off(4);
    Led.Off(5);
    // Led Cabine
    Led.Off(6);

    // Led Projecteur pont exterieur
    Led.Off(7);
    Led.Off(8);


  }
}

//
