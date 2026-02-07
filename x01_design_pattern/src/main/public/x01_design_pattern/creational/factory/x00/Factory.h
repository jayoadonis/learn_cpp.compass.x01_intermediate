#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_X00_FACTORY_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_X00_FACTORY_H

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"

namespace x01_design_pattern::creational::factory::x00 {
  //REM: Abstract class
  class Factory {
    protected:
      explicit Factory();
    public:
      virtual ~Factory() noexcept;
      virtual shared::model::x00::IProduct* order();
    protected:
      virtual shared::model::x00::IProduct* create() = 0;
  };
}
#endif
