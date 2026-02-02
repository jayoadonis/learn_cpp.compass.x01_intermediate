cmake_minimum_required(VERSION 3.28)

project(
  x01_design_pattern
  VERSION "0.0.0"
  DESCRIPTION "A personal journey exploring C++."
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INSTALL_PREFIX
  ${CMAKE_SOURCE_DIR}/install/${PROJECT_NAME}/${PROJECT_VERSION}
  CACHE PATH
  "CMake install prefix"
  FORCE)

set(FETCHCONTENT_BASE_DIR
  ${CMAKE_SOURCE_DIR}/.repo/fetchcontent/${CMAKE_GENERATOR})

set(__PROJECT_ID ${PROJECT_NAME}-${PROJECT_VERSION})
set(__TARGET_APP ${__PROJECT_ID}-app)
set(__TARGET_LIB ${__PROJECT_ID}-lib)
set(__TARGET_UNIT_TEST ${__PROJECT_ID}-unit-test)
set(__TARGET_INTEGRATIN_TEST ${__PROJECT_ID}-integration-test)

if(CMAKE_CONFIGURATION_TYPES)
  message(STATUS "::: Multi-Config Generator: (${CMAKE_GENERATOR})")
else()
  message(STATUS "::: Signle-Config Generator: (${CMAKE_GENERATOR})")
  if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "CMake Configuration (build-type)" FORCE)
    message(WARNING "::: (CMAKE_BUILD_TYPE) not specified ---> defaulting to (Debug)")
  endif()
  message(STATUS "::: CMake Configuration type (build-type): (${CMAKE_BUILD_TYPE})")
endif()
message(STATUS "::: CMake Configuration types: [${CMAKE_CONFIGURATION_TYPES}]")

list(APPEND CMAKE_MODULE_PATH
  ${CMAKE_SOURCE_DIR}/script/cmake)
include(FetchContent)
include(deps/catch2)

enable_testing()

add_subdirectory(src/main)
if(BUILD_TESTING)
  add_subdirectory(src/test)
endif()
