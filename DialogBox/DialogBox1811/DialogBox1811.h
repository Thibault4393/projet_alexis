
// DialogBox1811.h : fichier d'en-tête principal de l'application DialogBox1811
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CDialogBox1811App :
// Consultez DialogBox1811.cpp pour l'implémentation de cette classe
//

class CDialogBox1811App : public CWinAppEx
{
public:
	CDialogBox1811App() noexcept;


// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDialogBox1811App theApp;
