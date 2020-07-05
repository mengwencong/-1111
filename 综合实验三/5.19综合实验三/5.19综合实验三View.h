
// 5.19综合实验三View.h : CMy519综合实验三View 类的接口
//

#pragma once

class CMy519综合实验三Set;

class CMy519综合实验三View : public CRecordView
{
protected: // 仅从序列化创建
	CMy519综合实验三View();
	DECLARE_DYNCREATE(CMy519综合实验三View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY519_FORM };
#endif
	CMy519综合实验三Set* m_pSet;

// 特性
public:
	CMy519综合实验三Doc* GetDocument() const;

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
	virtual ~CMy519综合实验三View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	long number;
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedButton();
	afx_msg void OnEnChangeEdit1();
};

#ifndef _DEBUG  // 5.19综合实验三View.cpp 中的调试版本
inline CMy519综合实验三Doc* CMy519综合实验三View::GetDocument() const
   { return reinterpret_cast<CMy519综合实验三Doc*>(m_pDocument); }
#endif

