cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(02_slam)

FIND_PACKAGE(OpenCV REQUIRED)
#FIND_PACKAGE(Eigen REQUIRED)
#INCLUDE_DIRECTORIES ( "$ENV{EIGEN3_INCLUDE_DIR}" )

#target_link_libraries(02_slam PCL_XXX_LIBRARIES)


include_directories("/usr/include/pcl/")
#find_package (PCL  REQUIRED)
#set(PCL_INCLUDE_DIRS /usr/include/pcl/)

#add_definitions(${PCL_DEFINITIONS})


#find_package (PCL 1.8 REQUIRED)

set(PCL_INCLUDE_DIRS /usr/local/include/pcl-1.8)





#include_directories(/opt/eigen/3.3)
#include_directories("/usr/include/pcl-1.9.1")
#include_directories("~/pcl-pcl-1.9")

#include_directories(${EIGEN3_INCLUDE_DIR})

#list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
find_package(Eigen3)

INCLUDE_DIRECTORIES(${EIGEN3_INCLUDE_DIR})
add_definitions(-DBOOST_ERROR_CODE_HEADER_ONLY)
#add_definitions(-DBOOST_ERROR_CODE_HEADER_ONLY)


set(CMAKE_CXX_STANDARD 14)

add_executable(02_slam main.cpp)
#target_link_libraries (02_slam Eigen3::Eigen)
TARGET_LINK_LIBRARIES(02_slam ${OpenCV_LIBS})

include_directories( 02_slam ${PCL_INCLUDE_DIRS})
target_link_libraries( 02_slam ${PCL_LIBRARIES})
#target_link_libraries(ProjectName "/usr/lib/x86_64-linux-gnu/libSDL.so")
#target_link_libraries(02_slam PCL_IO_LIBRARIES)