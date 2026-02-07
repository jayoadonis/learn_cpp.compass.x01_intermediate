#include <catch2/catch_test_macros.hpp>

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"
#include "x01_design_pattern/creational/factory/x00/Factory.h"
#include "x01_design_pattern/creational/factory/x00/MSIGPUFactory.h"

namespace dp = x01_design_pattern;

TEST_CASE( "factory::x00" ) {
  dp::creational::factory::x00::Factory *msiGPUFactory
    = new dp::creational::factory::x00::MSIGPUFactory();

  dp::creational::shared::model::x00::IProduct *msiGPUProduct
    = msiGPUFactory->order();

  delete msiGPUProduct;
  delete msiGPUFactory;
}
