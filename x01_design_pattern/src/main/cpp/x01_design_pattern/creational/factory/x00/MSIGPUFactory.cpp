#include "x01_design_pattern/creational/factory/x00/MSIGPUFactory.h"
#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"
#include "x01_design_pattern/creational/shared/model/x00/MSIGPU.h"

namespace x01_design_pattern::creational::factory::x00 {
  MSIGPUFactory::MSIGPUFactory() : Factory() {}
  MSIGPUFactory::~MSIGPUFactory() noexcept {}

  shared::model::x00::IProduct *MSIGPUFactory::create() {
    return new shared::model::x00::MSIGPU();
  }
}
