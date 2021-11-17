
// DialogBox1811View.cpp : implémentation de la classe CDialogBox1811View
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "DialogBox1811.h"
#endif

#include "DialogBox1811Doc.h"
#include "DialogBox1811View.h"
#include "COptions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDialogBox1811View

IMPLEMENT_DYNCREATE(CDialogBox1811View, CView)

BEGIN_MESSAGE_MAP(CDialogBox1811View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_PARAM32771, &CDialogBox1811View::OnToolsOptions)
END_MESSAGE_MAP()

// construction/destruction de CDialogBox1811View

CDialogBox1811View::CDialogBox1811View() noexcept
{
	// TODO: ajoutez ici du code de construction

}

CDialogBox1811View::~CDialogBox1811View()
{
}

BOOL CDialogBox1811View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CDialogBox1811View

void CDialogBox1811View::OnDraw(CDC* pDC)
{
	CDialogBox1811Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les données natives
	CRect clientRect;
	GetClientRect(clientRect);
	if (m_bgColor == 0) {
		pDC->FillSolidRect(clientRect, RGB(255, 0, 0));
	}
	else if (m_bgColor == 1) {
		pDC->FillSolidRect(clientRect, RGB(0, 0, 255));
	}
	pDC->TextOutW(m_x, m_y, m_text);
}

void CDialogBox1811View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDialogBox1811View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// diagnostics de CDialogBox1811View

#ifdef _DEBUG
void CDialogBox1811View::AssertValid() const
{
	CView::AssertValid();
}

void CDialogBox1811View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDialogBox1811Doc* CDialogBox1811View::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDialogBox1811Doc)));
	return (CDialogBox1811Doc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages de CDialogBox1811View


void CDialogBox1811View::OnToolsOptions()
{
	// TODO: ajoutez ici le code de votre gestionnaire de commande
	COptions dlgOptions;

	dlgOptions.m_text = m_text;
	dlgOptions.m_bgColor = m_bgColor;
	dlgOptions.m_x = m_x;
	dlgOptions.m_y = m_y;

	if (dlgOptions.DoModal() == IDOK) {
		m_text = dlgOptions.m_text;
		m_bgColor = dlgOptions.m_bgColor;
		m_x = dlgOptions.m_x;
		m_y = dlgOptions.m_y;
	}
	Invalidate();
	UpdateWindow();
}
