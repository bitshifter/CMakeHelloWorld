if not exist build-devenv-vc12\nul mkdir build-devenv-vc12

cd build-devenv-vc12

cmake -G "Visual Studio 12" ..

cd ..
