#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Sender_CEO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sender_CEO.Sender_CEO_C
// 0x0000 (0x0060 - 0x0060)
class USender_CEO_C : public UFGMessageSender
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sender_CEO.Sender_CEO_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif