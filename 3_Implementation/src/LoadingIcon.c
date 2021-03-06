#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * @brief this function is simply for showing loding icon that shows "wait for a second Loading Environment"
 * it blinks dot after .5 seconds upto 4 dots then repeat itself 
 * 
 */
void LoadingIcon(){
       
    const int trigger = 500; // ms
    const int numDots = 4;
    const char prompt[] = "\t\t\t\t\tWait for Seconds Loading Environment";

    while (1) {
        // Return and clear with spaces, then return and print prompt.
        printf("\r%*s\r%s", sizeof(prompt) - 1 + numDots, "", prompt);
        fflush(stdout);

        // Print numDots number of dots, one every trigger milliseconds.
        for (int i = 0; i < numDots; i++) {
            usleep(trigger * 1000);
            fputc('.', stdout);
            fflush(stdout);
        }
        break;
    }
}