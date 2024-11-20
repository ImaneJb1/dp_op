#include "header.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list nums;

    if (n < 0 || separator == NULL)
        return;
    i = 0;
    va_start(nums, n);
    while(i < n)
    {
        printf("%d", va_arg(nums, int));
        i++;
        if(i != n)
            printf("%s", separator);
    }
    printf("\n");
}

int main()
{
    print_numbers(NULL, 5, 12, 0, -1, 16, 2);

}