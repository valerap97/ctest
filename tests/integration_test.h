#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(integrationTest, sqrtFibonachi) {

    std::array<double, 2> roots;
    my_sqrt(fibonachi(6), -22, 14, roots.data());

    double expectedRoot1 = 1.75;
    double expectedRoot2 = 1.00; 

    ASSERT_EQ(roots[0], expectedRoot1);
    ASSERT_EQ(roots[1], expectedRoot2);
}



#endif // INTEGRATION_H