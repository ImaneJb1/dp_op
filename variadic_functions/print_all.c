#include "header.h"

void print_all(const char * const format, ...)
{
    unsigned int i;
    i = 0;
    va_list str;
    t_printer arr[]; 
    va_start(str, format);
    arr = {
        {i, "%d"},
        {c, "%c"},
        {s, "%s"},
        {f, "%f"}
    }
    while (i < sizeof(arr)/sizeof(arr[0]))
    {
        if (arr[i].c == format[i])
                printf(arr[i].format, va_arg(str, ));
    }



}