#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollScript
struct  ScrollScript_t2396142314  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScrollScript::speed
	float ___speed_2;
	// System.Single ScrollScript::posX
	float ___posX_3;
	// System.Single ScrollScript::startPosition
	float ___startPosition_4;
	// System.Single ScrollScript::endPosition
	float ___endPosition_5;
	// System.Boolean ScrollScript::isStop
	bool ___isStop_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ScrollScript_t2396142314, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_posX_3() { return static_cast<int32_t>(offsetof(ScrollScript_t2396142314, ___posX_3)); }
	inline float get_posX_3() const { return ___posX_3; }
	inline float* get_address_of_posX_3() { return &___posX_3; }
	inline void set_posX_3(float value)
	{
		___posX_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(ScrollScript_t2396142314, ___startPosition_4)); }
	inline float get_startPosition_4() const { return ___startPosition_4; }
	inline float* get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(float value)
	{
		___startPosition_4 = value;
	}

	inline static int32_t get_offset_of_endPosition_5() { return static_cast<int32_t>(offsetof(ScrollScript_t2396142314, ___endPosition_5)); }
	inline float get_endPosition_5() const { return ___endPosition_5; }
	inline float* get_address_of_endPosition_5() { return &___endPosition_5; }
	inline void set_endPosition_5(float value)
	{
		___endPosition_5 = value;
	}

	inline static int32_t get_offset_of_isStop_6() { return static_cast<int32_t>(offsetof(ScrollScript_t2396142314, ___isStop_6)); }
	inline bool get_isStop_6() const { return ___isStop_6; }
	inline bool* get_address_of_isStop_6() { return &___isStop_6; }
	inline void set_isStop_6(bool value)
	{
		___isStop_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
