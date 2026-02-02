#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_SOUP_FACTORY_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_SOUP_FACTORY_H

#include "x01_design_pattern/creational/factory/ISoup.h"

namespace x01_design_pattern::creational::factory {
  class SoupFactory {
    protected:
      explicit SoupFactory();
    public:
      virtual ~SoupFactory();
    public:
      virtual ISoup* order_soup();
    protected:
      virtual ISoup* prepare() = 0;
  };
}
#endif
