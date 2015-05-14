#include <stdio.h>
#include "util.h"

duration_t convert_to_days(double seconds)
{
    duration_t duration;

    duration.msec = (seconds - (unsigned long int)seconds)*1000;
    duration.seconds= (unsigned long int)(seconds) % 60;
    seconds = seconds/60;
    duration.minutes= (unsigned long int)(seconds) % 60;
    seconds = seconds/60;
    duration.hours  = (unsigned long int)(seconds) % 24;
    seconds = seconds/24;
    duration.days   = (unsigned long int)(seconds);    
    return duration;
}

uint64_t get_tot_cases(char *filename, uint64_t lineno)
{
    uint64_t tot_lines=0, tot_cases=0;
    char *buf=NULL;
    tot_lines = get_total_lines(filename);
    if(0 == tot_lines) {
        printf("Unable to open the file or no data found in given filename");
    }
    buf = get_line(filename, lineno);
    if(NULL != buf) {
        tot_cases = strtoull(buf, NULL, 10);
        free(buf);
    }
    return tot_cases;
}



