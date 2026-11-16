add_library(pricer_core
  src/version.cpp
)
target_include_directories(pricer_core PUBLIC include)
target_compile_options(pricer_core PRIVATE -Wall -Wextra -Wpedantic)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.tar.gz
  FIND_PACKAGE_ARGS NAMES GTest
)
FetchContent_MakeAvailable(googletest)

add_executable(pricer_tests
  tests/test_sanity.cpp
)
target_link_libraries(pricer_tests PRIVATE pricer_core GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(pricer_tests)
