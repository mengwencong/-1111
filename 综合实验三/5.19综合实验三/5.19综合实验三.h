
// 5.19�ۺ�ʵ����.h : 5.19�ۺ�ʵ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy519�ۺ�ʵ����App:
// �йش����ʵ�֣������ 5.19�ۺ�ʵ����.cpp
//

class CMy519�ۺ�ʵ����App : public CWinApp
{
public:
	CMy519�ۺ�ʵ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy519�ۺ�ʵ����App theApp;
