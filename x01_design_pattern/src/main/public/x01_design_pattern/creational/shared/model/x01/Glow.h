#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X01_GLOW_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X01_GLOW_H

#include "x01_design_pattern/creational/shared/model/x01/IProduct.h"

namespace x01_design_pattern::creational::shared::model::x01 {
  //REM: Abstract class
  class Glow : public IProduct {
    protected:
      explicit Glow();
    public:
      virtual ~Glow() noexcept override;
  };
}
#endif
