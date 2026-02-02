#include "x01_design_pattern/creational/factory/BombSoup.h"
#include <cstdio>
#include <cinttypes>
#include <typeinfo>

namespace x01_design_pattern::creational::factory {
  BombSoup::BombSoup() : ISoup() {
    std::printf("::: %0*" PRIXPTR ", %s, ctor(V)\n",
      static_cast<std::int32_t>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
  BombSoup::BombSoup(BombSoup const& bomb_soup) {

  }
  BombSoup::~BombSoup() {
    std::printf("::: %0*" PRIXPTR ", %s, dtor(V)\n",
      static_cast<std::int32_t>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }

  void BombSoup::create() {
    std::printf("::: %0*" PRIXPTR ", %s, create bomb-soup.\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      (std::uintptr_t)this,
      typeid(*this).name());
  }
}
