IF(CMAKE_C_SIMULATE_ID OR CMAKE_CXX_SIMULATE_ID)
  CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0 )
ELSE()
  CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12 )
ENDIF()
PROJECT(CMakeWindowsApp)

INCLUDE(PrecompiledHeader)

SET(SRCS
  CMakeWindowsApp.cpp
  stdafx.cpp
  )

SET(HDRS
  CMakeWindowsApp.h
  stdafx.h
  targetver.h
  )

SET(RSCS CMakeWindowsApp.rc)
ADD_EXECUTABLE(CMakeWindowsApp WIN32 ${SRCS} ${HDRS} ${RSCS})

ADD_PRECOMPILED_HEADER(CMakeWindowsApp stdafx.h)
