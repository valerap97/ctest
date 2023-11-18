#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include <gtest/gtest.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

// Аттестационное тестирование
TEST(QuadraticEquationTest, PositiveRoots) {
    double *roots = my_sqrt(1, -3, 2);
    ASSERT_EQ(roots[0], 2.0);
    ASSERT_EQ(roots[1], 1.0);
    free(roots);
}

TEST(QuadraticEquationTest, OneRoot) {
    double *roots = my_sqrt(1, 2, 1);
    ASSERT_EQ(roots[0], -1.0);
    ASSERT_EQ(roots[1], -1.0);
    free(roots);
}

TEST(QuadraticEquationTest, ComplexRoots) {
    double *roots = my_sqrt(2, 4, 2);
    ASSERT_TRUE(isnan(roots[0]));
    ASSERT_TRUE(isnan(roots[1]));
    free(roots);
}

TEST(QuadraticEquationTest, TwoRoots) {
    double *roots = my_sqrt(2, 3, 1);
    ASSERT_EQ(roots[0], -0.5);
    ASSERT_EQ(roots[1], -1.0);
    free(roots);
}

TEST(QuadraticEquationTest, InsufficientArguments) {
    double *roots = my_sqrt(1, 2, 0); // Insufficient arguments
    ASSERT_TRUE(isnan(roots[0]));
    ASSERT_TRUE(isnan(roots[1]));
    free(roots);
}

// Блочное тестирование (функция my_sqrt)

TEST(QuadraticEquationTest, my_sqrt_PositiveRoots) {
    int a = 1;
    int b = -3;
    int c = 2;
    double *roots = my_sqrt(a, b, c);
    ASSERT_EQ(roots[0], 2.0);
    ASSERT_EQ(roots[1], 1.0);
    free(roots);
}

TEST(QuadraticEquationTest, my_sqrt_OneRoot) {
    int a = 1;
    int b = 2;
    int c = 1;
    double *roots = my_sqrt(a, b, c);
    ASSERT_EQ(roots[0], -1.0);
    ASSERT_EQ(roots[1], -1.0);
    free(roots);
}

TEST(QuadraticEquationTest, my_sqrt_ComplexRoots) {
    int a = 2;
    int b = 4;
    int c = 2;
    double *roots = my_sqrt(a, b, c);
    ASSERT_TRUE(isnan(roots[0]));
    ASSERT_TRUE(isnan(roots[1]));
    free(roots);
}

TEST(QuadraticEquationTest, my_sqrt_TwoRoots) {
    int a = 2;
    int b = 3;
    int c = 1;
    double *roots = my_sqrt(a, b, c);
    ASSERT_EQ(roots[0], -0.5);
    ASSERT_EQ(roots[1], -1.0);
    free(roots);
}

#endif // QUADRATIC_EQUATION_H