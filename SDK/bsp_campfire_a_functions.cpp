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

// Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_campfire_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript");

	Absp_campfire_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Absp_campfire_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay");

	Absp_campfire_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Absp_campfire_a_C::ExecuteUbergraph_bsp_campfire_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a");

	Absp_campfire_a_C_ExecuteUbergraph_bsp_campfire_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif