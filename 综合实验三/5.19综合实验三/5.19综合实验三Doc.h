
// 5.19�ۺ�ʵ����Doc.h : CMy519�ۺ�ʵ����Doc ��Ľӿ�
//


#pragma once
#include "5.19�ۺ�ʵ����Set.h"


class CMy519�ۺ�ʵ����Doc : public CDocument
{
protected: // �������л�����
	CMy519�ۺ�ʵ����Doc();
	DECLARE_DYNCREATE(CMy519�ۺ�ʵ����Doc)

// ����
public:
	CMy519�ۺ�ʵ����Set m_My519�ۺ�ʵ����Set;

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
	virtual ~CMy519�ۺ�ʵ����Doc();
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
