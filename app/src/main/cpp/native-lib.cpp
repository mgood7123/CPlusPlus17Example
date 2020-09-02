#include <jni.h>
#include <string>
#include <any>
#include <optional>

extern "C" JNIEXPORT jstring JNICALL
Java_cplusplus17_example_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::optional<std::any> hello = "Hello from C++";
    return env->NewStringUTF(std::any_cast<const char *>(hello.value()));
}
