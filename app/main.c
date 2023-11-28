#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main(int argc, char *argv[]) {
    	if (argc - 1 != 3) {
        	printf("Аргументов функции должно быть три!\n");
        	return 1;
    	}

    	int a = atoi(argv[1]);
    	int b = atoi(argv[2]);
    	int c = atoi(argv[3]);

    		double *roots = malloc(2 * sizeof(double));
			my_sqrt(a, b, c, roots);

	printf("%.2lf ", roots[0]);
	printf("%.2lf ", roots[1]);

    	free(roots);

    	return 0;
}