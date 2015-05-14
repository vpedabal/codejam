#include "util.h"


uint64_t wordrev(char *filename)
{
    uint64_t tot= 0, temp = 0;
    char **buffer;
    case_line_size = 2; /* How many lines of input data per each case */
    printf("File name: %s\n", filename);
    tot = get_tot_cases(filename, 1);
    printf("Total cases: %lu\n", tot);
    while (temp < tot)
    {
        get_test_case(filename, 1, &buffer);
        printf("Buffer: %s\n", buffer[0]);
        temp++;
    }

    return 0;
}
