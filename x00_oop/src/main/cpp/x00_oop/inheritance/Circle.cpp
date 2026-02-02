#include "x00_oop/inheritance/Circle.h"
#include <fmt/format.h>

namespace x00_oop::inheritance {
  Circle::Circle(long double r) : Shape(), r{r} {
    fmt::println("::: {} Circle ctor(V)", (void*)this);
    fmt::println("::: {} PI={:e}", (void*)this, Circle::PI);
  }
  Circle::~Circle() {
    fmt::println("::: {} Circle dtor(V)", (void*)this);
    this->r = 0.0;
  }
  long double Circle::get_radius() const noexcept {
    fmt::println("::: {} Circle get_radius(V)D", (void*)this);
    return this->r;
  }
  long double Circle::calc_area() const noexcept {
    fmt::println("::: {} Circle calc_area(V)D", (void*)this);
    return this->r * this->r * Circle::PI;
  }
  long double const Circle::PI = 3.14159f;
}
