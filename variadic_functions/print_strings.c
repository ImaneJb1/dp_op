#include "header.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int    i;
    va_list str;

    i = 0;
    va_start(str, n);
    while(i < n)
    {
        printf("%s", va_arg(str, char *));
        i++;
        if(i != n)
            printf("%s", separator);
    }
    printf("\n");
}

int main()
{
    print_strings(" ,", 3, "imane", "fati", "hajar");
}