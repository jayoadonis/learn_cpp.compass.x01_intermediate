message(STATUS "::: Fetching Catch2...")

set(BUILD_SHARED_LIBS OFF)

set(CATCH_INSTALL_DOCS    OFF CACHE BOOL "" FORCE)
set(CATCH_INSTALL_EXTRAS  OFF CACHE BOOL "" FORCE)
set(CATCH_BUILD_TESTING   OFF CACHE BOOL "" FORCE)
set(CATCH_BUILD_EXAMPLES  OFF CACHE BOOL "" FORCE)

FetchContent_Declare(Catch2
  GIT_REPOSITORY "https://github.com/catchorg/Catch2.git"
  GIT_TAG v3.12.0)

FetchContent_MakeAvailable(Catch2)

#REM: Importing 'catch_discover_tests(...)', for showing multiple catch2 test-cases result
include(${catch2_SOURCE_DIR}/extras/Catch.cmake)

include(CTest)
