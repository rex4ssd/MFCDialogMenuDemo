// CLogin.cpp : implementation file
//

#include "pch.h"
#include "MFCMenu.h"
#include "CLogin.h"
#include "afxdialogex.h"


// CLogin dialog

IMPLEMENT_DYNAMIC(CLogin, CDialog)

CLogin::CLogin(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_LOGIN, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CLogin::~CLogin()
{
}

void CLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLogin, CDialog)
	//ON_BN_CLICKED(ID_HI_1, &CLogin::OnLogin)
END_MESSAGE_MAP()


// CLogin message handlers

