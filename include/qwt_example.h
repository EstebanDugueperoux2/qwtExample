#pragma once

#ifdef _WIN32
  #define qwt_example_EXPORT __declspec(dllexport)
#else
  #define qwt_example_EXPORT
#endif

qwt_example_EXPORT void qwt_example();
