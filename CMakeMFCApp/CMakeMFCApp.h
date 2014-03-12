
// CMakeMFCApp.h : main header file for the CMakeMFCApp application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CCMakeMFCAppApp:
// See CMakeMFCApp.cpp for the implementation of this class
//

class CCMakeMFCAppApp : public CWinApp
{
public:
	CCMakeMFCAppApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCMakeMFCAppApp theApp;
