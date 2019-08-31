#include <jni.h>
#include <string>

#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/utility.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <opencv2/opencv.hpp>


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_my_1slam_1v3_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
