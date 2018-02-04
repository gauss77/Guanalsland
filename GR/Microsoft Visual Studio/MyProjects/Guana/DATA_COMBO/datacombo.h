#if !defined(AFX_DATACOMBO_H__65EF0666_DD00_11D2_AD81_00504E02C39D__INCLUDED_)
#define AFX_DATACOMBO_H__65EF0666_DD00_11D2_AD81_00504E02C39D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPicture2;
class COleFont2;

/////////////////////////////////////////////////////////////////////////////
// CDataCombo wrapper class

class CDataCombo : public CWnd
{
protected:
	DECLARE_DYNCREATE(CDataCombo)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xf0d2f21c, 0xccb0, 0x11d0, { 0xa3, 0x16, 0x0, 0xaa, 0x0, 0x68, 0x8b, 0x10 } };
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
	CString GetListField();
	void SetListField(LPCTSTR lpszNewValue);
	CString GetBoundText();
	void SetBoundText(LPCTSTR lpszNewValue);
	CString GetBoundColumn();
	void SetBoundColumn(LPCTSTR lpszNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetMousePointer();
	void SetMousePointer(long nNewValue);
	BOOL GetLocked();
	void SetLocked(BOOL bNewValue);
	CPicture2 GetMouseIcon();
	void SetMouseIcon(LPDISPATCH newValue);
	void SetRefMouseIcon(LPDISPATCH newValue);
	BOOL GetIntegralHeight();
	void SetIntegralHeight(BOOL bNewValue);
	long GetSelStart();
	void SetSelStart(long nNewValue);
	long GetSelLength();
	void SetSelLength(long nNewValue);
	CString GetSelText();
	void SetSelText(LPCTSTR lpszNewValue);
	long GetMatchEntry();
	void SetMatchEntry(long nNewValue);
	VARIANT GetSelectedItem();
	short GetVisibleCount();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	unsigned long GetForeColor();
	void SetForeColor(unsigned long newValue);
	COleFont2 GetFont();
	void SetRefFont(LPDISPATCH newValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	BOOL GetMatchedWithList();
	long GetAppearance();
	void SetAppearance(long nNewValue);
	long GetHwnd();
	BOOL GetRightToLeft();
	void SetRightToLeft(BOOL bNewValue);
	LPUNKNOWN GetRowSource();
	void SetRefRowSource(LPUNKNOWN newValue);
	CString GetRowMember();
	void SetRowMember(LPCTSTR lpszNewValue);
	long GetOLEDragMode();
	void SetOLEDragMode(long nNewValue);
	long GetOLEDropMode();
	void SetOLEDropMode(long nNewValue);
	void ReFill();
	VARIANT GetVisibleItems(short nIndex);
	void Refresh();
	void OLEDrag();
};

class TMyDataCombo: public CDataCombo
	{
public:
	 TMyDataCombo(): CDataCombo()
			{
			}
		
		afx_msg BOOL OnHelpInfo( HELPINFO* lpHelpInfo );
		

		DECLARE_MESSAGE_MAP()
	};


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATACOMBO_H__65EF0666_DD00_11D2_AD81_00504E02C39D__INCLUDED_)
