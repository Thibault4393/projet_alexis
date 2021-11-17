
// DialogBox1811View.h : interface de la classe CDialogBox1811View
//

#pragma once


class CDialogBox1811View : public CView
{
protected: // création à partir de la sérialisation uniquement
	CDialogBox1811View() noexcept;
	DECLARE_DYNCREATE(CDialogBox1811View)

// Attributs
public:
	CDialogBox1811Doc* GetDocument() const;

// Opérations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implémentation
public:
	virtual ~CDialogBox1811View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions générées de la table des messages
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnToolsOptions();
private:
	CString m_text{_T("Placer le texte ici")};
	int m_bgColor{0};
	int m_x{100};
	int m_y{200};
};

#ifndef _DEBUG  // version Debug dans DialogBox1811View.cpp
inline CDialogBox1811Doc* CDialogBox1811View::GetDocument() const
   { return reinterpret_cast<CDialogBox1811Doc*>(m_pDocument); }
#endif

