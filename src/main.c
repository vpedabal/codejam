#include <stdio.h>

#include "util.h"
#include "wordrev.h"
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
    if (argc > 2) {
        if (strncasecmp("wordrev", *(argv+1), sizeof("wordrev")) == 0) {
            wordrev(*(argv+2));
        } else if (strncasecmp("net", *(argv+1), sizeof("net")) == 0) {
        } else if (strncasecmp("help", *(argv+1), sizeof("help")) == 0) {
            printf("Application to test codeJAM routines\n");
            printf("Usage:\n");
            printf("./prog <command> <filename>\n");
            printf("command -> mem|net|help\n");
        } else {
            printf("Invalid parameter passed\n");
        }
    } else {
        printf("Not enough arguments\n");
    }
    return 0;
}
