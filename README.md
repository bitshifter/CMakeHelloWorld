# CMake Example Project

This is a basic Windows application with an accompanying CMakeLists.txt. The
project includes a .rc file and precompiled headers to exercise common
Windows build requirements.

I am using it to experiment with Ninja builds using different compilers on
Windows.

There are batch files demonstrating the CMake command line required for each
build.

## Visual Studio 12

Requirements:
 * CMake 2.8.12.2
 * Microsoft Visual Studio 12

Run generate-devenv-vc12.bat.

## Ninja and MSVC12

Requirements:
 * CMake 2.8.12.2
 * Microsoft Visual Studio 12
 * Ninja 1.4

Run generate-ninja-vc12.bat.

## Ninja and Clang

 * CMake 3.0.0
 * Microsoft Visual Studio 12
 * Ninja 1.4
 * LLVM 3.4 for Windows

Building a Windows application requires clang-cl.exe which simulates MSVC's
arguments and output. This uses the ```CMAKE_C_SIMULATE_ID``` and
```CMAKE_CXX_SIMULATE_ID``` CMake variables which are new in CMake 3.0.0.

Microsoft Visual Studio 12 is still required for link.exe and the Windows SDK.

Run generate-ninja-clang.bat.

