cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

find_package(Gtest REQUIRDED)

project(MyProject)

add_library(MyLibrary fun.cpp)  # 建立程式庫 MyLibrary 
add_executable(MyProgram main.cpp) # 建立執行檔 MyProgram
#add_library(ei)


# 產生執行檔 MyProgram 與 程式庫 MyLibrary 連結指令 
target_link_libraries(MyProgram MyLibrary)