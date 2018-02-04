#if !defined(AFX_SPLIT_H__7EF1652F_D93B_11D2_AD78_00504E02C39D__INCLUDED_)
#define AFX_SPLIT_H__7EF1652F_D93B_11D2_AD78_00504E02C39D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CColumns;

/////////////////////////////////////////////////////////////////////////////
// CSplit wrapper class

class CSplit : public COleDispatchDriver
{
public:
	CSplit() {}		// Calls COleDispatchDriver default constructor
	CSplit(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSplit(const CSplit& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAllowFocus();
	void SetAllowFocus(BOOL bNewValue);
	BOOL GetAllowRowSizing();
	void SetAllowRowSizing(BOOL bNewValue);
	BOOL GetAllowSizing();
	void SetAllowSizing(BOOL bNewValue);
	BOOL GetCurrentCellVisible();
	void SetCurrentCellVisible(BOOL bNewValue);
	VARIANT GetFirstRow();
	void SetFirstRow(const VARIANT& newValue);
	short GetIndex();
	short GetLeftCol();
	void SetLeftCol(short nNewValue);
	BOOL GetLocked();
	void SetLocked(BOOL bNewValue);
	long GetMarqueeStyle();
	void SetMarqueeStyle(long nNewValue);
	BOOL GetRecordSelectors();
	void SetRecordSelectors(BOOL bNewValue);
	long GetScrollBars();
	void SetScrollBars(long nNewValue);
	short GetScrollGroup();
	void SetScrollGroup(short nNewValue);
	short GetSelEndCol();
	void SetSelEndCol(short nNewValue);
	short GetSelStartCol();
	void SetSelStartCol(short nNewValue);
	VARIANT GetSize();
	void SetSize(const VARIANT& newValue);
	long GetSizeMode();
	void SetSizeMode(long nNewValue);
	void ClearSelCols();
	CColumns GetColumns();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLIT_H__7EF1652F_D93B_11D2_AD78_00504E02C39D__INCLUDED_)
