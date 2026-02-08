#include "x01_design_pattern/creational/factory/x00/ViewPlusMonitorFactory.h"
#include "x01_design_pattern/creational/shared/model/x00/ViewPlusMonitor.h"

namespace x01_design_pattern::creational::factory::x00 {
  ViewPlusMonitorFactory::ViewPlusMonitorFactory() : Factory() { }
  ViewPlusMonitorFactory::~ViewPlusMonitorFactory() noexcept { }

  shared::model::x00::IProduct *ViewPlusMonitorFactory::create() {
    return new shared::model::x00::ViewPlusMonitor();
  }
}
