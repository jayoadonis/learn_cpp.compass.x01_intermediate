#include "x01_design_pattern/creational/factory/x00/Factory.h"
#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"

namespace x01_design_pattern::creational::factory::x00 {
  Factory::Factory() {}
  Factory::~Factory() noexcept {}

  shared::model::x00::IProduct* Factory::order() {
    shared::model::x00::IProduct *p = this->create();
    if(p != nullptr) {
      p->prepare();
    }
    return p;
  }
}
