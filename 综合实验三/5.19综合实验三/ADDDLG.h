#pragma once


// ADDDLG �Ի���

class ADDDLG : public CDialogEx
{
	DECLARE_DYNAMIC(ADDDLG)

public:
	ADDDLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADDDLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long l;
	long i;
};
