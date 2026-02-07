#include <catch2/catch_test_macros.hpp>

#include "x01_design_pattern/creational/shared/model/x00/IProduct.h"
#include "x01_design_pattern/creational/shared/model/x00/MSIGPU.h"

namespace dp = x01_design_pattern;

TEST_CASE("shared::model::x00") {
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
