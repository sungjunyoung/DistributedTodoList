//
// Created by 성준영 on 2020/09/01.
//

#include "gtest/gtest.h"
#include "Calculator.h"


TEST(sum, test1) {
    Calculator calculator;
    EXPECT_EQ (calculator.sum(0, 1), 1);
    EXPECT_EQ (calculator.sum(1, 5), 6);
}