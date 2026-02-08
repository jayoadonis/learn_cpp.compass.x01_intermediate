#ifndef _X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_VIEW_PLUS_MONITOR_H
#define _X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X00_VIEW_PLUS_MONITOR_H

#include "x01_design_pattern/creational/shared/model/x00/Monitor.h"

namespace x01_design_pattern::creational::shared::model::x00 {
  class ViewPlusMonitor : public Monitor {
    public:
      explicit ViewPlusMonitor();
      virtual ~ViewPlusMonitor() noexcept override;

      virtual void prepare() override;
  };
}
#endif
