#include "parseinfo.h"
#include "util.h"

uint64_t get_total_lines(char *filename)
{
    FILE *fptr;
    size_t len = 0;
    ssize_t linesize = 0;
    uint64_t linecount=0;
    char *buffer = NULL;

    fptr = fopen (filename, "r");
    if(fptr == NULL) {
        printf("Unable to open file\n");
    } else {
            while ((linesize = getline(&buffer, &len, fptr)) != -1) 
                linecount++;
    }
    return linecount;
}

char *get_line(char *filename, uint64_t line)
{
    FILE *fptr;
    size_t len = 0;
    ssize_t linesize = 0;
    uint64_t index;
    char *buffer = NULL;

    printf("%lu, %s\n",line, filename);

    fptr = fopen (filename, "r");
    if(fptr == NULL) {
        printf("Unable to open file\n");
    } else {
        for (index = 0; index < line; index++)
        {
            if ((linesize = getline(&buffer, &len, fptr)) == -1)
            {
                printf("Requested line is not present in log yet\n");
                return NULL;
            }
        }
/*
        printf("Line : %lu - %s", index, buffer);
 */
    }
    return buffer;

}

