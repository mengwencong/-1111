
// 5.19�ۺ�ʵ����View.cpp : CMy519�ۺ�ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.19�ۺ�ʵ����.h"
#endif

#include "5.19�ۺ�ʵ����Set.h"
#include "5.19�ۺ�ʵ����Doc.h"
#include "5.19�ۺ�ʵ����View.h"
#include"ADD_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy519�ۺ�ʵ����View

IMPLEMENT_DYNCREATE(CMy519�ۺ�ʵ����View, CRecordView)

BEGIN_MESSAGE_MAP(CMy519�ۺ�ʵ����View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy519�ۺ�ʵ����View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMy519�ۺ�ʵ����View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMy519�ۺ�ʵ����View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_ADD, &CMy519�ۺ�ʵ����View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_Button1, &CMy519�ۺ�ʵ����View::OnBnClickedButton)
	ON_EN_CHANGE(IDC_EDIT1, &CMy519�ۺ�ʵ����View::OnEnChangeEdit1)
END_MESSAGE_MAP()

// CMy519�ۺ�ʵ����View ����/����

CMy519�ۺ�ʵ����View::CMy519�ۺ�ʵ����View()
	: CRecordView(IDD_MY519_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy519�ۺ�ʵ����View::~CMy519�ۺ�ʵ����View()
{
}

void CMy519�ۺ�ʵ����View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CMy519�ۺ�ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy519�ۺ�ʵ����View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My519�ۺ�ʵ����Set;
	CRecordView::OnInitialUpdate();

}


// CMy519�ۺ�ʵ����View ��ӡ

BOOL CMy519�ۺ�ʵ����View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy519�ۺ�ʵ����View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy519�ۺ�ʵ����View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy519�ۺ�ʵ����View ���

#ifdef _DEBUG
void CMy519�ۺ�ʵ����View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy519�ۺ�ʵ����View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy519�ۺ�ʵ����Doc* CMy519�ۺ�ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy519�ۺ�ʵ����Doc)));
	return (CMy519�ۺ�ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy519�ۺ�ʵ����View ���ݿ�֧��
CRecordset* CMy519�ۺ�ʵ����View::OnGetRecordset()
{
	return m_pSet;
}



// CMy519�ۺ�ʵ����View ��Ϣ�������




void CMy519�ۺ�ʵ����View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMy519�ۺ�ʵ����View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

}



void CMy519�ۺ�ʵ����View::OnBnClickedButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
}


void CMy519�ۺ�ʵ����View::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK)
	{
		long ll = adddlg.l;
		m_pSet->AddNew();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);

	}
}
