# 最低版本要求
cmake_minimum_required(VERSION 3.30.4)

# 項目名稱
project(MyProject)

# 設置 C++ 標準
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加主程序的源文件
#add_executable(MyProject fizzbuzzfoo.cpp)

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

# 添加測試可執行文件
add_executable(runTests test_fizzbuzzfoo.cpp)

# 將 Google Test 的庫鏈接到測試可執行文件
target_link_libraries(runTests gtest gtest_main)

# 添加測試
add_test(NAME runTests COMMAND runTests)  
#\756797\755bb8\7592d2 測試設定CMark檔