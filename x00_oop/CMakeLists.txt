cmake_minimum_required(VERSION 3.28)

project(
  x00_oop
  VERSION 0.0.0
  DESCRIPTION "A personal journey exploring C++. This project will talk about the four (4) pillars of Object Oriented Programming (OOP)."
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD          17  )
set(CMAKE_CXX_STANDARD_REQUIRED ON  )
set(CMAKE_CXX_EXTENSIONS        OFF )

#REM: Export compile commands for tooling such as for linting.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#REM:Where `make install` will put/package files by default (can override)
set(
  CMAKE_INSTALL_PREFIX
    ${CMAKE_SOURCE_DIR}/install/${PROJECT_NAME}/${PROJECT_VERSION}
  CACHE PATH
  "Install prefix"
  FORCE)

set(
  FETCHCONTENT_BASE_DIR
    ${CMAKE_SOURCE_DIR}/.repo/fetch_content/${CMAKE_GENERATOR})

set(__PROJECT_ID ${PROJECT_NAME}-${PROJECT_VERSION})
set(__TARGET_APP ${__PROJECT_ID}-app)
set(__TARGET_LIB ${__PROJECT_ID}-lib)
set(__TARGET_UNIT_TEST ${__PROJECT_ID}-unit-test)
set(__TARGET_INTEGRATION_TEST ${__PROJECT_ID}-integration-test)

if(CMAKE_CONFIGURATION_TYPES)
  message(STATUS "::: Multi-Config Generator: (${CMAKE_GENERATOR})")
else()
  message(STATUS "::: Single-Config Generator: (${CMAKE_GENERATOR})")
  if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug"
      CACHE STRING "Configuration type (build-type)" FORCE)
    message(WARNING "::: (CMAKE_BUILD_TYPE) not specified ---> default to (Debug).")
  endif()
  message(STATUS "::: Configuration type (build-type): (${CMAKE_BUILD_TYPE})")
endif()
message(STATUS "::: Configuration types: [${CMAKE_CONFIGURATION_TYPES}]")

list(
  APPEND CMAKE_MODULE_PATH
    ${CMAKE_SOURCE_DIR}/script/cmake)

#REM: For third-party lib (include fetch deps tool)
include(FetchContent)
include(deps/fmt)
include(deps/catch2)

enable_testing()

add_subdirectory(src/main)
if(BUILD_TESTING)
  add_subdirectory(src/test)
endif()
