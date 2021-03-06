// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// IfcQueryMFC.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"

#include <locale>
#include <codecvt>
#include "IfcQueryMFC.h"
#include "window/MainFrame.h"

#include "IfcQueryDoc.h"
#include "IfcQueryMFCView.h"

#include <ifcpp/IFC4/EntityFactory.h>
#include <ifcpp/IFC4/TypeFactory.h>

#include <Inventor/Win/SoWin.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


BEGIN_MESSAGE_MAP(CIfcQueryMFCApp, CWinAppEx)
	ON_COMMAND(ID_APP_ABOUT, &CIfcQueryMFCApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinAppEx::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinAppEx::OnFileOpen)
	// Standard print setup command
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinAppEx::OnFilePrintSetup)
	
END_MESSAGE_MAP()

CIfcQueryMFCApp::CIfcQueryMFCApp()
{
	m_bHiColorIcons = TRUE;

	// support Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
#ifdef _MANAGED
	// If the application is built using Common Language Runtime support (/clr):
	//     1) This additional setting is needed for Restart Manager support to work properly.
	//     2) In your project, you must add a reference to System.Windows.Forms in order to build.
	System::Windows::Forms::Application::SetUnhandledExceptionMode(System::Windows::Forms::UnhandledExceptionMode::ThrowException);
#endif

	// TODO: replace application ID string below with unique ID string; recommended format for string is CompanyName.ProductName.SubProduct.VersionInformation
	SetAppID(_T("IfcQueryViewer.AppID.NoVersion"));

	// TODO: add construction code here, Place all significant initialization in InitInstance
}

CIfcQueryMFCApp theApp;


class IfcQueryDocTemplate : public CSingleDocTemplate
{
public:
	IfcQueryDocTemplate( UINT nIDResource, CRuntimeClass* pDocClass, CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass )
		: CSingleDocTemplate( nIDResource, pDocClass, pFrameClass, pViewClass )
	{
	}

	virtual Confidence MatchDocType( LPCTSTR lpszPathName, CDocument*& rpDocMatch )
	{
		Confidence conf = CSingleDocTemplate::MatchDocType( lpszPathName, rpDocMatch );
		if( conf == yesAlreadyOpen )
		{
			return yesAttemptForeign;
		}
		return conf;
	}
};

class IfcQueryDocManager : public CDocManager
{
	DECLARE_DYNAMIC( IfcQueryDocManager )
public:
	IfcQueryDocManager(){}
	virtual    ~IfcQueryDocManager() {}

	virtual CDocument* OpenDocumentFile( LPCTSTR lpszFileName )
	{
		return CDocManager::OpenDocumentFile( lpszFileName );
	}
	virtual CDocument* OpenDocumentFile( LPCTSTR lpszPathName, BOOL bAddToMRU )
	{
		std::wstring file_path = lpszPathName;
		CDocument	*pDoc;
		if( m_templateList.GetCount() > 0 )
		{
			POSITION	pos = m_templateList.GetHeadPosition();
			CDocTemplate *pTemplate = (CDocTemplate*)m_templateList.GetNext( pos );
			while( pos != NULL )
			{
				pTemplate = (CDocTemplate*)m_templateList.GetNext( pos );
				ASSERT_KINDOF( CDocTemplate, pTemplate );

			}
			if( file_path.size() == 0 )
			{
				pDoc = pTemplate->OpenDocumentFile( NULL );
			}
			else
			{
				pDoc = pTemplate->OpenDocumentFile( file_path.c_str() );
			}
			return pDoc;
		}
		return CDocManager::OpenDocumentFile( lpszPathName, bAddToMRU );
	}
};

IMPLEMENT_DYNAMIC(IfcQueryDocManager, CDocManager )

BOOL CIfcQueryMFCApp::InitInstance()
{
	SoWin::init( "" );  // changed for IfcQuery 3D viewer


	// InitCommonControlsEx() is required on Windows XP if an application manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}

	AfxEnableControlContainer();
	EnableTaskbarInteraction(FALSE);

	// AfxInitRichEdit2() is required to use RichEdit control
	// AfxInitRichEdit2();

	// Standard initialization
	SetRegistryKey(_T("IfcQueryExampleViewer"));
	LoadStdProfileSettings(16);  // Load standard INI file options (including MRU)
	InitContextMenuManager();
	InitKeyboardManager();
	InitTooltipManager();
	CMFCToolTipInfo ttParams;
	ttParams.m_bVislManagerTheme = TRUE;
	theApp.GetTooltipManager()->SetTooltipParams(AFX_TOOLTIP_TYPE_ALL, RUNTIME_CLASS(CMFCToolTipCtrl), &ttParams);

	m_pDocManager = new IfcQueryDocManager();

	// Register the application's document templates.  Document templates serve as the connection between documents, frame windows and views
	IfcQueryDocTemplate* pDocTemplate = new IfcQueryDocTemplate( IDR_MAINFRAME, RUNTIME_CLASS(IfcQueryDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(IfcQueryMFCView));
	if( !pDocTemplate )
	{
		return FALSE;
	}
	AddDocTemplate(pDocTemplate);
	
	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);

	// Enable DDE Execute open
	EnableShellOpen();
	RegisterShellFileTypes(TRUE);

	// Dispatch commands specified on the command line.  Will return FALSE if app was launched with /RegServer, /Register, /Unregserver or /Unregister.
	if( !ProcessShellCommand( cmdInfo ) )
	{
		return FALSE;
	}


	// The one and only window has been initialized, so show and update it
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	// call DragAcceptFiles only if there's a suffix 
	// In an SDI app, this should occur after ProcessShellCommand
	// Enable drag/drop open
	m_pMainWnd->DragAcceptFiles();

	return TRUE;
}

int CIfcQueryMFCApp::ExitInstance()
{
	//TODO: handle additional resources you may have added
	AfxOleTerm(FALSE);

	// changed for IfcQuery
	SoWin::exitMainLoop();
	SoWin::done();
	EntityFactory::emptyMapOfEntities();
	TypeFactory::emptyMapOfTypes();
	// end change

	return CWinAppEx::ExitInstance();
}

// CIfcQueryMFCApp message handlers


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// App command to run the dialog
void CIfcQueryMFCApp::OnAppAbout()
{

	//CDemoMFCDlg dlg;
	//m_pMainWnd = &dlg;
	//INT_PTR nResponse = dlg.DoModal();

	
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// CIfcQueryMFCApp customization load/save methods

void CIfcQueryMFCApp::PreLoadState()
{
	BOOL bNameValid;
	CString strName;
	bNameValid = strName.LoadString(IDS_EDIT_MENU);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EDIT);
	bNameValid = strName.LoadString(IDS_EXPLORER);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EXPLORER);
}

void CIfcQueryMFCApp::LoadCustomState()
{
}

void CIfcQueryMFCApp::SaveCustomState()
{
}

// CIfcQueryMFCApp message handlers



std::wstring s2ws(const std::string& str)
{
	std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converterX;
	return converterX.from_bytes(str);
}
