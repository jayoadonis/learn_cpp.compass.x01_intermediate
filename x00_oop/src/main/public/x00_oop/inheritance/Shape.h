#ifndef __X00_OOP_INHERITANCE_SHAPE_H
#define __X00_OOP_INHERITANCE_SHAPE_H

#include <cstdint>

namespace x00_oop::inheritance {
  class Shape {
    protected:
      explicit Shape();
    public:
      virtual ~Shape();
      virtual long double get_area() const;
    protected:
      virtual long double calc_area() const noexcept = 0;
    private:
      mutable long double area;
  };
}
#endif
