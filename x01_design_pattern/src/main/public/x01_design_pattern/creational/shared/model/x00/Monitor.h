#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_MONITOR_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_MONITOR_H

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  //REM: Abstract class
  class Monitor : public IProduct {
    protected:
      explicit Monitor();
    public:
      virtual ~Monitor() noexcept override;
  };
}
#endif
