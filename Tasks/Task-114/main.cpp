#include "mbed.h"

DigitalOut redLED(PC_2,1);
DigitalOut yellowLED(PC_3,1);
DigitalOut GreenLED(PC_6,1);

// main() runs in its own thread in the OS
int main()
{
wait_us(1000000);
redLED = 1;
yellowLED = 0;
GreenLED = 0;
wait_us(1000000);

    while (true) {
        
        redLED = 1;
        wait_us(2000000);

        yellowLED.write(1);
        wait_us(2000000);

        redLED = 0;
        yellowLED = 0;
        GreenLED = 1;
        wait_us(2000000);

        GreenLED = 0;
        int count = 0;
        while (count < 4) {
            yellowLED = !yellowLED;
            wait_us(250000);
            yellowLED = 0;
            wait_us(250000);
            count = count + 1;
            

        }
    }
}

