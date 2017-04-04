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

// GameManager
struct GameManager_t2252321495;
// SlotParent
struct SlotParent_t1065814784;
// System.Object
struct Il2CppObject;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// ScrollScript
struct ScrollScript_t2396142314;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager2252321495MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine.UI_ArrayTypes.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "AssemblyU2DCSharp_SlotParent1065814784MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SlotParent1065814784.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "mscorlib_System_Single2076509932MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "AssemblyU2DCSharp_ScrollScript2396142314.h"
#include "AssemblyU2DCSharp_ScrollScript2396142314MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<SlotParent>()
#define GameObject_GetComponent_TisSlotParent_t1065814784_m789035219(__this, method) ((  SlotParent_t1065814784 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(__this, method) ((  SpriteRenderer_t1209076198 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<ScrollScript>()
#define GameObject_GetComponent_TisScrollScript_t2396142314_m915183221(__this, method) ((  ScrollScript_t2396142314 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::.ctor()
extern Il2CppClass* GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var;
extern Il2CppClass* TextU5BU5D_t4216439300_il2cpp_TypeInfo_var;
extern const uint32_t GameManager__ctor_m293624896_MetadataUsageId;
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_m293624896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_slotParent_4(((GameObjectU5BU5D_t3057952154*)SZArrayNew(GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var, (uint32_t)3)));
		__this->set_mentorNames_6(((TextU5BU5D_t4216439300*)SZArrayNew(TextU5BU5D_t4216439300_il2cpp_TypeInfo_var, (uint32_t)3)));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		GameManager_resetNumber_m1045071374(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4257234489;
extern const uint32_t GameManager_Update_m969954595_MetadataUsageId;
extern "C"  void GameManager_Update_m969954595 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m969954595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_1 = __this->get_slotNumber_2();
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral4257234489, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_slotNumber_2();
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		GameObjectU5BU5D_t3057952154* L_6 = __this->get_slotParent_4();
		int32_t L_7 = __this->get_slotNumber_2();
		int32_t L_8 = L_7;
		GameObject_t1756533147 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		SlotParent_t1065814784 * L_10 = GameObject_GetComponent_TisSlotParent_t1065814784_m789035219(L_9, /*hidden argument*/GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var);
		SlotParent_StopChild_m804736461(L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_slotNumber_2();
		__this->set_slotNumber_2(((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = __this->get_slotNumber_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_006a;
		}
	}
	{
		GameManager_Result_m853541499(__this, /*hidden argument*/NULL);
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		GameManager_resetNumber_m1045071374(__this, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0099;
	}

IL_0083:
	{
		GameObjectU5BU5D_t3057952154* L_14 = __this->get_slotParent_4();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		GameObject_t1756533147 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		SlotParent_t1065814784 * L_18 = GameObject_GetComponent_TisSlotParent_t1065814784_m789035219(L_17, /*hidden argument*/GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var);
		SlotParent_StartChild_m3472710481(L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) < ((int32_t)4)))
		{
			goto IL_0083;
		}
	}

IL_00a0:
	{
		return;
	}
}
// System.Void GameManager::resetNumber()
extern Il2CppClass* Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029326;
extern const uint32_t GameManager_resetNumber_m1045071374_MetadataUsageId;
extern "C"  void GameManager_resetNumber_m1045071374 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_resetNumber_m1045071374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t3030399641* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotParent_t1065814784 * V_4 = NULL;
	{
		__this->set_slotNumber_2(0);
		__this->set_score_3((0.0f));
		Text_t356221433 * L_0 = __this->get_answerText_5();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral372029326);
		V_0 = ((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)4));
		V_2 = 0;
		goto IL_00bb;
	}

IL_0030:
	{
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, ((int32_t)13), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		V_3 = 1;
		goto IL_0059;
	}

IL_0047:
	{
		int32_t L_3 = V_1;
		Int32U5BU5D_t3030399641* L_4 = V_0;
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_7))))
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0055;
	}

IL_0055:
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0059:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_006f;
	}

IL_0065:
	{
		goto IL_006f;
	}
	// Dead block : IL_006a: br IL_0030

IL_006f:
	{
		Int32U5BU5D_t3030399641* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_13);
		GameObjectU5BU5D_t3057952154* L_14 = __this->get_slotParent_4();
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		GameObject_t1756533147 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		SlotParent_t1065814784 * L_18 = GameObject_GetComponent_TisSlotParent_t1065814784_m789035219(L_17, /*hidden argument*/GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var);
		V_4 = L_18;
		SlotParent_t1065814784 * L_19 = V_4;
		SlotParent_t1065814784 * L_20 = V_4;
		GameObjectU5BU5D_t3057952154* L_21 = L_20->get_childs_3();
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		GameObject_t1756533147 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		L_19->set_target_4(L_24);
		TextU5BU5D_t4216439300* L_25 = __this->get_mentorNames_6();
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		Text_t356221433 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		SlotParent_t1065814784 * L_29 = V_4;
		GameObjectU5BU5D_t3057952154* L_30 = L_29->get_childs_3();
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		GameObject_t1756533147 * L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		GameObject_t1756533147 * L_34 = GameObject_get_gameObject_m3662236595(L_33, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_35 = GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(L_34, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var);
		String_t* L_36 = Object_get_name_m2079638459(L_35, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_36);
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::Result()
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3415011077;
extern const uint32_t GameManager_Result_m853541499_MetadataUsageId;
extern "C"  void GameManager_Result_m853541499 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Result_m853541499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0063;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_slotParent_4();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t1756533147 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		SlotParent_t1065814784 * L_4 = GameObject_GetComponent_TisSlotParent_t1065814784_m789035219(L_3, /*hidden argument*/GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var);
		float L_5 = L_4->get_distance_5();
		if ((!(((float)((float)((float)(25.0f)-(float)L_5))) > ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		float L_6 = __this->get_score_3();
		GameObjectU5BU5D_t3057952154* L_7 = __this->get_slotParent_4();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_t1756533147 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		SlotParent_t1065814784 * L_11 = GameObject_GetComponent_TisSlotParent_t1065814784_m789035219(L_10, /*hidden argument*/GameObject_GetComponent_TisSlotParent_t1065814784_m789035219_MethodInfo_var);
		float L_12 = L_11->get_distance_5();
		__this->set_score_3(((float)((float)L_6+(float)((float)((float)(25.0f)-(float)L_12)))));
		goto IL_005f;
	}

IL_0053:
	{
		float L_13 = __this->get_score_3();
		__this->set_score_3(L_13);
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		float L_16 = __this->get_score_3();
		float L_17 = L_16;
		Il2CppObject * L_18 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3415011077, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Text_t356221433 * L_20 = __this->get_answerText_5();
		float* L_21 = __this->get_address_of_score_3();
		String_t* L_22 = Single_ToString_m1813392066(L_21, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		return;
	}
}
// System.Void ScrollScript::.ctor()
extern "C"  void ScrollScript__ctor_m3869385045 (ScrollScript_t2396142314 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((12.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollScript::Start()
extern "C"  void ScrollScript_Start_m3774565909 (ScrollScript_t2396142314 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		__this->set_posX_3(L_2);
		__this->set_startPosition_4((19.0f));
		__this->set_endPosition_5((-16.5f));
		__this->set_isStop_6((bool)0);
		return;
	}
}
// System.Void ScrollScript::Update()
extern "C"  void ScrollScript_Update_m1347218444 (ScrollScript_t2396142314 * __this, const MethodInfo* method)
{
	{
		ScrollScript_Scroll_m2148623784(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollScript::Scroll()
extern "C"  void ScrollScript_Scroll_m2148623784 (ScrollScript_t2396142314 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_isStop_6();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_speed_2();
		float L_3 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_Translate_m3577349508(L_1, (0.0f), ((float)((float)((float)((float)(-1.0f)*(float)L_2))*(float)L_3)), (0.0f), /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = (&V_0)->get_y_2();
		float L_7 = __this->get_endPosition_5();
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		ScrollScript_ScrollEnd_m3992770151(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void ScrollScript::ScrollEnd()
extern "C"  void ScrollScript_ScrollEnd_m3992770151 (ScrollScript_t2396142314 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_startPosition_4();
		float L_2 = __this->get_endPosition_5();
		Transform_Translate_m3577349508(L_0, (0.0f), ((float)((float)(1.0f)*(float)((float)((float)L_1-(float)L_2)))), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlotParent::.ctor()
extern Il2CppClass* GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var;
extern const uint32_t SlotParent__ctor_m57388851_MetadataUsageId;
extern "C"  void SlotParent__ctor_m57388851 (SlotParent_t1065814784 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlotParent__ctor_m57388851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_childNumber_2(((int32_t)15));
		__this->set_childs_3(((GameObjectU5BU5D_t3057952154*)SZArrayNew(GameObjectU5BU5D_t3057952154_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14))));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlotParent::Start()
extern "C"  void SlotParent_Start_m315703423 (SlotParent_t1065814784 * __this, const MethodInfo* method)
{
	{
		__this->set_distance_5((0.0f));
		return;
	}
}
// System.Void SlotParent::Update()
extern "C"  void SlotParent_Update_m4286600706 (SlotParent_t1065814784 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SlotParent::StopChild()
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisScrollScript_t2396142314_m915183221_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2266299408;
extern const uint32_t SlotParent_StopChild_m804736461_MetadataUsageId;
extern "C"  void SlotParent_StopChild_m804736461 (SlotParent_t1065814784 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlotParent_StopChild_m804736461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2266299408, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0011:
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_childs_3();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t1756533147 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ScrollScript_t2396142314 * L_4 = GameObject_GetComponent_TisScrollScript_t2396142314_m915183221(L_3, /*hidden argument*/GameObject_GetComponent_TisScrollScript_t2396142314_m915183221_MethodInfo_var);
		L_4->set_isStop_6((bool)1);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_childNumber_2();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0011;
		}
	}
	{
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_y_2();
		GameObject_t1756533147 * L_11 = __this->get_target_4();
		Transform_t3275118058 * L_12 = GameObject_get_transform_m909382139(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (&V_2)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_15 = fabsf(((float)((float)L_10-(float)L_14)));
		__this->set_distance_5(L_15);
		float L_16 = __this->get_distance_5();
		float L_17 = L_16;
		Il2CppObject * L_18 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlotParent::StartChild()
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisScrollScript_t2396142314_m915183221_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1322603624;
extern const uint32_t SlotParent_StartChild_m3472710481_MetadataUsageId;
extern "C"  void SlotParent_StartChild_m3472710481 (SlotParent_t1065814784 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlotParent_StartChild_m3472710481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1322603624, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0028;
	}

IL_0011:
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_childs_3();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t1756533147 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ScrollScript_t2396142314 * L_4 = GameObject_GetComponent_TisScrollScript_t2396142314_m915183221(L_3, /*hidden argument*/GameObject_GetComponent_TisScrollScript_t2396142314_m915183221_MethodInfo_var);
		L_4->set_isStop_6((bool)0);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_childNumber_2();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
