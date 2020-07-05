
// MFCApplication33View.cpp : CMFCApplication33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCApplication33View 构造/析构

CMFCApplication33View::CMFCApplication33View()
	: CRecordView(IDD_MFCAPPLICATION33_FORM)
	, id(0)
	, name(_T(""))
	, as(_T(""))
	, age(0)
	, num(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMFCApplication33View::~CMFCApplication33View()
{
}

void CMFCApplication33View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMFCApplication33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMFCApplication33View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCApplication33Set;
	CRecordView::OnInitialUpdate();

}


// CMFCApplication33View 打印

BOOL CMFCApplication33View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCApplication33View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCApplication33View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFCApplication33View 诊断

#ifdef _DEBUG
void CMFCApplication33View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCApplication33View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCApplication33Doc* CMFCApplication33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication33Doc)));
	return (CMFCApplication33Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication33View 数据库支持
CRecordset* CMFCApplication33View::OnGetRecordset()
{
	return m_pSet;
}



// CMFCApplication33View 消息处理程序
