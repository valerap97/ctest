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

	 double roots[2];

    int res = my_sqrt(a, b, c, roots);
	
    if (res == NULL) {
        printf("No real roots\n");
    } else {
        printf("ROOT1 %f\n", roots[0]);
        printf("ROOT2 %f\n", roots[1]);
    }
    return 0;
}