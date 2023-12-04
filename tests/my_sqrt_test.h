#ifndef my_sqrt_H
#define my_sqrt_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(mySqrtTest, TwoRealRoots) {
    double a = 1.0;
    double b = -3.0;
    double c = 2.0;
    double roots[2];
    my_sqrt(a, b, c, roots);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 2.0);
    ASSERT_DOUBLE_EQ(roots[1], 1.0);
}

TEST(mySqrtTest, OneRealRoot) {
    double a = 1.0, b = -4.0, c = 4.0;
    double roots[2];
    my_sqrt(a, b, c, roots);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 2.0);
    ASSERT_DOUBLE_EQ(roots[1], 2.0);
}

TEST(mySqrtTest, ComplexRoots) {
    double a = 1.0, b = 2.0, c = 5.0;
    double roots[2];
    my_sqrt(a, b, c, roots);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 0.0);
    ASSERT_DOUBLE_EQ(roots[1], 0.0);
}

TEST(mySqrtTest, NoRealRoots) {
    double a = 1.0, b = 2.0, c = 3.0;
    double roots[2];
    my_sqrt(a, b, c, roots);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 0.0);
    ASSERT_DOUBLE_EQ(roots[1], 0.0);
}

#endif 