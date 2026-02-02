#ifndef __X00_OOP_INHERITANCE_CIRCLE_H
#define __X00_OOP_INHERITANCE_CIRCLE_H

#include "x00_oop/inheritance/Shape.h"

namespace x00_oop::inheritance {
  class Circle : public Shape {
    public:
      explicit Circle(long double r);
      virtual ~Circle() override;
    public:
      long double get_radius() const noexcept;
    protected:
      virtual long double calc_area() const noexcept override;
    private:
      long double r;
    public:
      static long double const PI;
  };
}

#endif
