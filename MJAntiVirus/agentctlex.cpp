// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "agentctlex.h"

// Dispatch interfaces referenced by this interface
#include "AgentCtlCharacters.h"
#include "agentctlaudioobjectex.h"
#include "agentctlspeechinput.h"
#include "AgentCtlPropertySheet.h"
#include "agentctlcommandswindow.h"

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlEx

IMPLEMENT_DYNCREATE(CAgentCtlEx, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlEx properties

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlEx operations

CAgentCtlCharacters CAgentCtlEx::GetCharacters()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlCharacters(pDispatch);
}

CAgentCtlAudioObjectEx CAgentCtlEx::GetAudioOutput()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlAudioObjectEx(pDispatch);
}

CAgentCtlSpeechInput CAgentCtlEx::GetSpeechInput()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlSpeechInput(pDispatch);
}

CAgentCtlPropertySheet CAgentCtlEx::GetPropertySheet()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlPropertySheet(pDispatch);
}

CAgentCtlCommandsWindow CAgentCtlEx::GetCommandsWindow()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlCommandsWindow(pDispatch);
}

BOOL CAgentCtlEx::GetConnected()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlEx::SetConnected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAgentCtlEx::GetSuspended()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlEx::ShowDefaultCharacterProperties(const VARIANT& x, const VARIANT& y)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &x, &y);
}

BOOL CAgentCtlEx::GetRaiseRequestErrors()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlEx::SetRaiseRequestErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}
