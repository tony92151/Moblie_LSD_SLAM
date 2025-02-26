# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)


#set(CURRENT_DIR ${CMAKE_SOURCE_DIR})
message("CURRENT_DIR:" ${CMAKE_SOURCE_DIR})
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -fexceptions -frtti")

#set(CURRENT_DIR ${CMAKE_SOURCE_DIR})

#message("CURRENT_DIR:" ${CMAKE_SOURCE_DIR})

#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${PROJECT_SOURCE_DIR}/opencv/include)

#message("CMAKE_LIBRARY_OUTPUT_DIRECTORY:" ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.



# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

#add_library(
#        cpprint
#
#        SHARED
#
#        cpprint.cpp)

add_library(
        native-lib

        SHARED

        native-lib.cpp)

find_library( # Sets the name of the path variable.

        log-lib
              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

#add_library(libopencv_java3 SHARED IMPORTED)
#set_target_properties(libopencv_java3
#        PROPERTIES IMPORTED_LOCATION
#        ${PROJECT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libopencv_java3.so)

add_library( lib_opencv SHARED IMPORTED )
set_target_properties(lib_opencv PROPERTIES IMPORTED_LOCATION
        ${PROJECT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libopencv_java3.so)

add_library(lib_opencv_core STATIC IMPORTED)
set_target_properties(lib_opencv_core PROPERTIES IMPORTED_LOCATION
        ${PROJECT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}/libopencv_core.a)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        native-lib
        lib_opencv
        lib_opencv_core

       # Links the target library to the log library
       # included in the NDK.
       ${log-lib} )