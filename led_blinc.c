#include <wiringPi.h>

int main(void)
{
    // Red LED: Physical pin 18, BCM GPIO24, and WiringPi pin 5.
    const int led_red = 5;

    const int led_green = 4;


    wiringPiSetup();

    pinMode(led_red, OUTPUT);
    pinMode(led_green, OUTPUT);

    while (1) {
        digitalWrite(led_red, HIGH);
        digitalWrite(led_green, LOW);
        delay(500);
        digitalWrite(led_red, LOW);
        digitalWrite(led_green, HIGH);
        delay(500);
    }

    return 0;
}