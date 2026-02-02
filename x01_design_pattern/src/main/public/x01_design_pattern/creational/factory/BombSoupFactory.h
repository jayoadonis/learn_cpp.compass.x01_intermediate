#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_BOMB_SOUP_FACTORY_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_BOMB_SOUP_FACTORY_H

#include "x01_design_pattern/creational/factory/ISoup.h"
#include "x01_design_pattern/creational/factory/SoupFactory.h"

namespace x01_design_pattern::creational::factory {
  class BombSoupFactory : public SoupFactory {
    public:
      explicit BombSoupFactory();
      virtual ~BombSoupFactory() override;
    protected:
      virtual ISoup* prepare() override;
  };
}
#endif
