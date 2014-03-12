
// CMakeMFCAppView.cpp : implementation of the CCMakeMFCAppView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "CMakeMFCApp.h"
#endif

#include "CMakeMFCAppDoc.h"
#include "CMakeMFCAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCMakeMFCAppView

IMPLEMENT_DYNCREATE(CCMakeMFCAppView, CView)

BEGIN_MESSAGE_MAP(CCMakeMFCAppView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCMakeMFCAppView construction/destruction

CCMakeMFCAppView::CCMakeMFCAppView()
{
	// TODO: add construction code here

}

CCMakeMFCAppView::~CCMakeMFCAppView()
{
}

BOOL CCMakeMFCAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CCMakeMFCAppView drawing

void CCMakeMFCAppView::OnDraw(CDC* /*pDC*/)
{
	CCMakeMFCAppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CCMakeMFCAppView printing

BOOL CCMakeMFCAppView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCMakeMFCAppView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCMakeMFCAppView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CCMakeMFCAppView diagnostics

#ifdef _DEBUG
void CCMakeMFCAppView::AssertValid() const
{
	CView::AssertValid();
}

void CCMakeMFCAppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCMakeMFCAppDoc* CCMakeMFCAppView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCMakeMFCAppDoc)));
	return (CCMakeMFCAppDoc*)m_pDocument;
}
#endif //_DEBUG


// CCMakeMFCAppView message handlers
