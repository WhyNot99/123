
// Talk915LuckyDrawPro.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include <list>

// CTalk915LuckyDrawProApp: 
// �йش����ʵ�֣������ Talk915LuckyDrawPro.cpp
//

class CTalk915LuckyDrawProApp : public CWinApp
{
public:
	CTalk915LuckyDrawProApp();

// ��д
public:
	virtual BOOL InitInstance();
// ʵ��

	DECLARE_MESSAGE_MAP()
public:
	std::list<CString> LuckMan;
};

extern CTalk915LuckyDrawProApp theApp;