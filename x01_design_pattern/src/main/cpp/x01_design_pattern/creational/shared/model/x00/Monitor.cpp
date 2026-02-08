#include "x01_design_pattern/creational/shared/model/x00/Monitor.h"

#include <cstdio>
#include <cinttypes>
#include <typeinfo>

namespace x01_design_pattern::creational::shared::model::x00 {
  Monitor::Monitor() : IProduct() {
    std::printf("::: %0*" PRIXPTR ", %s ctor(V)\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
  Monitor::~Monitor() noexcept {}
}
