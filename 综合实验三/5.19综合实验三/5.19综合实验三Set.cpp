
// 5.19�ۺ�ʵ����Set.cpp : CMy519�ۺ�ʵ����Set ���ʵ��
//

#include "stdafx.h"
#include "5.19�ۺ�ʵ����.h"
#include "5.19�ۺ�ʵ����Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy519�ۺ�ʵ����Set ʵ��

// ���������� 2020��5��19��, 14:47

IMPLEMENT_DYNAMIC(CMy519�ۺ�ʵ����Set, CRecordset)

CMy519�ۺ�ʵ����Set::CMy519�ۺ�ʵ����Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy519�ۺ�ʵ����Set::GetDefaultConnect()
{
	return _T("DSN=\x7efc\x5408\x5b9e\x9a8c\x4e09;DBQ=D:\\QQ\x4e0b\x8f7d\\\x7efc\x5408\x5b9e\x9a8c\x4e09.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy519�ۺ�ʵ����Set::GetDefaultSQL()
{
	return _T("[�ۺ�ʵ����]");
}

void CMy519�ۺ�ʵ����Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CMy519�ۺ�ʵ����Set ���

#ifdef _DEBUG
void CMy519�ۺ�ʵ����Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy519�ۺ�ʵ����Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

