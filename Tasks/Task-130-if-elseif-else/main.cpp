#include "uop_msb.h"
using namespace uop_msb;

//DigitalIn ButtonA(PG_0); //Button A
//DigitalIn ButtonB(PG_1); //Button B
//DigitalIn ButtonC(PG_2, PullDown); //Button C
//DigitalIn ButtonD(PG_3, PullDown); //Button D

BusIn bus(PG_0, PG_1, PG_2, PG_3);
int swVal;

DigitalOut redLED(TRAF_RED1_PIN);       //Red Traffic 1
DigitalOut yellowLED(TRAF_YEL1_PIN);    //Yellow Traffic 1
DigitalOut greenLED(TRAF_GRN1_PIN);     //Green Traffic 1

//Dual Digit 7-segment Display
LatchedLED disp(LatchedLED::SEVEN_SEG);

int main()
{
    int count = 0;

    bus[2].mode(PinMode::PullDown);
    bus[3].mode(PinMode::PullDown);

    //Turn ON the 7-segment display
    disp.enable(true);

    //Update display
    disp = count;

    while (true) {
        
        //Read button without blocking
        int btnA = bus[0];     //Local to the while-loop
        int btnB = bus[1];  

        //Test Button A
        if (btnA == 1) {
            if (count < 99) {
                redLED = !redLED;    //Toggle RED led
                count = count + 1;            //Increment count
                disp = count;       //Update display
            }
        }

        else if (btnB == 1) {
            if (count > 0) {
                redLED = !redLED;
                count = count - 1;
                disp = count;
            }
        }

        if (btnA == 1 && btnB == 1) {
        count =0;
        disp = count;
        }

        else {
        greenLED = !greenLED;
        }


        // Slow it down a bit (and debounce the switches)
        wait_us(100000);  
    }
}


