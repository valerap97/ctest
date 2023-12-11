#ifndef MYSQRT_H
#define MYSQRT_H

#include <gtest/gtest.h>
#include <array>
#include <vector>
#include <cmath>

extern "C" {
#include "myfunc.h"
}

TEST(mySqrtTest, TwoRealRoots) {
    double a = 1.0;
    double b = -3.0;
    double c = 2.0;

    std::array<double, 2> roots;

    my_sqrt(a, b, c, roots.data()); 

    ASSERT_FALSE(roots.empty());
    ASSERT_DOUBLE_EQ(roots[0], 2.0);
    ASSERT_DOUBLE_EQ(roots[1], 1.0);
}

TEST(mySqrtTest, OneRealRoot) {
    double a = 1.0;
    double b = 2.0;
    double c = 1.0;

    std::array<double, 2> roots;

    my_sqrt(a, b, c, roots.data()); 

    ASSERT_FALSE(roots.empty());
    ASSERT_DOUBLE_EQ(roots[0], -1.0);
    ASSERT_DOUBLE_EQ(roots[1], -1.0);
}

TEST(mySqrtTest, NoRealRoots) {
    double a = 1.0;
    double b = 2.0;
    double c = 3.0;

    std::array<double, 2> roots;
    my_sqrt(a, b, c, roots.data()); 
    ASSERT_FALSE(roots.empty());
    ASSERT_DOUBLE_EQ(roots[0], 0.0);
    ASSERT_DOUBLE_EQ(roots[1], 0.0);
}

TEST(mySqrtTest, NoARoots) {
    double a = 0.0;
    double b = 2.0;
    double c = 3.0;

    std::array<double, 2> roots;
    my_sqrt(a, b, c, roots.data()); 
    ASSERT_FALSE(roots.empty());
    ASSERT_TRUE(std::isnan(roots[0]));
    ASSERT_TRUE(std::isinf(roots[1]) && roots[1] < 0);
}

TEST(mySqrtTest, NoABRoots) {
    double a = 0.0;
    double b = 0.0;
    double c = 3.0;

    std::array<double, 2> roots;
    my_sqrt(a, b, c, roots.data()); 
    ASSERT_FALSE(roots.empty());
    ASSERT_TRUE(std::isnan(roots[0]));
    ASSERT_TRUE(std::isnan(roots[1]));
}

#endif //MYSQRT_H
