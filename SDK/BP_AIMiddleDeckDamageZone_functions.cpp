﻿// Name: SoT, Version: 2.1.0.1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AIMiddleDeckDamageZone.BP_AIMiddleDeckDamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AIMiddleDeckDamageZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIMiddleDeckDamageZone.BP_AIMiddleDeckDamageZone_C.UserConstructionScript");

	ABP_AIMiddleDeckDamageZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif