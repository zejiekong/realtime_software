# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/zejie/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/zejie/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zejie/Desktop/realtime_software

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zejie/Desktop/realtime_software

# Include any dependencies generated for this target.
include realtime_software/lecture/CMakeFiles/2.1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include realtime_software/lecture/CMakeFiles/2.1.dir/compiler_depend.make

# Include the progress variables for this target.
include realtime_software/lecture/CMakeFiles/2.1.dir/progress.make

# Include the compile flags for this target's objects.
include realtime_software/lecture/CMakeFiles/2.1.dir/flags.make

realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.o: realtime_software/lecture/CMakeFiles/2.1.dir/flags.make
realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.o: realtime_software/lecture/2.1_pointers_array.c
realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.o: realtime_software/lecture/CMakeFiles/2.1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zejie/Desktop/realtime_software/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.o"
	cd /home/zejie/Desktop/realtime_software/realtime_software/lecture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.o -MF CMakeFiles/2.1.dir/2.1_pointers_array.c.o.d -o CMakeFiles/2.1.dir/2.1_pointers_array.c.o -c /home/zejie/Desktop/realtime_software/realtime_software/lecture/2.1_pointers_array.c

realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2.1.dir/2.1_pointers_array.c.i"
	cd /home/zejie/Desktop/realtime_software/realtime_software/lecture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zejie/Desktop/realtime_software/realtime_software/lecture/2.1_pointers_array.c > CMakeFiles/2.1.dir/2.1_pointers_array.c.i

realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2.1.dir/2.1_pointers_array.c.s"
	cd /home/zejie/Desktop/realtime_software/realtime_software/lecture && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zejie/Desktop/realtime_software/realtime_software/lecture/2.1_pointers_array.c -o CMakeFiles/2.1.dir/2.1_pointers_array.c.s

# Object files for target 2.1
2_1_OBJECTS = \
"CMakeFiles/2.1.dir/2.1_pointers_array.c.o"

# External object files for target 2.1
2_1_EXTERNAL_OBJECTS =

realtime_software/lecture/2.1: realtime_software/lecture/CMakeFiles/2.1.dir/2.1_pointers_array.c.o
realtime_software/lecture/2.1: realtime_software/lecture/CMakeFiles/2.1.dir/build.make
realtime_software/lecture/2.1: realtime_software/lecture/CMakeFiles/2.1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zejie/Desktop/realtime_software/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 2.1"
	cd /home/zejie/Desktop/realtime_software/realtime_software/lecture && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2.1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
realtime_software/lecture/CMakeFiles/2.1.dir/build: realtime_software/lecture/2.1
.PHONY : realtime_software/lecture/CMakeFiles/2.1.dir/build

realtime_software/lecture/CMakeFiles/2.1.dir/clean:
	cd /home/zejie/Desktop/realtime_software/realtime_software/lecture && $(CMAKE_COMMAND) -P CMakeFiles/2.1.dir/cmake_clean.cmake
.PHONY : realtime_software/lecture/CMakeFiles/2.1.dir/clean

realtime_software/lecture/CMakeFiles/2.1.dir/depend:
	cd /home/zejie/Desktop/realtime_software && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zejie/Desktop/realtime_software /home/zejie/Desktop/realtime_software/realtime_software/lecture /home/zejie/Desktop/realtime_software /home/zejie/Desktop/realtime_software/realtime_software/lecture /home/zejie/Desktop/realtime_software/realtime_software/lecture/CMakeFiles/2.1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : realtime_software/lecture/CMakeFiles/2.1.dir/depend

