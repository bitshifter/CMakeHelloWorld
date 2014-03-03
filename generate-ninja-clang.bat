@call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86

@set builddir=build-ninja-clang
if not exist %builddir%\nul mkdir %builddir%

cd %builddir%

cmake -G "CodeBlocks - Ninja" -DCMAKE_SYSTEM_NAME=Windows -DCMAKE_C_COMPILER="C:/Program Files (x86)/LLVM/bin/clang-cl.exe" -DCMAKE_CXX_COMPILER="C:/Program Files (x86)/LLVM/bin/clang-cl.exe" -DCMAKE_C_SIMULATE_ID=MSVC -DCMAKE_CXX_SIMULATE_ID=MSVC -DCMAKE_BUILD_TYPE=RelWithDebInfo ..

cd ..
