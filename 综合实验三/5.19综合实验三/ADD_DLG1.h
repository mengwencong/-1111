#pragma once


// ADD_DLG1 �Ի���

class ADD_DLG1 : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DLG1)

public:
	ADD_DLG1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_DLG1();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
