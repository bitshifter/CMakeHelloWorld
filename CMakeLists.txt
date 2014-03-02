CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12 )
PROJECT(CMakeHelloWorld)

#SET(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" ./)
INCLUDE(PrecompiledHeader.cmake)

SET(SRCS CMakeHelloWorld.cpp stdafx.cpp)

ADD_EXECUTABLE(CMakeHelloWorld WIN32 ${SRCS} CMakeHelloWorld.rc)

ADD_PRECOMPILED_HEADER(CMakeHelloWorld stdafx.h)
