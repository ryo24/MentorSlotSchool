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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlotParent
struct  SlotParent_t1065814784  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SlotParent::childNumber
	int32_t ___childNumber_2;
	// UnityEngine.GameObject[] SlotParent::childs
	GameObjectU5BU5D_t3057952154* ___childs_3;
	// UnityEngine.GameObject SlotParent::target
	GameObject_t1756533147 * ___target_4;
	// System.Single SlotParent::distance
	float ___distance_5;

public:
	inline static int32_t get_offset_of_childNumber_2() { return static_cast<int32_t>(offsetof(SlotParent_t1065814784, ___childNumber_2)); }
	inline int32_t get_childNumber_2() const { return ___childNumber_2; }
	inline int32_t* get_address_of_childNumber_2() { return &___childNumber_2; }
	inline void set_childNumber_2(int32_t value)
	{
		___childNumber_2 = value;
	}

	inline static int32_t get_offset_of_childs_3() { return static_cast<int32_t>(offsetof(SlotParent_t1065814784, ___childs_3)); }
	inline GameObjectU5BU5D_t3057952154* get_childs_3() const { return ___childs_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_childs_3() { return &___childs_3; }
	inline void set_childs_3(GameObjectU5BU5D_t3057952154* value)
	{
		___childs_3 = value;
		Il2CppCodeGenWriteBarrier(&___childs_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(SlotParent_t1065814784, ___target_4)); }
	inline GameObject_t1756533147 * get_target_4() const { return ___target_4; }
	inline GameObject_t1756533147 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1756533147 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(SlotParent_t1065814784, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
