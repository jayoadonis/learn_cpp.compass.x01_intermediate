#include <cstdio>

#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "x01_design_pattern/creational/factory/BombSoup.h"
#include "x01_design_pattern/creational/factory/BombSoupFactory.h"
#include "x01_design_pattern/platform.h"
#include "x01_design_pattern/creational/factory/SoupFactory.h"
#include "x01_design_pattern/creational/factory/ISoup.h"

namespace dp = x01_design_pattern;

TEST_CASE("factory") {

  dp::creational::factory::SoupFactory* ptr_soup_factory
    = new dp::creational::factory::BombSoupFactory();
  dp::creational::factory::ISoup* ptr_soup = ptr_soup_factory->order_soup();
  delete ptr_soup;
  ptr_soup = nullptr;

  dp::creational::factory::BombSoupFactory bomb_soup_factory{};
  ptr_soup = bomb_soup_factory.order_soup();
  {
    dp::creational::factory::BombSoup bomb_soup(
      reinterpret_cast<dp::creational::factory::BombSoup const&>(ptr_soup));
    bomb_soup.create();
  }
  delete ptr_soup;
  ptr_soup = nullptr;

  delete ptr_soup_factory;
  ptr_soup_factory = nullptr;

  // ptr_soup_factory
  //   = new dp::creational::factory::PlainSoupFactory();
  // ptr_soup_factory->orderSoup();
  // delete ptr_soup_factory;

  std::printf("::: %s\n", get_platform_name(dp::Platform::MACOS));
  std::printf("::: %s\n", get_platform_name(dp::Platform::Linux));
  std::printf("::: %s\n", get_platform_name(dp::Platform::Windows));
  std::printf("::: %s\n", get_platform_name(dp::Platform::None));
  std::printf("::: %s\n", get_platform_name(dp::Platform::WHAT));
  std::printf("::: %s\n", get_platform_name(dp::CURRENT_PLATFORM));
  std::cout << "::: " << dp::CURRENT_PLATFORM << "\n";
  std::printf("::: %s\n", "hi...");

  REQUIRE(dp::CURRENT_PLATFORM != dp::Platform::None);
  REQUIRE(static_cast<unsigned>(dp::Platform::Windows) == 1u);

}
