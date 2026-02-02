#ifndef __X00_OOP_PLATFORM_H
#define __X00_OOP_PLATFORM_H

#include <cstdint>
#include <iostream>

namespace x00_oop {
  enum class Platform : std::uint8_t {
    None      = 0u,
    Windows   = 1u,
    Linux     = 2u,
    MACOS     = 4u
  };

  extern Platform const CURRENT_PLATFORM;

  std::ostream& operator<<(std::ostream& os, Platform const& p) noexcept;

  inline char const*get_current_platform_name(Platform const& p) noexcept;
}

#endif
