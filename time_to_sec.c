/*
 * time_to_sec.c
 *
 *  Created on: Jul 20, 2016
 *      Author: leune
 */
// appropriate #include statements
#include <stdio.h>
/* Convert a time interval specified in hours, minutes and seconds to
 * seconds.
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Preconditions:
 *     0 <= minutes < 60
 *     0 <= seconds < 60 
 * Return:
 *     number of seconds in the interval
 */
unsigned int time_to_sec(unsigned int hours, unsigned int minutes,
        unsigned int seconds) {
    // complete this
    //algorithm: convert hours first to minutes by multiplying by 60 then add the converted_minutes to the param. minutes and multiply by 60 to get the seconds
    //and then add to the param. seconds.
    return (hours*60+minutes)*60;
}

/* Print a formatted representation of the calculation
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Postcondition:
 *     Function will write the calculation to standard output.
 */
void format_seconds(unsigned int hours, unsigned int minutes,
        unsigned int seconds) {
    // complete this
    printf("%u hours, %u minutes and %u seconds is equal to %u seconds.\n",hours,minutes,seconds,time_to_sec(hours,minutes,seconds));
}

int main(void) {
    format_seconds(4, 13, 20);
    format_seconds(8, 0, 0);
    format_seconds(1, 30, 0);
}