#include <stdio.h>

#include "myfunc.h"

int main(int argc, char *argv[]) {
    if (argc - 1 != 3) {
        printf("Аргументов функции должно быть три!\n");
        return 1;
    }

    double a = atoi(argv[1]);
    double b = atoi(argv[2]);
    double c = atoi(argv[3]);

    my_sqrt(a, b, c);

    return 0;
}