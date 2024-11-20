#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int result;
    va_list nums;
  
    result = 0;
    i = 0;
    if(n <= 0)
        return(0);
   
    va_start(nums, n);
    while(i < n)
    {
        result += va_arg(nums, int); 
        i++; 
        // printf("result%d= %d\n", i, result);
    }
    va_end(nums);
    return (result);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("result = %d\n", sum_them_all(n, 5, 4, 3, 8));
}