﻿#pragma once

// Name: SoT, Version: 2.1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAIAbilities.AshenLordFireShroudParams
// 0x0018
struct FAshenLordFireShroudParams
{
	class UClass*                                      FireShroudZoneClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     FireShroudCollisionVolume;                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JV8H[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaAIAbilities.AshenLordFireShroud
// 0x0020
struct FAshenLordFireShroud
{
	class AStatusEffectOverlapZone*                    FireShroudOverlapZone;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAshenLordFireShroudParams                  Params;                                                    // 0x0008(0x0018)

};

// ScriptStruct AthenaAIAbilities.MeleeAttackIdWeights
// 0x0010
struct FMeleeAttackIdWeights
{
	class UClass*                                      MeleeAttackType;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SCQB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
