# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jd/workspace/AlgoLab/Algo3/hike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jd/workspace/AlgoLab/Algo3/hike

# Include any dependencies generated for this target.
include CMakeFiles/hike.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hike.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hike.dir/flags.make

CMakeFiles/hike.dir/hike.cpp.o: CMakeFiles/hike.dir/flags.make
CMakeFiles/hike.dir/hike.cpp.o: hike.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jd/workspace/AlgoLab/Algo3/hike/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/hike.dir/hike.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/hike.dir/hike.cpp.o -c /home/jd/workspace/AlgoLab/Algo3/hike/hike.cpp

CMakeFiles/hike.dir/hike.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hike.dir/hike.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jd/workspace/AlgoLab/Algo3/hike/hike.cpp > CMakeFiles/hike.dir/hike.cpp.i

CMakeFiles/hike.dir/hike.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hike.dir/hike.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jd/workspace/AlgoLab/Algo3/hike/hike.cpp -o CMakeFiles/hike.dir/hike.cpp.s

CMakeFiles/hike.dir/hike.cpp.o.requires:
.PHONY : CMakeFiles/hike.dir/hike.cpp.o.requires

CMakeFiles/hike.dir/hike.cpp.o.provides: CMakeFiles/hike.dir/hike.cpp.o.requires
	$(MAKE) -f CMakeFiles/hike.dir/build.make CMakeFiles/hike.dir/hike.cpp.o.provides.build
.PHONY : CMakeFiles/hike.dir/hike.cpp.o.provides

CMakeFiles/hike.dir/hike.cpp.o.provides.build: CMakeFiles/hike.dir/hike.cpp.o

# Object files for target hike
hike_OBJECTS = \
"CMakeFiles/hike.dir/hike.cpp.o"

# External object files for target hike
hike_EXTERNAL_OBJECTS =

hike: CMakeFiles/hike.dir/hike.cpp.o
hike: CMakeFiles/hike.dir/build.make
hike: /usr/lib/x86_64-linux-gnu/libmpfr.so
hike: /usr/lib/x86_64-linux-gnu/libgmp.so
hike: /usr/local/lib/x86_64-linux-gnu/libCGAL_Core.so.12.0.0
hike: /usr/local/lib/x86_64-linux-gnu/libCGAL.so.12.0.0
hike: /usr/lib/x86_64-linux-gnu/libboost_thread.so
hike: /usr/lib/x86_64-linux-gnu/libboost_system.so
hike: /usr/lib/x86_64-linux-gnu/libpthread.so
hike: /usr/local/lib/x86_64-linux-gnu/libCGAL_Core.so.12.0.0
hike: /usr/local/lib/x86_64-linux-gnu/libCGAL.so.12.0.0
hike: /usr/lib/x86_64-linux-gnu/libboost_thread.so
hike: /usr/lib/x86_64-linux-gnu/libboost_system.so
hike: /usr/lib/x86_64-linux-gnu/libpthread.so
hike: CMakeFiles/hike.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable hike"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hike.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hike.dir/build: hike
.PHONY : CMakeFiles/hike.dir/build

CMakeFiles/hike.dir/requires: CMakeFiles/hike.dir/hike.cpp.o.requires
.PHONY : CMakeFiles/hike.dir/requires

CMakeFiles/hike.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hike.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hike.dir/clean

CMakeFiles/hike.dir/depend:
	cd /home/jd/workspace/AlgoLab/Algo3/hike && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jd/workspace/AlgoLab/Algo3/hike /home/jd/workspace/AlgoLab/Algo3/hike /home/jd/workspace/AlgoLab/Algo3/hike /home/jd/workspace/AlgoLab/Algo3/hike /home/jd/workspace/AlgoLab/Algo3/hike/CMakeFiles/hike.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hike.dir/depend

