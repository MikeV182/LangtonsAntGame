# CMake generated Testfile for 
# Source directory: /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame
# Build directory: /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ant_tests "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/ant_tests")
set_tests_properties(ant_tests PROPERTIES  _BACKTRACE_TRIPLES "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;36;add_test;/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;0;")
add_test(universe_tests "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/universe_tests")
set_tests_properties(universe_tests PROPERTIES  _BACKTRACE_TRIPLES "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;37;add_test;/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;0;")
add_test(file_handler_tests "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/file_handler_tests")
set_tests_properties(file_handler_tests PROPERTIES  _BACKTRACE_TRIPLES "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;38;add_test;/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;0;")
add_test(game_tests "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/game_tests")
set_tests_properties(game_tests PROPERTIES  _BACKTRACE_TRIPLES "/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;39;add_test;/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
