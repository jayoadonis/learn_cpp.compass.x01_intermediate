#include <catch2/catch_test_macros.hpp>

#include "x01_design_pattern/creational/factory/x00/ViewPlusMonitorFactory.h"
#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"
#include "x01_design_pattern/creational/factory/x00/Factory.h"
#include "x01_design_pattern/creational/factory/x00/MSIGPUFactory.h"
#include "x01_design_pattern/creational/factory/x00/MembraneKeyboardFactory.h"

namespace dp = x01_design_pattern;

TEST_CASE( "factory::x00 MSIGPUFactory" ) {
  dp::creational::factory::x00::Factory *msiGPUFactory
    = new dp::creational::factory::x00::MSIGPUFactory();

  dp::creational::shared::model::x00::IProduct *msiGPUProduct
    = msiGPUFactory->order();

  delete msiGPUProduct;
  delete msiGPUFactory;
}

TEST_CASE("factory::x00 ViewPlusMonitorFactory") {
  dp::creational::factory::x00::Factory *vPMonitorFactory
    = new dp::creational::factory::x00::ViewPlusMonitorFactory();

  dp::creational::shared::model::x00::IProduct *vPMonitorProduct
    = vPMonitorFactory->order();

  delete vPMonitorProduct;
  delete vPMonitorFactory;
}

TEST_CASE("factory::x00 MembraneKeyboardFactory") {
  dp::creational::factory::x00::Factory *mKeyboardFactory
    = new dp::creational::factory::x00::MembraneKeyboardFactory();

  dp::creational::shared::model::x00::IProduct *mKeyboardProduct
    = mKeyboardFactory->order();

  delete mKeyboardProduct;
  delete mKeyboardFactory;
}
