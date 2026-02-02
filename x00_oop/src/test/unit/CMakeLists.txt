add_executable(${__TARGET_UNIT_TEST})

target_compile_features(
  ${__TARGET_UNIT_TEST} PUBLIC cxx_std_17)

string(TOLOWER ${CMAKE_CXX_COMPILER_ID} __cxx_compiler_id_tolower)
string(TOLOWER ${CMAKE_SYSTEM_NAME} __system_name_tolower)
set_target_properties(
  ${__TARGET_UNIT_TEST}
  PROPERTIES
    RUNTIME_OUTPUT_NAME
      ${__TARGET_UNIT_TEST}-$<LOWER_CASE:$<CONFIG>>-${__cxx_compiler_id_tolower}-${__system_name_tolower}
)

file(
  GLOB_RECURSE __TARGET_UNIT_TEST_SRC_CPP
  CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/cpp/${PROJECT_NAME}/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/cpp/${PROJECT_NAME}/*.cxx)

target_sources(
  ${__TARGET_UNIT_TEST}
  PRIVATE ${__TARGET_UNIT_TEST_SRC_CPP})

target_link_libraries(
  ${__TARGET_UNIT_TEST}
  PRIVATE
    ${__TARGET_LIB}
    Catch2::Catch2WithMain)

add_dependencies(${__TARGET_UNIT_TEST} ${__TARGET_LIB})

add_custom_command(TARGET ${__TARGET_UNIT_TEST}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
          $<TARGET_FILE:${__TARGET_LIB}>
          $<TARGET_FILE_DIR:${__TARGET_UNIT_TEST}>
  COMMENT "Copy ${__TARGET_LIB} runtime next to unit test"
)

#REM: Register the test.
add_test(NAME __target_unit_test COMMAND ${__TARGET_UNIT_TEST})

#REM: Label tests for selective runs.
set_tests_properties(__target_unit_test PROPERTIES LABELS unit)

add_custom_target(target-unit-test
  COMMAND
    ${CMAKE_CTEST_COMMAND}
    --test-dir ${CMAKE_BINARY_DIR}
    -C $<CONFIG>
    -L unit
    -VV
  COMMENT "::: Running unit-test."
  DEPENDS ${__TARGET_UNIT_TEST})
