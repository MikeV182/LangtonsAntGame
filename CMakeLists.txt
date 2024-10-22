cmake_minimum_required(VERSION 3.5.0)
project(LangtonsAnt VERSION 0.1.0 LANGUAGES C CXX)

# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.12.1.zip
)

# Download and add the GoogleTest targets to our build
FetchContent_MakeAvailable(googletest)

# Add the executable for your project
add_executable(LangtonsAnt main.cpp)

# Enable C++ 11 (or newer) features
set_target_properties(LangtonsAnt PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED YES)

# Add test executables
add_executable(ant_tests ./test/AntTests.cpp)
add_executable(universe_tests ./test/UniverseTests.cpp)
add_executable(file_handler_tests ./test/FileHandlerTests.cpp)
add_executable(game_tests ./test/GameTests.cpp)

# Link Google Test libraries to the test executables
target_link_libraries(ant_tests gtest gtest_main)
target_link_libraries(universe_tests gtest gtest_main)
target_link_libraries(file_handler_tests gtest gtest_main)
target_link_libraries(game_tests gtest gtest_main)

# Enable testing support
enable_testing()

# Add the tests
add_test(NAME ant_tests COMMAND ant_tests)
add_test(NAME universe_tests COMMAND universe_tests)
add_test(NAME file_handler_tests COMMAND file_handler_tests)
add_test(NAME game_tests COMMAND game_tests)
