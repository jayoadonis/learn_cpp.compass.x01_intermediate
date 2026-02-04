#include "x00_oop/inheritance/Shape.h"
#include <fmt/format.h>

namespace x00_oop::inheritance {
  Shape::Shape() : area{0.0} {
    fmt::println(":::12 {:p} Shape ctor(V)", (void*)this);
  };
  Shape::~Shape() {
    fmt::println(":::34 0x{0:0{1}X} Shape dtor(V)",
      (std::uintptr_t)this,
      (int)(sizeof(std::uintptr_t)*2));
    this->area = 0.0;
  };
  long double Shape::get_area() const {
    fmt::println("::: {} Shape get_area(V)D", (void*)this);
    return this->area = this->calc_area();
  }
}
