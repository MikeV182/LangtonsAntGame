# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig

# Include any dependencies generated for this target.
include CMakeFiles/universe_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/universe_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/universe_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/universe_tests.dir/flags.make

CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o: CMakeFiles/universe_tests.dir/flags.make
CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o: /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/test/UniverseTests.cpp
CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o: CMakeFiles/universe_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o -MF CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o.d -o CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o -c /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/test/UniverseTests.cpp

CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/test/UniverseTests.cpp > CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.i

CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/test/UniverseTests.cpp -o CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.s

# Object files for target universe_tests
universe_tests_OBJECTS = \
"CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o"

# External object files for target universe_tests
universe_tests_EXTERNAL_OBJECTS =

universe_tests: CMakeFiles/universe_tests.dir/test/UniverseTests.cpp.o
universe_tests: CMakeFiles/universe_tests.dir/build.make
universe_tests: lib/libgtest.a
universe_tests: lib/libgtest_main.a
universe_tests: lib/libgtest.a
universe_tests: CMakeFiles/universe_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable universe_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/universe_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/universe_tests.dir/build: universe_tests
.PHONY : CMakeFiles/universe_tests.dir/build

CMakeFiles/universe_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/universe_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/universe_tests.dir/clean

CMakeFiles/universe_tests.dir/depend:
	cd /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig /home/mike/Documents/Cpp/lectTask2/LangtonsAntGame/out/build/CMakeConfig/CMakeFiles/universe_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/universe_tests.dir/depend
