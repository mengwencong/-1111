
// MFCApplication33View.cpp : CMFCApplication33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication33.h"
#endif

#include "MFCApplication33Set.h"
#include "MFCApplication33Doc.h"
#include "MFCApplication33View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication33View

IMPLEMENT_DYNCREATE(CMFCApplication33View, CRecordView)

BEGIN_MESSAGE_MAP(CMFCApplication33View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCApplication33View ����/����

CMFCApplication33View::CMFCApplication33View()
	: CRecordView(IDD_MFCAPPLICATION33_FORM)
	, id(0)
	, name(_T(""))
	, as(_T(""))
	, age(0)
	, num(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication33View::~CMFCApplication33View()
{
}

void CMFCApplication33View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMFCApplication33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFCApplication33View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCApplication33Set;
	CRecordView::OnInitialUpdate();

}


// CMFCApplication33View ��ӡ

BOOL CMFCApplication33View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication33View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication33View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication33View ���

#ifdef _DEBUG
void CMFCApplication33View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCApplication33View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCApplication33Doc* CMFCApplication33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication33Doc)));
	return (CMFCApplication33Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication33View ���ݿ�֧��
CRecordset* CMFCApplication33View::OnGetRecordset()
{
	return m_pSet;
}



// CMFCApplication33View ��Ϣ�������
