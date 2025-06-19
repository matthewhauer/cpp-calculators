//
// Created by matth on 6/18/2025.
//

#include <gtest/gtest.h>

#include <vector>
#include <string>

#include "src/two_pass.h"

using namespace std;

TEST(two_pass_test, one_plus_one){
    vector<string> invect {"1", "+", "1"};
    ASSERT_EQ(two_pass::calculate(invect), 2);
}