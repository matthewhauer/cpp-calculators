cmake_minimum_required(VERSION 3.25)
project(cpp_calcs)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(.)
enable_testing()

SET(cpp_calcs_srcs
        src/two_pass.cpp src/two_pass.h src/MathOpr.cpp)

SET(calc_test_srcs
        tests/two_pass_tests.cpp)

add_executable(cpp_calcs_main
        src/main.cpp src/main.h
        ${cpp_calcs_srcs} src/two_pass.h src/two_pass.cpp src/MathOpr.h)

add_executable(cpp_calcs_tests
        ${cpp_calcs_srcs}
        ${calc_test_srcs}
        )

target_link_libraries(
        cpp_calcs_tests
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(cpp_calcs_tests)