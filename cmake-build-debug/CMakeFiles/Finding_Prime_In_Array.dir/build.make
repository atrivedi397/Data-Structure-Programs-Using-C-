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
include CMakeFiles/Finding_Prime_In_Array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Finding_Prime_In_Array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Finding_Prime_In_Array.dir/flags.make

CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o: CMakeFiles/Finding_Prime_In_Array.dir/flags.make
CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o: ../Finding_Prime_In_Array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o -c "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/Finding_Prime_In_Array.cpp"

CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/Finding_Prime_In_Array.cpp" > CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.i

CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/Finding_Prime_In_Array.cpp" -o CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.s

CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.requires:

.PHONY : CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.requires

CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.provides: CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.requires
	$(MAKE) -f CMakeFiles/Finding_Prime_In_Array.dir/build.make CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.provides.build
.PHONY : CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.provides

CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.provides.build: CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o


# Object files for target Finding_Prime_In_Array
Finding_Prime_In_Array_OBJECTS = \
"CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o"

# External object files for target Finding_Prime_In_Array
Finding_Prime_In_Array_EXTERNAL_OBJECTS =

Finding_Prime_In_Array: CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o
Finding_Prime_In_Array: CMakeFiles/Finding_Prime_In_Array.dir/build.make
Finding_Prime_In_Array: CMakeFiles/Finding_Prime_In_Array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Finding_Prime_In_Array"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Finding_Prime_In_Array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Finding_Prime_In_Array.dir/build: Finding_Prime_In_Array

.PHONY : CMakeFiles/Finding_Prime_In_Array.dir/build

CMakeFiles/Finding_Prime_In_Array.dir/requires: CMakeFiles/Finding_Prime_In_Array.dir/Finding_Prime_In_Array.cpp.o.requires

.PHONY : CMakeFiles/Finding_Prime_In_Array.dir/requires

CMakeFiles/Finding_Prime_In_Array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Finding_Prime_In_Array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Finding_Prime_In_Array.dir/clean

CMakeFiles/Finding_Prime_In_Array.dir/depend:
	cd "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug" "/home/atrivedi/Git Projects/Data-Structure-Programs-Using-C-/cmake-build-debug/CMakeFiles/Finding_Prime_In_Array.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Finding_Prime_In_Array.dir/depend

