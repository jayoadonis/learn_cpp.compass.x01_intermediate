#include <catch2/catch_test_macros.hpp>

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"
#include "x01_design_pattern/creational/shared/model/x00/Keyboard.h"
#include "x01_design_pattern/creational/shared/model/x00/MSIGPU.h"
#include "x01_design_pattern/creational/shared/model/x00/MembraneKeyboard.h"
#include "x01_design_pattern/creational/shared/model/x00/Monitor.h"
#include "x01_design_pattern/creational/shared/model/x00/ViewPlusMonitor.h"

namespace dp = x01_design_pattern;

TEST_CASE("shared::model::x00 GPU") {
  dp::creational::shared::model::x00::MSIGPU msiGPU;
  dp::creational::shared::model::x00::GPU *gpu = &msiGPU;
  dp::creational::shared::model::x00::IProduct *product = gpu;
  msiGPU.prepare();
  gpu->prepare();
  product->prepare();

  dp::creational::shared::model::x00::GPU *msiGPUProduct
    = new dp::creational::shared::model::x00::MSIGPU();

  dp::creational::shared::model::x00::IProduct *gpuProduct
    = msiGPUProduct;

  gpuProduct->prepare();

  delete gpuProduct;
}

TEST_CASE("shared::model::x00 Monitor") {
  dp::creational::shared::model::x00::ViewPlusMonitor vPMonitor;
  dp::creational::shared::model::x00::Monitor *monitor = &vPMonitor;
  dp::creational::shared::model::x00::IProduct *iProduct = monitor;

  (*iProduct).prepare();
}

TEST_CASE("shared::model::x00 Keyboard") {
  dp::creational::shared::model::x00::MembraneKeyboard mKeyboard;
  dp::creational::shared::model::x00::Keyboard *keyboard = &mKeyboard;
  dp::creational::shared::model::x00::IProduct *iProduct = keyboard;

  (*iProduct).prepare();
}
