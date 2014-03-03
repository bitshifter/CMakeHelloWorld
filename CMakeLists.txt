IF(CMAKE_C_SIMULATE_ID OR CMAKE_CXX_SIMULATE_ID)
  CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0 )
ELSE()
  CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12 )
ENDIF()
PROJECT(CMakeHelloWorld)

INCLUDE(PrecompiledHeader.cmake)

SET(SRCS
  CMakeHelloWorld.cpp
  stdafx.cpp
  )

SET(HDRS
  CMakeHelloWorld.h
  stdafx.h
  targetver.h
  )

SET(RSCS CMakeHelloWorld.rc)
ADD_EXECUTABLE(CMakeHelloWorld WIN32 ${SRCS} ${HDRS} ${RSCS})

ADD_PRECOMPILED_HEADER(CMakeHelloWorld stdafx.h)
