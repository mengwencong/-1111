
// 5.19综合实验三View.cpp : CMy519综合实验三View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5.19综合实验三.h"
#endif

#include "5.19综合实验三Set.h"
#include "5.19综合实验三Doc.h"
#include "5.19综合实验三View.h"
#include"ADD_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy519综合实验三View

IMPLEMENT_DYNCREATE(CMy519综合实验三View, CRecordView)

BEGIN_MESSAGE_MAP(CMy519综合实验三View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy519综合实验三View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMy519综合实验三View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMy519综合实验三View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_ADD, &CMy519综合实验三View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_Button1, &CMy519综合实验三View::OnBnClickedButton)
	ON_EN_CHANGE(IDC_EDIT1, &CMy519综合实验三View::OnEnChangeEdit1)
END_MESSAGE_MAP()

// CMy519综合实验三View 构造/析构

CMy519综合实验三View::CMy519综合实验三View()
	: CRecordView(IDD_MY519_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMy519综合实验三View::~CMy519综合实验三View()
{
}

void CMy519综合实验三View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CMy519综合实验三View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMy519综合实验三View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My519综合实验三Set;
	CRecordView::OnInitialUpdate();

}


// CMy519综合实验三View 打印

BOOL CMy519综合实验三View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy519综合实验三View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy519综合实验三View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy519综合实验三View 诊断

#ifdef _DEBUG
void CMy519综合实验三View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy519综合实验三View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy519综合实验三Doc* CMy519综合实验三View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy519综合实验三Doc)));
	return (CMy519综合实验三Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy519综合实验三View 数据库支持
CRecordset* CMy519综合实验三View::OnGetRecordset()
{
	return m_pSet;
}



// CMy519综合实验三View 消息处理程序




void CMy519综合实验三View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMy519综合实验三View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

}



void CMy519综合实验三View::OnBnClickedButton()
{
	// TODO: 在此添加控件通知处理程序代码
	
}


void CMy519综合实验三View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
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
