
// Draw a rectangle using pen on mfc viewView.cpp : implementation of the CDrawarectangleusingpenonmfcviewView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw a rectangle using pen on mfc view.h"
#endif

#include "Draw a rectangle using pen on mfc viewDoc.h"
#include "Draw a rectangle using pen on mfc viewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawarectangleusingpenonmfcviewView

IMPLEMENT_DYNCREATE(CDrawarectangleusingpenonmfcviewView, CView)

BEGIN_MESSAGE_MAP(CDrawarectangleusingpenonmfcviewView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawarectangleusingpenonmfcviewView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawarectangleusingpenonmfcviewView construction/destruction

CDrawarectangleusingpenonmfcviewView::CDrawarectangleusingpenonmfcviewView() noexcept
{
	// TODO: add construction code here

}

CDrawarectangleusingpenonmfcviewView::~CDrawarectangleusingpenonmfcviewView()
{
}

BOOL CDrawarectangleusingpenonmfcviewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawarectangleusingpenonmfcviewView drawing

void CDrawarectangleusingpenonmfcviewView::OnDraw(CDC* pDC)
{	

	CPen pen;
	pen.CreatePen(PS_SOLID,1,RGB(160,123,225));
	pDC->SelectObject(&pen);

	pDC->Rectangle(80,120,220,360);

	CDrawarectangleusingpenonmfcviewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CDrawarectangleusingpenonmfcviewView printing


void CDrawarectangleusingpenonmfcviewView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawarectangleusingpenonmfcviewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawarectangleusingpenonmfcviewView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawarectangleusingpenonmfcviewView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawarectangleusingpenonmfcviewView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawarectangleusingpenonmfcviewView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawarectangleusingpenonmfcviewView diagnostics

#ifdef _DEBUG
void CDrawarectangleusingpenonmfcviewView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawarectangleusingpenonmfcviewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawarectangleusingpenonmfcviewDoc* CDrawarectangleusingpenonmfcviewView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawarectangleusingpenonmfcviewDoc)));
	return (CDrawarectangleusingpenonmfcviewDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawarectangleusingpenonmfcviewView message handlers
