#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_KEYBOARD_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_KEYBOARD_H

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  //REM: Abstract class
  class Keyboard : public IProduct {
    protected:
      explicit Keyboard();
    public:
      virtual ~Keyboard() noexcept override;
  };
}
#endif
