#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main(int argc, char *argv[])
{

    if (argc - 1 != 3)
    {
        printf("Аргументов функции должно быть три!\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    double roots[2];

    int res = my_sqrt(a, b, c, roots);

    if (res == 0)
    {
        printf("Нет действительных корней\n");
    }
    else if (roots[0] == roots[1])
    {
        printf("1 корень %.2f\n", roots[0]);
    }
    else
    {
        printf("1 корень %.2f\n", roots[0]);
        printf("2 корень %.2f\n", roots[1]);
    }
    return 0;
}