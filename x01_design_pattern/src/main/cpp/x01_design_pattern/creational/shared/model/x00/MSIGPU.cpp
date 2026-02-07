#include "x01_design_pattern/creational/shared/model/x00/MSIGPU.h"
#include <cstdio>
#include <cinttypes>

namespace x01_design_pattern::creational::shared::model::x00 {
  MSIGPU::MSIGPU() : GPU() {};
  MSIGPU::~MSIGPU() noexcept {};

  void MSIGPU::prepare() {
    std::printf("::: %0*" PRIXPTR ", \n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this));
  }
}
