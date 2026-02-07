#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_MSIGPU_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_MSIGPU_H

#include "x01_design_pattern/creational/shared/model/x00/GPU.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  class MSIGPU : public GPU {
    public:
      explicit MSIGPU();
      virtual ~MSIGPU() noexcept override;
      virtual void prepare() override;
  };
}
#endif
