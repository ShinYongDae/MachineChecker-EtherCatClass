#pragma once


// CDlgCameraViewWorks12k 대화 상자입니다.

class CDlgCameraViewWorks12k : public CDialog
{
	DECLARE_DYNAMIC(CDlgCameraViewWorks12k)

	void Init();
	void Close();

public:
	CDlgCameraViewWorks12k(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CDlgCameraViewWorks12k();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_CAMERA_VIEWWORKS_12K };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
