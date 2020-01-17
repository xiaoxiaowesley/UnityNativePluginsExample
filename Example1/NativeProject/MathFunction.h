#ifndef MATH_FUNCTION_H
#define MATH_FUNCTION_H

  #if _MSC_VER                             // this is defined when compiling with Visual Studio
    #define EXPORT_API __declspec(dllexport) // Visual Studio needs annotating exported functions with this
  #else
    #define EXPORT_API // XCode does  not  need annotating exported functions, so define is empty
  #endif

  #ifdef __cplusplus
  extern "C" {
  #endif//__cplusplus

    EXPORT_API int Add(int a, int b);

  #ifdef __cplusplus
  };
  #endif//__cplusplus

#endif //MATH_FUNCTION_H