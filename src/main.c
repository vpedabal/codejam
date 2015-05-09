#include <stdio.h>

#include "util.h"
#include "parseinfo.h"

int main(int argc, char **argv)
{
    int count = argc;
    printf("CodeJAM Test Application\n");

    printf("Total Arguments: %d\n", count--);
    while(count >= 0) {
        printf("Arg %d: %s\n", count, argv[count]);
        count--;
    }
    if (argc > 1) {
        if (strncasecmp("mem", *(argv+1), sizeof("mem")) == 0) {
        } else if (strncasecmp("net", *(argv+1), sizeof("net")) == 0) {
        } else if (strncasecmp("help", *(argv+1), sizeof("help")) == 0) {
            printf("Application to test codeJAM routines\n");
            printf("mem|net|help\n");
        } else {
            printf("Invalid parameter passed\n");
        }
    }
    return 0;
}
