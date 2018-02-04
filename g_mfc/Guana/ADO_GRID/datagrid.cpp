// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "datagrid.h"

// Dispatch interfaces referenced by this interface
#include "Font1.h"
#include "StdDataFormatsDisp.h"
#include "Picture.h"
#include "Columns.h"
#include "SelBookmarks.h"
#include "Splits.h"

#include "..\\HELP\\guana.hh"


/////////////////////////////////////////////////////////////////////////////
// CDataGrid

IMPLEMENT_DYNCREATE(CDataGrid, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CDataGrid properties

/////////////////////////////////////////////////////////////////////////////
// CDataGrid operations

long CDataGrid::GetAddNewMode()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CDataGrid::GetAllowAddNew()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetAllowAddNew(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetAllowArrows()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetAllowArrows(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetAllowDelete()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetAllowDelete(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetAllowRowSizing()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetAllowRowSizing(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetAllowUpdate()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetAllowUpdate(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CDataGrid::GetAppearance()
{
	long result;
	InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetAppearance(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CDataGrid::GetApproxCount()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

unsigned long CDataGrid::GetBackColor()
{
	unsigned long result;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT CDataGrid::GetBookmark()
{
	VARIANT result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetBookmark(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long CDataGrid::GetBorderStyle()
{
	long result;
	InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetBorderStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CDataGrid::GetCaption()
{
	CString result;
	InvokeHelper(DISPID_CAPTION, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(DISPID_CAPTION, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

short CDataGrid::GetCol()
{
	short result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetCol(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDataGrid::GetColumnHeaders()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetColumnHeaders(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetCurrentCellModified()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetCurrentCellModified(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetCurrentCellVisible()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetCurrentCellVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetDataChanged()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetDataChanged(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPUNKNOWN CDataGrid::GetDataSource()
{
	LPUNKNOWN result;
	InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetRefDataSource(LPUNKNOWN newValue)
{
	static BYTE parms[] =
		VTS_UNKNOWN;
	InvokeHelper(0x2a, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

CString CDataGrid::GetDataMember()
{
	CString result;
	InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetDataMember(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

float CDataGrid::GetDefColWidth()
{
	float result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetDefColWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CDataGrid::GetEditActive()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetEditActive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetEnabled()
{
	BOOL result;
	InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetEnabled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString CDataGrid::GetErrorText()
{
	CString result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

COleFont1 CDataGrid::GetFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont1(pDispatch);
}

void CDataGrid::SetRefFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CDataGrid::GetForeColor()
{
	unsigned long result;
	InvokeHelper(DISPID_FORECOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetForeColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_FORECOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT CDataGrid::GetFirstRow()
{
	VARIANT result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetFirstRow(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

COleFont1 CDataGrid::GetHeadFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont1(pDispatch);
}

void CDataGrid::SetRefHeadFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

float CDataGrid::GetHeadLines()
{
	float result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetHeadLines(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CDataGrid::GetHWnd()
{
	long result;
	InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CDataGrid::GetHWndEditor()
{
	long result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

short CDataGrid::GetLeftCol()
{
	short result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetLeftCol(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CDataGrid::GetMarqueeStyle()
{
	long result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetMarqueeStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDataGrid::GetRecordSelectors()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetRecordSelectors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDataGrid::GetRightToLeft()
{
	BOOL result;
	InvokeHelper(0xfffffd9d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetRightToLeft(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xfffffd9d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

short CDataGrid::GetRow()
{
	short result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetRow(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CDataGrid::GetRowDividerStyle()
{
	long result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetRowDividerStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float CDataGrid::GetRowHeight()
{
	float result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetRowHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CDataGrid::GetScrollBars()
{
	long result;
	InvokeHelper(0xfffffde9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetScrollBars(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xfffffde9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CDataGrid::GetSelEndCol()
{
	short result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetSelEndCol(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CDataGrid::GetSelLength()
{
	long result;
	InvokeHelper(0xfffffddc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetSelLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xfffffddc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CDataGrid::GetSelStart()
{
	long result;
	InvokeHelper(0xfffffddd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetSelStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xfffffddd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CDataGrid::GetSelStartCol()
{
	short result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetSelStartCol(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CDataGrid::GetSelText()
{
	CString result;
	InvokeHelper(0xfffffdde, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetSelText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xfffffdde, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

short CDataGrid::GetSplit()
{
	short result;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetSplit(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x24, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDataGrid::GetTabAcrossSplits()
{
	BOOL result;
	InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetTabAcrossSplits(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x25, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CDataGrid::GetTabAction()
{
	long result;
	InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetTabAction(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CDataGrid::GetText()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

short CDataGrid::GetVisibleCols()
{
	short result;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short CDataGrid::GetVisibleRows()
{
	short result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

BOOL CDataGrid::GetWrapCellPointer()
{
	BOOL result;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDataGrid::SetWrapCellPointer(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x29, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CStdDataFormatsDisp CDataGrid::GetDataFormats()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CStdDataFormatsDisp(pDispatch);
}

CPicture CDataGrid::CaptureImage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPicture(pDispatch);
}

void CDataGrid::ClearSelCols()
{
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDataGrid::ClearFields()
{
	InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short CDataGrid::ColContaining(float X)
{
	short result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		X);
	return result;
}

CColumns CDataGrid::GetColumns()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CColumns(pDispatch);
}

VARIANT CDataGrid::GetBookmark(long RowNum)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		RowNum);
	return result;
}

void CDataGrid::HoldFields()
{
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDataGrid::ReBind()
{
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CDataGrid::Refresh()
{
	InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT CDataGrid::RowBookmark(short RowNum)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		RowNum);
	return result;
}

short CDataGrid::RowContaining(float Y)
{
	short result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Y);
	return result;
}

float CDataGrid::RowTop(short RowNum)
{
	float result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		RowNum);
	return result;
}

void CDataGrid::Scroll(long Cols, long Rows)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xdc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Cols, Rows);
}

CSelBookmarks CDataGrid::GetSelBookmarks()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSelBookmarks(pDispatch);
}

short CDataGrid::SplitContaining(float X, float Y)
{
	short result;
	static BYTE parms[] =
		VTS_R4 VTS_R4;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		X, Y);
	return result;
}

CSplits CDataGrid::GetSplits()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSplits(pDispatch);
}

void TMyDataGrid::OnSetFocus( CWnd* pOldWnd )
	{
	  /*CWnd *p = GetParent();
			TPropPage_Bill *pBill;
			if( p && (pBill = dynamic_cast<TPropPage_Bill*>(p)) )
				{
				  if( pBill->MakeUpdate_Rec() == false ) 
							{
							  PostMessage( WM_KILLFOCUS, (WPARAM)(pOldWnd ? pOldWnd->m_hWnd:0), 0 );
							  return;
							}
				}*/
	  CWnd::OnSetFocus( pOldWnd );
			if( GetParent() )
	    reinterpret_cast<TMyProperty*>(AfxGetApp()->m_pMainWnd)->CallNavAss( this );			
	}

BOOL TMyDataGrid::OnHelpInfo( HELPINFO* lpHelpInfo )
	{
	  if( lpHelpInfo->iContextType != HELPINFO_WINDOW )
	    return Default();

			static pair<int, TCtxBnd> arrInit[] =
				{				  
						pair<int, TCtxBnd>( IDC_DATAGRID_GUEST, TCtxBnd(IDH_Guests, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_BILL, TCtxBnd(IDH_BillsLst, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_ADDCHARGES, TCtxBnd(IDH_AddCh, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_PAYMENTS, TCtxBnd(IDH_Payments, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_ROOMSALLOC, TCtxBnd(IDH_RoomsUsed, HELP_CONTEXT) ),
						
						pair<int, TCtxBnd>( IDC_DATAGRID_ROOM, TCtxBnd(IDH_Lists, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_GUESTCAT, TCtxBnd(IDH_Lists, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_BILLCAT, TCtxBnd(IDH_Lists, HELP_CONTEXT) ),
						pair<int, TCtxBnd>( IDC_DATAGRID_RECOMMBILLCAT, TCtxBnd(IDH_Lists, HELP_CONTEXT) ),

						pair<int, TCtxBnd>( IDC_DATAGRID_GB, TCtxBnd(IDH_ListBills, HELP_CONTEXT) )
				};

			static map<int, TCtxBnd> mapCtxBnd;

			if( mapCtxBnd.empty() )
				 copy( arrInit, 
					      arrInit + sizeof(arrInit)/sizeof(pair<int, TCtxBnd>),
											inserter( mapCtxBnd, mapCtxBnd.begin() )
									);
			
			map<int, TCtxBnd>::iterator it = mapCtxBnd.find( GetDlgCtrlID() /*lpHelpInfo->iCtrlId*/);

			if( it != mapCtxBnd.end() )
				   AfxGetApp()->WinHelp( it->second.ctx, it->second.uCmd );
			else
				 AfxGetApp()->WinHelp( IDH_MainWindow, HELP_CONTEXT );			
			
			return TRUE;
	}


BEGIN_MESSAGE_MAP( TMyDataGrid, CDataGrid )
  ON_WM_SETFOCUS()		
		ON_WM_HELPINFO()
END_MESSAGE_MAP()

