
// MFCApplication33.h : MFCApplication33 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication33App:
// �йش����ʵ�֣������ MFCApplication33.cpp
//

class CMFCApplication33App : public CWinAppEx
{
public:
	CMFCApplication33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication33App theApp;
