
// MFCApplication33View.h : CMFCApplication33View ��Ľӿ�
//

#pragma once

class CMFCApplication33Set;

class CMFCApplication33View : public CRecordView
{
protected: // �������л�����
	CMFCApplication33View();
	DECLARE_DYNCREATE(CMFCApplication33View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFCAPPLICATION33_FORM };
#endif
	CMFCApplication33Set* m_pSet;

// ����
public:
	CMFCApplication33Doc* GetDocument() const;

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
	virtual ~CMFCApplication33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	CString as;
	long age;
	long num;
};

#ifndef _DEBUG  // MFCApplication33View.cpp �еĵ��԰汾
inline CMFCApplication33Doc* CMFCApplication33View::GetDocument() const
   { return reinterpret_cast<CMFCApplication33Doc*>(m_pDocument); }
#endif

