
// MFCApplication33Doc.h : CMFCApplication33Doc ��Ľӿ�
//


#pragma once
#include "MFCApplication33Set.h"


class CMFCApplication33Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication33Doc();
	DECLARE_DYNCREATE(CMFCApplication33Doc)

// ����
public:
	CMFCApplication33Set m_MFCApplication33Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCApplication33Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
