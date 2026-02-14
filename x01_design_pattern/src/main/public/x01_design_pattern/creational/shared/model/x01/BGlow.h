#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X01_B_GLOW_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X01_B_GLOW_H

#include "x01_design_pattern/creational/shared/model/x01/Glow.h"

namespace x01_design_pattern::creational::shared::model::x01 {
  //REM: Concrete Class
  class BGlow : public Glow {
    public:
      explicit BGlow();
      virtual ~BGlow() noexcept override;
      virtual void prepare() override;
  };
}

#endif
