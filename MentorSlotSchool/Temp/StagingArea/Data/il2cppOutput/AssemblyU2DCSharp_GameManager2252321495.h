#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameManager::slotNumber
	int32_t ___slotNumber_2;
	// System.Single GameManager::score
	float ___score_3;
	// UnityEngine.GameObject[] GameManager::slotParent
	GameObjectU5BU5D_t3057952154* ___slotParent_4;
	// UnityEngine.UI.Text GameManager::answerText
	Text_t356221433 * ___answerText_5;
	// UnityEngine.UI.Text[] GameManager::mentorNames
	TextU5BU5D_t4216439300* ___mentorNames_6;

public:
	inline static int32_t get_offset_of_slotNumber_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___slotNumber_2)); }
	inline int32_t get_slotNumber_2() const { return ___slotNumber_2; }
	inline int32_t* get_address_of_slotNumber_2() { return &___slotNumber_2; }
	inline void set_slotNumber_2(int32_t value)
	{
		___slotNumber_2 = value;
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___score_3)); }
	inline float get_score_3() const { return ___score_3; }
	inline float* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(float value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_slotParent_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___slotParent_4)); }
	inline GameObjectU5BU5D_t3057952154* get_slotParent_4() const { return ___slotParent_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_slotParent_4() { return &___slotParent_4; }
	inline void set_slotParent_4(GameObjectU5BU5D_t3057952154* value)
	{
		___slotParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___slotParent_4, value);
	}

	inline static int32_t get_offset_of_answerText_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___answerText_5)); }
	inline Text_t356221433 * get_answerText_5() const { return ___answerText_5; }
	inline Text_t356221433 ** get_address_of_answerText_5() { return &___answerText_5; }
	inline void set_answerText_5(Text_t356221433 * value)
	{
		___answerText_5 = value;
		Il2CppCodeGenWriteBarrier(&___answerText_5, value);
	}

	inline static int32_t get_offset_of_mentorNames_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mentorNames_6)); }
	inline TextU5BU5D_t4216439300* get_mentorNames_6() const { return ___mentorNames_6; }
	inline TextU5BU5D_t4216439300** get_address_of_mentorNames_6() { return &___mentorNames_6; }
	inline void set_mentorNames_6(TextU5BU5D_t4216439300* value)
	{
		___mentorNames_6 = value;
		Il2CppCodeGenWriteBarrier(&___mentorNames_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
