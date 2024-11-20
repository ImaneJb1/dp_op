#include "calc.h"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        printf("ERROR3\n");
        return(98);
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char* operator = argv[2];
    int calc;
    if ((strcmp(operator, "/") == 0 && num2 == 0) || (strcmp(operator,"%") == 0 && num2 == 0))
    {
        printf("ERROR1\n");
        return(100);
    }
    if(get_op_func(operator) == NULL)
    {
        printf("ERROR2\n");
        return (99);
    }

    calc = get_op_func(operator)(num1, num2);
    printf("%d %s %d = %d\n", num1, operator, num2, calc);
    return(0);
}