
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

double* my_sqrt(int a, int b, int c) {
	double discriminant, root1, root2;
	double *roots = malloc(2 * sizeof(double));

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		roots[0] = root1;
		roots[1] = root2;
	} else if (discriminant == 0) {
		root1 = -b / (2 * a);
		roots[0] = root1;
		roots[1] = root1;
	} else {
		roots[0] = NaN;
		roots[1] = NaN;
	}

	return roots;
}