# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.7/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build

# Include any dependencies generated for this target.
include CMakeFiles/functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functions.dir/flags.make

CMakeFiles/functions.dir/functions.cpp.o: CMakeFiles/functions.dir/flags.make
CMakeFiles/functions.dir/functions.cpp.o: ../functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functions.dir/functions.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/functions.dir/functions.cpp.o -c /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/functions.cpp

CMakeFiles/functions.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functions.dir/functions.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/functions.cpp > CMakeFiles/functions.dir/functions.cpp.i

CMakeFiles/functions.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functions.dir/functions.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/functions.cpp -o CMakeFiles/functions.dir/functions.cpp.s

CMakeFiles/functions.dir/doubleNum.cpp.o: CMakeFiles/functions.dir/flags.make
CMakeFiles/functions.dir/doubleNum.cpp.o: ../doubleNum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/functions.dir/doubleNum.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/functions.dir/doubleNum.cpp.o -c /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/doubleNum.cpp

CMakeFiles/functions.dir/doubleNum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functions.dir/doubleNum.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/doubleNum.cpp > CMakeFiles/functions.dir/doubleNum.cpp.i

CMakeFiles/functions.dir/doubleNum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functions.dir/doubleNum.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/doubleNum.cpp -o CMakeFiles/functions.dir/doubleNum.cpp.s

# Object files for target functions
functions_OBJECTS = \
"CMakeFiles/functions.dir/functions.cpp.o" \
"CMakeFiles/functions.dir/doubleNum.cpp.o"

# External object files for target functions
functions_EXTERNAL_OBJECTS =

functions: CMakeFiles/functions.dir/functions.cpp.o
functions: CMakeFiles/functions.dir/doubleNum.cpp.o
functions: CMakeFiles/functions.dir/build.make
functions: CMakeFiles/functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable functions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functions.dir/build: functions

.PHONY : CMakeFiles/functions.dir/build

CMakeFiles/functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/functions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/functions.dir/clean

CMakeFiles/functions.dir/depend:
	cd /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02 /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02 /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch02/build/CMakeFiles/functions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functions.dir/depend

