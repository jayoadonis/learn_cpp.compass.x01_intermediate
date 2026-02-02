#include "x01_design_pattern/creational/factory/SoupFactory.h"

namespace x01_design_pattern::creational::factory {
  SoupFactory::SoupFactory() { }
  SoupFactory::~SoupFactory() { }

  ISoup* SoupFactory::order_soup() {
    ISoup* soup = this->prepare();
    if(soup) {
      soup->create();
    }
    return soup;
  }
}
