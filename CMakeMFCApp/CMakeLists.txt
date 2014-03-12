IF(CMAKE_C_SIMULATE_ID OR CMAKE_CXX_SIMULATE_ID)
  CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0 )
ELSE()
  CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12 )
ENDIF()
PROJECT(CMakeMFCApp)

INCLUDE(PrecompiledHeader)

SET( CMAKE_MFC_FLAG 2 ) # 2 = MFC as a DLL
ADD_DEFINITIONS( -D_AFXDLL )

SET(SRCS
  CMakeMFCApp.cpp
  CMakeMFCAppDoc.cpp
  CMakeMFCAppView.cpp
  ChildFrm.cpp
  MainFrm.cpp
  stdafx.cpp
  )

SET(HDRS
  CMakeMFCApp.h
  CMakeMFCAppDoc.h
  CMakeMFCAppView.h
  ChildFrm.h
  MainFrm.h
  Resource.h
  stdafx.h
  targetver.h
  )

SET(RSCS CMakeMFCApp.rc)
ADD_EXECUTABLE(CMakeMFCApp WIN32 ${SRCS} ${HDRS} ${RSCS})

ADD_PRECOMPILED_HEADER(CMakeMFCApp stdafx.h)
