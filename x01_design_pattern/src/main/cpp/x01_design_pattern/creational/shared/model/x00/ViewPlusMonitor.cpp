#include "x01_design_pattern/creational/shared/model/x00/ViewPlusMonitor.h"

#include <cstdio>
#include <cinttypes>
#include <typeinfo>

namespace x01_design_pattern::creational::shared::model::x00 {
  ViewPlusMonitor::ViewPlusMonitor() : Monitor() { }
  ViewPlusMonitor::~ViewPlusMonitor() noexcept { }

  /*
   * @Override
   */
  void ViewPlusMonitor::prepare() {
    std::printf("::: %0*" PRIXPTR ", %s prepare(V)V\n",
      static_cast<int>(sizeof(std::uintptr_t)*2),
      reinterpret_cast<std::uintptr_t>(this),
      typeid(*this).name());
  }
}
