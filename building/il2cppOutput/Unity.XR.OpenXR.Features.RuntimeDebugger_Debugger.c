﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[8] = 
{
	{ 8611, 0,  1 } /*tableIndex: 0 */,
	{ 11212, 1,  1 } /*tableIndex: 1 */,
	{ 5517, 2,  1 } /*tableIndex: 2 */,
	{ 8611, 3,  1 } /*tableIndex: 3 */,
	{ 11212, 4,  1 } /*tableIndex: 4 */,
	{ 8611, 5,  1 } /*tableIndex: 5 */,
	{ 11212, 6,  1 } /*tableIndex: 6 */,
	{ 5517, 7,  1 } /*tableIndex: 7 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[8] = 
{
	"lutPtr",
	"lutSize",
	"lutData",
	"ptr1",
	"size1",
	"ptr2",
	"size2",
	"data",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[9] = 
{
	{ 0, 0 } /* 0x06000001 System.IntPtr UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::HookGetInstanceProcAddr(System.IntPtr) */,
	{ 0, 8 } /* 0x06000002 System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::RecvMsg(UnityEngine.Networking.PlayerConnection.MessageEventArgs) */,
	{ 0, 0 } /* 0x06000003 System.IntPtr UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_HookGetInstanceProcAddr(System.IntPtr,System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_GetDataForRead(System.IntPtr&,System.UInt32&) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_GetLUTData(System.IntPtr&,System.UInt32&,System.UInt32) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_StartDataAccess() */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_EndDataAccess() */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::.ctor() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::.cctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_RuntimeDebugger[];
Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_RuntimeDebugger[62] = 
{
	{ 33648, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 33648, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 33648, 1, 45, 45, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 33648, 1, 47, 47, 13, 95, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 33648, 1, 47, 47, 13, 95, 1, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 33648, 1, 47, 47, 13, 95, 18, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 33648, 1, 47, 47, 13, 95, 23, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 33648, 1, 51, 51, 13, 38, 29, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 33648, 1, 51, 51, 13, 38, 29, kSequencePointKind_StepOut, 0, 8 } /* seqPointIndex: 8 */,
	{ 33648, 1, 52, 52, 13, 36, 35, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 33648, 1, 52, 52, 13, 36, 35, kSequencePointKind_StepOut, 0, 10 } /* seqPointIndex: 10 */,
	{ 33648, 1, 53, 53, 13, 27, 41, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 33648, 1, 55, 55, 13, 88, 48, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 33648, 1, 55, 55, 13, 88, 61, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 33648, 1, 56, 56, 9, 10, 69, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 33649, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 33649, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 33649, 1, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 33649, 1, 60, 60, 13, 38, 1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 33649, 1, 60, 60, 13, 38, 1, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 33649, 1, 63, 63, 13, 75, 7, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 33649, 1, 63, 63, 13, 75, 17, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 33649, 1, 64, 64, 13, 48, 23, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 33649, 1, 65, 65, 13, 29, 30, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 33649, 1, 65, 65, 0, 0, 36, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 33649, 1, 66, 66, 13, 14, 40, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 33649, 1, 67, 67, 17, 37, 41, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 33649, 1, 68, 68, 17, 65, 48, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 33649, 1, 68, 68, 17, 65, 52, kSequencePointKind_StepOut, 0, 28 } /* seqPointIndex: 28 */,
	{ 33649, 1, 69, 69, 13, 14, 58, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 33649, 1, 72, 72, 13, 64, 59, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 33649, 1, 72, 72, 13, 64, 63, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 33649, 1, 73, 73, 13, 64, 69, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 33649, 1, 73, 73, 13, 64, 73, kSequencePointKind_StepOut, 0, 33 } /* seqPointIndex: 33 */,
	{ 33649, 1, 75, 75, 13, 51, 79, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 33649, 1, 76, 76, 13, 53, 91, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 33649, 1, 76, 76, 13, 53, 97, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 33649, 1, 77, 77, 13, 27, 103, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 33649, 1, 77, 77, 0, 0, 110, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 33649, 1, 78, 78, 17, 66, 114, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 33649, 1, 78, 78, 17, 66, 122, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 33649, 1, 80, 80, 13, 36, 128, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 33649, 1, 80, 80, 13, 36, 128, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 33649, 1, 83, 83, 13, 88, 134, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 33649, 1, 83, 83, 13, 88, 134, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 33649, 1, 83, 83, 13, 88, 145, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 33649, 1, 84, 84, 13, 85, 151, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 33649, 1, 84, 84, 13, 85, 151, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 33649, 1, 84, 84, 13, 85, 163, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 33649, 1, 89, 89, 9, 10, 169, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 33655, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 33655, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 33655, 1, 34, 34, 9, 43, 0, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 33655, 1, 39, 39, 9, 50, 11, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 33655, 1, 41, 41, 9, 38, 22, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 33655, 1, 41, 41, 9, 38, 30, kSequencePointKind_StepOut, 0, 55 } /* seqPointIndex: 55 */,
	{ 33656, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 33656, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 33656, 1, 28, 28, 9, 127, 0, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 33656, 1, 28, 28, 9, 127, 5, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 33656, 1, 29, 29, 9, 124, 15, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 33656, 1, 29, 29, 9, 124, 20, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_RuntimeDebugger[];
Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_RuntimeDebugger[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\Beks\\assignment_2_car\\Library\\PackageCache\\com.unity.xr.openxr@1.6.0\\RuntimeDebugger\\RuntimeDebuggerOpenXRFeature.cs", { 18, 161, 46, 139, 236, 42, 141, 226, 102, 241, 69, 225, 54, 168, 96, 207} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 4770, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[2] = 
{
	{ 0, 71 },
	{ 0, 170 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[9] = 
{
	{ 71, 0, 1 } /* System.IntPtr UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::HookGetInstanceProcAddr(System.IntPtr) */,
	{ 170, 1, 1 } /* System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::RecvMsg(UnityEngine.Networking.PlayerConnection.MessageEventArgs) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_HookGetInstanceProcAddr(System.IntPtr,System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_GetDataForRead(System.IntPtr&,System.UInt32&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_GetLUTData(System.IntPtr&,System.UInt32&,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_StartDataAccess() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::Native_EndDataAccess() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::.cctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XR_OpenXR_Features_RuntimeDebugger;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XR_OpenXR_Features_RuntimeDebugger = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	62,
	(Il2CppSequencePoint*)g_sequencePointsUnity_XR_OpenXR_Features_RuntimeDebugger,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
