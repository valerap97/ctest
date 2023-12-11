#include "my_sqrt_test.h"
#include <gtest/gtest.h>
#include "integration_test.h"
#include "fibonachi_test.h"
int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
