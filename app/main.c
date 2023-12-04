#include <stdio.h>

#include "myfunc.h"

int main() {
    printf("Enter a non-negative number: ");
    double n = 0;
    if (scanf("%lf", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 0;      }        

    // ��������, ��� �������� ������ ���� �����
    int d;
    while ((d = getchar()) != '\n' && d != EOF) {
        if (d != ' ') {
            printf("Invalid input. Please enter only one positive integer.\n");
            return 0;
        }
    }

    printf("Fibonachi %d\n", fibonachi((int)n));
 
    double roots[2];

    printf("Enter a, b, c\n");

    double a;
    double b;
    double c; 
	
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three valid numbers for coefficients a, b, and c.\n");
        return 0;
    }
 
    int res = solveQuadraticEquation(a, b, c, roots);
	
    if (res == NULL) {
        printf("No real roots\n");
    } else {
        printf("ROOT1 %f\n", roots[0]);
        printf("ROOT2 %f\n", roots[1]);
    }
    return 0;
}