#ifndef FIZZBUZZFOO_H
#define FIZZBUZZFOO_H
#include <iostream>
#include <string>
#include <sstream>

class FizzBuzzFoo {
private:  
    int size;
public:
    FizzBuzzFoo() : size(0) {} // 預設建構子
    FizzBuzzFoo(int n) : size(n) {} // 帶參數的建構子

    void input() {
        std::cout << "請輸入一個正整數: ";
        std::cin >> size; // 從使用者那裡讀取數字
        std::cout << generate(size) << std::endl; // 輸出結果
    }

    std::string generate(int n) {
        std::ostringstream result;
        for (int i = 1; i <= n; ++i) {
            if (i > 1) {
                result << " "; // 在數字之間加上空格
            }if (i % 3 == 0) {
                result << "fizz";
            }if (i % 5 == 0) {
                result << "buzz";
            }if (i % 7 == 0) {
                result << "foo";
            }if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
                result << i;
            }
        }
        return result.str();
    }
};

#endif // FIZZBUZZFOO_H
//\011101016797\011101015bb8\0111010192d2 測試程式標頭檔