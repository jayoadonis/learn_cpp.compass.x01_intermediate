#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_GPU_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_GPU_H

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  //REM: Abstract class
  class GPU : public IProduct {
    protected:
      explicit GPU();
    public:
      virtual ~GPU() noexcept override;
  };
}
#endif
