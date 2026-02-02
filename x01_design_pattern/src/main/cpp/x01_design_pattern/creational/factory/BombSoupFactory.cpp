#include "x01_design_pattern/creational/factory/BombSoupFactory.h"
#include "x01_design_pattern/creational/factory/BombSoup.h"
#include "x01_design_pattern/creational/factory/ISoup.h"

namespace x01_design_pattern::creational::factory {
  BombSoupFactory::BombSoupFactory() : SoupFactory() { }
  BombSoupFactory::~BombSoupFactory() { }

  ISoup* BombSoupFactory::prepare() {
    return new BombSoup();
  }
}
