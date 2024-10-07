#include <gtest/gtest.h>
#include "fizzbuzzfoo.h" // 包含 fizzbuzzfoo 函數

class FizzBuzzFooTest : public ::testing::Test {
protected:
    FizzBuzzFoo fizzBuzzFoo; // 在每個測試前創建一個 FizzBuzzFoo 的實例
};

TEST_F(FizzBuzzFooTest, NormalNumbers) {
    EXPECT_EQ(fizzBuzzFoo.generate(3), "1 2 fizz");
    EXPECT_EQ(fizzBuzzFoo.generate(5), "1 2 fizz 4 buzz");
    EXPECT_EQ(fizzBuzzFoo.generate(7), "1 2 fizz 4 buzz fizz foo");
}

TEST_F(FizzBuzzFooTest, MixedNumbers) {
    EXPECT_EQ(fizzBuzzFoo.generate(15), "1 2 fizz 4 buzz fizz foo 8 fizz buzz 11 fizz 13 foo fizzbuzz");
}

TEST_F(FizzBuzzFooTest, LargeNumber) {
    EXPECT_EQ(fizzBuzzFoo.generate(21), "1 2 fizz 4 buzz fizz foo 8 fizz buzz 11 fizz 13 foo fizzbuzz 16 17 fizz 19 buzz fizzfoo");
}

TEST_F(FizzBuzzFooTest, EdgeCase) {
    EXPECT_EQ(fizzBuzzFoo.generate(1), "1");
    EXPECT_EQ(fizzBuzzFoo.generate(0), ""); // 假設 size 為 0 時應回傳空字串
}
//\1176797\1175bb8\11792d2 測試程式測試檔