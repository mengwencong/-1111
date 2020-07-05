
// MFCApplication33View.h : CMFCApplication33View 类的接口
//

#pragma once

class CMFCApplication33Set;

class CMFCApplication33View : public CRecordView
{
protected: // 仅从序列化创建
	CMFCApplication33View();
	DECLARE_DYNCREATE(CMFCApplication33View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFCAPPLICATION33_FORM };
#endif
	CMFCApplication33Set* m_pSet;

// 特性
public:
	CMFCApplication33Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFCApplication33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	CString as;
	long age;
	long num;
};

#ifndef _DEBUG  // MFCApplication33View.cpp 中的调试版本
inline CMFCApplication33Doc* CMFCApplication33View::GetDocument() const
   { return reinterpret_cast<CMFCApplication33Doc*>(m_pDocument); }
#endif

