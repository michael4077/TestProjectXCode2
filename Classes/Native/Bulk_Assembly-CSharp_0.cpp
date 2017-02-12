#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// TestScript
struct TestScript_t905662927;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_TestScript905662927.h"
#include "AssemblyU2DCSharp_TestScript905662927MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI4082743951MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Rect3681755626MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_String2029220233.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestScript::.ctor()
extern "C"  void TestScript__ctor_m1586702086 (TestScript_t905662927 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestScript::Start()
extern "C"  void TestScript_Start_m3348685306 (TestScript_t905662927 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TestScript::Update()
extern "C"  void TestScript_Update_m4230496631 (TestScript_t905662927 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TestScript::OnGUI()
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3423762534;
extern const uint32_t TestScript_OnGUI_m970975486_MetadataUsageId;
extern "C"  void TestScript_OnGUI_m970975486 (TestScript_t905662927 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestScript_OnGUI_m970975486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t3681755626  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m1220545469(&L_0, (10.0f), (10.0f), (100.0f), (30.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_Label_m2412846501(NULL /*static, unused*/, L_0, _stringLiteral3423762534, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
