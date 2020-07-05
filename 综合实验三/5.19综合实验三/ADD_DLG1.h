#pragma once


// ADD_DLG1 对话框

class ADD_DLG1 : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DLG1)

public:
	ADD_DLG1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_DLG1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
