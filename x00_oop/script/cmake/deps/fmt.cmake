message(STATUS "::: Fetching fmt...")

set(BUILD_SHARED_LIBS OFF)
set(FMT_SHARED  OFF CACHE BOOL "" FORCE)

set(FMT_TEST    OFF CACHE BOOL "" FORCE)
set(FMT_DOC     OFF CACHE BOOL "" FORCE)
set(FMT_FUZZ    OFF CACHE BOOL "" FORCE)
set(FMT_INSTALL OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
  fmt
  GIT_REPOSITORY "https://github.com/fmtlib/fmt.git"
  GIT_TAG 12.1.0)

FetchContent_MakeAvailable(fmt)
