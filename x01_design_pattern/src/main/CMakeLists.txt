add_library(${__TARGET_LIB} STATIC)

target_compile_features(${__TARGET_LIB} PUBLIC cxx_std_17)

target_compile_options(
  ${__TARGET_LIB}
  PRIVATE
    $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
      -Wall;-Wextra;-Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:
      /W3;/W4;/Wall;/permissive->
)

string(TOLOWER ${CMAKE_CXX_COMPILER_ID} __cxx_compiler_id_tolower)
string(TOLOWER ${CMAKE_SYSTEM_NAME} __system_name_tolower)
set_target_properties(${__TARGET_LIB}
  PROPERTIES
    RUNTIME_OUTPUT_NAME ${__TARGET_LIB}-$<LOWER_CASE:$<CONFIG>>-${__cxx_compiler_id_tolower}-${__system_name_tolower})

file(GLOB_RECURSE __target_lib_src_main_cpp CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/cpp/${PROJECT_NAME}/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/cpp/${PROJECT_NAME}/*.cxx)

list(FILTER __target_lib_src_main_cpp
  EXCLUDE REGEX "main\\.(cpp|cxx)$")

target_sources(${__TARGET_LIB} PRIVATE ${__target_lib_src_main_cpp})

target_include_directories(${__TARGET_LIB}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/private
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public>
    $<INSTALL_INTERFACE:include>)

# target_link_libraries(${__TARGET_LIB}
#   PRIVATE
#     fmt::fmt)

install(
  DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/public
  DESTINATION include
  COMPONENT lib)

install(
  TARGETS ${__TARGET_LIB}
  EXPORT ${__TARGET_LIB}-targets
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib
  INCLUDES DESTINATION include
  COMPONENT lib)

install(
  EXPORT ${__TARGET_LIB}-targets
  FILE ${__TARGET_LIB}-targets.cmake
  NAMESPACE ${PROJECT_NAME}::
  DESTINATION lib/cmake
  COMPONENT lib)

add_custom_target("build-target-lib"
  COMMENT "::: Build: (${__TARGET_LIB})"
  DEPENDS ${__TARGET_LIB})
