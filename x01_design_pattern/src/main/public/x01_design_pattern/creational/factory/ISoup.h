#ifndef __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_ISOUP_H
#define __X01_DESIGN_PATTERN_CREATIONAL_FACTORY_ISOUP_H

namespace x01_design_pattern::creational::factory {
  class ISoup {
    protected:
      explicit ISoup();
    public:
      virtual ~ISoup();
    public:
      virtual void create() = 0;
  };
}
#endif
