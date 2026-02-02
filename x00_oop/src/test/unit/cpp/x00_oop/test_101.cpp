#include <catch2/catch_test_macros.hpp>

#include <cstdio>
#include <iostream>
#include <cinttypes>

#include "x00_oop/platform.h"

TEST_CASE("test_101") {

  std::printf(":::0 %0*" PRIXPTR " %s, %u\n",
    static_cast<int>(sizeof(std::uintptr_t)*2),
    reinterpret_cast<std::uintptr_t>(&x00_oop::CURRENT_PLATFORM),
    "Hi! 123.",
    static_cast<unsigned>(x00_oop::CURRENT_PLATFORM));

  std::cout << ":::1 " << x00_oop::CURRENT_PLATFORM << "\n";

  REQUIRE( x00_oop::CURRENT_PLATFORM != x00_oop::Platform::None);

  #if defined(_WIN32) || defined(_WIN64)
  REQUIRE(x00_oop::CURRENT_PLATFORM == x00_oop::Platform::Windows);
  #elif defined(__linux__)
  REQUIRE(x00_oop::CURRENT_PLATFORM == x00_oop::Platform::Linux);
  #elif defined(__APPLE__)
  REQUIRE(x00_oop::CURRENT_PLATFORM == x00_oop::Platform::MACOS);
  #endif
}
