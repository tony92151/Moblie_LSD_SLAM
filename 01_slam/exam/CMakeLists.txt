cmake_minimum_required(VERSION 3.14)
project(01_slam)

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")
include_directories(${OpenCV_INCLUDE_DIRS})

#find_path("/usr/local/Cellar/pcl/1.9.1_4/include/pcl-1.9")



find_package(EIGEN3 REQUIRED)
message(STATUS "EIGEN3 library status:")
message(STATUS "    version: ${EIGEN3_VERSION}")

find_package(VTK REQUIRED)
message(STATUS "VTK library status:")
message(STATUS "    version: ${VTK_VERSION}")


find_package(BOOST REQUIRED)
message(STATUS "BOOST library status:")
message(STATUS "    version: ${BOOST_VERSION}")

find_package(PCL REQUIRED)
message(STATUS "PCL library status:")
message(STATUS "    version: ${PCL_VERSION}")
#message(STATUS "CURL library status:")
#message(STATUS "    version: ${CURL_VERSION}")
#message(STATUS "    libraries: ${CURL_LIBS}")
#message(STATUS "    include path: ${CURL_INCLUDE_DIRS}")
#find_path("/usr/local/Cellar/pcl/1.9.1_4/include/pcl-1.9")


set(CMAKE_CXX_STANDARD 14)
add_executable(01_slam main.cpp)
target_link_libraries(01_slam ${OpenCV_LIBS})
