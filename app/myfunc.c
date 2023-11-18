
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

void my_sqrt(int a, int b, int c) {
    double discriminant, root1, root2;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Два корня.\n");
        printf("1 корень = %.2lf\n", root1);
        printf("2 корень = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Один корень.\n");
        printf("Корень = %.2lf\n", root1);
    } else {
        printf("Нет корней!\n");
    }
}