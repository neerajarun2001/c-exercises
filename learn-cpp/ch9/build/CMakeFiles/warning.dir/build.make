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
CMAKE_SOURCE_DIR = /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build

# Include any dependencies generated for this target.
include CMakeFiles/warning.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/warning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/warning.dir/flags.make

CMakeFiles/warning.dir/warning.cpp.o: CMakeFiles/warning.dir/flags.make
CMakeFiles/warning.dir/warning.cpp.o: ../warning.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/warning.dir/warning.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/warning.dir/warning.cpp.o -c /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/warning.cpp

CMakeFiles/warning.dir/warning.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/warning.dir/warning.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/warning.cpp > CMakeFiles/warning.dir/warning.cpp.i

CMakeFiles/warning.dir/warning.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/warning.dir/warning.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/warning.cpp -o CMakeFiles/warning.dir/warning.cpp.s

# Object files for target warning
warning_OBJECTS = \
"CMakeFiles/warning.dir/warning.cpp.o"

# External object files for target warning
warning_EXTERNAL_OBJECTS =

warning: CMakeFiles/warning.dir/warning.cpp.o
warning: CMakeFiles/warning.dir/build.make
warning: CMakeFiles/warning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable warning"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/warning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/warning.dir/build: warning

.PHONY : CMakeFiles/warning.dir/build

CMakeFiles/warning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/warning.dir/cmake_clean.cmake
.PHONY : CMakeFiles/warning.dir/clean

CMakeFiles/warning.dir/depend:
	cd /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9 /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9 /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build /Users/Nrj/Desktop/mars/exercises/learn-cpp/ch9/build/CMakeFiles/warning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/warning.dir/depend

