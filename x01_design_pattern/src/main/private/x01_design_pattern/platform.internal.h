#ifndef __X01_DESIGN_PATTERN_PLATFORM_INTERNAL_H
#define __X01_DESIGN_PATTERN_PLATFORM_INTERNAL_H

#include "x01_design_pattern/platform.h"

namespace x01_design_pattern {
  #if !defined(_WIN32) && !defined(_WIN64) && !defined(__linux__) && !defined(__APPLE__)
    #error "::: Unknown platform, no OS macro found!"
  #endif

  Platform get_platform() {
    #if defined(_WIN32) || defined(_WIN64)
    return Platform::Windows;
    #elif defined(__linux__)
    return Platform::Linux;
    #elif defined(__APPLE__)
    return Platform::MACOS;
    #endif
    return Platform::None;
  }
}
#endif
