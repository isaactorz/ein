#ifndef EIN_WARNINGS_HPP
#define EIN_WARNINGS_HPP

// Cross Platform Compiler Warning Disablement
// See https://www.fluentcpp.com/2019/08/30/how-to-disable-a-warning-in-cpp/

#if defined(_MSC_VER)
  #define DISABLE_WARNING_PUSH __pragma(warning(push))
  #define DISABLE_WARNING_POP __pragma(warning(pop))
  #define DISABLE_WARNING(warningNumber) __pragma(warning(disable : warningNumber))

  #define DISABLE_WARNING_UNREFERENCED_LOCAL_PARAMETER DISABLE_WARNING(4100)
  #define DISABLE_WARNING_DEPRECATED_SYMBOL DISABLE_WARNING(4996)

#elif defined(__GNUC__) || defined(__clang__)
  #define DO_PRAGMA(X) _Pragma(#X)
  #define DISABLE_WARNING_PUSH _Pragma("GCC diagnostic push")
  #define DISABLE_WARNING_POP _Pragma("GCC diagnostic pop")
  #define DISABLE_WARNING(warningName) DO_PRAGMA(GCC diagnostic ignored #warningName)

  #define DISABLE_WARNING_UNREFERENCED_LOCAL_PARAMETER DISABLE_WARNING(-Wunused-parameter)
  #define DISABLE_WARNING_DEPRECATED_SYMBOL

#else
  #define DISABLE_WARNING_PUSH
  #define DISABLE_WARNING_POP

  #define DISABLE_WARNING_UNREFERENCED_LOCAL_PARAMETER
  #define DISABLE_WARNING_DEPRECATED_SYMBOL
#endif

#endif // _h