
add_executable(${__TARGET_UNIT_TEST})

add_dependencies(${__TARGET_UNIT_TEST} ${__TARGET_LIB})

target_compile_features(${__TARGET_UNIT_TEST} PUBLIC cxx_std_17)

string(TOLOWER ${CMAKE_CXX_COMPILER_ID} __cxx_compiler_id_tolower)
string(TOLOWER ${CMAKE_SYSTEM_NAME} __system_name_tolower)
set_target_properties(${__TARGET_UNIT_TEST}
  PROPERTIES
    RUNTIME_OUTPUT_NAME
      ${__TARGET_UNIT_TEST}-$<LOWER_CASE:$<CONFIG>>-${__cxx_compiler_id_tolower}-${__system_name_tolower})

file(GLOB_RECURSE __target_unit_test_src_main_cpp CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/cpp/${PROJECT_NAME}/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/cpp/${PROJECT_NAME}/*.cxx)

target_sources(${__TARGET_UNIT_TEST}
  PRIVATE ${__target_unit_test_src_main_cpp})

target_link_libraries(${__TARGET_UNIT_TEST}
  PRIVATE
    ${__TARGET_LIB}
    Catch2::Catch2WithMain)

add_test(NAME ${__TARGET_UNIT_TEST} COMMAND ${__TARGET_UNIT_TEST})
set_tests_properties(${__TARGET_UNIT_TEST} PROPERTIES LABELS "unit")

add_custom_target("run-unit-test"
  COMMAND
    ${CMAKE_CTEST_COMMAND}
    --test-dir ${CMAKE_BINARY_DIR}
    -C $<CONFIG>
    -L "unit"
    -VV
  COMMENT "::: Run unit-test."
  DEPENDS "build-unit-test")

add_custom_target("build-unit-test"
  COMMAND
    ${CMAKE_COMMAND}
    --build ${CMAKE_BINARY_DIR}
    --config $<CONFIG>
  COMMENT "::: Build unit-test")
