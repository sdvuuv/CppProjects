# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = "/home/anya/2 term/oop2/figures"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/anya/2 term/oop2/figures/build"

# Include any dependencies generated for this target.
include CMakeFiles/figures.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/figures.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/figures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/figures.dir/flags.make

CMakeFiles/figures.dir/main.cpp.o: CMakeFiles/figures.dir/flags.make
CMakeFiles/figures.dir/main.cpp.o: /home/anya/2\ term/oop2/figures/main.cpp
CMakeFiles/figures.dir/main.cpp.o: CMakeFiles/figures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/anya/2 term/oop2/figures/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/figures.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/figures.dir/main.cpp.o -MF CMakeFiles/figures.dir/main.cpp.o.d -o CMakeFiles/figures.dir/main.cpp.o -c "/home/anya/2 term/oop2/figures/main.cpp"

CMakeFiles/figures.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figures.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/anya/2 term/oop2/figures/main.cpp" > CMakeFiles/figures.dir/main.cpp.i

CMakeFiles/figures.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figures.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/anya/2 term/oop2/figures/main.cpp" -o CMakeFiles/figures.dir/main.cpp.s

CMakeFiles/figures.dir/circle.cpp.o: CMakeFiles/figures.dir/flags.make
CMakeFiles/figures.dir/circle.cpp.o: /home/anya/2\ term/oop2/figures/circle.cpp
CMakeFiles/figures.dir/circle.cpp.o: CMakeFiles/figures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/anya/2 term/oop2/figures/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/figures.dir/circle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/figures.dir/circle.cpp.o -MF CMakeFiles/figures.dir/circle.cpp.o.d -o CMakeFiles/figures.dir/circle.cpp.o -c "/home/anya/2 term/oop2/figures/circle.cpp"

CMakeFiles/figures.dir/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figures.dir/circle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/anya/2 term/oop2/figures/circle.cpp" > CMakeFiles/figures.dir/circle.cpp.i

CMakeFiles/figures.dir/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figures.dir/circle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/anya/2 term/oop2/figures/circle.cpp" -o CMakeFiles/figures.dir/circle.cpp.s

CMakeFiles/figures.dir/polygon.cpp.o: CMakeFiles/figures.dir/flags.make
CMakeFiles/figures.dir/polygon.cpp.o: /home/anya/2\ term/oop2/figures/polygon.cpp
CMakeFiles/figures.dir/polygon.cpp.o: CMakeFiles/figures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/anya/2 term/oop2/figures/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/figures.dir/polygon.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/figures.dir/polygon.cpp.o -MF CMakeFiles/figures.dir/polygon.cpp.o.d -o CMakeFiles/figures.dir/polygon.cpp.o -c "/home/anya/2 term/oop2/figures/polygon.cpp"

CMakeFiles/figures.dir/polygon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figures.dir/polygon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/anya/2 term/oop2/figures/polygon.cpp" > CMakeFiles/figures.dir/polygon.cpp.i

CMakeFiles/figures.dir/polygon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figures.dir/polygon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/anya/2 term/oop2/figures/polygon.cpp" -o CMakeFiles/figures.dir/polygon.cpp.s

CMakeFiles/figures.dir/square.cpp.o: CMakeFiles/figures.dir/flags.make
CMakeFiles/figures.dir/square.cpp.o: /home/anya/2\ term/oop2/figures/square.cpp
CMakeFiles/figures.dir/square.cpp.o: CMakeFiles/figures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/anya/2 term/oop2/figures/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/figures.dir/square.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/figures.dir/square.cpp.o -MF CMakeFiles/figures.dir/square.cpp.o.d -o CMakeFiles/figures.dir/square.cpp.o -c "/home/anya/2 term/oop2/figures/square.cpp"

CMakeFiles/figures.dir/square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figures.dir/square.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/anya/2 term/oop2/figures/square.cpp" > CMakeFiles/figures.dir/square.cpp.i

CMakeFiles/figures.dir/square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figures.dir/square.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/anya/2 term/oop2/figures/square.cpp" -o CMakeFiles/figures.dir/square.cpp.s

CMakeFiles/figures.dir/triangle.cpp.o: CMakeFiles/figures.dir/flags.make
CMakeFiles/figures.dir/triangle.cpp.o: /home/anya/2\ term/oop2/figures/triangle.cpp
CMakeFiles/figures.dir/triangle.cpp.o: CMakeFiles/figures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/anya/2 term/oop2/figures/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/figures.dir/triangle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/figures.dir/triangle.cpp.o -MF CMakeFiles/figures.dir/triangle.cpp.o.d -o CMakeFiles/figures.dir/triangle.cpp.o -c "/home/anya/2 term/oop2/figures/triangle.cpp"

CMakeFiles/figures.dir/triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figures.dir/triangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/anya/2 term/oop2/figures/triangle.cpp" > CMakeFiles/figures.dir/triangle.cpp.i

CMakeFiles/figures.dir/triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figures.dir/triangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/anya/2 term/oop2/figures/triangle.cpp" -o CMakeFiles/figures.dir/triangle.cpp.s

# Object files for target figures
figures_OBJECTS = \
"CMakeFiles/figures.dir/main.cpp.o" \
"CMakeFiles/figures.dir/circle.cpp.o" \
"CMakeFiles/figures.dir/polygon.cpp.o" \
"CMakeFiles/figures.dir/square.cpp.o" \
"CMakeFiles/figures.dir/triangle.cpp.o"

# External object files for target figures
figures_EXTERNAL_OBJECTS =

figures: CMakeFiles/figures.dir/main.cpp.o
figures: CMakeFiles/figures.dir/circle.cpp.o
figures: CMakeFiles/figures.dir/polygon.cpp.o
figures: CMakeFiles/figures.dir/square.cpp.o
figures: CMakeFiles/figures.dir/triangle.cpp.o
figures: CMakeFiles/figures.dir/build.make
figures: CMakeFiles/figures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/anya/2 term/oop2/figures/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable figures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/figures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/figures.dir/build: figures
.PHONY : CMakeFiles/figures.dir/build

CMakeFiles/figures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/figures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/figures.dir/clean

CMakeFiles/figures.dir/depend:
	cd "/home/anya/2 term/oop2/figures/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/anya/2 term/oop2/figures" "/home/anya/2 term/oop2/figures" "/home/anya/2 term/oop2/figures/build" "/home/anya/2 term/oop2/figures/build" "/home/anya/2 term/oop2/figures/build/CMakeFiles/figures.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/figures.dir/depend

