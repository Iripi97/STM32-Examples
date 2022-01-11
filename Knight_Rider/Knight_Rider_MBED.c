/* "Knight Rider" STM32 Discovery MBED Program
 * Created by: Justin Russo
*/
#include "mbed.h"

DigitalOut led_1(PE_9);
DigitalOut led_2(PE_11);
DigitalOut led_3(PE_13);
DigitalOut led_4(PE_14);
DigitalOut led_5(PD_12);
DigitalOut led_6(PD_13);
DigitalOut led_7(PD_14);
DigitalOut led_8(PD_15);                    // Initializing LED1 - LED8
InterruptIn user_button(USER_BUTTON);       // Initializing USER_BUTTON
void LEDs();                                // Function prototype

float delay = 0.02;                         // Global delay for LEDs

int main()
{
    user_button.rise(&LEDs);                // Check to see if button is pressed
}
void LEDs()
{
    led_1 = 1;                              // Write pin high (activate LED1)
    wait(delay);
    led_1 = 0;                              // Write pin low (deactivate LED1)
    wait(delay);
    led_2 = 1;                              // Write pin high (activate LED2)
    wait(delay);
    led_2 = 0;                              // Write pin low (deactivate LED2)
    wait(delay);  
    led_3 = 1;                              // Write pin high (activate LED3)
    wait(delay);
    led_3 = 0;                              // Write pin low (deactivate LED3)
    wait(delay);  
    led_4 = 1;                              // Write pin high (activate LED4)
    wait(delay);
    led_4 = 0;                              // Write pin low (deactivate LED4)
    wait(delay);  
    led_5 = 1;                              // Write pin high (activate LED5)
    wait(delay);
    led_5 = 0;                              // Write pin low (deactivate LED5)
    wait(delay);  
    led_6 = 1;                              // Write pin high (activate LED6)
    wait(delay);
    led_6 = 0;                              // Write pin low (deactivate LED6)
    wait(delay);  
    led_7 = 1;                              // Write pin high (activate LED7)
    wait(delay);
    led_7 = 0;                              // Write pin low (deactivate LED7)
    wait(delay);  
    led_8 = 1;                              // Write pin high (activate LED8)
    wait(delay);
    led_8 = 0;                              // Write pin low (deactivate LED8)
    wait(delay);  
        led_8 = 1;                          // Write pin high (activate LED8)
        wait(delay);
        led_8 = 0;                          // Write pin low (deactivate LED8)
        wait(delay);
        led_7 = 1;                          // Write pin high (activate LED7)
        wait(delay);
        led_7 = 0;                          // Write pin low (deactivate LED7)
        wait(delay);
        led_6 = 1;                          // Write pin high (activate LED6)
        wait(delay);
        led_6 = 0;                          // Write pin low (deactivate LED6)
        wait(delay);
        led_5 = 1;                          // Write pin high (activate LED5)
        wait(delay);
        led_5 = 0;                          // Write pin low (deactivate LED5)
        wait(delay);
        led_4 = 1;                          // Write pin high (activate LED4)
        wait(delay);
        led_4 = 0;                          // Write pin low (deactivate LED4)
        wait(delay);
        led_3 = 1;                          // Write pin high (activate LED3)
        wait(delay);
        led_3 = 0;                          // Write pin low (deactivate LED3)
        wait(delay);
        led_2 = 1;                          // Write pin high (activate LED2)
        wait(delay);
        led_2 = 0;                          // Write pin low (deactivate LED2)
        wait(delay);
        led_1 = 1;                          // Write pin high (activate LED1)
        wait(delay);
        led_1 = 0;                          // Write pin low (deactivate LED1)
        wait(delay);
              
}