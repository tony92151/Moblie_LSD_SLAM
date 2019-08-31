#include <jni.h>
#include <string>

#include "cpprint.h"

#include <vector>

#include "stdio.h"

#include "opencv2/core/core.hpp"

//#include <opencv2/opencv.hpp>


using namespace std;



extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ctest_cpprint_sayhi(
        JNIEnv *env,
        jobject /* this */) {

    //cv::Mat img;
    std::string hello = "Hello from me";
    return env->NewStringUTF(hello.c_str());
}
