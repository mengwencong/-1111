
// 5.19�ۺ�ʵ����View.h : CMy519�ۺ�ʵ����View ��Ľӿ�
//

#pragma once

class CMy519�ۺ�ʵ����Set;

class CMy519�ۺ�ʵ����View : public CRecordView
{
protected: // �������л�����
	CMy519�ۺ�ʵ����View();
	DECLARE_DYNCREATE(CMy519�ۺ�ʵ����View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY519_FORM };
#endif
	CMy519�ۺ�ʵ����Set* m_pSet;

// ����
public:
	CMy519�ۺ�ʵ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy519�ۺ�ʵ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // 5.19�ۺ�ʵ����View.cpp �еĵ��԰汾
inline CMy519�ۺ�ʵ����Doc* CMy519�ۺ�ʵ����View::GetDocument() const
   { return reinterpret_cast<CMy519�ۺ�ʵ����Doc*>(m_pDocument); }
#endif

