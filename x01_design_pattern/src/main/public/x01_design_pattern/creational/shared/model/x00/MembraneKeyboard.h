#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_MEMBRANE_KEYBOARD_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_MEMBRANE_KEYBOARD_H

#include "x01_design_pattern/creational/shared/model/x00/Keyboard.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  class MembraneKeyboard : public Keyboard {
    public:
      explicit MembraneKeyboard();
      virtual ~MembraneKeyboard() noexcept override;
      virtual void prepare() override;
  };
}
#endif
