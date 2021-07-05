
// Draw a rectangle using pen on mfc viewView.h : interface of the CDrawarectangleusingpenonmfcviewView class
//

#pragma once


class CDrawarectangleusingpenonmfcviewView : public CView
{
protected: // create from serialization only
	CDrawarectangleusingpenonmfcviewView() noexcept;
	DECLARE_DYNCREATE(CDrawarectangleusingpenonmfcviewView)

// Attributes
public:
	CDrawarectangleusingpenonmfcviewDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawarectangleusingpenonmfcviewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw a rectangle using pen on mfc viewView.cpp
inline CDrawarectangleusingpenonmfcviewDoc* CDrawarectangleusingpenonmfcviewView::GetDocument() const
   { return reinterpret_cast<CDrawarectangleusingpenonmfcviewDoc*>(m_pDocument); }
#endif

