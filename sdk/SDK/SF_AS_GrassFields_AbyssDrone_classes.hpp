#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_AS_GrassFields_AbyssDrone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AS_GrassFields_AbyssDrone.AS_GrassFields_AbyssDrone_C
// 0x0000 (0x0050 - 0x0050)
class UAS_GrassFields_AbyssDrone_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AS_GrassFields_AbyssDrone.AS_GrassFields_AbyssDrone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
