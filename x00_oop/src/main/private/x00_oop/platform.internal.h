#ifndef __X00_OOP_PLATFORM_INTERNAL_H
#define __X00_OOP_PLATFORM_INTERNAL_H

#include "x00_oop/platform.h"

namespace x00_oop {
  #if !defined(_WIN32) && !defined(_WIN64) && !defined(__linux__) && !defined(__APPLE__)
    error "Unknown platform: No OS macro defined."
  #endif

  Platform const get_current_platform(void) noexcept {
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
