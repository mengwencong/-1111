
// MFCApplication33Set.cpp : CMFCApplication33Set ���ʵ��
//

#include "stdafx.h"
#include "MFCApplication33.h"
#include "MFCApplication33Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication33Set ʵ��

// ���������� 2020��7��5��, 21:29

IMPLEMENT_DYNAMIC(CMFCApplication33Set, CRecordset)

CMFCApplication33Set::CMFCApplication33Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = 0;
	m_4 = 0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFCApplication33Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f;DBQ=C:\\Users\\DELL\\Documents\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMFCApplication33Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ]");
}

void CMFCApplication33Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Long(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Long(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CMFCApplication33Set ���

#ifdef _DEBUG
void CMFCApplication33Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFCApplication33Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

