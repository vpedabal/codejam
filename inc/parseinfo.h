#ifndef _PARSEINFO_H_
#define _PARSEINFO_H_

#include "util.h"

uint64_t get_total_lines(char *filename);
char *get_line(char *filename, uint64_t line);
#endif

