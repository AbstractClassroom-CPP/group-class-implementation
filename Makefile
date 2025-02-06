# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nathanrussell/github/group-class-implementation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanrussell/github/group-class-implementation

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	/Applications/CMake.app/Contents/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/Applications/CMake.app/Contents/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/nathanrussell/github/group-class-implementation/CMakeFiles /Users/nathanrussell/github/group-class-implementation//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/nathanrussell/github/group-class-implementation/CMakeFiles 0
.PHONY : all

# The main codegen target
codegen: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/nathanrussell/github/group-class-implementation/CMakeFiles /Users/nathanrussell/github/group-class-implementation//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 codegen
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/nathanrussell/github/group-class-implementation/CMakeFiles 0
.PHONY : codegen

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named GroupDriver

# Build rule for target.
GroupDriver: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 GroupDriver
.PHONY : GroupDriver

# fast build rule for target.
GroupDriver/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/build
.PHONY : GroupDriver/fast

src/Group/CyclicGroup.o: src/Group/CyclicGroup.cpp.o
.PHONY : src/Group/CyclicGroup.o

# target to build an object file
src/Group/CyclicGroup.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/Group/CyclicGroup.cpp.o
.PHONY : src/Group/CyclicGroup.cpp.o

src/Group/CyclicGroup.i: src/Group/CyclicGroup.cpp.i
.PHONY : src/Group/CyclicGroup.i

# target to preprocess a source file
src/Group/CyclicGroup.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/Group/CyclicGroup.cpp.i
.PHONY : src/Group/CyclicGroup.cpp.i

src/Group/CyclicGroup.s: src/Group/CyclicGroup.cpp.s
.PHONY : src/Group/CyclicGroup.s

# target to generate assembly for a file
src/Group/CyclicGroup.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/Group/CyclicGroup.cpp.s
.PHONY : src/Group/CyclicGroup.cpp.s

src/Group/Group.o: src/Group/Group.cpp.o
.PHONY : src/Group/Group.o

# target to build an object file
src/Group/Group.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/Group/Group.cpp.o
.PHONY : src/Group/Group.cpp.o

src/Group/Group.i: src/Group/Group.cpp.i
.PHONY : src/Group/Group.i

# target to preprocess a source file
src/Group/Group.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/Group/Group.cpp.i
.PHONY : src/Group/Group.cpp.i

src/Group/Group.s: src/Group/Group.cpp.s
.PHONY : src/Group/Group.s

# target to generate assembly for a file
src/Group/Group.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/Group/Group.cpp.s
.PHONY : src/Group/Group.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/GroupDriver.dir/build.make CMakeFiles/GroupDriver.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... codegen"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... GroupDriver"
	@echo "... src/Group/CyclicGroup.o"
	@echo "... src/Group/CyclicGroup.i"
	@echo "... src/Group/CyclicGroup.s"
	@echo "... src/Group/Group.o"
	@echo "... src/Group/Group.i"
	@echo "... src/Group/Group.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

