#include "x01_design_pattern/platform.h"
#include "x01_design_pattern/platform.internal.h"

namespace x01_design_pattern {
  char const* get_platform_name(Platform const& p) noexcept {
    switch(p) {
      case Platform::None: return "None";
      case Platform::Windows: return "Windows";
      case Platform::Linux: return "Linux";
      case Platform::MACOS: return "MACOS";
      default: return "Unknown";
    }
  }

  std::ostream& operator<<(
    std::ostream& out_stream, Platform const& p
  ) noexcept {
    return out_stream << get_platform_name(p);
  }

  Platform const CURRENT_PLATFORM = get_platform();
}
