@call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86

if not exist build-ninja-vc12\nul mkdir build-ninja-vc12

cd build-ninja-vc12

cmake -G "CodeBlocks - Ninja" -DCMAKE_SYSTEM_NAME=Windows -DCMAKE_C_COMPILER=cl -DCMAKE_C_LINK_EXECUTABLE=link -DCMAKE_C_COMPILER_VERSION=18.00 -DCMAKE_BUILD_TYPE=RelWithDebInfo ..

cd ..
