# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Sagar\Source\Repos\kmint_handout

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Sagar\Source\Repos\kmint_handout\cmake-build-debug

# Utility rule file for dependencies.

# Include the progress variables for this target.
include CMakeFiles\dependencies.dir\progress.make

CMakeFiles\dependencies:
	echo >nul && "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E copy C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2/lib/x86/SDL2.dll C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2_image/lib/x86/SDL2_image.dll C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2_image/lib/x86/libjpeg-9.dll C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2_image/lib/x86/libpng16-16.dll C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2_image/lib/x86/libtiff-5.dll C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2_image/lib/x86/libwebp-7.dll C:/Users/Sagar/Source/Repos/kmint_handout/dependencies/SDL2_image/lib/x86/zlib1.dll C:/Users/Sagar/Source/Repos/kmint_handout/cmake-build-debug/out

dependencies: CMakeFiles\dependencies
dependencies: CMakeFiles\dependencies.dir\build.make

.PHONY : dependencies

# Rule to build all files generated by this target.
CMakeFiles\dependencies.dir\build: dependencies

.PHONY : CMakeFiles\dependencies.dir\build

CMakeFiles\dependencies.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dependencies.dir\cmake_clean.cmake
.PHONY : CMakeFiles\dependencies.dir\clean

CMakeFiles\dependencies.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Sagar\Source\Repos\kmint_handout C:\Users\Sagar\Source\Repos\kmint_handout C:\Users\Sagar\Source\Repos\kmint_handout\cmake-build-debug C:\Users\Sagar\Source\Repos\kmint_handout\cmake-build-debug C:\Users\Sagar\Source\Repos\kmint_handout\cmake-build-debug\CMakeFiles\dependencies.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\dependencies.dir\depend

