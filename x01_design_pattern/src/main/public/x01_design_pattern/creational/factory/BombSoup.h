#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_BOMB_SOUP_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_BOMB_SOUP_H

#include "x01_design_pattern/creational/factory/ISoup.h"

namespace x01_design_pattern::creational::factory {
  class BombSoup : public ISoup {
    public:
      explicit BombSoup();
      explicit BombSoup(BombSoup const& bomb_soup);
      virtual ~BombSoup() override;
      virtual void create() override;
  };
}
#endif
