#include <catch2/catch_test_macros.hpp>

#include "x01_design_pattern/creational/shared/model/x01/IProduct.h"
#include "x01_design_pattern/creational/shared/model/x01/Glow.h"
#include "x01_design_pattern/creational/shared/model/x01/AGlow.h"

namespace dp = x01_design_pattern;
namespace shared::model {
  namespace x01 = dp::creational::shared::model::x01;
}

TEST_CASE("test_shared_model_x01 AGlow") {
  shared::model::x01::AGlow aGlowProduct;
  shared::model::x01::Glow *glowProduct = &aGlowProduct;
  shared::model::x01::IProduct *product = glowProduct;

  product->prepare();
}
