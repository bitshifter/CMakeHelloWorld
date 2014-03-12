if not exist build-devenv-vc11\nul mkdir build-devenv-vc11

cd build-devenv-vc11

cmake -G "Visual Studio 11" ..

cd ..
