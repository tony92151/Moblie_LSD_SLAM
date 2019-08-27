cmake_minimum_required(VERSION 3.0.0)
project(04_SLAM VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(04_SLAM main.cpp)

find_package(OpenCV 3 REQUIRE)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
