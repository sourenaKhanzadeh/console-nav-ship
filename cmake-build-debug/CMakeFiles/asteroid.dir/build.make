# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Users\ProgrammingProjects\c++\games\asteroid

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\ProgrammingProjects\c++\games\asteroid\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/asteroid.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/asteroid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asteroid.dir/flags.make

CMakeFiles/asteroid.dir/main.cpp.obj: CMakeFiles/asteroid.dir/flags.make
CMakeFiles/asteroid.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\ProgrammingProjects\c++\games\asteroid\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/asteroid.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\asteroid.dir\main.cpp.obj -c D:\Users\ProgrammingProjects\c++\games\asteroid\main.cpp

CMakeFiles/asteroid.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroid.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\ProgrammingProjects\c++\games\asteroid\main.cpp > CMakeFiles\asteroid.dir\main.cpp.i

CMakeFiles/asteroid.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroid.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\ProgrammingProjects\c++\games\asteroid\main.cpp -o CMakeFiles\asteroid.dir\main.cpp.s

CMakeFiles/asteroid.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/asteroid.dir/main.cpp.obj.requires

CMakeFiles/asteroid.dir/main.cpp.obj.provides: CMakeFiles/asteroid.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\asteroid.dir\build.make CMakeFiles/asteroid.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/asteroid.dir/main.cpp.obj.provides

CMakeFiles/asteroid.dir/main.cpp.obj.provides.build: CMakeFiles/asteroid.dir/main.cpp.obj


# Object files for target asteroid
asteroid_OBJECTS = \
"CMakeFiles/asteroid.dir/main.cpp.obj"

# External object files for target asteroid
asteroid_EXTERNAL_OBJECTS =

asteroid.exe: CMakeFiles/asteroid.dir/main.cpp.obj
asteroid.exe: CMakeFiles/asteroid.dir/build.make
asteroid.exe: CMakeFiles/asteroid.dir/linklibs.rsp
asteroid.exe: CMakeFiles/asteroid.dir/objects1.rsp
asteroid.exe: CMakeFiles/asteroid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\ProgrammingProjects\c++\games\asteroid\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable asteroid.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\asteroid.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asteroid.dir/build: asteroid.exe

.PHONY : CMakeFiles/asteroid.dir/build

CMakeFiles/asteroid.dir/requires: CMakeFiles/asteroid.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/asteroid.dir/requires

CMakeFiles/asteroid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\asteroid.dir\cmake_clean.cmake
.PHONY : CMakeFiles/asteroid.dir/clean

CMakeFiles/asteroid.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\ProgrammingProjects\c++\games\asteroid D:\Users\ProgrammingProjects\c++\games\asteroid D:\Users\ProgrammingProjects\c++\games\asteroid\cmake-build-debug D:\Users\ProgrammingProjects\c++\games\asteroid\cmake-build-debug D:\Users\ProgrammingProjects\c++\games\asteroid\cmake-build-debug\CMakeFiles\asteroid.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asteroid.dir/depend
