# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/x0152/mysrc/cpp/green_lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/x0152/mysrc/cpp/green_lib/build

# Include any dependencies generated for this target.
include tests/test_string/CMakeFiles/test_string.dir/depend.make

# Include the progress variables for this target.
include tests/test_string/CMakeFiles/test_string.dir/progress.make

# Include the compile flags for this target's objects.
include tests/test_string/CMakeFiles/test_string.dir/flags.make

tests/test_string/CMakeFiles/test_string.dir/main.cpp.o: tests/test_string/CMakeFiles/test_string.dir/flags.make
tests/test_string/CMakeFiles/test_string.dir/main.cpp.o: ../tests/test_string/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/x0152/mysrc/cpp/green_lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/test_string/CMakeFiles/test_string.dir/main.cpp.o"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_string.dir/main.cpp.o -c /home/x0152/mysrc/cpp/green_lib/tests/test_string/main.cpp

tests/test_string/CMakeFiles/test_string.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_string.dir/main.cpp.i"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/x0152/mysrc/cpp/green_lib/tests/test_string/main.cpp > CMakeFiles/test_string.dir/main.cpp.i

tests/test_string/CMakeFiles/test_string.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_string.dir/main.cpp.s"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/x0152/mysrc/cpp/green_lib/tests/test_string/main.cpp -o CMakeFiles/test_string.dir/main.cpp.s

tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.requires:

.PHONY : tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.requires

tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.provides: tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.requires
	$(MAKE) -f tests/test_string/CMakeFiles/test_string.dir/build.make tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.provides.build
.PHONY : tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.provides

tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.provides.build: tests/test_string/CMakeFiles/test_string.dir/main.cpp.o


tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o: tests/test_string/CMakeFiles/test_string.dir/flags.make
tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o: ../src/string/string_formater.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/x0152/mysrc/cpp/green_lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o -c /home/x0152/mysrc/cpp/green_lib/src/string/string_formater.cpp

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.i"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/x0152/mysrc/cpp/green_lib/src/string/string_formater.cpp > CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.i

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.s"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/x0152/mysrc/cpp/green_lib/src/string/string_formater.cpp -o CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.s

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.requires:

.PHONY : tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.requires

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.provides: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.requires
	$(MAKE) -f tests/test_string/CMakeFiles/test_string.dir/build.make tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.provides.build
.PHONY : tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.provides

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.provides.build: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o


tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o: tests/test_string/CMakeFiles/test_string.dir/flags.make
tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o: ../src/string/string_checker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/x0152/mysrc/cpp/green_lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o -c /home/x0152/mysrc/cpp/green_lib/src/string/string_checker.cpp

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.i"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/x0152/mysrc/cpp/green_lib/src/string/string_checker.cpp > CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.i

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.s"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/x0152/mysrc/cpp/green_lib/src/string/string_checker.cpp -o CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.s

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.requires:

.PHONY : tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.requires

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.provides: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.requires
	$(MAKE) -f tests/test_string/CMakeFiles/test_string.dir/build.make tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.provides.build
.PHONY : tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.provides

tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.provides.build: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o


# Object files for target test_string
test_string_OBJECTS = \
"CMakeFiles/test_string.dir/main.cpp.o" \
"CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o" \
"CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o"

# External object files for target test_string
test_string_EXTERNAL_OBJECTS =

tests/test_string/test_string: tests/test_string/CMakeFiles/test_string.dir/main.cpp.o
tests/test_string/test_string: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o
tests/test_string/test_string: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o
tests/test_string/test_string: tests/test_string/CMakeFiles/test_string.dir/build.make
tests/test_string/test_string: tests/test_string/CMakeFiles/test_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/x0152/mysrc/cpp/green_lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable test_string"
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/test_string/CMakeFiles/test_string.dir/build: tests/test_string/test_string

.PHONY : tests/test_string/CMakeFiles/test_string.dir/build

tests/test_string/CMakeFiles/test_string.dir/requires: tests/test_string/CMakeFiles/test_string.dir/main.cpp.o.requires
tests/test_string/CMakeFiles/test_string.dir/requires: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_formater.cpp.o.requires
tests/test_string/CMakeFiles/test_string.dir/requires: tests/test_string/CMakeFiles/test_string.dir/__/__/src/string/string_checker.cpp.o.requires

.PHONY : tests/test_string/CMakeFiles/test_string.dir/requires

tests/test_string/CMakeFiles/test_string.dir/clean:
	cd /home/x0152/mysrc/cpp/green_lib/build/tests/test_string && $(CMAKE_COMMAND) -P CMakeFiles/test_string.dir/cmake_clean.cmake
.PHONY : tests/test_string/CMakeFiles/test_string.dir/clean

tests/test_string/CMakeFiles/test_string.dir/depend:
	cd /home/x0152/mysrc/cpp/green_lib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/x0152/mysrc/cpp/green_lib /home/x0152/mysrc/cpp/green_lib/tests/test_string /home/x0152/mysrc/cpp/green_lib/build /home/x0152/mysrc/cpp/green_lib/build/tests/test_string /home/x0152/mysrc/cpp/green_lib/build/tests/test_string/CMakeFiles/test_string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/test_string/CMakeFiles/test_string.dir/depend

