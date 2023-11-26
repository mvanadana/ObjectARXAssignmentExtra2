// AssignmentExtra2.h : main header file for the AssignmentExtra2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CAssignmentExtra2App
// See AssignmentExtra2.cpp for the implementation of this class
//

class CAssignmentExtra2App : public CWinApp
{
public:
	CAssignmentExtra2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
