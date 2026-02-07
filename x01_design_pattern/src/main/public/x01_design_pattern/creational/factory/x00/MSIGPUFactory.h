#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_X00_MSIGPUFACTORY_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_X00_MSIGPUFACTORY_H

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"
#include "x01_design_pattern/creational/factory/x00/Factory.h"

namespace x01_design_pattern::creational::factory::x00 {
  class MSIGPUFactory : public Factory {
    public:
      explicit MSIGPUFactory();
      virtual ~MSIGPUFactory() noexcept override;
    protected:
      virtual shared::model::x00::IProduct* create() override;
  };
}
#endif
