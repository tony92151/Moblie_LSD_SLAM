cmake_mininum_require(VERSION 2.0)

find_package(Gtest REQUIRDED)



project(MyProject)

add_library(MyLibrary fun.cpp)  # 建立程式庫 MyLibrary 
add_executable(MyProgram main.cpp) # 建立執行檔 MyProgram


# 產生執行檔 MyProgram 與 程式庫 MyLibrary 連結指令 
target_link_libraries(MyProgram MyLibrary)