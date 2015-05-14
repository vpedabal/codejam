#ifndef _UTIL_H_
#define _UTIL_H_
#define _GNU_SOURCE


#include <stdio.h>
#include <sys/time.h>
#include <strings.h>
#include <stdint.h>
#include <stdlib.h>

/* Header files for individual problems */
#include "wordrev.h"
#include "parseinfo.h"

typedef struct {
    unsigned long int days;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    unsigned int msec;
} duration_t;

duration_t convert_to_days(double seconds);
/* Get total test cases present in the file
 * usually present in the first line of the sample file
 * but can optionally be passed
 */
uint64_t get_tot_cases(char *filename, uint64_t lineno);

/* Get back individual test cases as array of pointers as well as an array of integers
 * indicating the corresponding line's length including the end-of-line character
 * Returns the total number of lines in the test case
 */
uint64_t get_test_case(uint64_t caseid, char** buffer, int* bufferlen);
/*void log_out(); */
#endif
