#ifndef __X01_DESIGN_PATTERN_PLATFORM_H
#define __X01_DESIGN_PATTERN_PLATFORM_H

#include <cstdint>
#include <ostream>

namespace x01_design_pattern {
  enum class Platform : std::uint8_t {
    None    = 0u,
    Windows = 1u,
    Linux   = 2u,
    MACOS   = 4u,
    WHAT    = 8u,
  };

  char const* get_platform_name(Platform const& p) noexcept;

  std::ostream& operator<<(
    std::ostream& out_stream, Platform const& p
  ) noexcept;

  extern Platform const CURRENT_PLATFORM;
}
#endif
