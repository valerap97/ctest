
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int my_sqrt(double a, double b, double c, double* roots) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
	roots[0] = roots[1] = 0.0;
	return 0;
    } else {
        if (discriminant == 0) {
            roots[0] = -b / (2 * a);
            roots[1] = roots[0];  
        } else {
            roots[0] = (-b + sqrt(discriminant)) / (2 * a);
            roots[1] = (-b - sqrt(discriminant)) / (2 * a);
        }

        return 1;
    }
}