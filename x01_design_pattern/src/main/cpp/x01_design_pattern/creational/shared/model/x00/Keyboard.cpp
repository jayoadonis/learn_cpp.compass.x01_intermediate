#include "x01_design_pattern/creational/shared/model/x00/Keyboard.h"
#include <cstdio>
#include <cinttypes>
#include <typeinfo>

namespace x01_design_pattern::creational::shared::model::x00 {
  Keyboard::Keyboard() : IProduct() {
    std::printf("::: %0*" PRIXPTR ", %s ctor(V)\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
  Keyboard::~Keyboard() noexcept { }
}
