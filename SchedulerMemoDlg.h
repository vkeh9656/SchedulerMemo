﻿
// SchedulerMemoDlg.h: 헤더 파일
//

#pragma once


// CSchedulerMemoDlg 대화 상자
class CSchedulerMemoDlg : public CDialogEx
{

private:
	CFont m_font;
// 생성입니다.
public:
	CSchedulerMemoDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SCHEDULERMEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CMonthCalCtrl m_my_calendar;
	afx_msg void OnMcnSelchangeMyCalendar(NMHDR* pNMHDR, LRESULT* pResult);
};
