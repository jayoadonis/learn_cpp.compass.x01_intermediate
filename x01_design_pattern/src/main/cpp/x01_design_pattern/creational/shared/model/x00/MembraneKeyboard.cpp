#include <cstdio>
#include <cinttypes>
#include <typeinfo>

#include "x01_design_pattern/creational/shared/model/x00/MembraneKeyboard.h"
#include "x01_design_pattern/creational/shared/model/x00/Keyboard.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  MembraneKeyboard::MembraneKeyboard() : Keyboard() { }
  MembraneKeyboard::~MembraneKeyboard() noexcept { }

  void MembraneKeyboard::prepare() {
    std::printf("::: %0*" PRIXPTR ", %s prepare(V)V\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
}
