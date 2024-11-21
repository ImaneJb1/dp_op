#ifndef HEADER_H
# define HEADER_H

typedef struct printer
{
    char c;
    void (*f)(va_list n);
}t_printer;

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

#endif