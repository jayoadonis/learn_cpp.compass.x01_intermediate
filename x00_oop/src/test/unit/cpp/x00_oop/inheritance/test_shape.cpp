#include <catch2/catch_test_macros.hpp>
#include <cstdio>

#include "x00_oop/inheritance/Shape.h"
#include "x00_oop/inheritance/Circle.h"


namespace inherit = x00_oop::inheritance;

TEST_CASE( "test_shape" ) {

  inherit::Shape const * circle = new inherit::Circle(1.9f);
  std::printf("::: PI=%.2Lf\n", inherit::Circle::PI);
  std::printf("::: area=%017.2Lf\n", circle->get_area());
  std::printf("::: radius=%.2Lf\n",
    reinterpret_cast<inherit::Circle const*>(circle)->get_radius());

  inherit::Circle const* circle_i
    = reinterpret_cast<inherit::Circle const*>(circle);
  std::printf("::: radius=%.2Lf\n", circle_i->get_radius());
  std::printf("::: area=%.2Lf\n", circle_i->get_area());

  inherit::Shape const * circle_ii
    = reinterpret_cast<inherit::Shape const*>(circle_i);
  std::printf("::: area=%09.2Lf\n", circle_ii->get_area());

  delete circle;
}
