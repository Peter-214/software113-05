#需安裝CMake以及前置安裝gcc/g++編譯器

#以下會有自動安裝Google Test套件
# 最低版本要求
cmake_minimum_required(VERSION 3.30.4)

# 項目名稱
project(MyProject)

# 設置 C++ 標準
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加主程序的源文件 **fizzbuzzfoo.cpp**
add_executable(MyProject fizzbuzzfoo.cpp)

# Google Test 配置
# 使用 FetchContent 模組來自動下載和配置 Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# 下載並使 Google Test 可用
FetchContent_MakeAvailable(googletest)

# 啟用測試
enable_testing()

# 添加測試可執行文件 **test_fizzbuzzfoo.cpp**
add_executable(runTests test_fizzbuzzfoo.cpp)

# 將 Google Test 的庫鏈接到測試可執行文件
target_link_libraries(runTests gtest gtest_main)

# 添加測試
add_test(NAME runTests COMMAND runTests)
