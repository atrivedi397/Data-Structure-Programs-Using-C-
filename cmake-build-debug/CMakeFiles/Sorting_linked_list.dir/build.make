# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/atrivedi/Downloads/clion-2017.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/atrivedi/Downloads/clion-2017.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Sorting_linked_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sorting_linked_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sorting_linked_list.dir/flags.make

CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o: CMakeFiles/Sorting_linked_list.dir/flags.make
CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o: ../Assignment\ 2/Sorting_linked_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o -c "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/Assignment 2/Sorting_linked_list.cpp"

CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/Assignment 2/Sorting_linked_list.cpp" > CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.i

CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/Assignment 2/Sorting_linked_list.cpp" -o CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.s

CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.requires:

.PHONY : CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.requires

CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.provides: CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.requires
	$(MAKE) -f CMakeFiles/Sorting_linked_list.dir/build.make CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.provides.build
.PHONY : CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.provides

CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.provides.build: CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o


# Object files for target Sorting_linked_list
Sorting_linked_list_OBJECTS = \
"CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o"

# External object files for target Sorting_linked_list
Sorting_linked_list_EXTERNAL_OBJECTS =

Sorting_linked_list: CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o
Sorting_linked_list: CMakeFiles/Sorting_linked_list.dir/build.make
Sorting_linked_list: CMakeFiles/Sorting_linked_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sorting_linked_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sorting_linked_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sorting_linked_list.dir/build: Sorting_linked_list

.PHONY : CMakeFiles/Sorting_linked_list.dir/build

CMakeFiles/Sorting_linked_list.dir/requires: CMakeFiles/Sorting_linked_list.dir/Assignment_2/Sorting_linked_list.cpp.o.requires

.PHONY : CMakeFiles/Sorting_linked_list.dir/requires

CMakeFiles/Sorting_linked_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sorting_linked_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sorting_linked_list.dir/clean

CMakeFiles/Sorting_linked_list.dir/depend:
	cd "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug/CMakeFiles/Sorting_linked_list.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Sorting_linked_list.dir/depend
