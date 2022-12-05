#pragma once
#include "Internal.h"

/*******************************************
 NTDLL IMPORT
*******************************************/
typedef NTSTATUS(NTAPI* NTOPENKEY)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES);
typedef NTSTATUS(NTAPI* NTQUERYVALUEKEY)(HANDLE, PUNICODE_STRING, KEY_VALUE_INFORMATION_CLASS, PVOID, ULONG, PULONG);
typedef NTSTATUS(NTAPI* NTCLOSE)(HANDLE);
typedef NTSTATUS(NTAPI* NTQUERYINFORMATIONPROCESS)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG);
typedef NTSTATUS(NTAPI* NTQUERYSYSTEMINFORMATION)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG);
typedef ULONG(NTAPI* RTLNTSTATUSTODOSERROR)(NTSTATUS);
typedef NTSTATUS(NTAPI* NTCREATEUSERPROCESS)(PHANDLE,PHANDLE, ACCESS_MASK, ACCESS_MASK, POBJECT_ATTRIBUTES, POBJECT_ATTRIBUTES, ULONG, ULONG, PRTL_USER_PROCESS_PARAMETERS, PPS_CREATE_INFO, PPS_ATTRIBUTE_LIST);
typedef NTSTATUS(NTAPI* RTLCREATEPROCESSPARAMETERSEX)(PRTL_USER_PROCESS_PARAMETERS*, PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING,	PUNICODE_STRING, PVOID,	PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING, ULONG);
typedef NTSTATUS(NTAPI* RTLDESTROYPROCESSPARAMETERS)(PRTL_USER_PROCESS_PARAMETERS);
typedef NTSTATUS(NTAPI* RTLENTERCRITICALSECTION)(PRTL_CRITICAL_SECTION);
typedef NTSTATUS(NTAPI* RTLLEAVECRITICALSECTION)(PRTL_CRITICAL_SECTION);
typedef NTSTATUS(NTAPI* NTQUERYINFORMATIONFILE)(HANDLE, PIO_STATUS_BLOCK, PVOID, ULONG, FILE_INFORMATION_CLASS);
typedef NTSTATUS(NTAPI* NTOPENFILE)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, ULONG, ULONG);
typedef BOOL(NTAPI* RTLDOSPATHNAMETONTPATHNAME_U)(PCWSTR, PUNICODE_STRING, PCWSTR*, PRTL_RELATIVE_NAME_U);
typedef NTSTATUS(NTAPI* NTCREATEFILE)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, PLARGE_INTEGER, ULONG, ULONG, ULONG, ULONG, PVOID, ULONG);
typedef NTSTATUS(NTAPI* NTFSCONTROLFILE)(HANDLE, HANDLE, PIO_APC_ROUTINE, PVOID, PIO_STATUS_BLOCK, ULONG, PVOID, ULONG, PVOID, ULONG);
typedef NTSTATUS(NTAPI* NTDEVICEIOCONTROLFILE)(HANDLE, HANDLE, PIO_APC_ROUTINE, PVOID, PIO_STATUS_BLOCK, ULONG, PVOID, ULONG, PVOID, ULONG);
typedef NTSTATUS(NTAPI* NTUNMAPVIEWOFSECTION)(HANDLE, PVOID);
typedef NTSTATUS(NTAPI* RTLIPV4STRINGTOADDRESSW)(PCWSTR, BOOL, LPCWSTR*, PIN_ADDR);
typedef NTSTATUS(NTAPI* RTLIPV4STRINGTOADDRESSA)(PCSTR, BOOL, LPCSTR*, PIN_ADDR);
typedef PWSTR(NTAPI* RTLIPV4ADDRESSTOSTRINGW)(PIN_ADDR, PWSTR);
typedef PSTR(NTAPI* RTLIPV4ADDRESSTOSTRINGA)(PIN_ADDR, PSTR);
typedef INT(NTAPI* RTLUSERFIBERSTART)(VOID);
typedef NTSTATUS(NTAPI* NTWAITFORSINGLEOBJECT)(HANDLE, BOOL, PLARGE_INTEGER);
typedef NTSTATUS(NTAPI* RTLQUEUEWORKITEM)(PRTL_WORK_ITEM_ROUTINE, PVOID, ULONG);



/*******************************************
 KERNEL32 IMPORT
*******************************************/
typedef DWORD(WINAPI* CSRGETPROCESSID)(VOID);



/*******************************************
 MSI IMPORT
*******************************************/
typedef UINT(WINAPI* MSIGETFILEHASHW)(LPCWSTR, DWORD, PMSIFILEHASHINFO);
typedef UINT(WINAPI* MSIGETFILEHASHA)(LPCSTR, DWORD, PMSIFILEHASHINFO);



/*******************************************
 DSCLIENT IMPORT
*******************************************/
typedef HRESULT(WINAPI* DSCREATESHAREDFILETOKEN)(LPCWSTR, PDATA_SHARE_CTRL, INT, INT, WCHAR**);
typedef HRESULT(WINAPI* DSCOPYFROMSHAREDFILE)(LPCWSTR, LPCWSTR);



/*******************************************
 SHELL32 IMPORT
*******************************************/

typedef HRESULT(WINAPI* DLLGETCLASSOBJECT)(REFCLSID, REFIID, LPVOID*);