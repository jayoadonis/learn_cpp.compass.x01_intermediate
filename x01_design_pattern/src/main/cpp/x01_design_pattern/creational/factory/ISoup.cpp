#include <cstdio>
#include <cinttypes>
#include <typeinfo>

#include "x01_design_pattern/creational/factory/ISoup.h"

namespace x01_design_pattern::creational::factory {
  ISoup::ISoup() {
    std::printf("::: %0*" PRIXPTR ", %s, ctor(V)\n",
      static_cast<std::int32_t>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
  ISoup::~ISoup() {
    std::printf("::: %0*" PRIXPTR ", %s, dtor(V)\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
}
