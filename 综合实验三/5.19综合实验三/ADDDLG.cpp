// ADDDLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "5.19�ۺ�ʵ����.h"
#include "ADDDLG.h"
#include "afxdialogex.h"


// ADDDLG �Ի���

IMPLEMENT_DYNAMIC(ADDDLG, CDialogEx)

ADDDLG::ADDDLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, l(0)
	, i(0)
{

}

ADDDLG::~ADDDLG()
{
}

void ADDDLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, l);
	DDX_Text(pDX, IDC_ADD, i);
}


BEGIN_MESSAGE_MAP(ADDDLG, CDialogEx)
END_MESSAGE_MAP()


// ADDDLG ��Ϣ�������
