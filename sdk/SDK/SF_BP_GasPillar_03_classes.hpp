#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_GasPillar_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GasPillar_03.BP_GasPillar_03_C
// 0x0028 (0x0360 - 0x0338)
class ABP_GasPillar_03_C : public ABP_GasPillar_C
{
public:
	class UParticleSystemComponent*                    GasPuff_04;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GasPuff_03;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GasPuff_02;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DroppingGas_02;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GasPillar_01;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GasPillar_03.BP_GasPillar_03_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif