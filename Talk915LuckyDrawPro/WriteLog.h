#ifndef __WRITELOG_H__
#define __WRITELOG_H__
#pragma once
#include <locale> 
void OutputLog(LPCTSTR logName, CString msg)
{
	try
	{
		setlocale( LC_CTYPE,("chs")); 
		//�����ļ��Ĵ򿪲���
		CStdioFile outFile(logName, CFile::modeNoTruncate | CFile::modeCreate | CFile::modeWrite | CFile::typeText);	
		CString msLine;
		CTime tt = CTime::GetCurrentTime();

		//��ΪLog�ļ�������Ҫ��ÿ��Log��ʱ�����ʱ���ʽ�����ɶ��壬
		//����ĸ�ʽ�磺2010-June-10 Thursday, 15:58:12

		msLine += tt.Format("[%Y-%B-%d %A, %H:%M:%S]:");
		msLine += msg;
		msLine += "\n";

		//���ļ�ĩβ�����¼�¼
		outFile.SeekToEnd();
		outFile.WriteString( msLine );
		outFile.Close();
	}
	catch(CFileException *fx)
	{
		fx->Delete();
	}
}

#endif