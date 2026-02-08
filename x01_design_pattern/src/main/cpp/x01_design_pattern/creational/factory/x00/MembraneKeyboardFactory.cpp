#include "x01_design_pattern/creational/factory/x00/MembraneKeyboardFactory.h"
#include "x01_design_pattern/creational/shared/model/x00/MembraneKeyboard.h"

namespace x01_design_pattern::creational::factory::x00 {
  MembraneKeyboardFactory::MembraneKeyboardFactory() : Factory() { }
  MembraneKeyboardFactory::~MembraneKeyboardFactory() noexcept { }

  shared::model::x00::IProduct *MembraneKeyboardFactory::create() {
    return new shared::model::x00::MembraneKeyboard();
  }
}
