cmake_minimum_required(VERSION 3.16)

project(Lab_05_1_Tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(lab_functions OBJECT Lab_05_1.cpp)

# Щоб main() основної програми не конфліктував з Google Test
target_compile_definitions(lab_functions PRIVATE main=lab51_original_main)

add_executable(unit_tests
    tests/test_05_1.cpp
    $<TARGET_OBJECTS:lab_functions>
)

target_link_libraries(unit_tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)
