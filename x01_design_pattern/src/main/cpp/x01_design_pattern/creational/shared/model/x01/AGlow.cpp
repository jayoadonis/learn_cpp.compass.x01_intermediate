
#include <cstdio>
#include <cinttypes>
#include <typeinfo>

#include "x01_design_pattern/creational/shared/model/x01/AGlow.h"

namespace x01_design_pattern::creational::shared::model::x01 {
  AGlow::AGlow() : Glow() {

  }
  AGlow::~AGlow() noexcept {

  }

  void AGlow::prepare() {
    std::printf("::: %0*" PRIXPTR ", %s\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
}
