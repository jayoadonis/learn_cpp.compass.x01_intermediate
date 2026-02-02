#include "x00_oop/inheritance/Shape.h"
#include <fmt/format.h>

namespace x00_oop::inheritance {
  Shape::Shape() : area{0.0} {
    fmt::println("::: {} Shape ctor(V)", (void*)this);
  };
  Shape::~Shape() {
    fmt::println("::: {} Shape dtor(V)", (void*)this);
    this->area = 0.0;
  };
  long double Shape::get_area() const {
    fmt::println("::: {} Shape get_area(V)D", (void*)this);
    return this->area = this->calc_area();
  }
}
