#if !defined(AFX__RECORDSETNAVBAR_H__1BFF4077_D899_11D2_AD75_00504E02C39D__INCLUDED_)
#define AFX__RECORDSETNAVBAR_H__1BFF4077_D899_11D2_AD75_00504E02C39D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// C_RecordsetNavbar wrapper class

class C_RecordsetNavbar : public CWnd
{
protected:
	DECLARE_DYNCREATE(C_RecordsetNavbar)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x58f3d268, 0xfedf, 0x11d0, { 0x9c, 0x7f, 0x0, 0x60, 0x8, 0x18, 0x40, 0xf3 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	CString GetRecordset();
	void SetRecordset(LPCTSTR lpszNewValue);
	BOOL GetUpdateOnMove();
	void SetUpdateOnMove(BOOL bNewValue);
	BOOL GetMoveFirst();
	void SetMoveFirst(BOOL bNewValue);
	BOOL GetMovePrev();
	void SetMovePrev(BOOL bNewValue);
	BOOL GetMoveNext();
	void SetMoveNext(BOOL bNewValue);
	BOOL GetMoveLast();
	void SetMoveLast(BOOL bNewValue);
	CString GetFirstCaption();
	void SetFirstCaption(LPCTSTR lpszNewValue);
	CString GetPrevCaption();
	void SetPrevCaption(LPCTSTR lpszNewValue);
	CString GetNextCaption();
	void SetNextCaption(LPCTSTR lpszNewValue);
	CString GetLastCaption();
	void SetLastCaption(LPCTSTR lpszNewValue);
	BOOL GetFirstImage();
	void SetFirstImage(BOOL bNewValue);
	BOOL GetPrevImage();
	void SetPrevImage(BOOL bNewValue);
	BOOL GetNextImage();
	void SetNextImage(BOOL bNewValue);
	BOOL GetLastImage();
	void SetLastImage(BOOL bNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__RECORDSETNAVBAR_H__1BFF4077_D899_11D2_AD75_00504E02C39D__INCLUDED_)
