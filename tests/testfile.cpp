//
// Created by Taras Neridnyi on 28.11.2024.
//
#include "/Users/tarasneridnyi/Desktop/Lab8_1_it/src/functions.cpp"
#include <gtest/gtest.h>

TEST(TEST1, TestingCount) {
    const char* testStr1 = "one,two,three";
    EXPECT_EQ(Count(testStr1), 2);

    const char* testStr2 = "no commas here";
    EXPECT_EQ(Count(testStr2), 0);

    const char* testStr3 = ",leading,and,trailing,";
    EXPECT_EQ(Count(testStr3), 4);

    const char* testStr4 = "";
    EXPECT_EQ(Count(testStr4), 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
