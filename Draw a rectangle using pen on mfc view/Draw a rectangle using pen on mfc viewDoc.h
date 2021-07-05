
// Draw a rectangle using pen on mfc viewDoc.h : interface of the CDrawarectangleusingpenonmfcviewDoc class
//


#pragma once


class CDrawarectangleusingpenonmfcviewDoc : public CDocument
{
protected: // create from serialization only
	CDrawarectangleusingpenonmfcviewDoc() noexcept;
	DECLARE_DYNCREATE(CDrawarectangleusingpenonmfcviewDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CDrawarectangleusingpenonmfcviewDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
