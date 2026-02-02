
#include <cstdint>
#include "x00_oop/platform.internal.h"
#include "x00_oop/platform.h"

namespace x00_oop {
  inline Platform const CURRENT_PLATFORM = get_current_platform();

  std::ostream& operator<<(std::ostream& os, Platform const& p) noexcept {
    return os << get_current_platform_name(p);
  }

  inline char const* get_current_platform_name(Platform const& p) noexcept {
    switch( p ) {
      case Platform::None: return "None";
      case Platform::Windows: return "Windows";
      case Platform::Linux: return "Linux";
      case Platform::MACOS: return "MACOS";
      default: return "Unknown";
    }
  }
}
