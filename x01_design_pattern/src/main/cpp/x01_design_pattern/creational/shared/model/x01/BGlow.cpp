#include <cstdio>
#include <cinttypes>
#include <typeinfo>

#include "x01_design_pattern/creational/shared/model/x01/BGlow.h"

namespace x01_design_pattern::creational::shared::model::x01 {
  BGlow::BGlow() : Glow() { }
  BGlow::~BGlow() noexcept { }

  void BGlow::prepare() {
    std::printf("::: %0*" PRIXPTR ", %s, prepare(V)V\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
}
