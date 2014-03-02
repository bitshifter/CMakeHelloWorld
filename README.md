# CMake Example Project

This is a basic Windows application with an accompanying CMakeLists.txt. The
project includes a .rc file and precompiled headers to exercise common
Windows build requirements.

I am using it to experiment with Ninja builds using different compilers on
Windows.

There are batch files demonstrating the CMake command line required for each
build.

## Visual Studio 12

Run generate-devenv-vc12.bat.

## Ninja and MSVC12

First make sure ninja 1.4 or greater is in your path, then run  
generate-ninja-vc12.bat.

## Ninja and Clang

Coming soon!

