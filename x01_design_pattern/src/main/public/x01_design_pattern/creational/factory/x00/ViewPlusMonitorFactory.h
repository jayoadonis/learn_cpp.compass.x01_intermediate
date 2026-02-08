#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_X00_VIEW_PLUS_MONITOR_FACTORY_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_X00_VIEW_PLUS_MONITOR_FACTORY_H

#include "x01_design_pattern/creational/factory/x00/Factory.h"

namespace x01_design_pattern::creational::factory::x00 {
  class ViewPlusMonitorFactory : public Factory {
    public:
      explicit ViewPlusMonitorFactory();
      virtual ~ViewPlusMonitorFactory() noexcept override;
      virtual shared::model::x00::IProduct *create() override;
  };
}
#endif
