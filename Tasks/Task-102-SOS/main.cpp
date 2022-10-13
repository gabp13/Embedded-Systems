// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 150000
#define WAIT_TIME_MS_2 450000
#define WAIT_TIME_MS_3 900000
DigitalOut redLED(TRAF_RED1_PIN);
Buzzer buzz;
Buttons buttons;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS_2);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS_2);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS_2);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS_2);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS_2);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS);

        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS);

        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS_3);

    }
}