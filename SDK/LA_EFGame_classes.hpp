#pragma once

// [Generate by @Respecter] - Lost Ark (1.0.2.1,61) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_EFGame_structs.hpp"

namespace LASDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EFGame.EFActionNotify_AnimEvent
// 0x001C (0x0074 - 0x0058)
class UEFActionNotify_AnimEvent : public UObject
{
public:
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           IsActive : 1;                                             // 0x0068(0x0004) (Edit)
	float                                              StartTime;                                                // 0x006C(0x0004) (Edit)
	float                                              InterpTime;                                               // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimEvent_CancelParticles
// 0x0000 (0x0074 - 0x0074)
class UEFActionNotify_AnimEvent_CancelParticles : public UEFActionNotify_AnimEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent_CancelParticles");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimEvent_MaterialParamterLinearColor
// 0x0030 (0x00A4 - 0x0074)
class UEFActionNotify_AnimEvent_MaterialParamterLinearColor : public UEFActionNotify_AnimEvent
{
public:
	struct FString                                     ParamName;                                                // 0x0074(0x0010) (Edit, NeedCtorLink)
	struct FLinearColor                                StartValue;                                               // 0x0084(0x0010) (Edit)
	struct FLinearColor                                EndValue;                                                 // 0x0094(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent_MaterialParamterLinearColor");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimEvent_MaterialParamterScalar
// 0x0018 (0x008C - 0x0074)
class UEFActionNotify_AnimEvent_MaterialParamterScalar : public UEFActionNotify_AnimEvent
{
public:
	struct FString                                     ParamName;                                                // 0x0074(0x0010) (Edit, NeedCtorLink)
	float                                              StartValue;                                               // 0x0084(0x0004) (Edit)
	float                                              EndValue;                                                 // 0x0088(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimEvent_MaterialParamterScalar");
		return ptr;
	}

};


// Class EFGame.EFActorMotionBase
// 0x0000 (0x0058 - 0x0058)
class UEFActorMotionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionBase");
		return ptr;
	}

};


// Class EFGame.EFActorMotionLocationCycle
// 0x0019 (0x0071 - 0x0058)
class UEFActorMotionLocationCycle : public UEFActorMotionBase
{
public:
	float                                              fTime;                                                    // 0x0058(0x0004)
	struct FVector                                     vPreValue;                                                // 0x005C(0x000C)
	float                                              fMotionRange;                                             // 0x0068(0x0004) (Edit)
	float                                              fMotionCycle;                                             // 0x006C(0x0004) (Edit)
	TEnumAsByte<EAxis>                                 eMotionAxis;                                              // 0x0070(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionLocationCycle");
		return ptr;
	}

};


// Class EFGame.EFActorMotionRotationAcyclic
// 0x0005 (0x005D - 0x0058)
class UEFActorMotionRotationAcyclic : public UEFActorMotionBase
{
public:
	float                                              fMotionVel;                                               // 0x0058(0x0004) (Edit)
	TEnumAsByte<EAxis>                                 eMotionAxis;                                              // 0x005C(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionRotationAcyclic");
		return ptr;
	}

};


// Class EFGame.EFActorMotionRotationCyclic
// 0x0019 (0x0071 - 0x0058)
class UEFActorMotionRotationCyclic : public UEFActorMotionBase
{
public:
	float                                              fTime;                                                    // 0x0058(0x0004)
	struct FRotator                                    vPreValue;                                                // 0x005C(0x000C)
	float                                              fMotionRange;                                             // 0x0068(0x0004) (Edit)
	float                                              fMotionCycle;                                             // 0x006C(0x0004) (Edit)
	TEnumAsByte<EAxis>                                 eMotionAxis;                                              // 0x0070(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActorMotionRotationCyclic");
		return ptr;
	}

};


// Class EFGame.EFAfterImageSkeletalMeshComponent
// 0x0000 (0x08E8 - 0x08E8)
class UEFAfterImageSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAfterImageSkeletalMeshComponent");
		return ptr;
	}

};


// Class EFGame.EFAkAudioDevice
// 0x0240 (0x0300 - 0x00C0)
class UEFAkAudioDevice : public UAkAudioDevice
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x00C0(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAkAudioDevice");
		return ptr;
	}

};


// Class EFGame.EFAN_Params
// 0x001C (0x0074 - 0x0058)
class UEFAN_Params : public UObject
{
public:
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	uint32_t                                           IsActive : 1;                                             // 0x0068(0x0004) (Edit)
	float                                              StartTime;                                                // 0x006C(0x0004) (Edit)
	float                                              InterpTime;                                               // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAN_Params");
		return ptr;
	}

};


// Class EFGame.EFAN_Particle
// 0x017C (0x01F0 - 0x0074)
class UEFAN_Particle : public UEFAN_Params
{
public:
	struct FString                                     LookInfoKey;                                              // 0x0074(0x0010) (Edit, NeedCtorLink)
	float                                              RelativeSpawnTime;                                        // 0x0084(0x0004) (Edit)
	float                                              DurationTime;                                             // 0x0088(0x0004) (Edit)
	struct FEFParticleSystemInfo                       ParticleInfo;                                             // 0x008C(0x0158) (Component, NeedCtorLink, Deprecated)
	class UEFParticleData*                             ParticleDataInfo;                                         // 0x01E4(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	uint32_t                                           bSkipIfOwnerIsHidden : 1;                                 // 0x01EC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAN_Particle");
		return ptr;
	}

};


// Class EFGame.EFAN_Trail
// 0x001C (0x0090 - 0x0074)
class UEFAN_Trail : public UEFAN_Params
{
public:
	float                                              RelativeSpawnTime;                                        // 0x0074(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0078(0x0004) (Edit)
	class UAnimNotify_Trails*                          AnimTrails;                                               // 0x007C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TEnumAsByte<EFEQUIP_PART>                          TrailParts;                                               // 0x0084(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                TrailPartsIndex;                                          // 0x0088(0x0004) (Edit)
	uint32_t                                           bSkipIfOwnerIsHidden : 1;                                 // 0x008C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAN_Trail");
		return ptr;
	}

};


// Class EFGame.EFBarrier
// 0x0008 (0x0274 - 0x026C)
class AEFBarrier : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x026C(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBarrier");
		return ptr;
	}

};


// Class EFGame.EFCharacterParts
// 0x002C (0x05AC - 0x0580)
class AEFCharacterParts : public APawn
{
public:
	struct FName                                       AttachSocketName;                                         // 0x0580(0x0008)
	class UEFPartsSkelComponent*                       PartsMeshComponent;                                       // 0x0588(0x0008) (ExportObject, Component, EditInline)
	class APawn*                                       ParentPawn;                                               // 0x0590(0x0008)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0598(0x0008) (ExportObject, Component, EditInline)
	int                                                AttachedPSIIndex;                                         // 0x05A0(0x0004) (Transient)
	class AEFPawn*                                     AttachOtherPawn;                                          // 0x05A4(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCharacterParts");
		return ptr;
	}


	void OnParticleSystemFinished(class UParticleSystemComponent* PSC);
	void ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void BaseChange();
	bool EncroachingOn(class AActor* Other);
	void EncroachedBy(class AActor* Other);
	void Destroyed();
};


// Class EFGame.EFCheatManager
// 0x0000 (0x0098 - 0x0098)
class UEFCheatManager : public UGameCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCheatManager");
		return ptr;
	}


	void InternalDebugLookAt();
	void InternalVisualizePhysicsCompartmentUsage();
	void InternalSetPhysicsCompartmentCount(int inCount);
	void InternalTogglePhysicsCompartmentForEFPawns();
	void InternalSetCamTargetBlendTime(float a_Time, float a_Exp);
	void InternalClearCamTarget();
	void InternalSetCamTarget(const struct FString& a_Nickname);
	void InternalCamPrevTarget();
	void InternalCamNextTarget();
	class AEFPlayerCamera* InternalGetPlayerCamera();
	void InternalToggleCullDistanceVolume();
	void InternalToggleCPUSkinning(const struct FString& InMeshName);
	void InternalToggleOneFrameThreadLag();
	void InternalToggleUpdateDLEOptimize();
	void InternalToggleMeshObjectUpdateOptimize();
	void InternalToggleUpdateBoundsOptimize();
	void InternalToggleDynamicFoliageOptimize();
	void InternalToggleCameraODAOptimize();
	void InternalToggleParticleOptimizeILG();
};


// Class EFGame.EFClient
// 0x0030 (0x0268 - 0x0238)
class UEFClient : public UWindowsClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFClient");
		return ptr;
	}

};


// Class EFGame.EFConsole
// 0x0014 (0x027C - 0x0268)
class UEFConsole : public UConsole
{
public:
	TArray<struct FEFAutoCompleteCommand>              EFAutoCompleteCommandList;                                // 0x0268(0x0010) (Native, Transient)
	uint32_t                                           bInputPaused : 1;                                         // 0x0278(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFConsole");
		return ptr;
	}


	bool IsValidEFCommand(int Idx);
	bool InputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad);
	bool InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad);
};


// Class EFGame.EFDecalCollisionComponent
// 0x000C (0x0290 - 0x0284)
class UEFDecalCollisionComponent : public UPrimitiveComponent
{
public:
	float                                              ApplyOwnerSizeRate;                                       // 0x0284(0x0004) (Edit)
	struct FColor                                      DecalCollisionColor;                                      // 0x0288(0x0004) (Edit, Const)
	uint32_t                                           bDrawBoundingBox : 1;                                     // 0x028C(0x0004) (Const)
	uint32_t                                           bDrawNonColliding : 1;                                    // 0x028C(0x0004) (Const)
	uint32_t                                           bAlwaysRenderIfSelected : 1;                              // 0x028C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalCollisionComponent");
		return ptr;
	}

};


// Class EFGame.EFDecalComponent
// 0x0010 (0x0420 - 0x0410)
class UEFDecalComponent : public UDecalComponent
{
public:
	uint32_t                                           bSkipChangeLocation : 1;                                  // 0x0410(0x0004) (Transient)
	uint32_t                                           bFirstUpdate : 1;                                         // 0x0410(0x0004) (Transient, DuplicateTransient)
	uint32_t                                           bSpawnedByParticleModule : 1;                             // 0x0410(0x0004) (Transient)
	uint32_t                                           bDropDistortion : 1;                                      // 0x0410(0x0004) (Transient)
	struct FVector                                     SpawnLocation;                                            // 0x0414(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalComponent");
		return ptr;
	}

};


// Class EFGame.EFDecalFloorActor
// 0x000C (0x0288 - 0x027C)
class AEFDecalFloorActor : public ADecalActor
{
public:
	uint32_t                                           bUseFloorChecks : 1;                                      // 0x027C(0x0004) (Edit)
	class UEFDecalCollisionComponent*                  FloorCollisionComponent;                                  // 0x0280(0x0008) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalFloorActor");
		return ptr;
	}


	void GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight);
};


// Class EFGame.EFDecalManager
// 0x0000 (0x02B0 - 0x02B0)
class AEFDecalManager : public ADecalManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDecalManager");
		return ptr;
	}


	class UDecalComponent* SpawnDecalMinimal(class UMaterialInterface* DecalMaterial, const struct FVector& DecalLocation, const struct FRotator& DecalOrientation, float Width, float Height, float InLifeSpan, float Thickness, bool bNoClip, float DecalRotation);
};


// Class EFGame.EFFracturedStaticMeshActor
// 0x0004 (0x030C - 0x0308)
class AEFFracturedStaticMeshActor : public AFracturedStaticMeshActor
{
public:
	int                                                FracturedId;                                              // 0x0308(0x0004) (Edit, EditConst, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFFracturedStaticMeshActor");
		return ptr;
	}

};


// Class EFGame.EFGameInfo
// 0x0248 (0x0700 - 0x04B8)
class AEFGameInfo : public AGameInfo
{
public:
	uint32_t                                           bShowLikeMouseOver : 1;                                   // 0x04B8(0x0004) (Config)
	uint32_t                                           bNameTagAlpha : 1;                                        // 0x04B8(0x0004) (Config)
	uint32_t                                           bNameTagMonShowAll : 1;                                   // 0x04B8(0x0004) (Config)
	uint32_t                                           bIsPIE : 1;                                               // 0x04B8(0x0004)
	uint32_t                                           bIsMapLoaded : 1;                                         // 0x04B8(0x0004)
	struct FNameTagAlphaInfo                           sNameTagAlpha;                                            // 0x04BC(0x0010) (Config)
	struct FNameTagMonInfo                             sDefaultNameTagMon;                                       // 0x04CC(0x0004) (Config)
	struct FNameTagMonInfo                             sMouseOverNameTagMon;                                     // 0x04D0(0x0004) (Config)
	float                                              fNameTagHeight;                                           // 0x04D4(0x0004) (Config)
	struct FString                                     DefaultServerAddress;                                     // 0x04D8(0x0010) (Config, NeedCtorLink)
	int                                                DefaultServerPort;                                        // 0x04E8(0x0004) (Config)
	int                                                DefaultPCClassId;                                         // 0x04EC(0x0004) (Config)
	struct FString                                     DefaultPCName;                                            // 0x04F0(0x0010) (Config, NeedCtorLink)
	struct FString                                     DefaultLoginID;                                           // 0x0500(0x0010) (Config, NeedCtorLink)
	struct FString                                     DefaultLoginPass;                                         // 0x0510(0x0010) (Config, NeedCtorLink)
	int                                                DefaultMapID;                                             // 0x0520(0x0004) (Config)
	int                                                CurrentMapIndex;                                          // 0x0524(0x0004) (Transient)
	TEnumAsByte<EZoneLevel>                            MapLevel;                                                 // 0x0528(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	struct FString                                     QuestBalloonTalkFxPath;                                   // 0x052C(0x0010) (Config, NeedCtorLink)
	struct FString                                     FriendshipFxPath;                                         // 0x053C(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestUnableStartFxPath;                                   // 0x054C(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestReadyFxPath;                                         // 0x055C(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestStartFxPath;                                         // 0x056C(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestProgressFxPath;                                      // 0x057C(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestCompleteFxPath;                                      // 0x058C(0x0010) (Config, NeedCtorLink)
	struct FString                                     StartQuestPropFxPath;                                     // 0x059C(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestBasicInteractionFxPath;                              // 0x05AC(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestEmptyMeshInteractionFxPath;                          // 0x05BC(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestVolumeInteractionFxPath;                             // 0x05CC(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestLifeProfessionInteractionFxPath;                     // 0x05DC(0x0010) (Config, NeedCtorLink)
	struct FString                                     StaticIslandWithContinentQuestFxPath;                     // 0x05EC(0x0010) (Config, NeedCtorLink)
	struct FString                                     LifeProfessionMonsterHuntingMarkFxPath;                   // 0x05FC(0x0010) (Config, NeedCtorLink)
	struct FString                                     QuestFxAttachBoneName;                                    // 0x060C(0x0010) (Config, NeedCtorLink)
	struct FVector                                     QuestRelativeLoc;                                         // 0x061C(0x000C) (Config)
	struct FString                                     AnchorModeCamAnim;                                        // 0x0628(0x0010) (Config, NeedCtorLink)
	float                                              AnchorModeCamDegree;                                      // 0x0638(0x0004) (Config)
	struct FString                                     InteractionCamAnim_Ship;                                  // 0x063C(0x0010) (Config, NeedCtorLink)
	int                                                InteractionDistance_Ship;                                 // 0x064C(0x0004) (Config)
	struct FString                                     InteractionCamAnim_Low;                                   // 0x0650(0x0010) (Config, NeedCtorLink)
	int                                                InteractionDistance_Low;                                  // 0x0660(0x0004) (Config)
	struct FString                                     InteractionCamAnim_Middle;                                // 0x0664(0x0010) (Config, NeedCtorLink)
	int                                                InteractionDistance_Middle;                               // 0x0674(0x0004) (Config)
	struct FString                                     InteractionCamAnim_High;                                  // 0x0678(0x0010) (Config, NeedCtorLink)
	int                                                InteractionDistance_High;                                 // 0x0688(0x0004) (Config)
	int                                                ApproachEvent_Distance;                                   // 0x068C(0x0004) (Config)
	struct FString                                     InteractionNextLinkSound;                                 // 0x0690(0x0010) (Config, NeedCtorLink)
	TArray<class UMaterialInstanceConstant*>           EffectFenceMICs;                                          // 0x06A0(0x0010) (Transient, NeedCtorLink)
	TArray<class AEFSceneCapture2DActor*>              CaptureActors;                                            // 0x06B0(0x0010) (Transient, NeedCtorLink)
	TArray<class AEFSceneCaptureObjectLocation*>       CaptureObjectLocations;                                   // 0x06C0(0x0010) (Transient, NeedCtorLink)
	TArray<class AActor*>                              HeadStatusActors;                                         // 0x06D0(0x0010) (Transient, NeedCtorLink)
	TArray<int>                                        HeadStatusActorIndexPools;                                // 0x06E0(0x0010) (Transient, NeedCtorLink)
	TArray<class AActor*>                              PoolBindActors;                                           // 0x06F0(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameInfo");
		return ptr;
	}


	bool AllowCheats(class APlayerController* P);
	void PostSeamlessTravel();
	void GameEnding();
	void NotifyMapLoaded();
	void NotfiyLoadingStep(const struct FString& InStepName);
	void Tick(float DeltaSeconds);
	void PostLogin(class APlayerController* NewPlayer);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
	void LoadLevel(const struct FString& LevelName);
	void RestartPlayer(class AController* NewPlayer);
	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	void GenericPlayerInitialization(class AController* C);
};


// Class EFGame.EFMotionSkeletalMeshActor
// 0x002C (0x0334 - 0x0308)
class AEFMotionSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	struct FVector                                     vOriginLocation;                                          // 0x0308(0x000C) (Transient)
	struct FRotator                                    vOriginRotation;                                          // 0x0314(0x000C) (Transient)
	uint32_t                                           bSaveSMCLocNRot : 1;                                      // 0x0320(0x0004) (Transient)
	uint32_t                                           bMotionToggle : 1;                                        // 0x0320(0x0004) (Edit, Transient)
	TArray<class UEFActorMotionBase*>                  MotionArr;                                                // 0x0324(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMotionSkeletalMeshActor");
		return ptr;
	}

};


// Class EFGame.EFMotionStaticMeshActor
// 0x002C (0x0334 - 0x0308)
class AEFMotionStaticMeshActor : public AInterpActor
{
public:
	struct FVector                                     vOriginLocation;                                          // 0x0308(0x000C) (Transient)
	struct FRotator                                    vOriginRotation;                                          // 0x0314(0x000C) (Transient)
	uint32_t                                           bSaveSMCLocNRot : 1;                                      // 0x0320(0x0004) (Transient)
	uint32_t                                           bMotionToggle : 1;                                        // 0x0320(0x0004) (Edit, Transient)
	TArray<class UEFActorMotionBase*>                  MotionArr;                                                // 0x0324(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMotionStaticMeshActor");
		return ptr;
	}

};


// Class EFGame.EFParticleSkeletalMeshActor
// 0x0094 (0x0300 - 0x026C)
class AEFParticleSkeletalMeshActor : public AActor
{
public:
	TArray<struct FEFAnimDataItem>                     AnimDataList;                                             // 0x026C(0x0010) (Transient, AlwaysInit, NeedCtorLink)
	int                                                CurAnimDataIndex;                                         // 0x027C(0x0004) (Transient, AlwaysInit)
	struct FName                                       CurAnimSeqName;                                           // 0x0280(0x0008) (Transient)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0288(0x0008) (Edit, ExportObject, Component, EditInline)
	class UEFSkeletalMeshComponent*                    Mesh;                                                     // 0x0290(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UEFSkeletalMeshComponent*>            ManagedPartMeshs;                                         // 0x0298(0x0010) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<struct FEFExtraSkelMeshInfo>                ExtraSkelMeshList;                                        // 0x02A8(0x0010) (Transient, Component, AlwaysInit, NeedCtorLink)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x02B8(0x0010) (Transient, AlwaysInit, NeedCtorLink)
	class AEFPawn*                                     OwnerPawn;                                                // 0x02C8(0x0008) (Transient, AlwaysInit)
	struct FString                                     OwnerLookInfoKey;                                         // 0x02D0(0x0010) (Transient, NeedCtorLink)
	float                                              NonAniGuaranteeDuration;                                  // 0x02E0(0x0004) (Transient, AlwaysInit)
	uint32_t                                           bActionSpawned : 1;                                       // 0x02E4(0x0004) (Transient)
	TArray<struct FString>                             ActionNotifyTagList;                                      // 0x02E8(0x0010) (Transient, AlwaysInit, NeedCtorLink)
	float                                              PlayRate;                                                 // 0x02F8(0x0004) (Transient)
	int                                                AttachedPSIIndex;                                         // 0x02FC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSkeletalMeshActor");
		return ptr;
	}

};


// Class EFGame.EFPawn
// 0x0304 (0x0884 - 0x0580)
class AEFPawn : public APawn
{
public:
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0580(0x0008) (Edit, ExportObject, Component, EditInline)
	class UEFActionObjectGroup*                        ActionObjectGroup;                                        // 0x0588(0x0008) (Deprecated)
	uint32_t                                           bDefaultMeshHide : 1;                                     // 0x0590(0x0004)
	uint32_t                                           bRootMotionFallingCheck : 1;                              // 0x0590(0x0004) (DuplicateTransient)
	uint32_t                                           bCanDoFloorConform : 1;                                   // 0x0590(0x0004)
	uint32_t                                           bCanDoStepsSmoothing : 1;                                 // 0x0590(0x0004) (Edit)
	uint32_t                                           IsMatineePlay : 1;                                        // 0x0590(0x0004) (Transient)
	uint32_t                                           PhysFallingByAction : 1;                                  // 0x0590(0x0004) (Transient)
	uint32_t                                           bMergeAction : 1;                                         // 0x0590(0x0004) (Transient)
	uint32_t                                           bIgnoreBlockActors : 1;                                   // 0x0590(0x0004) (Transient)
	uint32_t                                           bEnableMaxRootMotionDistance : 1;                         // 0x0590(0x0004) (Transient)
	uint32_t                                           RootMotionBeHitControlHeight : 1;                         // 0x0590(0x0004) (Transient)
	uint32_t                                           bForceUniformVelocity : 1;                                // 0x0590(0x0004) (Transient)
	uint32_t                                           bNeedMoveChangedBase : 1;                                 // 0x0590(0x0004) (Transient)
	uint32_t                                           IsJustFinishedCinematicAnim : 1;                          // 0x0590(0x0004) (Transient)
	uint32_t                                           bUseDynamicFoliage : 1;                                   // 0x0590(0x0004)
	uint32_t                                           bValidCurrentFloorTypeCheck : 1;                          // 0x0590(0x0004) (Transient)
	uint32_t                                           bUseMeshMerge : 1;                                        // 0x0590(0x0004) (Const)
	uint32_t                                           bHideOnNextMeshMergeRequest : 1;                          // 0x0590(0x0004) (Transient)
	uint32_t                                           bDisableJumpOffPawn : 1;                                  // 0x0590(0x0004) (Transient)
	uint32_t                                           bGrabbed : 1;                                             // 0x0590(0x0004) (Transient)
	class UEFSkeletalMeshComponent*                    ExtendMesh;                                               // 0x0594(0x0008) (ExportObject, Component, EditInline)
	TEnumAsByte<ERootBoneAxis>                         RootBoneOption[0x3];                                      // 0x059C(0x0001)
	TEnumAsByte<EPhysics>                              ForceActionPhysics;                                       // 0x059F(0x0001) (Transient)
	TEnumAsByte<EBlockPCRootMotionSkillPenetrateType>  BlockPCRootMotionSkillPenetrate;                          // 0x05A0(0x0001) (Transient)
	TEnumAsByte<EFMATERIAL_FOOTSTEP>                   CurrentFloorType;                                         // 0x05A1(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05A2(0x0002) MISSED OFFSET
	struct FVector                                     LastFloorConformLocation;                                 // 0x05A4(0x000C) (Const, Transient)
	float                                              MTO_FloorConformZTranslation;                             // 0x05B0(0x0004) (Const, Transient)
	float                                              MTO_BlendedFloorConformZTranslation;                      // 0x05B4(0x0004) (Const, Transient)
	struct FVector                                     MRO_FloorConformRotationAxis;                             // 0x05B8(0x000C) (Const, Transient)
	float                                              MRO_FloorConformRotationAngle;                            // 0x05C4(0x0004) (Const, Transient)
	float                                              MRO_BlendedFloorConformRotationAngle;                     // 0x05C8(0x0004) (Const, Transient)
	float                                              MTO_MeshLocSmootherZOffset;                               // 0x05CC(0x0004) (Const, Transient)
	struct FVector                                     MeshOffset;                                               // 0x05D0(0x000C) (Const, Transient)
	struct FVector                                     LastLocation;                                             // 0x05DC(0x000C) (Const, Transient)
	float                                              DefaultGroundSpeed;                                       // 0x05E8(0x0004) (Transient)
	float                                              GravityFactor;                                            // 0x05EC(0x0004) (Transient)
	struct FVector                                     SkillStartPos;                                            // 0x05F0(0x000C) (Transient)
	struct FVector                                     HitReactionPushLoc;                                       // 0x05FC(0x000C) (Transient)
	struct FVector                                     LastRootMotionAccumTranslation;                           // 0x0608(0x000C) (Transient)
	struct FVector                                     RootMotionStartLoc;                                       // 0x0614(0x000C) (Transient)
	struct FMatrix                                     RootMotionStartRot;                                       // 0x0620(0x0040) (Transient)
	struct FVector                                     TargetRootMotionLoc;                                      // 0x0660(0x000C) (Transient)
	float                                              MaxRootMotionDistance;                                    // 0x066C(0x0004) (Transient)
	float                                              MaxRootMotionSquaredDistance;                             // 0x0670(0x0004) (Transient)
	int                                                ChangeRootMotion;                                         // 0x0674(0x0004) (Transient)
	int                                                PrevChangeRootMotion;                                     // 0x0678(0x0004) (Transient)
	float                                              RootMotionBeHitControlSetTime;                            // 0x067C(0x0004) (Transient)
	float                                              RootMotionBeHitControlDuration;                           // 0x0680(0x0004) (Transient)
	float                                              RootMotionBeHitMaxHeight;                                 // 0x0684(0x0004) (Transient)
	struct FRotator                                    MoveRotation;                                             // 0x0688(0x000C) (Transient)
	class AEFPawn*                                     BlockedPawnWhenSkillStart;                                // 0x0694(0x0008) (Transient)
	class AActor*                                      CinematicActor;                                           // 0x069C(0x0008) (Transient)
	struct FBasedPosition                              CachedBasePositionBySelf;                                 // 0x06A4(0x0038) (Transient)
	struct FBasedPosition                              CachedBasePositionByTarget;                               // 0x06DC(0x0038) (Transient)
	struct FVector                                     SyncDeltaMove;                                            // 0x0714(0x000C) (Transient)
	struct FVector                                     SaveLocation;                                             // 0x0720(0x000C) (Transient)
	struct FRotator                                    SaveRotation;                                             // 0x072C(0x000C) (Transient)
	struct FPlayerLocationInfo                         CinematicPlayerLocation;                                  // 0x0738(0x0008) (Transient)
	struct FVector                                     UniformVelocity;                                          // 0x0740(0x000C) (Transient)
	class AEFPawn*                                     DrivenEFVehicle;                                          // 0x074C(0x0008) (Transient)
	struct FQWord                                      TryNextMoveTransitIndex;                                  // 0x0754(0x0008) (Transient)
	TArray<class UMaterialInstanceConstant*>           AffectedFoliageMICs;                                      // 0x075C(0x0010) (Transient, NeedCtorLink)
	int                                                AttachedPSIIndex;                                         // 0x076C(0x0004) (Transient)
	struct FEFBasedLocation                            PrevFloorCheckLocation;                                   // 0x0770(0x0010) (Transient)
	struct FVector                                     LastRootMotionPosition;                                   // 0x0780(0x000C) (Transient)
	float                                              LastRootMotionRecordedTime;                               // 0x078C(0x0004) (Transient)
	class UEFMainSkelComponent*                        OriginMesh;                                               // 0x0790(0x0008) (ExportObject, Transient, Component, EditInline)
	struct FPointer                                    MeshMergeSourceLookInfoPointer;                           // 0x0798(0x0008) (Native, Transient)
	TArray<struct FPointer>                            MeshMergeSourcePartsArray;                                // 0x07A0(0x0010) (Native, Transient, AlwaysInit)
	struct FVector                                     Momentum;                                                 // 0x07B0(0x000C) (Const, Transient)
	unsigned char                                      UnknownData01[0x48];                                      // 0x07BC(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFPawn.TrailNotifyToParticleSystemMap
	class UAnimNodeAimOffset*                          AimOffsetAnimNode;                                        // 0x0804(0x0008) (Transient)
	TArray<class AEFParticleSkeletalMeshActor*>        ActionParticleSkeletalMeshActors;                         // 0x080C(0x0010) (Transient, NeedCtorLink)
	struct FEFCharacterAfterImageEffectInfo            AfterImageInfo;                                           // 0x081C(0x0030) (Transient)
	TArray<struct FEFAfterImageChildInfo>              AfterImageChildren;                                       // 0x084C(0x0010) (Transient, Component, NeedCtorLink)
	class UEFActionObjectGroup*                        ActionGroup;                                              // 0x085C(0x0008) (Transient)
	class UEFData_SkelControlGroup*                    SkelControlGroup;                                         // 0x0864(0x0008) (Transient)
	struct FActorTickDropRate                          TickDropRate;                                             // 0x086C(0x0014) (Transient)
	int                                                TickDropRatePriority;                                     // 0x0880(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPawn");
		return ptr;
	}


	void StopAfterImageEffect(bool bForceRemoveAllChildren);
	void StartAfterImageEffect(struct FEFCharacterAfterImageEffectInfo* EffectParams);
	class UParticleSystem* GetAnimTrailParticleSystem(class UAnimNotify_Trails* AnimNotifyData);
	void ApplyFluidSurfaceContinuousForce(class AFluidSurfaceActor* Fluid);
	void ApplyFluidSurfaceImpact(class AFluidSurfaceActor* Fluid, struct FVector* HitLocation);
	void NotifyChangedBase();
	void BaseChange();
	void MAT_FinishAnimControl(class UInterpGroup* InInterpGroup);
	void MAT_BeginAnimControl(class UInterpGroup* InInterpGroup);
	void InterpolationFinished(class USeqAct_Interp* InterpAction);
	void InterpolationStarted(class USeqAct_Interp* InterpAction, class UInterpGroupInst* GroupInst);
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	void DoKismetAttachment(class AActor* Attachment, class USeqAct_AttachToActor* Action);
	void AttachmentCameraActor(class AActor* Attachment, const struct FVector& RelativeViewOffset);
	float GetGravityZ();
	void OnForceFieldDestroy(class UNxForceFieldComponent* FFC);
	bool CreateForceField(class UAnimNotify_ForceField* AnimNotifyData);
	void ExplodeActor(class AActor* ExplodeActor);
	void FinishDyingDelay();
	void SetDefaultStateColor();
	void SetStateColor(const struct FLinearColor& StateColor, float fIntensity);
	void AttackFreezeAnim(float PauseTime);
	void AttackContinueAnim();
	void SetPPOutlineWidth(float Width);
	void SetPPOutlineColor(const struct FVector& InColor);
	void SetPPOutline(bool bPPOutline);
	void SetCloakMode(bool bEnable, float CloakAlpha, bool bRimLight);
	void SetOccludedOutlineColor(const struct FVector& InColor, float InScale);
	void SetOccludedOutline(bool bOutline, float Width);
	void OutsideWorldBounds();
	void FellOutOfWorld(class UClass* dmgType);
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void Falling();
	bool SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime, bool bResetRotationRate);
	void OnParticleSystemFinished(class UParticleSystemComponent* PSC);
	void PostInitAll();
	void ClearAttachedPSIIndex();
	void Destroyed();
	struct FName GetDefaultCameraMode(class APlayerController* RequestedBy);
	bool EncroachingOn(class AActor* Other);
	void EncroachedBy(class AActor* Other);
};


// Class EFGame.EFMonster
// 0x0000 (0x0884 - 0x0884)
class AEFMonster : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMonster");
		return ptr;
	}

};


// Class EFGame.EFNonPlayer
// 0x0000 (0x0884 - 0x0884)
class AEFNonPlayer : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNonPlayer");
		return ptr;
	}

};


// Class EFGame.EFPlayer
// 0x0014 (0x0898 - 0x0884)
class AEFPlayer : public AEFPawn
{
public:
	class ULightEnvironmentComponent*                  PickupPropLightEnvironment;                               // 0x0884(0x0008) (ExportObject, Transient, Component, EditInline)
	int                                                PickupPropLightEnvironmentCount;                          // 0x088C(0x0004) (Transient)
	uint32_t                                           ControlledByTrackMove : 1;                                // 0x0890(0x0004) (Transient)
	uint32_t                                           ControlledByTrackMoveOnServer : 1;                        // 0x0890(0x0004) (Transient)
	float                                              TrackMoveStartPosition;                                   // 0x0894(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayer");
		return ptr;
	}


	void OnUpdatePropertyDrawScale();
	void OnUpdatePropertyDrawScale3D();
};


// Class EFGame.EFSummonNpc
// 0x0000 (0x0884 - 0x0884)
class AEFSummonNpc : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSummonNpc");
		return ptr;
	}

};


// Class EFGame.EFTransit
// 0x0010 (0x0894 - 0x0884)
class AEFTransit : public AEFPawn
{
public:
	int                                                TransitIndex;                                             // 0x0884(0x0004) (Transient)
	struct FVector                                     CollisionBoxExtent;                                       // 0x0888(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTransit");
		return ptr;
	}


	bool EncroachingOn(class AActor* Other);
};


// Class EFGame.EFTrap
// 0x0000 (0x0884 - 0x0884)
class AEFTrap : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTrap");
		return ptr;
	}

};


// Class EFGame.EFVehicle
// 0x0000 (0x0884 - 0x0884)
class AEFVehicle : public AEFPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVehicle");
		return ptr;
	}

};


// Class EFGame.EFPhysicalMaterialProperty
// 0x0001 (0x0059 - 0x0058)
class UEFPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	TEnumAsByte<EFMATERIAL_FOOTSTEP>                   MaterialFootstep;                                         // 0x0058(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPhysicalMaterialProperty");
		return ptr;
	}

};


// Class EFGame.EFPlayerController
// 0x02A8 (0x0A30 - 0x0788)
class AEFPlayerController : public AGamePlayerController
{
public:
	TArray<struct FEFInputState>                       m_InputStateFlow;                                         // 0x0788(0x0010) (Transient, NeedCtorLink)
	uint32_t                                           bGamePadInput : 1;                                        // 0x0798(0x0004) (Transient)
	uint32_t                                           bInteractionMode : 1;                                     // 0x0798(0x0004) (Transient)
	uint32_t                                           bCallFromTargetCastMode : 1;                              // 0x0798(0x0004) (Transient)
	uint32_t                                           bHideSwitch : 1;                                          // 0x0798(0x0004) (Transient)
	uint32_t                                           bPickMe : 1;                                              // 0x0798(0x0004) (Transient)
	uint32_t                                           bForceMoveReservation : 1;                                // 0x0798(0x0004) (Transient)
	uint32_t                                           bForceMoveRelease : 1;                                    // 0x0798(0x0004) (Transient)
	uint32_t                                           bCruiseMode : 1;                                          // 0x0798(0x0004) (Transient)
	uint32_t                                           bCruiseBoostMode : 1;                                     // 0x0798(0x0004) (Transient)
	uint32_t                                           bPrevCruiseMode : 1;                                      // 0x0798(0x0004) (Transient)
	struct FEFInputCommand                             m_CurInputCommand;                                        // 0x079C(0x0040) (Transient)
	TEnumAsByte<EFPlayerControlInputCondition>         m_CurInputCondition;                                      // 0x07DC(0x0001) (Transient)
	TEnumAsByte<ETargetCastMode>                       TargetCastMode;                                           // 0x07DD(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07DE(0x0002) MISSED OFFSET
	float                                              fCheckPathTime;                                           // 0x07E0(0x0004) (Transient)
	float                                              fCheckPickEffectTime;                                     // 0x07E4(0x0004) (Transient)
	float                                              fUpdateMaxPathTime;                                       // 0x07E8(0x0004) (Transient)
	class AActor*                                      HitWorldActor;                                            // 0x07EC(0x0008) (Transient)
	class AActor*                                      HitActor;                                                 // 0x07F4(0x0008) (Transient)
	struct FVector                                     HitWorldLocation;                                         // 0x07FC(0x000C) (Transient)
	struct FVector                                     HitActorLocation;                                         // 0x0808(0x000C) (Transient)
	class AEmitter*                                    PickingEffect;                                            // 0x0814(0x0008) (Transient)
	TArray<class AEFPickingEmitter*>                   PickingEffectArr;                                         // 0x081C(0x0010) (Transient, NeedCtorLink)
	TArray<class AEFPickingEmitter*>                   PickingEffectUseArr;                                      // 0x082C(0x0010) (Transient, NeedCtorLink)
	int                                                PickingEffectCount;                                       // 0x083C(0x0004)
	struct FEFBasedLocation                            TargetCastPos;                                            // 0x0840(0x0010) (Transient)
	class UEFPlayerInput*                              EFPlayerInput;                                            // 0x0850(0x0008) (Transient)
	class AActor*                                      SelectedActor;                                            // 0x0858(0x0008) (Transient)
	class AActor*                                      PreSelectedActor;                                         // 0x0860(0x0008) (Transient)
	class AActor*                                      OverActor;                                                // 0x0868(0x0008) (Transient)
	struct FVector                                     OverActorHitLocation;                                     // 0x0870(0x000C) (Transient)
	float                                              SelectedMaxDistance;                                      // 0x087C(0x0004) (Transient)
	struct FVector                                     ForceMoveReservationPos;                                  // 0x0880(0x000C) (Transient)
	struct FQWord                                      DebugOverObjectId;                                        // 0x088C(0x0008) (Transient)
	struct FEFBasedLocation                            LastMoveToPos;                                            // 0x0894(0x0010) (Transient)
	struct FVector                                     CruiseModeDirection;                                      // 0x08A4(0x000C) (Transient)
	float                                              fPressedMoveIgnoreRadius;                                 // 0x08B0(0x0004) (Transient)
	float                                              fPressedMoveIgnoreAngle;                                  // 0x08B4(0x0004) (Transient)
	struct FPostProcessSettings                        WithOutDominantLightPPSettings;                           // 0x08B8(0x0174) (Transient, NeedCtorLink)
	float                                              WithOutDominantLightPPAlpha;                              // 0x0A2C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerController");
		return ptr;
	}


	struct FString ConsoleCommand(const struct FString& Command, bool bWriteToLog);
	void ProcessCinematic(bool bInCinematicMode);
	void GetPlayerInitPosition(struct FVector* out_Location, struct FRotator* out_Rotation);
	void GetPlayerViewPointQuat(struct FVector* out_Location, struct FQuat* out_Quaternion);
	void GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void DrawHUD(class AHUD* H);
	void SpawnDefaultHUD();
	bool IsStopMovieLoading();
	void PlayerTick(float DeltaTime);
	void UpdateRotation(float DeltaTime);
	void StopMovieLoading();
	void Destroyed();
	void PostBeginPlay();
	void InitInputSystem();
};


// Class EFGame.EFPlayerInput
// 0x0030 (0x02E8 - 0x02B8)
class UEFPlayerInput : public UPlayerInput
{
public:
	struct FVector2D                                   CurMouseDeltaPos;                                         // 0x02B8(0x0008)
	struct FVector2D                                   OldMouseDeltaPos;                                         // 0x02C0(0x0008)
	struct FIntPoint                                   CurMousePos;                                              // 0x02C8(0x0008)
	struct FIntPoint                                   OldMousePos;                                              // 0x02D0(0x0008)
	uint32_t                                           bCtrl : 1;                                                // 0x02D8(0x0004) (Transient)
	uint32_t                                           bShift : 1;                                               // 0x02D8(0x0004) (Transient)
	uint32_t                                           bAlt : 1;                                                 // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseLButton_Pressed : 1;                                // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseLButton_Released : 1;                               // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseLButton_Repeated : 1;                               // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseRButton_Pressed : 1;                                // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseRButton_Released : 1;                               // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseRButton_Repeated : 1;                               // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMouseButtonSwap : 1;                                     // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMoveKey_Pressed : 1;                                     // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMoveKey_Released : 1;                                    // 0x02D8(0x0004) (Transient)
	uint32_t                                           bMoveKey_Repeated : 1;                                    // 0x02D8(0x0004) (Transient)
	unsigned char                                      bRotateButton;                                            // 0x02DC(0x0001) (Input)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              MouseDeltaX;                                              // 0x02E0(0x0004)
	float                                              MouseDeltaY;                                              // 0x02E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerInput");
		return ptr;
	}


	void DefaultPositionControlPanel();
	void FocusControlPanel();
	void ToggleControlPanel();
	void OnMouseScrollDown();
	void OnMouseScrollUp();
	void PlayerInput(float DeltaTime);
	bool InputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad);
};


// Class EFGame.EFProjectile
// 0x01F8 (0x04C0 - 0x02C8)
class AEFProjectile : public AProjectile
{
public:
	struct FQWord                                      CasterId;                                                 // 0x02C8(0x0008) (Transient)
	int                                                ProjectileId;                                             // 0x02D0(0x0004) (Transient)
	struct FPointer                                    ProjectileData;                                           // 0x02D4(0x0008) (Native, Transient)
	struct FPointer                                    ProjectileBankData;                                       // 0x02DC(0x0008) (Native, Transient)
	float                                              InstigatorModelScaleRate;                                 // 0x02E4(0x0004) (Transient)
	int                                                TrailEmitterPSGroupIndex;                                 // 0x02E8(0x0004) (Transient)
	int                                                AttachedPSIIndex;                                         // 0x02EC(0x0004) (Transient)
	struct FSet_Mirror                                 TouchedActorList;                                         // 0x02F0(0x0048) (Native, Transient)
	struct FEFBasedLocation                            StartLocation;                                            // 0x0338(0x0010) (Transient)
	struct FEFBasedLocation                            TargetLocation;                                           // 0x0348(0x0010) (Transient)
	float                                              Lifetime;                                                 // 0x0358(0x0004) (Transient)
	float                                              CurTime;                                                  // 0x035C(0x0004) (Transient)
	float                                              CurSpeed;                                                 // 0x0360(0x0004) (Transient)
	float                                              MaxDistance;                                              // 0x0364(0x0004) (Transient)
	float                                              CreateDelay;                                              // 0x0368(0x0004) (Transient)
	uint32_t                                           PlayerControl : 1;                                        // 0x036C(0x0004) (Transient)
	uint32_t                                           SendedRemovePacket : 1;                                   // 0x036C(0x0004) (Transient)
	uint32_t                                           HitSkip : 1;                                              // 0x036C(0x0004) (Transient)
	uint32_t                                           DestroyCalled : 1;                                        // 0x036C(0x0004) (Transient)
	uint32_t                                           RemoveCalled : 1;                                         // 0x036C(0x0004) (Transient)
	uint32_t                                           ArriveMaxDistance : 1;                                    // 0x036C(0x0004) (Transient)
	uint32_t                                           TimerStopWhenBaseDestroy : 1;                             // 0x036C(0x0004) (Transient)
	uint32_t                                           CycleHitFalg : 1;                                         // 0x036C(0x0004) (Transient)
	uint32_t                                           AmITarget : 1;                                            // 0x036C(0x0004) (Transient)
	TEnumAsByte<EUnpublishReason>                      DestroyReasonforPacket;                                   // 0x0370(0x0001) (Transient)
	TEnumAsByte<ESkillEffectTarget>                    TargetType;                                               // 0x0371(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0374(0x0008) (Transient)
	int                                                TargetActorLimbId;                                        // 0x037C(0x0004) (Transient)
	class AActor*                                      HitActor;                                                 // 0x0380(0x0008) (Transient)
	int                                                HitNpcPartMask;                                           // 0x0388(0x0004) (Transient)
	float                                              DestroyAfterTime;                                         // 0x038C(0x0004) (Transient)
	struct FVector                                     BaseVelocity;                                             // 0x0390(0x000C) (Transient)
	class AActor*                                      MoveBasedActor;                                           // 0x039C(0x0008) (Transient)
	struct FVector                                     PrevMoveBasedLocation;                                    // 0x03A4(0x000C) (Transient)
	struct FRotator                                    PrevMoveBasedRotation;                                    // 0x03B0(0x000C) (Transient)
	float                                              RevScale;                                                 // 0x03BC(0x0004) (Transient)
	int                                                JudgmentRotationSpeed;                                    // 0x03C0(0x0004) (Transient)
	struct FRotator                                    RelativeJudgmentRotation;                                 // 0x03C4(0x000C) (Transient)
	float                                              ElapsedTime;                                              // 0x03D0(0x0004) (Transient)
	int                                                AccelType;                                                // 0x03D4(0x0004) (Transient)
	float                                              AccelStartValue;                                          // 0x03D8(0x0004) (Transient)
	float                                              AccelMaxSpeedElapseTime;                                  // 0x03DC(0x0004) (Transient)
	TArray<struct FEFProjectileTimerData>              Timer;                                                    // 0x03E0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FEFProjectileAkEventData>            AkEventDatas;                                             // 0x03F0(0x0010) (Transient, NeedCtorLink)
	class USkeletalMeshComponent*                      SkeletalMeshComponentData;                                // 0x0400(0x0008) (ExportObject, Transient, Component, EditInline)
	TArray<struct FEFProjectileMultiUseData>           SkeletalMeshMaterialParameterArray;                       // 0x0408(0x0010) (NeedCtorLink)
	int                                                FromSkillLV;                                              // 0x0418(0x0004) (Transient)
	int                                                FromSkillID;                                              // 0x041C(0x0004) (Transient)
	int                                                FromSkillStageIndex;                                      // 0x0420(0x0004) (Transient)
	int                                                FromEffectID;                                             // 0x0424(0x0004) (Transient)
	int                                                Tier[0x3];                                                // 0x0428(0x0004) (Transient)
	struct FEFProjectileCustomData                     CustomData;                                               // 0x0434(0x0018) (Transient)
	float                                              CycleHitLife;                                             // 0x044C(0x0004) (Transient)
	struct FVector                                     CycleHitBeforeLoc;                                        // 0x0450(0x000C) (Transient)
	struct FSet_Mirror                                 HittedCycleHitTargetList;                                 // 0x045C(0x0048) (Native, Transient)
	struct FVector                                     BeforeLocation;                                           // 0x04A4(0x000C) (Transient)
	TArray<int>                                        Lineage;                                                  // 0x04B0(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectile");
		return ptr;
	}


	void ClearAttachedPSIIndex();
	void Destroyed();
	void BaseChange();
	void NotifyBaseChange();
	void ProcessTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class EFGame.EFProjectileFixArea
// 0x0048 (0x0508 - 0x04C0)
class AEFProjectileFixArea : public AEFProjectile
{
public:
	int                                                SpawnedStartFX;                                           // 0x04C0(0x0004) (Transient)
	int                                                SpawnedStartDecalFX;                                      // 0x04C4(0x0004) (Transient)
	int                                                SpawnedLoopFX;                                            // 0x04C8(0x0004) (Transient)
	int                                                SpawnedLoopDecalFX;                                       // 0x04CC(0x0004) (Transient)
	struct FRotator                                    RandomRotate;                                             // 0x04D0(0x000C) (Transient)
	uint32_t                                           PlayEndEffect : 1;                                        // 0x04DC(0x0004) (Transient)
	float                                              LastRepeatTime;                                           // 0x04E0(0x0004) (Transient)
	float                                              StartFXParticleOriginDrawScale;                           // 0x04E4(0x0004) (Transient)
	float                                              StartDecalParticleOriginDrawScale;                        // 0x04E8(0x0004) (Transient)
	float                                              LoopFXParticleOriginDrawScale;                            // 0x04EC(0x0004) (Transient)
	float                                              LoopDecalParticleOriginDrawScale;                         // 0x04F0(0x0004) (Transient)
	float                                              StartIndexDecalOriginDrawScale;                           // 0x04F4(0x0004) (Transient)
	TArray<struct FEFSummonsFixAreaStartIndexDecal>    StartIndexDecalInfos;                                     // 0x04F8(0x0010) (Transient, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileFixArea");
		return ptr;
	}

};


// Class EFGame.EFProjectileGrenade
// 0x0008 (0x04C8 - 0x04C0)
class AEFProjectileGrenade : public AEFProjectile
{
public:
	float                                              ExplodeUpperHeight;                                       // 0x04C0(0x0004) (Transient)
	float                                              TimeTilNextGravUpdate;                                    // 0x04C4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileGrenade");
		return ptr;
	}

};


// Class EFGame.EFProjectileMissile
// 0x0000 (0x04C0 - 0x04C0)
class AEFProjectileMissile : public AEFProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileMissile");
		return ptr;
	}

};


// Class EFGame.EFProjectileTrace
// 0x0024 (0x04E4 - 0x04C0)
class AEFProjectileTrace : public AEFProjectile
{
public:
	float                                              TargetSearchRadius;                                       // 0x04C0(0x0004) (Transient)
	float                                              TargetSearchStartTime;                                    // 0x04C4(0x0004) (Transient)
	float                                              TurnVelocity;                                             // 0x04C8(0x0004) (Transient)
	float                                              TargetSearchAngle;                                        // 0x04CC(0x0004) (Transient)
	uint32_t                                           bEnableTraceGiveUp : 1;                                   // 0x04D0(0x0004) (Transient)
	uint32_t                                           bTargetChanged : 1;                                       // 0x04D0(0x0004) (Transient)
	uint32_t                                           bTraceGiveUpFinish : 1;                                   // 0x04D0(0x0004) (Transient)
	uint32_t                                           bEnableTraceDuration : 1;                                 // 0x04D0(0x0004) (Transient)
	float                                              TraceGiveUpAngle;                                         // 0x04D4(0x0004) (Transient)
	float                                              TraceGiveUpRadius;                                        // 0x04D8(0x0004) (Transient)
	TEnumAsByte<ETraceProjectileState>                 TraceState;                                               // 0x04DC(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	float                                              TraceDurationRemain;                                      // 0x04E0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileTrace");
		return ptr;
	}

};


// Class EFGame.EFSkeletalMeshActor
// 0x0008 (0x0310 - 0x0308)
class AEFSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	int                                                AttachedPSIIndex;                                         // 0x0308(0x0004) (Transient)
	uint32_t                                           bTraceGameLand : 1;                                       // 0x030C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActor");
		return ptr;
	}


	void ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void BaseChange();
	void Destroyed();
};


// Class EFGame.EFSkeletalMeshActorLookInfoMAT
// 0x0090 (0x03A8 - 0x0318)
class AEFSkeletalMeshActorLookInfoMAT : public ASkeletalMeshActorMAT
{
public:
	struct FString                                     LookInfoKey;                                              // 0x0318(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	class UEFData_SkelControlGroup*                    SkelControlGroup;                                         // 0x0328(0x0008) (Edit)
	struct FEFLookInfoSMActorPartMaterialInfo          DefaultMeshMaterialInfo;                                  // 0x0330(0x0030) (NeedCtorLink)
	TArray<struct FEFLookInfoSMActorAdditionalPartInfo> AdditionalPartsEx;                                        // 0x0360(0x0010) (Edit, Component, NeedCtorLink)
	TArray<struct FEFLookInfoSMActorSocketAttachedPartInfo> AdditionalPartsAttachedToSocketEx;                        // 0x0370(0x0010) (Edit, Component, NeedCtorLink)
	TArray<class USkeletalMeshComponent*>              AdditionalParts;                                          // 0x0380(0x0010) (ExportObject, Component, NeedCtorLink, EditInline, Deprecated)
	TArray<struct FAttachment>                         AdditionalPartsAttachedToSocket;                          // 0x0390(0x0010) (Component, NeedCtorLink, Deprecated)
	int                                                SpawnedParticleGroupID;                                   // 0x03A0(0x0004) (Transient)
	uint32_t                                           bApplyLookInfoOnLoad : 1;                                 // 0x03A4(0x0004) (Edit)
	uint32_t                                           bLookInfoApplied : 1;                                     // 0x03A4(0x0004) (Transient)
	uint32_t                                           bSpawnDefaultParticles : 1;                               // 0x03A4(0x0004) (Edit)
	uint32_t                                           bLowerFidelity : 1;                                       // 0x03A4(0x0004) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActorLookInfoMAT");
		return ptr;
	}

};


// Class EFGame.EFSkeletalMeshActorPCLookInfoMAT
// 0x0015 (0x03BD - 0x03A8)
class AEFSkeletalMeshActorPCLookInfoMAT : public AEFSkeletalMeshActorLookInfoMAT
{
public:
	uint32_t                                           bAttachWeaponToBattleStateSockeet : 1;                    // 0x03A8(0x0004) (Edit)
	uint32_t                                           bNameTagAdded : 1;                                        // 0x03A8(0x0004) (Transient)
	struct FString                                     NameTagString;                                            // 0x03AC(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TEnumAsByte<EPCLookInfoActorNameTagType>           NameTagType;                                              // 0x03BC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshActorPCLookInfoMAT");
		return ptr;
	}

};


// Class EFGame.EFSkeletalMeshComponent
// 0x008C (0x0974 - 0x08E8)
class UEFSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	uint32_t                                           bMeshHide : 1;                                            // 0x08E8(0x0004)
	uint32_t                                           bDynamicPhysicsParamEnable : 1;                           // 0x08E8(0x0004) (Transient)
	struct FEFDynamicPhysicsParam                      DynamicPhysicsParamInfo;                                  // 0x08EC(0x0018) (Transient)
	TArray<class UMaterialInterface*>                  DefaultMaterialsMIC;                                      // 0x0904(0x0010) (Transient, NeedCtorLink)
	TArray<struct FEFMaterialVariation>                MaterialsVariation;                                       // 0x0914(0x0010) (Transient, NeedCtorLink)
	class USkeletalMesh*                               SkeletalMeshForSocket;                                    // 0x0924(0x0008) (Transient)
	unsigned char                                      UnknownData00[0x48];                                      // 0x092C(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFSkeletalMeshComponent.SocketInfoMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkeletalMeshComponent");
		return ptr;
	}

};


// Class EFGame.EFMainSkelComponent
// 0x0048 (0x09BC - 0x0974)
class UEFMainSkelComponent : public UEFSkeletalMeshComponent
{
public:
	uint32_t                                           bDefaultMeshHide : 1;                                     // 0x0974(0x0004)
	int                                                LODIndexForPhysics;                                       // 0x0978(0x0004) (Transient)
	TArray<struct FName>                               PhysicsBoneListForPhysics;                                // 0x097C(0x0010) (Transient, NeedCtorLink)
	TArray<unsigned char>                              PhysicsBoneIndexListForPhysics;                           // 0x098C(0x0010) (Transient, NeedCtorLink)
	TArray<struct FName>                               RequiredBoneListForPhysics;                               // 0x099C(0x0010) (Transient, NeedCtorLink)
	TArray<struct FName>                               FixedBoneListForPhysics;                                  // 0x09AC(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMainSkelComponent");
		return ptr;
	}

};


// Class EFGame.EFPartsSkelComponent
// 0x00E4 (0x0A58 - 0x0974)
class UEFPartsSkelComponent : public UEFSkeletalMeshComponent
{
public:
	class AEFPawn*                                     ParentPawn;                                               // 0x0974(0x0008)
	struct FPointer                                    PartsMeshPointer;                                         // 0x097C(0x0008) (Native, Transient)
	struct FEFSocketGroup                              SocketGroup;                                              // 0x0984(0x0030) (NeedCtorLink)
	struct FName                                       AttachSocketName;                                         // 0x09B4(0x0008)
	class UAnimNodeSlot*                               CustomAnimNode;                                           // 0x09BC(0x0008)
	class UMorphNodeMultiPose*                         MorphNodePose;                                            // 0x09C4(0x0008)
	TArray<int>                                        DefaultParticleSystemList;                                // 0x09CC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPointer>                            DefaultParticleDataArray;                                 // 0x09DC(0x0010) (Const, Native, Transient, AlwaysInit)
	TArray<class UEFParticleData*>                     DefaultParticleDataArr;                                   // 0x09EC(0x0010) (Const, Transient, AlwaysInit, NeedCtorLink)
	TArray<int>                                        AttributeParticleSystemList;                              // 0x09FC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UEFParticleData*>                     AttributeParticleDataArr;                                 // 0x0A0C(0x0010) (Transient, AlwaysInit, NeedCtorLink)
	TArray<int>                                        AttributeBaseDefaultParticleSpawnIndexArr;                // 0x0A1C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPointer>                            AttributeBaseDefaultParticleDataArray;                    // 0x0A2C(0x0010) (Const, Native, Transient, AlwaysInit)
	TArray<class UEFParticleData*>                     AttributeBaseDefaultParticleDataArr;                      // 0x0A3C(0x0010) (Transient, AlwaysInit, NeedCtorLink)
	float                                              TranslucencySortKeyFactor;                                // 0x0A4C(0x0004) (Transient)
	class UTexture*                                    AOTexture;                                                // 0x0A50(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPartsSkelComponent");
		return ptr;
	}

};


// Class EFGame.EFTexture2DComposite
// 0x0003 (0x0143 - 0x0140)
class UEFTexture2DComposite : public UTexture2DComposite
{
public:
	TEnumAsByte<ETextureAddress>                       SamplerAddressX;                                          // 0x0140(0x0001)
	TEnumAsByte<ETextureAddress>                       SamplerAddressY;                                          // 0x0141(0x0001)
	TEnumAsByte<ETextureAddress>                       SamplerAddressZ;                                          // 0x0142(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTexture2DComposite");
		return ptr;
	}

};


// Class EFGame.EFVolume
// 0x0008 (0x02B0 - 0x02A8)
class AEFVolume : public AVolume
{
public:
	uint32_t                                           bCollisionEnable : 1;                                     // 0x02A8(0x0004) (Edit)
	float                                              fLastTimeInVolume;                                        // 0x02AC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVolume");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class EFGame.EFVolumeProp
// 0x002D (0x02DD - 0x02B0)
class AEFVolumeProp : public AEFVolume
{
public:
	int                                                SpawnIndex;                                               // 0x02B0(0x0004) (Edit, EditConst)
	class AActor*                                      DeployPropActor;                                          // 0x02B4(0x0008) (Transient)
	class AEFMacroCameraActor*                         MacroCameraActor;                                         // 0x02BC(0x0008) (Edit)
	uint32_t                                           bUseMacroCamera : 1;                                      // 0x02C4(0x0004) (Edit)
	uint32_t                                           bPendingOnEnter : 1;                                      // 0x02C4(0x0004) (Transient)
	float                                              TargetPointDistance;                                      // 0x02C8(0x0004) (Edit)
	float                                              EnterElapsedTime;                                         // 0x02CC(0x0004) (Edit)
	float                                              LeaveElapsedTime;                                         // 0x02D0(0x0004) (Edit)
	class USeqAct_Interp*                              Matinee;                                                  // 0x02D4(0x0008) (Edit, Transient)
	TEnumAsByte<EPropVolumeType>                       VolumePropType;                                           // 0x02DC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVolumeProp");
		return ptr;
	}

};


// Class EFGame.EFGameEngine
// 0x00D4 (0x0B78 - 0x0AA4)
class UEFGameEngine : public UGameEngine
{
public:
	uint32_t                                           bStandalone : 1;                                          // 0x0AA4(0x0004) (Transient)
	uint32_t                                           bCreateServerObjectPC : 1;                                // 0x0AA4(0x0004) (Config)
	uint32_t                                           bCreateServerObjectNPC : 1;                               // 0x0AA4(0x0004) (Config)
	struct FMap_Mirror                                 GroundHeightCache;                                        // 0x0AA8(0x0048) (Transient)
	TArray<class AInstancedFoliageActor*>              InstancedFoliageActorsCache;                              // 0x0AF0(0x0010) (Transient, NeedCtorLink)
	TArray<class AEFCharPerfOptionOverrideVolume*>     CachedCharPerfOptionOverrideVolumes;                      // 0x0B00(0x0010) (Transient, NeedCtorLink)
	struct FPointer                                    AsyncMeshMerger;                                          // 0x0B10(0x0008) (Transient)
	struct FAsyncMeshMergerInfo                        CurrentMeshMergeInfo;                                     // 0x0B18(0x0030) (Transient, NeedCtorLink)
	TArray<struct FAsyncMeshMergerInfo>                AsyncMeshMergers;                                         // 0x0B48(0x0010) (Transient, NeedCtorLink)
	TArray<struct FMergedSkelMeshInfo>                 CachedMergedSkelMeshes;                                   // 0x0B58(0x0010) (Transient, NeedCtorLink)
	struct FVector                                     AsyncMeshMergeBaseLocation;                               // 0x0B68(0x000C) (Const, Transient)
	float                                              ParticleLODDistance;                                      // 0x0B74(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameEngine");
		return ptr;
	}


	struct FString TranslateGFxUIMessage(const struct FString& MessageCode);
	void ShowLineChecks(bool bLineCheck, bool bExtentLineCheck);
};


// Class EFGame.EFMapInfo
// 0x0084 (0x00DC - 0x0058)
class UEFMapInfo : public UMapInfo
{
public:
	struct FMAPINFO_CAMERAVALUE                        DefaultCameraValue;                                       // 0x0058(0x002C) (Edit)
	class UTexture*                                    IBLTexture;                                               // 0x0084(0x0008) (Edit)
	uint32_t                                           CPL_bEnabled : 1;                                         // 0x008C(0x0004) (Edit, Const)
	uint32_t                                           bConvert : 1;                                             // 0x008C(0x0004)
	uint32_t                                           bOverrideGlobalMaxDrawDistance : 1;                       // 0x008C(0x0004) (Edit)
	float                                              CPL_Brightness;                                           // 0x0090(0x0004) (Edit, Const)
	struct FColor                                      CPL_LightColor;                                           // 0x0094(0x0004) (Edit, Const)
	float                                              CPL_Radius;                                               // 0x0098(0x0004) (Edit)
	float                                              CPL_FalloffExponent;                                      // 0x009C(0x0004) (Edit)
	float                                              CPL_ShadowFalloffExponent;                                // 0x00A0(0x0004) (Edit)
	struct FVector                                     CPL_Translation;                                          // 0x00A4(0x000C) (Edit, Const)
	struct FLightingChannelContainer                   CPL_LightingChannels;                                     // 0x00B0(0x0004) (Edit, Const)
	struct FEFDMap_PathEngineData                      PathEngineData;                                           // 0x00B4(0x0024) (Edit)
	float                                              GlobalMaxDrawDistance;                                    // 0x00D8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMapInfo");
		return ptr;
	}


	void SaveCameraValue(class UEFCameraBase* Camera);
	void LoadCameraValue(class UEFCameraBase* Camera);
};


// Class EFGame.EFAnimNodeAim
// 0x0008 (0x01B5 - 0x01AD)
class UEFAnimNodeAim : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	int                                                PrevAimMode;                                              // 0x01B0(0x0004)
	TEnumAsByte<EFAnimNodeAimMode>                     AimMode;                                                  // 0x01B4(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeAim");
		return ptr;
	}

};


// Class EFGame.EFAnimNodeBlendDirectional
// 0x000C (0x01D8 - 0x01CC)
class UEFAnimNodeBlendDirectional : public UAnimNodeBlendDirectional
{
public:
	struct FVector                                     MoveDir;                                                  // 0x01CC(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeBlendDirectional");
		return ptr;
	}

};


// Class EFGame.EFAnimNodeBlendPerBone
// 0x000C (0x0200 - 0x01F4)
class UEFAnimNodeBlendPerBone : public UAnimNodeBlendPerBone
{
public:
	int                                                iForceActiveIndex;                                        // 0x01F4(0x0004) (Edit)
	int                                                iNextForceActiveIndex;                                    // 0x01F8(0x0004) (Transient)
	float                                              fSkipBlendInTime;                                         // 0x01FC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeBlendPerBone");
		return ptr;
	}

};


// Class EFGame.EFAnimNodeLookAt
// 0x0010 (0x0218 - 0x0208)
class UEFAnimNodeLookAt : public UAnimNodeAimOffset
{
public:
	float                                              InterpolateFactor;                                        // 0x0208(0x0004) (Edit)
	uint32_t                                           bActiveLookAt : 1;                                        // 0x020C(0x0004)
	struct FVector2D                                   TargetLookDir;                                            // 0x0210(0x0008) (DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNodeLookAt");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_AkEvent
// 0x0014 (0x0074 - 0x0060)
class UEFAnimNotify_AkEvent : public UAnimNotify
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x0060(0x0008) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x0068(0x0004) (Edit)
	uint32_t                                           bFollowActor : 1;                                         // 0x0068(0x0004) (Edit)
	struct FName                                       BoneName;                                                 // 0x006C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_AkEvent");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_AkEventSwitchFloorMaterial
// 0x0014 (0x0074 - 0x0060)
class UEFAnimNotify_AkEventSwitchFloorMaterial : public UAnimNotify
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x0060(0x0008) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x0068(0x0004) (Edit)
	struct FName                                       BoneName;                                                 // 0x006C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_AkEventSwitchFloorMaterial");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_DropItemEvent
// 0x0009 (0x0069 - 0x0060)
class UEFAnimNotify_DropItemEvent : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0060(0x0008) (Edit)
	TEnumAsByte<EFDropItemEventType>                   DropItemEvent;                                            // 0x0068(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_DropItemEvent");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_Trails
// 0x0000 (0x00D8 - 0x00D8)
class UEFAnimNotify_Trails : public UAnimNotify_Trails
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_Trails");
		return ptr;
	}

};


// Class EFGame.EFAnimNotify_ViewShake
// 0x0000 (0x00B4 - 0x00B4)
class UEFAnimNotify_ViewShake : public UAnimNotify_ViewShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAnimNotify_ViewShake");
		return ptr;
	}

};


// Class EFGame.EFSkelControl_Spring
// 0x0030 (0x011C - 0x00EC)
class UEFSkelControl_Spring : public USkelControlBase
{
public:
	uint32_t                                           bLimitDisplacement : 1;                                   // 0x00EC(0x0004) (Edit)
	uint32_t                                           bNoZSpring : 1;                                           // 0x00EC(0x0004) (Edit)
	uint32_t                                           bRotateX : 1;                                             // 0x00EC(0x0004) (Edit)
	uint32_t                                           bRotateY : 1;                                             // 0x00EC(0x0004) (Edit)
	uint32_t                                           bRotateZ : 1;                                             // 0x00EC(0x0004) (Edit)
	uint32_t                                           bHadValidStrength : 1;                                    // 0x00EC(0x0004) (Transient)
	float                                              MaxDisplacement;                                          // 0x00F0(0x0004) (Edit)
	float                                              SpringStiffness;                                          // 0x00F4(0x0004) (Edit)
	float                                              SpringDamping;                                            // 0x00F8(0x0004) (Edit)
	float                                              ErrorResetThresh;                                         // 0x00FC(0x0004) (Edit)
	float                                              ThisTimstep;                                              // 0x0100(0x0004) (Transient)
	struct FVector                                     BoneLocation;                                             // 0x0104(0x000C) (Transient)
	struct FVector                                     BoneVelocity;                                             // 0x0110(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkelControl_Spring");
		return ptr;
	}

};


// Class EFGame.EFSkelControlSingleBoneOnlyScale
// 0x0004 (0x00F0 - 0x00EC)
class UEFSkelControlSingleBoneOnlyScale : public USkelControlBase
{
public:
	float                                              BaseBoneScale;                                            // 0x00EC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSkelControlSingleBoneOnlyScale");
		return ptr;
	}

};


// Class EFGame.EFTable
// 0x004C (0x00A4 - 0x0058)
class UEFTable : public UObject
{
public:
	int                                                nDB_ID;                                                   // 0x0058(0x0004) (Const)
	int                                                nFieldCount;                                              // 0x005C(0x0004) (Const)
	int                                                nDataCount;                                               // 0x0060(0x0004) (Const)
	TArray<struct FEFTable_Define>                     aDataDefine;                                              // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FEFTable_DataRow>                    aDataRows;                                                // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     SourceFilePath;                                           // 0x0084(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FString                                     SourceFileTimestamp;                                      // 0x0094(0x0010) (Edit, EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTable");
		return ptr;
	}

};


// Class EFGame.EFCameraBase
// 0x0050 (0x00A8 - 0x0058)
class UEFCameraBase : public UObject
{
public:
	class AEFPlayerCamera*                             PlayerCamera;                                             // 0x0058(0x0008) (Transient)
	float                                              DefaultFOV;                                               // 0x0060(0x0004) (Config)
	uint32_t                                           bZoomInterpolation : 1;                                   // 0x0064(0x0004) (Config)
	uint32_t                                           ApplySkeletalMeshForceLOD : 1;                            // 0x0064(0x0004) (Transient)
	uint32_t                                           bResetCameraInterpolation : 1;                            // 0x0064(0x0004) (Transient)
	float                                              MaxZoomDist;                                              // 0x0068(0x0004) (Config)
	float                                              MinZoomDist;                                              // 0x006C(0x0004) (Config)
	float                                              IncrementZoom;                                            // 0x0070(0x0004) (Config)
	float                                              CurrentZoomDist;                                          // 0x0074(0x0004) (Config)
	float                                              DesiredZoomDist;                                          // 0x0078(0x0004) (Config)
	float                                              CurrentYaw;                                               // 0x007C(0x0004) (Config)
	float                                              CurrentPitch;                                             // 0x0080(0x0004) (Config)
	float                                              CurrentFOV;                                               // 0x0084(0x0004) (Config)
	struct FVector                                     RelativeCenterPos;                                        // 0x0088(0x000C) (Config)
	struct FVector                                     CurrentRelativeCenterPos;                                 // 0x0094(0x000C) (Transient)
	struct FName                                       CameraTargetBoneName;                                     // 0x00A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraBase");
		return ptr;
	}


	float GetCurrentFOV();
	float GetDefaultFOV();
	void SetDefaultFOV(float FOV);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void UpdateRotation();
	void InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera);
	void ActivateSkeletalMeshForceLOD();
	bool CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void BecomeViewTarget(class AEFPlayerController* PC);
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	void ResetInterpolation();
	void OnBecomeInActive(class UEFCameraBase* NewCamera);
	void OnBecomeActive(class UEFCameraBase* OldCamera);
	void Init();
};


// Class EFGame.EFBackViewCamera
// 0x0010 (0x00B8 - 0x00A8)
class UEFBackViewCamera : public UEFCameraBase
{
public:
	float                                              BackDistance;                                             // 0x00A8(0x0004) (Config)
	float                                              FrontDistance;                                            // 0x00AC(0x0004) (Config)
	float                                              RightDistance;                                            // 0x00B0(0x0004) (Config)
	float                                              UpDistance;                                               // 0x00B4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBackViewCamera");
		return ptr;
	}


	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
};


// Class EFGame.EFCustomizingCamera
// 0x001C (0x00C4 - 0x00A8)
class UEFCustomizingCamera : public UEFCameraBase
{
public:
	TArray<struct FCutomizingZoomStepInfo>             ZoomStepInfos;                                            // 0x00A8(0x0010) (NeedCtorLink)
	int                                                CurrentZoomStep;                                          // 0x00B8(0x0004) (Transient)
	float                                              InterpolationRatio;                                       // 0x00BC(0x0004) (Transient)
	float                                              InZoomStepDiff;                                           // 0x00C0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCustomizingCamera");
		return ptr;
	}


	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	void ZoomOut();
	void ZoomIn();
	void Init();
};


// Class EFGame.EFFreeCamera
// 0x004C (0x00F4 - 0x00A8)
class UEFFreeCamera : public UEFCameraBase
{
public:
	float                                              DesiredFOV;                                               // 0x00A8(0x0004) (Transient)
	float                                              DesiredYaw;                                               // 0x00AC(0x0004) (Transient)
	float                                              MinimumYaw;                                               // 0x00B0(0x0004) (Transient)
	float                                              MaximumYaw;                                               // 0x00B4(0x0004) (Transient)
	float                                              DesiredPitch;                                             // 0x00B8(0x0004) (Transient)
	float                                              MinimumPitch;                                             // 0x00BC(0x0004) (Transient)
	float                                              MaximumPitch;                                             // 0x00C0(0x0004) (Transient)
	struct FVector                                     DesiredLocation;                                          // 0x00C4(0x000C) (Transient)
	struct FVector                                     CurrentLocation;                                          // 0x00D0(0x000C) (Transient)
	float                                              RotationSensitivity;                                      // 0x00DC(0x0004) (Transient)
	float                                              MoveSensitivity;                                          // 0x00E0(0x0004) (Transient)
	float                                              FovBlendTime;                                             // 0x00E4(0x0004) (Transient)
	float                                              RotationBlendTime;                                        // 0x00E8(0x0004) (Transient)
	float                                              MoveBlendTime;                                            // 0x00EC(0x0004) (Transient)
	uint32_t                                           bInitialize : 1;                                          // 0x00F0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFFreeCamera");
		return ptr;
	}


	void OnBecomeInActive(class UEFCameraBase* NewCamera);
	void OnBecomeActive(class UEFCameraBase* OldCamera);
	void HideOwnerPlayer();
	void ShowOwnerPlayer();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
};


// Class EFGame.EFInteractionCamera
// 0x0000 (0x00A8 - 0x00A8)
class UEFInteractionCamera : public UEFCameraBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInteractionCamera");
		return ptr;
	}


	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	float GetCurrentFOV();
};


// Class EFGame.EFIsometricCamera
// 0x009C (0x0144 - 0x00A8)
class UEFIsometricCamera : public UEFCameraBase
{
public:
	TArray<struct FZoomStepInfo>                       IsometricZoomStepInfos;                                   // 0x00A8(0x0010) (Config, NeedCtorLink)
	TArray<struct FZoomStepInfo>                       CurIsometricZoomStepInfos;                                // 0x00B8(0x0010) (NeedCtorLink)
	float                                              ChangeSkeletalMeshForceLODZoomDistance;                   // 0x00C8(0x0004)
	int                                                ZoomOutAdditionSkeletalMeshForceLODIndex;                 // 0x00CC(0x0004)
	TArray<float>                                      BoostFactorForMipmaps;                                    // 0x00D0(0x0010) (Config, NeedCtorLink)
	int                                                CurrentZoomStep;                                          // 0x00E0(0x0004) (Transient)
	float                                              InterpolationRatio;                                       // 0x00E4(0x0004) (Config)
	float                                              ZoomOutInterpolationRatio;                                // 0x00E8(0x0004) (Config)
	float                                              InZoomStepDiff;                                           // 0x00EC(0x0004) (Transient)
	uint32_t                                           bUseLookAtBlend : 1;                                      // 0x00F0(0x0004) (Config)
	uint32_t                                           bInitLookAtBlend : 1;                                     // 0x00F0(0x0004) (Transient)
	uint32_t                                           bShowLookAtBlend : 1;                                     // 0x00F0(0x0004) (Transient)
	float                                              LookAtBlendDiv;                                           // 0x00F4(0x0004) (Config)
	float                                              LookAtBlendMul;                                           // 0x00F8(0x0004) (Config)
	struct FVector                                     InterpLookAt;                                             // 0x00FC(0x000C) (Transient)
	struct FVector                                     LastCenterPos;                                            // 0x0108(0x000C) (Transient)
	float                                              LastCameraInterpSpeedXY;                                  // 0x0114(0x0004) (Transient)
	float                                              LastCameraInterpSpeedZ;                                   // 0x0118(0x0004) (Transient)
	struct FVector                                     FixedLookAtPos;                                           // 0x011C(0x000C) (Transient)
	struct FFixedCameraInterpSpeed                     FixedCameraInterpInfo;                                    // 0x0128(0x000C) (Transient)
	int                                                CurrCamPostProcessID;                                     // 0x0134(0x0004)
	TEnumAsByte<EISOCamPPMethod>                       ChangePostProcessMethod;                                  // 0x0138(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              CurrOverridePostProcessAlpha;                             // 0x013C(0x0004)
	float                                              BlendOverridePostProcessAlpha;                            // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFIsometricCamera");
		return ptr;
	}


	void SetFixedCameraInterpSpeed(float speedXY, float speedZ);
	bool IsFixedCameraMode();
	void ResetFixedCamera();
	void SetFixedLookAtPos(const struct FVector& InPos);
	void SetCurIsometricZoomStep(int iClassID);
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	void OnBecomeActive(class UEFCameraBase* OldCamera);
	float RefineFOV(float FOV);
	void InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera);
	void ActivateSkeletalMeshForceLOD();
	void ChangeZoomStep(int iStep);
	bool CheckZoom();
	void ZoomOut();
	void ZoomIn();
	void ResetInterpolation();
};


// Class EFGame.EFMacroCamera
// 0x0080 (0x0128 - 0x00A8)
class UEFMacroCamera : public UEFCameraBase
{
public:
	class AEFVolumeProp*                               LastVolumeProp;                                           // 0x00A8(0x0008) (Transient)
	class AEFVolumeProp*                               VolumeProp;                                               // 0x00B0(0x0008) (Transient)
	TArray<class AEFMacroCameraActor*>                 CameraList;                                               // 0x00B8(0x0010) (Transient, NeedCtorLink)
	float                                              CameraPosValue;                                           // 0x00C8(0x0004) (Transient)
	float                                              TargetCameraPosValue;                                     // 0x00CC(0x0004) (Transient)
	class UEFCameraBase*                               PrevCamera;                                               // 0x00D0(0x0008) (Transient)
	uint32_t                                           StartTransition : 1;                                      // 0x00D8(0x0004) (Transient)
	uint32_t                                           EndTransition : 1;                                        // 0x00D8(0x0004) (Transient)
	float                                              StartTime;                                                // 0x00DC(0x0004) (Transient)
	float                                              EndTime;                                                  // 0x00E0(0x0004) (Transient)
	struct FTPOV                                       StartPOV;                                                 // 0x00E4(0x001C) (Transient)
	struct FTPOV                                       EndPOV;                                                   // 0x0100(0x001C) (Transient)
	float                                              ConstraintPitch;                                          // 0x011C(0x0004) (Transient)
	float                                              maxPitch;                                                 // 0x0120(0x0004) (Transient)
	float                                              IncrementRot;                                             // 0x0124(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCamera");
		return ptr;
	}


	void UpdateRotation();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
};


// Class EFGame.EFPanningCamera
// 0x005C (0x0104 - 0x00A8)
class UEFPanningCamera : public UEFCameraBase
{
public:
	float                                              DesiredFOV;                                               // 0x00A8(0x0004) (Transient)
	float                                              DesiredYaw;                                               // 0x00AC(0x0004) (Transient)
	float                                              MinimumYaw;                                               // 0x00B0(0x0004) (Transient)
	float                                              MaximumYaw;                                               // 0x00B4(0x0004) (Transient)
	float                                              DesiredPitch;                                             // 0x00B8(0x0004) (Transient)
	float                                              MinimumPitch;                                             // 0x00BC(0x0004) (Transient)
	float                                              MaximumPitch;                                             // 0x00C0(0x0004) (Transient)
	struct FVector                                     DesiredLocation;                                          // 0x00C4(0x000C) (Transient)
	struct FVector                                     CurrentLocation;                                          // 0x00D0(0x000C) (Transient)
	float                                              RotationSensitivity;                                      // 0x00DC(0x0004) (Transient)
	float                                              MoveSensitivity;                                          // 0x00E0(0x0004) (Transient)
	float                                              FovBlendTime;                                             // 0x00E4(0x0004) (Transient)
	float                                              RotationBlendTime;                                        // 0x00E8(0x0004) (Transient)
	float                                              MoveBlendTime;                                            // 0x00EC(0x0004) (Transient)
	uint32_t                                           bInitialize : 1;                                          // 0x00F0(0x0004) (Transient)
	float                                              MoveSpeed;                                                // 0x00F4(0x0004) (Transient)
	struct FVector                                     CharacterDesiredLocation;                                 // 0x00F8(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPanningCamera");
		return ptr;
	}


	void OnBecomeInActive(class UEFCameraBase* NewCamera);
	void OnBecomeActive(class UEFCameraBase* OldCamera);
	void EndPanningCamera();
	void StartPanningCamera();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
};


// Class EFGame.EFThirdPersonCamera
// 0x0008 (0x00B0 - 0x00A8)
class UEFThirdPersonCamera : public UEFCameraBase
{
public:
	float                                              maxPitch;                                                 // 0x00A8(0x0004)
	float                                              IncrementRot;                                             // 0x00AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFThirdPersonCamera");
		return ptr;
	}


	void UpdateRotation();
	void ZoomOut();
	void ZoomIn();
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	float GetCurrentFOV();
};


// Class EFGame.EFWatchCamera
// 0x0030 (0x00D8 - 0x00A8)
class UEFWatchCamera : public UEFCameraBase
{
public:
	TArray<struct FEFWatchCameraModeInfo>              WatchCameraModeTypes;                                     // 0x00A8(0x0010) (Config, NeedCtorLink)
	struct FEFWatchCameraModeInfo                      ApplyCameraModeType;                                      // 0x00B8(0x0010) (Config)
	TEnumAsByte<EFWatchCameraMode>                     WatchCameraMode;                                          // 0x00C8(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FVector                                     FixedLookAtPos;                                           // 0x00CC(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFWatchCamera");
		return ptr;
	}


	void SetFixedLookAtPos(const struct FVector& InPos);
	void SetWatchCameraType(TEnumAsByte<EFWatchCameraMode> InType);
	void UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	void OnBecomeActive(class UEFCameraBase* OldCamera);
	void ZoomOut();
	void ZoomIn();
};


// Class EFGame.EFCameraModifier_CameraShake
// 0x0014 (0x00A0 - 0x008C)
class UEFCameraModifier_CameraShake : public UCameraModifier_CameraShake
{
public:
	TArray<class UEFCameraShakePlayGroup*>             EFShakeGroupArr;                                          // 0x008C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	int                                                MaxShakeAmplitudeSize;                                    // 0x009C(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraModifier_CameraShake");
		return ptr;
	}


	void AddCameraShakeGame(class UCameraShake* NewShake, float Scale, const struct FString& ShakeType, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void RemoveGameCameraShake(class UCameraShake* Shake, const struct FString& ShakeType);
	void OnRemoveGameCameraShake(class UCameraShake* Shake, const struct FString& ShakeType);
	void OnAddGameCameraShake(class UCameraShake* NewShake, float Scale, const struct FString& ShakeType, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	bool ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV);
	void RemoveAllEFViewShakes();
	bool RemoveEFViewShake(const struct FEFCameraViewShakePlayID& InPlayID);
	struct FEFCameraViewShakePlayID AddEFCameraViewShake(class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, bool InLocalPlayer, float InPlayrate, const struct FVector& InLocation, class AActor* InProvidedActor, TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot);
	void RemoveAllCameraShakes();
};


// Class EFGame.EFCameraShakePlayGroup
// 0x0020 (0x0078 - 0x0058)
class UEFCameraShakePlayGroup : public UObject
{
public:
	TEnumAsByte<EFShakePlayGroupType>                  GroupType;                                                // 0x0058(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                NextActivateShakeID;                                      // 0x005C(0x0004) (Transient)
	TArray<struct FEFShakeInstance>                    ActivateShakeInstances;                                   // 0x0060(0x0010) (Transient, NeedCtorLink)
	float                                              GroupAttenuateScale;                                      // 0x0070(0x0004) (Transient)
	int                                                MaxAmplitudeSize;                                         // 0x0074(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraShakePlayGroup");
		return ptr;
	}


	void UpdateViewShake(class ACamera* InCameraOwner, float InDeltaTime, float InModifierAlpha, struct FTPOV* OutPOV);
	bool PreUpdateViewShake(class ACamera* InCameraOwner, float InDeltaTime, struct FVector* InPlayerLocation);
	void RemoveAllViewShake(class ACamera* InCameraOwner);
	void RemoveViewShake(class ACamera* InCameraOwner, int InShakeID, bool InForceStop);
	void AddViewShakeInstance(class ACamera* InCameraOwner, class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, int InAmplitudeSize, float InPlayrate, const struct FVector& InLocation, TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot, struct FEFShakeInstance* OutShakeInstance);
	int AddViewShake(class ACamera* InCameraOwner, class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, float InPlayrate, const struct FVector& InLocation, class AActor* InProvidedActor, TEnumAsByte<ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot);
};


// Class EFGame.EFCameraViewShake
// 0x0070 (0x00C8 - 0x0058)
class UEFCameraViewShake : public UObject
{
public:
	TEnumAsByte<EFShakeGroupType>                      GroupType;                                                // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                GroupPriority;                                            // 0x005C(0x0004) (Edit)
	float                                              MaxDistance;                                              // 0x0060(0x0004) (Edit)
	float                                              AttenuateStartDistance;                                   // 0x0064(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0068(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x006C(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0070(0x0004) (Edit)
	struct FVOscillator                                LocOscillation;                                           // 0x0074(0x0024) (Edit)
	struct FFOscillator                                FOVOscillation;                                           // 0x0098(0x000C) (Edit)
	struct FROscillator                                RotOscillation;                                           // 0x00A4(0x0024) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraViewShake");
		return ptr;
	}


	int GetAmplitudeSize();
};


// Class EFGame.EFCameraViewShakeAnim
// 0x0020 (0x0078 - 0x0058)
class UEFCameraViewShakeAnim : public UObject
{
public:
	class UCameraAnim*                                 Anim;                                                     // 0x0058(0x0008) (Edit)
	float                                              AnimPlayRate;                                             // 0x0060(0x0004) (Edit)
	float                                              AnimScale;                                                // 0x0064(0x0004) (Edit)
	float                                              AnimBlendInTime;                                          // 0x0068(0x0004) (Edit)
	float                                              AnimBlendOutTime;                                         // 0x006C(0x0004) (Edit)
	uint32_t                                           bRandomAnimSegment : 1;                                   // 0x0070(0x0004) (Edit)
	uint32_t                                           bForceFinished : 1;                                       // 0x0070(0x0004) (Edit)
	float                                              RandomAnimSegmentDuration;                                // 0x0074(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCameraViewShakeAnim");
		return ptr;
	}

};


// Class EFGame.EFInterpGroupMacroCamera
// 0x0000 (0x00A0 - 0x00A0)
class UEFInterpGroupMacroCamera : public UInterpGroupDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupMacroCamera");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackMacroCamera
// 0x0018 (0x00D0 - 0x00B8)
class UEFInterpTrackMacroCamera : public UInterpTrack
{
public:
	class AEFVolumeProp*                               VolumeProp;                                               // 0x00B8(0x0008)
	TArray<class AEFMacroCameraActor*>                 CameraList;                                               // 0x00C0(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackMacroCamera");
		return ptr;
	}

};


// Class EFGame.EFMacroCameraActor
// 0x001C (0x046C - 0x0450)
class AEFMacroCameraActor : public ACameraActor
{
public:
	class AEFVolumeProp*                               VolumeProp;                                               // 0x0450(0x0008)
	class AEFMacroCameraActor*                         PrevCamera;                                               // 0x0458(0x0008) (Edit, DuplicateTransient)
	class AEFMacroCameraActor*                         NextCamera;                                               // 0x0460(0x0008) (Edit, DuplicateTransient)
	float                                              MoveDuration;                                             // 0x0468(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraActor");
		return ptr;
	}

};


// Class EFGame.EFMacroCameraSplineActor
// 0x008C (0x04F8 - 0x046C)
class AEFMacroCameraSplineActor : public AEFMacroCameraActor
{
public:
	TArray<struct FMacroCameraConnection>              Connections;                                              // 0x046C(0x0010) (Component, NeedCtorLink)
	struct FVector                                     SplineActorTangent;                                       // 0x047C(0x000C)
	TArray<class AEFMacroCameraSplineActor*>           LinksFrom;                                                // 0x0488(0x0010) (NeedCtorLink)
	struct FVector                                     TargetPoint;                                              // 0x0498(0x000C) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04A4(0x000C) MISSED OFFSET
	struct FMatrix                                     BaseMatrix;                                               // 0x04B0(0x0040) (Transient)
	uint32_t                                           LockRotationToTargetPoint : 1;                            // 0x04F0(0x0004) (Edit, Transient)
	uint32_t                                           MoveWithTargetPoint : 1;                                  // 0x04F0(0x0004) (Edit, Transient)
	float                                              DistanceFromTargetPoint;                                  // 0x04F4(0x0004) (Edit, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraSplineActor");
		return ptr;
	}


	void BreakAllConnections();
	void BreakConnectionTo(class AEFMacroCameraSplineActor* NextActor);
	bool IsConnectedTo(class AEFMacroCameraSplineActor* NextActor, bool bCheckForDisableDestination);
	void AddConnectionTo(class AEFMacroCameraSplineActor* NextActor);
	void UpdateConnectedSplineComponents(bool bFinish);
	void UpdateSplineComponents();
};


// Class EFGame.EFMacroCameraComponent
// 0x0000 (0x0284 - 0x0284)
class UEFMacroCameraComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMacroCameraComponent");
		return ptr;
	}

};


// Class EFGame.EFPlayerCamera
// 0x012C (0x06F8 - 0x05CC)
class AEFPlayerCamera : public ACamera
{
public:
	class UEFCameraBase*                               IsometricCamera;                                          // 0x05CC(0x0008) (Transient)
	class UClass*                                      IsometricCameraClass;                                     // 0x05D4(0x0008) (Const)
	class UEFCameraBase*                               ThridPersonCamera;                                        // 0x05DC(0x0008) (Transient)
	class UClass*                                      ThridPersonCameraClass;                                   // 0x05E4(0x0008) (Const)
	class UEFCameraBase*                               MacroCamera;                                              // 0x05EC(0x0008) (Transient)
	class UClass*                                      MacroCameraClass;                                         // 0x05F4(0x0008) (Const)
	class UEFCameraBase*                               CustomizingCamera;                                        // 0x05FC(0x0008) (Transient)
	class UClass*                                      CustomizingCameraClass;                                   // 0x0604(0x0008) (Const)
	class UEFCameraBase*                               InteractionCamera;                                        // 0x060C(0x0008) (Transient)
	class UClass*                                      InteractionCameraClass;                                   // 0x0614(0x0008) (Const)
	class UEFCameraBase*                               FreeCamera;                                               // 0x061C(0x0008) (Transient)
	class UClass*                                      FreeCameraClass;                                          // 0x0624(0x0008) (Const)
	class UEFCameraBase*                               WatchCamera;                                              // 0x062C(0x0008) (Transient)
	class UClass*                                      WatchCameraClass;                                         // 0x0634(0x0008) (Const)
	class UEFCameraBase*                               BackViewCamera;                                           // 0x063C(0x0008) (Transient)
	class UClass*                                      BackViewCameraClass;                                      // 0x0644(0x0008) (Const)
	class UEFCameraBase*                               PanningCamera;                                            // 0x064C(0x0008) (Transient)
	class UClass*                                      PanningCameraClass;                                       // 0x0654(0x0008) (Const)
	class UEFCameraBase*                               CurrentCamera;                                            // 0x065C(0x0008) (Transient)
	int                                                DefaultGameSkeletalMeshForceLOD;                          // 0x0664(0x0004) (Transient)
	uint32_t                                           bUpdateOccludedActor : 1;                                 // 0x0668(0x0004) (Transient)
	uint32_t                                           bUpdateTranslucentActor : 1;                              // 0x0668(0x0004) (Transient)
	uint32_t                                           bDebugOccludedActorCollisionLine : 1;                     // 0x0668(0x0004) (Transient)
	uint32_t                                           bRequiredClearBackupMatineeCamera : 1;                    // 0x0668(0x0004) (Transient)
	uint32_t                                           bUseTargetBlend : 1;                                      // 0x0668(0x0004) (Config)
	float                                              OccludedActorBlendMaxTime;                                // 0x066C(0x0004) (Transient)
	TArray<struct FOccludedActorInfo>                  OccludedStaticActors;                                     // 0x0670(0x0010) (Transient, NeedCtorLink)
	TArray<struct FOccludedActorInfo>                  OccludedDynamicActors;                                    // 0x0680(0x0010) (Transient, NeedCtorLink)
	float                                              fOccludedOutlineWidth;                                    // 0x0690(0x0004) (Transient)
	float                                              fOccludedOutlineColorScale;                               // 0x0694(0x0004) (Transient)
	struct FVector                                     vOccludedOutlineColor;                                    // 0x0698(0x000C) (Transient)
	class ACameraActor*                                AttachCameraActor;                                        // 0x06A4(0x0008) (Transient)
	struct FVector                                     LastTargetLocation;                                       // 0x06AC(0x000C) (Transient)
	class APawn*                                       OverTarget;                                               // 0x06B8(0x0008) (Transient)
	TArray<struct FString>                             OverTargetList;                                           // 0x06C0(0x0010) (Transient, NeedCtorLink)
	int                                                OverCurTargetIndex;                                       // 0x06D0(0x0004) (Transient)
	class ACameraActor*                                OverBackupMatineeCamera;                                  // 0x06D4(0x0008) (Transient)
	float                                              OverTargetBlendTime;                                      // 0x06DC(0x0004) (Config)
	float                                              OverTargetBlendExp;                                       // 0x06E0(0x0004) (Config)
	float                                              TargetBlendDiv;                                           // 0x06E4(0x0004) (Config)
	float                                              TargetBlendMul;                                           // 0x06E8(0x0004) (Config)
	struct FEFCameraOverrideFogSettings                CamOverrideFogSettings;                                   // 0x06EC(0x0008) (Transient)
	float                                              CamOverrideFogAlpha;                                      // 0x06F4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerCamera");
		return ptr;
	}


	void LoadOutlineData();
	void UpdateTranslucentActorBlend(float DeltaTime);
	void UpdateOccludedActorBlend(float DeltaTime);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void FOV(float NewFOV);
	void AdjustViewportFOV(float* InOutFOV);
	void SaveCameraValue();
	void SetCameraType(int InType, bool bUpdateValue);
	void UpdateRotation();
	void ZoomOut();
	void ZoomIn();
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT);
	void DoUpdateCamera(float DeltaTime);
	void ApplyCamOverrideFogSetting();
	void ProcessTargetCameraActorBlend(float DeltaTime);
	void ResetAttachCameraActor();
	class UEFCameraBase* FindBestCameraType(class AActor* CameraTarget);
	class UEFCameraBase* CreateCamera(class UClass* CameraClass);
	void PostBeginPlay();
	float GetFOV();
	float GetCameraDistance();
	void Destroyed();
	void CalcVerticalFOV(float* OutFOV);
};


// Class EFGame.EFSimpleCameraShake
// 0x0000 (0x00D8 - 0x00D8)
class UEFSimpleCameraShake : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSimpleCameraShake");
		return ptr;
	}

};


// Class EFGame.EFActionParticleData
// 0x0014 (0x006C - 0x0058)
class UEFActionParticleData : public UObject
{
public:
	uint32_t                                           bUseTargetCastLocation : 1;                               // 0x0058(0x0004) (Edit)
	uint32_t                                           bLocFromActorMesh : 1;                                    // 0x0058(0x0004) (Edit)
	float                                              ParticlePlayRate;                                         // 0x005C(0x0004) (Edit)
	int                                                TranslucencySortPriority;                                 // 0x0060(0x0004) (Edit)
	class UEFParticleData*                             ParticleData;                                             // 0x0064(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionParticleData");
		return ptr;
	}

};


// Class EFGame.EFBeamActionBase
// 0x0000 (0x0058 - 0x0058)
class UEFBeamActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionBase");
		return ptr;
	}

};


// Class EFGame.EFBeamActionDirection
// 0x02CC (0x0324 - 0x0058)
class UEFBeamActionDirection : public UEFBeamActionBase
{
public:
	uint32_t                                           bUseHitTest : 1;                                          // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplySkillEffectDistance : 1;                            // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyPosCurve : 1;                                       // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyAlwaysShowHitEffect : 1;                            // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyShowHitEffect : 1;                                  // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyHitNormal : 1;                                      // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyHitNormalOwner : 1;                                 // 0x0058(0x0004) (Edit)
	float                                              MaxBeamDistance;                                          // 0x005C(0x0004) (Edit)
	int                                                AddBeamRotationAngle;                                     // 0x0060(0x0004) (Edit)
	struct FEFParticleSystemInfo                       HitPSInfo;                                                // 0x0064(0x0158) (Component, NeedCtorLink, Deprecated)
	struct FEFParticleSystemInfo                       HitEffectPSInfo;                                          // 0x01BC(0x0158) (Component, NeedCtorLink, Deprecated)
	class UEFParticleData*                             HitPSDataInfo;                                            // 0x0314(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             HitEffectPSDataInfo;                                      // 0x031C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionDirection");
		return ptr;
	}

};


// Class EFGame.EFBeamActionSelf
// 0x003C (0x0094 - 0x0058)
class UEFBeamActionSelf : public UEFBeamActionBase
{
public:
	uint32_t                                           bUseSocketMove : 1;                                       // 0x0058(0x0004) (Edit)
	struct FEFBeamSocketMoveInfo                       StartSocketMoveInfo;                                      // 0x005C(0x001C) (Edit, NeedCtorLink)
	struct FEFBeamSocketMoveInfo                       EndSocketMoveInfo;                                        // 0x0078(0x001C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionSelf");
		return ptr;
	}

};


// Class EFGame.EFBeamActionTargetPos
// 0x02C4 (0x031C - 0x0058)
class UEFBeamActionTargetPos : public UEFBeamActionBase
{
public:
	uint32_t                                           bUseHitTest : 1;                                          // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyAlwaysShowHitEffect : 1;                            // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyShowHitEffect : 1;                                  // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyHitNormal : 1;                                      // 0x0058(0x0004) (Edit)
	uint32_t                                           bApplyHitNormalOwner : 1;                                 // 0x0058(0x0004) (Edit)
	struct FEFParticleSystemInfo                       HitPSInfo;                                                // 0x005C(0x0158) (Component, NeedCtorLink, Deprecated)
	struct FEFParticleSystemInfo                       HitEffectPSInfo;                                          // 0x01B4(0x0158) (Component, NeedCtorLink, Deprecated)
	class UEFParticleData*                             HitPSDataInfo;                                            // 0x030C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             HitEffectPSDataInfo;                                      // 0x0314(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFBeamActionTargetPos");
		return ptr;
	}

};


// Class EFGame.EFDistributionFloatMultiplyParticleParameter
// 0x0003 (0x0094 - 0x0091)
class UEFDistributionFloatMultiplyParticleParameter : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDistributionFloatMultiplyParticleParameter");
		return ptr;
	}

};


// Class EFGame.EFDistributionVectorMultiplyParticleParameter
// 0x0001 (0x00C4 - 0x00C3)
class UEFDistributionVectorMultiplyParticleParameter : public UDistributionVectorParameterBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDistributionVectorMultiplyParticleParameter");
		return ptr;
	}

};


// Class EFGame.EFEffectSpawn
// 0x0010 (0x0068 - 0x0058)
class UEFEffectSpawn : public UObject
{
public:
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x0058(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEffectSpawn");
		return ptr;
	}

};


// Class EFGame.EFEmitter
// 0x0010 (0x02B0 - 0x02A0)
class AEFEmitter : public AEmitter
{
public:
	class USoundCue*                                   Sound;                                                    // 0x02A0(0x0008) (Edit)
	class UParticleSystem*                             ParticleSystem;                                           // 0x02A8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEmitter");
		return ptr;
	}


	void HideSelf();
	void PostBeginPlay();
};


// Class EFGame.EFEnvironmentActionEmitter
// 0x0010 (0x02C0 - 0x02B0)
class AEFEnvironmentActionEmitter : public AEFEmitter
{
public:
	float                                              CameraOffset;                                             // 0x02B0(0x0004)
	float                                              BaseFOV;                                                  // 0x02B4(0x0004)
	class ACamera*                                     PlayerCamera;                                             // 0x02B8(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentActionEmitter");
		return ptr;
	}


	void ClearExtendPool(class UParticleSystemComponent* PSC);
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};


// Class EFGame.EFSpawnedEmitter
// 0x0000 (0x02B0 - 0x02B0)
class AEFSpawnedEmitter : public AEFEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnedEmitter");
		return ptr;
	}


	void HideBecauseFinished(class UParticleSystemComponent* FinishedComponent);
	void ClearExtendPool(class UParticleSystemComponent* PSC);
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};


// Class EFGame.EFEmitterPool
// 0x00A8 (0x0384 - 0x02DC)
class AEFEmitterPool : public AEmitterPool
{
public:
	TArray<class UParticleSystemComponent*>            PoolPSInfoComponents;                                     // 0x02DC(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	TArray<class UPointLightComponent*>                PoolPointLightComponents;                                 // 0x02EC(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	TArray<class UParticleSystemComponent*>            ActivePSInfoComponents;                                   // 0x02FC(0x0010) (ExportObject, Transient, Component, NeedCtorLink, EditInline)
	TArray<class UParticleSystemComponent*>            ManagedPSCs;                                              // 0x030C(0x0010) (ExportObject, Transient, Component, NeedCtorLink, EditInline)
	TArray<int>                                        PoolManagedPSCIndexs;                                     // 0x031C(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x032C(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFEmitterPool.LimitedPSCInfoMap
	TArray<struct FLimitedPSCUnit>                     LimitedPSCInfoArr;                                        // 0x0374(0x0010) (Transient, Component, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEmitterPool");
		return ptr;
	}


	void ClearPoolPSInfoComponents(bool bClearActive);
	void OnPSInfoFinished(class UParticleSystemComponent* PSC);
	void ClearExtendPool();
};


// Class EFGame.EFEnvironmentEmitter
// 0x000C (0x02AC - 0x02A0)
class AEFEnvironmentEmitter : public AEmitter
{
public:
	float                                              CameraOffset;                                             // 0x02A0(0x0004) (Edit)
	class ACamera*                                     PlayerCamera;                                             // 0x02A4(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentEmitter");
		return ptr;
	}

};


// Class EFGame.EFGroundEffect
// 0x0030 (0x0088 - 0x0058)
class UEFGroundEffect : public UObject
{
public:
	TArray<class UEFParticleGroundData*>               ParticleDataSet;                                          // 0x0058(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<struct FEFGroundParticleSystemInfo>         ParticleSet;                                              // 0x0068(0x0010) (NeedCtorLink, Deprecated)
	TArray<struct FEFGroundDecalSystemInfo>            DecalSet;                                                 // 0x0078(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGroundEffect");
		return ptr;
	}

};


// Class EFGame.EFGroundEffectContainer
// 0x0058 (0x00B0 - 0x0058)
class UEFGroundEffectContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFGroundEffectContainer.DataMap
	class UEFGroundEffect*                             DefaultRange;                                             // 0x00A0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFGroundEffect*                             DefaultTarget;                                            // 0x00A8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGroundEffectContainer");
		return ptr;
	}

};


// Class EFGame.EFLoopingEmitter
// 0x0004 (0x02A4 - 0x02A0)
class AEFLoopingEmitter : public AEmitter
{
public:
	uint32_t                                           bLoop : 1;                                                // 0x02A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLoopingEmitter");
		return ptr;
	}

};


// Class EFGame.EFMarkEffect
// 0x0010 (0x027C - 0x026C)
class AEFMarkEffect : public AActor
{
public:
	TArray<struct FEFMarkParticleSystemInfo>           ParticleSystemSet;                                        // 0x026C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMarkEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleDataBase
// 0x0020 (0x0078 - 0x0058)
class UEFParticleDataBase : public UObject
{
public:
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (Edit, NeedCtorLink)
	int                                                FXLod;                                                    // 0x0068(0x0004) (Edit)
	TEnumAsByte<EF_PARTICLE_DATA_TYPE>                 ParticleDataType;                                         // 0x006C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                DataIndex;                                                // 0x0070(0x0004) (AlwaysInit)
	uint32_t                                           EditorDirty : 1;                                          // 0x0074(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataBase");
		return ptr;
	}

};


// Class EFGame.EFParticleData
// 0x00A0 (0x0118 - 0x0078)
class UEFParticleData : public UEFParticleDataBase
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0078(0x0008) (Edit)
	uint32_t                                           bSpawnedEmitter : 1;                                      // 0x0080(0x0004) (Edit)
	uint32_t                                           bSpawnedEmitterAbsoluteRotation : 1;                      // 0x0080(0x0004) (Edit)
	uint32_t                                           bAttach : 1;                                              // 0x0080(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachLocation : 1;                                // 0x0080(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachRotation : 1;                                // 0x0080(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachWorldRotation : 1;                           // 0x0080(0x0004) (Edit)
	uint32_t                                           bApplyLocalRotation : 1;                                  // 0x0080(0x0004) (Edit)
	uint32_t                                           bApplyPawnRotation : 1;                                   // 0x0080(0x0004) (Edit)
	uint32_t                                           bUseCastShadow : 1;                                       // 0x0080(0x0004) (Edit)
	uint32_t                                           bBeamParticle : 1;                                        // 0x0080(0x0004) (Edit)
	TEnumAsByte<EFEQUIP_PART>                          OwnerPartsType;                                           // 0x0084(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                OwnerPartsMeshIndex;                                      // 0x0088(0x0004) (Edit)
	TArray<struct FString>                             OwnerBoneName;                                            // 0x008C(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             OwnerSoketName;                                           // 0x009C(0x0010) (Edit, NeedCtorLink)
	TArray<TEnumAsByte<EFPBS_SpawnType>>               OwnerBoneSocketSpawnType;                                 // 0x00AC(0x0010) (Edit, NeedCtorLink)
	int                                                OwnerBoneSocketRandomMaxCount;                            // 0x00BC(0x0004) (Edit)
	float                                              ModifyParentVelocity;                                     // 0x00C0(0x0004)
	float                                              ModifyParentAcceleration;                                 // 0x00C4(0x0004)
	struct FVector                                     RelativeLocation;                                         // 0x00C8(0x000C) (Edit)
	struct FVector                                     RelativeWorldLocation;                                    // 0x00D4(0x000C) (Edit)
	struct FRotator                                    RelativeRotation;                                         // 0x00E0(0x000C) (Edit)
	struct FVector                                     RelativeScale;                                            // 0x00EC(0x000C) (Edit)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x00F8(0x0010) (Edit, Component, NeedCtorLink)
	class UEFParticleDataModuleSoundBase*              SoundModule;                                              // 0x0108(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModulePawnMaterialParam*      OwnerMaterialParamModule;                                 // 0x0110(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleData");
		return ptr;
	}

};


// Class EFGame.EFParticleDataIdentity
// 0x0058 (0x00D0 - 0x0078)
class UEFParticleDataIdentity : public UEFParticleDataBase
{
public:
	int                                                IdentityIndex;                                            // 0x0078(0x0004) (Edit)
	int                                                IdentityPoint;                                            // 0x007C(0x0004) (Edit)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0080(0x0008) (Edit)
	TEnumAsByte<EFEQUIP_PART>                          OwnerPartsType;                                           // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                OwnerPartsMeshIndex;                                      // 0x008C(0x0004) (Edit)
	TArray<struct FString>                             OwnerBoneName;                                            // 0x0090(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             OwnerSoketName;                                           // 0x00A0(0x0010) (Edit, NeedCtorLink)
	TArray<TEnumAsByte<EFPBS_SpawnType>>               OwnerBoneSocketSpawnType;                                 // 0x00B0(0x0010) (Edit, NeedCtorLink)
	int                                                OwnerBoneSocketRandomMaxCount;                            // 0x00C0(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachLocation : 1;                                // 0x00C4(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachRotation : 1;                                // 0x00C4(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachWorldRotation : 1;                           // 0x00C4(0x0004) (Edit)
	float                                              ModifyParentVelocity;                                     // 0x00C8(0x0004) (Edit)
	float                                              ModifyParentAcceleration;                                 // 0x00CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataIdentity");
		return ptr;
	}

};


// Class EFGame.EFParticleDataSimple
// 0x0018 (0x0090 - 0x0078)
class UEFParticleDataSimple : public UEFParticleDataBase
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0078(0x0008) (Edit)
	struct FLinearColor                                MaterialColorValue;                                       // 0x0080(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataSimple");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModifier
// 0x002C (0x0084 - 0x0058)
class UEFParticleDataModifier : public UObject
{
public:
	struct FString                                     Key;                                                      // 0x0058(0x0010) (Edit, NeedCtorLink)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0068(0x0008) (Edit)
	uint32_t                                           bUseChangeParticleParam : 1;                              // 0x0070(0x0004) (Edit)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x0074(0x0010) (Edit, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModifier");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModulePawnMaterialParam
// 0x004C (0x00A4 - 0x0058)
class UEFParticleDataModulePawnMaterialParam : public UObject
{
public:
	struct FEFParticlePawnMaterialParamData            MaterialParamData;                                        // 0x0058(0x004C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModulePawnMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModuleSoundBase
// 0x001C (0x0074 - 0x0058)
class UEFParticleDataModuleSoundBase : public UObject
{
public:
	struct FString                                     VoiceKeyWord;                                             // 0x0058(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EF_PARTICLE_DATAMODULE_TYPE>           DataModuleType;                                           // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                DataIndex;                                                // 0x006C(0x0004) (AlwaysInit)
	uint32_t                                           EditorDirty : 1;                                          // 0x0070(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModuleSoundBase");
		return ptr;
	}

};


// Class EFGame.EFParticleDataModuleSingleAKEvent
// 0x000C (0x0080 - 0x0074)
class UEFParticleDataModuleSingleAKEvent : public UEFParticleDataModuleSoundBase
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x0074(0x0008) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x007C(0x0004) (Edit)
	uint32_t                                           bSwitchHittedAKEvent : 1;                                 // 0x007C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleDataModuleSingleAKEvent");
		return ptr;
	}

};


// Class EFGame.EFParticleGroundData
// 0x0058 (0x00B0 - 0x0058)
class UEFParticleGroundData : public UObject
{
public:
	struct FString                                     Key;                                                      // 0x0058(0x0010) (Edit, NeedCtorLink)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0068(0x0008) (Edit)
	uint32_t                                           bIgnoreRotator : 1;                                       // 0x0070(0x0004) (Edit)
	struct FLinearColor                                ActiveColorValue;                                         // 0x0074(0x0010) (Edit)
	struct FLinearColor                                DeactiveColorValue;                                       // 0x0084(0x0010) (Edit)
	float                                              DefaultWidth;                                             // 0x0094(0x0004) (Edit)
	float                                              DefaultHeight;                                            // 0x0098(0x0004) (Edit)
	struct FString                                     Desc;                                                     // 0x009C(0x0010) (Edit, NeedCtorLink)
	int                                                FXLod;                                                    // 0x00AC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleGroundData");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleAkEventBase
// 0x0000 (0x0064 - 0x0064)
class UEFParticleModuleAkEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleAkEventBase");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleAkEvent
// 0x0010 (0x0074 - 0x0064)
class UEFParticleModuleAkEvent : public UEFParticleModuleAkEventBase
{
public:
	class UAkEvent*                                    StartSound;                                               // 0x0064(0x0008) (Edit)
	class UAkEvent*                                    EndSound;                                                 // 0x006C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleAkEvent");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleKillLength
// 0x0028 (0x008C - 0x0064)
class UEFParticleModuleKillLength : public UParticleModuleKillBase
{
public:
	struct FRawDistributionFloat                       Length;                                                   // 0x0064(0x0024) (Edit, Component, NeedCtorLink)
	uint32_t                                           bApplyPSysScale : 1;                                      // 0x0088(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleKillLength");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationCircleSurface
// 0x0078 (0x00DC - 0x0064)
class UEFParticleModuleLocationCircleSurface : public UParticleModuleLocationBase
{
public:
	TEnumAsByte<ECircleSurfaceAxis>                    SurfaceAxis;                                              // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	uint32_t                                           bNegativeAxis : 1;                                        // 0x0068(0x0004) (Edit)
	uint32_t                                           bHalfMode : 1;                                            // 0x0068(0x0004) (Edit)
	uint32_t                                           Velocity : 1;                                             // 0x0068(0x0004) (Edit)
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x006C(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      StartLocation;                                            // 0x0090(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       StartRadius;                                              // 0x00B4(0x0024) (Edit, Component, NeedCtorLink)
	int                                                SplitCircleCount;                                         // 0x00D8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationCircleSurface");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationEmitter
// 0x0000 (0x007C - 0x007C)
class UEFParticleModuleLocationEmitter : public UParticleModuleLocationEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationEmitterDirect
// 0x000C (0x0078 - 0x006C)
class UEFParticleModuleLocationEmitterDirect : public UParticleModuleLocationEmitterDirect
{
public:
	struct FVector                                     OffsetPos;                                                // 0x006C(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationOnGround
// 0x0058 (0x00BC - 0x0064)
class UEFParticleModuleLocationOnGround : public UParticleModuleLocationBase
{
public:
	float                                              fCheckBounds;                                             // 0x0064(0x0004) (Edit)
	float                                              fOffsetHeight;                                            // 0x0068(0x0004) (Edit)
	uint32_t                                           bEnableSkipHeight : 1;                                    // 0x006C(0x0004) (Edit)
	uint32_t                                           bContinousCheck : 1;                                      // 0x006C(0x0004)
	uint32_t                                           bTickUpdate : 1;                                          // 0x006C(0x0004) (Edit)
	float                                              fSkipHeight;                                              // 0x0070(0x0004) (Edit)
	struct FRawDistributionVector                      AdjustLocation;                                           // 0x0074(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       SkipLocation;                                             // 0x0098(0x0024) (Edit, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationOnGround");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPath
// 0x0020 (0x0084 - 0x0064)
class UEFParticleModuleLocationPath : public UParticleModuleLocationBase
{
public:
	class UPrefab*                                     PathPrefab;                                               // 0x0064(0x0008) (Edit)
	int                                                LoopCount;                                                // 0x006C(0x0004) (Edit)
	struct FVector                                     StartLocation;                                            // 0x0070(0x000C) (Edit)
	float                                              StartTime;                                                // 0x007C(0x0004) (Edit)
	float                                              SleepTime;                                                // 0x0080(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPath");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin
// 0x0098 (0x0148 - 0x00B0)
class UEFParticleModuleLocationPrimitiveCylinderSpin : public UParticleModuleLocationPrimitiveBase
{
public:
	uint32_t                                           RadialVelocity : 1;                                       // 0x00B0(0x0004) (Edit)
	uint32_t                                           bAdjustForWorldSpace : 1;                                 // 0x00B0(0x0004) (Edit)
	struct FRawDistributionFloat                       StartRadius;                                              // 0x00B4(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       StartHeight;                                              // 0x00D8(0x0024) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       StartCylinderRot;                                         // 0x00FC(0x0024) (Edit, Component, NeedCtorLink)
	TEnumAsByte<ECylinderSpinAxis>                     SpinAxis;                                                 // 0x0120(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FRawDistributionFloat                       SpinAngle;                                                // 0x0124(0x0024) (Edit, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin_Seeded
// 0x001C (0x0164 - 0x0148)
class UEFParticleModuleLocationPrimitiveCylinderSpin_Seeded : public UEFParticleModuleLocationPrimitiveCylinderSpin
{
public:
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x0148(0x001C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveCylinderSpin_Seeded");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveMesh
// 0x0008 (0x00B8 - 0x00B0)
class UEFParticleModuleLocationPrimitiveMesh : public UParticleModuleLocationPrimitiveBase
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x00B0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveMesh");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationPrimitiveSphere
// 0x0024 (0x00D4 - 0x00B0)
class UEFParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	struct FRawDistributionFloat                       StartRadius;                                              // 0x00B0(0x0024) (Edit, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationSkelVertSurface
// 0x0028 (0x00E4 - 0x00BC)
class UEFParticleModuleLocationSkelVertSurface : public UParticleModuleLocationSkelVertSurface
{
public:
	TEnumAsByte<EFPS_SORTDIRECTION>                    SortDirection;                                            // 0x00BC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                MaxSamples;                                               // 0x00C0(0x0004) (Edit)
	TArray<struct FSkelLocationData>                   SampleSourceDataTable;                                    // 0x00C4(0x0010) (Transient, NeedCtorLink)
	struct FString                                     RefSkeletalMeshName;                                      // 0x00D4(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleLocationStaticVertSurface
// 0x0028 (0x00D4 - 0x00AC)
class UEFParticleModuleLocationStaticVertSurface : public UParticleModuleLocationStaticVertSurface
{
public:
	TEnumAsByte<EFPS_SORTDIRECTION>                    SortDirection;                                            // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	int                                                MaxSamples;                                               // 0x00B0(0x0004) (Edit)
	TArray<struct FStaticLocationData>                 SampleSourceDataTable;                                    // 0x00B4(0x0010) (Transient, NeedCtorLink)
	struct FString                                     RefStaticMeshName;                                        // 0x00C4(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleLocationStaticVertSurface");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleTypeDataDecal
// 0x0028 (0x008C - 0x0064)
class UEFParticleModuleTypeDataDecal : public UParticleModuleTypeDataBase
{
public:
	struct FVector2D                                   DefaultSize;                                              // 0x0064(0x0008) (Edit)
	float                                              NearPlane;                                                // 0x006C(0x0004) (Edit)
	float                                              FarPlane;                                                 // 0x0070(0x0004) (Edit)
	struct FRotator                                    Rotation;                                                 // 0x0074(0x000C) (Edit)
	struct FVector2D                                   BlendRange;                                               // 0x0080(0x0008) (Edit)
	uint32_t                                           bUsePlayerCharacterRotation : 1;                          // 0x0088(0x0004) (Edit)
	uint32_t                                           bAlwaysDecalUpdate : 1;                                   // 0x0088(0x0004) (Edit)
	uint32_t                                           bOnlyCalcRotationYaw : 1;                                 // 0x0088(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleTypeDataDecal");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleTypeDataLight
// 0x0008 (0x006C - 0x0064)
class UEFParticleModuleTypeDataLight : public UParticleModuleTypeDataBase
{
public:
	class UPointLightComponent*                        PointLightComponent;                                      // 0x0064(0x0008) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleTypeDataLight");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleVelocityOverLifetime
// 0x0028 (0x0090 - 0x0068)
class UEFParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	struct FRawDistributionVector                      VelOverLife;                                              // 0x0068(0x0024) (Edit, Component, NeedCtorLink)
	uint32_t                                           Absolute : 1;                                             // 0x008C(0x0004) (Edit, ExportObject)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class EFGame.EFParticleModuleVortex
// 0x0040 (0x00A8 - 0x0068)
class UEFParticleModuleVortex : public UParticleModuleOrbitBase
{
public:
	float                                              DirX;                                                     // 0x0068(0x0004) (Edit)
	float                                              DirY;                                                     // 0x006C(0x0004) (Edit)
	float                                              DirZ;                                                     // 0x0070(0x0004) (Edit)
	float                                              PosX;                                                     // 0x0074(0x0004) (Edit)
	float                                              PosY;                                                     // 0x0078(0x0004) (Edit)
	float                                              PosZ;                                                     // 0x007C(0x0004) (Edit)
	float                                              Power;                                                    // 0x0080(0x0004) (Edit)
	struct FRawDistributionFloat                       PowerAcceleration;                                        // 0x0084(0x0024) (Edit, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleModuleVortex");
		return ptr;
	}

};


// Class EFGame.EFParticlePathCurve
// 0x0000 (0x0088 - 0x0088)
class UEFParticlePathCurve : public UDistributionFloatConstantCurve
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticlePathCurve");
		return ptr;
	}

};


// Class EFGame.EFParticleSystemData
// 0x00C8 (0x0120 - 0x0058)
class UEFParticleSystemData : public UObject
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0058(0x0008) (Edit)
	float                                              ParticlePlayRate;                                         // 0x0060(0x0004) (Edit)
	uint32_t                                           bUseTargetCastLocation : 1;                               // 0x0064(0x0004) (Edit)
	uint32_t                                           bUseLinearColorValue : 1;                                 // 0x0064(0x0004) (Edit)
	uint32_t                                           bAttach : 1;                                              // 0x0064(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachLocation : 1;                                // 0x0064(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachRotation : 1;                                // 0x0064(0x0004) (Edit)
	uint32_t                                           bIgnoreAttachWorldRotation : 1;                           // 0x0064(0x0004) (Edit)
	uint32_t                                           bApplyLocalRotation : 1;                                  // 0x0064(0x0004) (Edit)
	uint32_t                                           AutoPlayRateBySpeed : 1;                                  // 0x0064(0x0004) (Edit)
	uint32_t                                           bSpawnedEmitter : 1;                                      // 0x0064(0x0004) (Edit)
	uint32_t                                           bLocFromActorMesh : 1;                                    // 0x0064(0x0004) (Edit)
	uint32_t                                           StopSound : 1;                                            // 0x0064(0x0004) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x0064(0x0004) (Edit)
	uint32_t                                           bBeamParticle : 1;                                        // 0x0064(0x0004) (Edit)
	uint32_t                                           bUseCastShadow : 1;                                       // 0x0064(0x0004) (Edit)
	class UPostProcessChain*                           PPChain;                                                  // 0x0068(0x0008) (Edit)
	struct FName                                       MaterialParamName;                                        // 0x0070(0x0008) (Edit)
	float                                              MaterialFloatValue;                                       // 0x0078(0x0004) (Edit)
	struct FLinearColor                                MaterialLinearColorValue;                                 // 0x007C(0x0010) (Edit)
	struct FVector                                     RelativeWorldLocation;                                    // 0x008C(0x000C) (Edit)
	struct FVector                                     RelativeLocation;                                         // 0x0098(0x000C) (Edit)
	struct FRotator                                    RelativeRotation;                                         // 0x00A4(0x000C) (Edit)
	struct FVector                                     RelativeScale;                                            // 0x00B0(0x000C) (Edit)
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00BC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                iPartsMeshIndex;                                          // 0x00C0(0x0004) (Edit)
	int                                                AttachPriority;                                           // 0x00C4(0x0004) (Edit)
	TArray<struct FString>                             ParticleAttachBoneName;                                   // 0x00C8(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             ParticleAttachSoketName;                                  // 0x00D8(0x0010) (Edit, NeedCtorLink)
	TArray<TEnumAsByte<EPst_SpawnType>>                ParticleSpawnType;                                        // 0x00E8(0x0010) (Edit, NeedCtorLink)
	int                                                ParticleAttachRandomMaxCount;                             // 0x00F8(0x0004) (Edit)
	float                                              AutoPlayRateTime;                                         // 0x00FC(0x0004) (Edit)
	float                                              ModifyParentVelocity;                                     // 0x0100(0x0004) (Edit)
	float                                              ModifyParentAcceleration;                                 // 0x0104(0x0004) (Edit)
	class UAkEvent*                                    AkEvent;                                                  // 0x0108(0x0008) (Edit)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x0110(0x0010) (Edit, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSystemData");
		return ptr;
	}

};


// Class EFGame.EFParticleSystemType
// 0x0000 (0x0058 - 0x0058)
class UEFParticleSystemType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSystemType");
		return ptr;
	}

};


// Class EFGame.EFPickingEmitter
// 0x0004 (0x02A4 - 0x02A0)
class AEFPickingEmitter : public AEmitter
{
public:
	uint32_t                                           bActivatePicking : 1;                                     // 0x02A0(0x0004) (Transient)
	uint32_t                                           bTryParticleActivate : 1;                                 // 0x02A0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPickingEmitter");
		return ptr;
	}


	bool IsActivateEffect();
	void DeactivateEffect(bool bForceKill);
	void ActivateEffect(class AActor* BaseActor);
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};


// Class EFGame.EFPostProcessMaterialContainer
// 0x0030 (0x0088 - 0x0058)
class UEFPostProcessMaterialContainer : public UObject
{
public:
	class UEFPostProcessMaterialHPEffect*              HPEffect;                                                 // 0x0058(0x0008) (Edit)
	class UEFPostProcessMaterialDeadEffect*            DeadEffect;                                               // 0x0060(0x0008) (Edit)
	class UEFPostProcessMaterialShipWreckEffect*       ShipWreckEffect;                                          // 0x0068(0x0008) (Edit)
	class UEFPostProcessMaterialChaosGateEffect*       ChaosGateEffect;                                          // 0x0070(0x0008) (Edit)
	TArray<class UEFPostProcessMaterialEffect*>        GlobalMaterialEffects;                                    // 0x0078(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialContainer");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffect
// 0x0039 (0x0091 - 0x0058)
class UEFPostProcessMaterialEffect : public UObject
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0058(0x0008) (Edit)
	TArray<struct FEFPPMaterialScalarParam>            ScalarParamArr;                                           // 0x0060(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FEFPPMaterialVectorParam>            VectorParamArr;                                           // 0x0070(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FEFPPMaterialTextureParam>           TextureParamArr;                                          // 0x0080(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	TEnumAsByte<EF_POSTPROCESS_MATERIALEFFECT_TYPE>    MaterialEffectType;                                       // 0x0090(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialChaosGateEffect
// 0x0017 (0x00A8 - 0x0091)
class UEFPostProcessMaterialChaosGateEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEChaosGateValue                       ChaosGateValue;                                           // 0x0094(0x0014) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialChaosGateEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialDeadEffect
// 0x000F (0x00A0 - 0x0091)
class UEFPostProcessMaterialDeadEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEDeadValue                            DeadValue;                                                // 0x0094(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialDeadEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectHit
// 0x0013 (0x00A4 - 0x0091)
class UEFPostProcessMaterialEffectHit : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEHitValue                             SkillValue;                                               // 0x0094(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectHit");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectSkill
// 0x003B (0x00CC - 0x0091)
class UEFPostProcessMaterialEffectSkill : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     EffectDesc;                                               // 0x0094(0x0010) (Edit, NeedCtorLink)
	int                                                GroupPriority;                                            // 0x00A4(0x0004) (Edit)
	struct FString                                     Keyword;                                                  // 0x00A8(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           bOnlyPlayLocalPlayer : 1;                                 // 0x00B8(0x0004) (Edit)
	struct FEFPPMESkillValue                           SkillValue;                                               // 0x00BC(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectSkill");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialEffectStatus
// 0x001F (0x00B0 - 0x0091)
class UEFPostProcessMaterialEffectStatus : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     EffectDesc;                                               // 0x0094(0x0010) (Edit, NeedCtorLink)
	struct FEFPPMEStatusValue                          StatusValue;                                              // 0x00A4(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialEffectStatus");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialHPEffect
// 0x0027 (0x00B8 - 0x0091)
class UEFPostProcessMaterialHPEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	TArray<struct FEFPPMEHPPersentValue>               HPPersentValues;                                          // 0x0094(0x0010) (Edit, NeedCtorLink)
	struct FEFPPMEHPPersentValueCriticalHit            HPCriticalHitValue;                                       // 0x00A4(0x0014) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialHPEffect");
		return ptr;
	}

};


// Class EFGame.EFPostProcessMaterialShipWreckEffect
// 0x000F (0x00A0 - 0x0091)
class UEFPostProcessMaterialShipWreckEffect : public UEFPostProcessMaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FEFPPMEShipWreckValue                       ShipWreckValue;                                           // 0x0094(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPostProcessMaterialShipWreckEffect");
		return ptr;
	}

};


// Class EFGame.EFProjectileParticleData
// 0x0030 (0x0088 - 0x0058)
class UEFProjectileParticleData : public UObject
{
public:
	float                                              ParticlePlayRate;                                         // 0x0058(0x0004) (Edit)
	uint32_t                                           AutoPlayRateBySpeed : 1;                                  // 0x005C(0x0004) (Edit)
	uint32_t                                           ApplyEFSkeletalMeshActorDLE : 1;                          // 0x005C(0x0004) (Edit)
	float                                              AutoPlayRateTime;                                         // 0x0060(0x0004) (Edit)
	float                                              AutoPlayMaxRate;                                          // 0x0064(0x0004) (Edit)
	float                                              AutoPlayMinRate;                                          // 0x0068(0x0004) (Edit)
	int                                                TranslucencySortPriority;                                 // 0x006C(0x0004) (Edit)
	class UEFParticleData*                             ParticleData;                                             // 0x0070(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     AdditionalParticleDataArr;                                // 0x0078(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFProjectileParticleData");
		return ptr;
	}

};


// Class EFGame.EFSimpleEffect
// 0x0020 (0x028C - 0x026C)
class AEFSimpleEffect : public AActor
{
public:
	TArray<struct FEFSimpleParticleSystemInfo>         ParticleSystemSet;                                        // 0x026C(0x0010) (NeedCtorLink, Deprecated)
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x027C(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSimpleEffect");
		return ptr;
	}

};


// Class EFGame.EFSpawnEffect
// 0x0020 (0x028C - 0x026C)
class AEFSpawnEffect : public AActor
{
public:
	TArray<struct FEFParticleSystemInfo>               ParticleSystemSet;                                        // 0x026C(0x0010) (Component, NeedCtorLink, Deprecated)
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x027C(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnEffect");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_ApplyReverbVolume
// 0x0000 (0x0158 - 0x0158)
class UEFSeqAct_ApplyReverbVolume : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_ApplyReverbVolume");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_Bridge
// 0x0000 (0x0158 - 0x0158)
class UEFSeqAct_Bridge : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_Bridge");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_ChangeCullDistance
// 0x0014 (0x016C - 0x0158)
class UEFSeqAct_ChangeCullDistance : public USequenceAction
{
public:
	float                                              CullDistanceScaleOverride;                                // 0x0158(0x0004) (Edit)
	uint32_t                                           bIsScaleOverridden : 1;                                   // 0x015C(0x0004) (EditConst)
	float                                              SavedDecalCullDistanceScale;                              // 0x0160(0x0004) (EditConst)
	float                                              SavedFractureCullDistanceScale;                           // 0x0164(0x0004) (EditConst)
	float                                              SavedMaxDrawDistanceScale;                                // 0x0168(0x0004) (EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_ChangeCullDistance");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_EndRemoteEvent
// 0x0008 (0x0160 - 0x0158)
class UEFSeqAct_EndRemoteEvent : public USequenceAction
{
public:
	struct FName                                       EventName;                                                // 0x0158(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_EndRemoteEvent");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_GlobalCharLight
// 0x0000 (0x0158 - 0x0158)
class UEFSeqAct_GlobalCharLight : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_GlobalCharLight");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_Matinee
// 0x0031 (0x029D - 0x026C)
class UEFSeqAct_Matinee : public USeqAct_Interp
{
public:
	class AActor*                                      Activator;                                                // 0x026C(0x0008) (Native, Transient)
	TArray<class UObject*>                             ObjListInGame;                                            // 0x0274(0x0010) (Transient, NeedCtorLink)
	int                                                MatineeIndex;                                             // 0x0284(0x0004) (Edit, EditConst)
	uint32_t                                           bSkipJump : 1;                                            // 0x0288(0x0004) (Edit)
	uint32_t                                           bUsingMuteEvent : 1;                                      // 0x0288(0x0004) (Edit)
	uint32_t                                           bUsingMuteEvent_WithoutAmbient : 1;                       // 0x0288(0x0004) (Edit)
	uint32_t                                           bIsApplyMuteEvent : 1;                                    // 0x0288(0x0004) (Transient)
	uint32_t                                           bNeedApplySkipSoundEvent : 1;                             // 0x0288(0x0004) (Transient)
	class UAkEvent*                                    SkipEffectSoundEvent;                                     // 0x028C(0x0008) (Edit)
	class UAkEvent*                                    SkipBGMEvent;                                             // 0x0294(0x0008) (Edit)
	TEnumAsByte<EFAutoBlendState>                      eAutoBlendState;                                          // 0x029C(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_Matinee");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_MovePlayer
// 0x0018 (0x0170 - 0x0158)
class UEFSeqAct_MovePlayer : public USequenceAction
{
public:
	uint32_t                                           bUseDefaultMoveSpeed : 1;                                 // 0x0158(0x0004) (Edit)
	uint32_t                                           bDelayMoveTime : 1;                                       // 0x0158(0x0004) (Edit)
	uint32_t                                           bRestoreInputLock : 1;                                    // 0x0158(0x0004) (Transient)
	float                                              MoveTime;                                                 // 0x015C(0x0004) (Edit)
	struct FVector                                     DestLocation;                                             // 0x0160(0x000C) (Edit)
	float                                              RemainingTime;                                            // 0x016C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_MovePlayer");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_NPCController
// 0x00E8 (0x0258 - 0x0170)
class UEFSeqAct_NPCController : public USeqAct_Latent
{
public:
	class AActor*                                      Target;                                                   // 0x0170(0x0008)
	struct FName                                       AnimListName;                                             // 0x0178(0x0008) (Edit)
	class UAnimNodeBlendList*                          AnimList;                                                 // 0x0180(0x0008)
	class UAnimNodeSequence*                           sAnimeNodeSeq;                                            // 0x0188(0x0008)
	class UAnimNodeSequence*                           eAnimeNodeSeq;                                            // 0x0190(0x0008)
	uint32_t                                           bForEverLoop : 1;                                         // 0x0198(0x0004) (Edit)
	uint32_t                                           isEventMove : 1;                                          // 0x0198(0x0004)
	uint32_t                                           isWaitTime : 1;                                           // 0x0198(0x0004)
	float                                              PosOffset;                                                // 0x019C(0x0004) (Edit)
	float                                              RandomPosOffset;                                          // 0x01A0(0x0004) (Edit)
	TArray<struct FSNPC_MovingState>                   MovePoints;                                               // 0x01A4(0x0010) (Edit, NeedCtorLink)
	TArray<struct FSNPC_MovingState>                   EventMovePoints;                                          // 0x01B4(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EUNM_SNPC_workCompletedState>          emCompledted_Work;                                        // 0x01C4(0x0001) (Edit)
	TEnumAsByte<ENUM_SNPC_PlayAnimationName>           ewWaitAnimation;                                          // 0x01C5(0x0001) (Edit)
	TEnumAsByte<EUNM_SNPC_workCompletedState>          ewCompledted_Work;                                        // 0x01C6(0x0001) (Edit)
	TEnumAsByte<ENUM_SNPC_PlayAnimationName>           BackUpAnimName;                                           // 0x01C7(0x0001)
	TEnumAsByte<ENUM_SNPC_NPCState>                    EN_MoveState;                                             // 0x01C8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	float                                              ewWaitTime;                                               // 0x01CC(0x0004) (Edit)
	float                                              ewBlendTime;                                              // 0x01D0(0x0004) (Edit)
	struct FString                                     ewForcedAnim;                                             // 0x01D4(0x0010) (Edit, NeedCtorLink)
	float                                              CheckWaitTime;                                            // 0x01E4(0x0004)
	int                                                BackUpCurrentCount;                                       // 0x01E8(0x0004)
	int                                                MainCount;                                                // 0x01EC(0x0004)
	int                                                CurrentCount;                                             // 0x01F0(0x0004)
	struct FSNPC_MovingState                           MainState;                                                // 0x01F4(0x0034) (NeedCtorLink)
	struct FVector                                     vC;                                                       // 0x0228(0x000C)
	struct FVector                                     vB;                                                       // 0x0234(0x000C)
	float                                              vD;                                                       // 0x0240(0x0004)
	float                                              CurrentTime;                                              // 0x0244(0x0004)
	struct FRotator                                    PendingRotator;                                           // 0x0248(0x000C)
	float                                              MainSPEED;                                                // 0x0254(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_NPCController");
		return ptr;
	}


	bool Update(float DeltaTime);
	void Activated();
	void BackupMainMovingState();
	void SetEventMoveCompleteProcess(TEnumAsByte<EUNM_SNPC_workCompletedState> swState);
	void SetMoving(float DeltaTime);
	void SettingReady(const struct FSNPC_MovingState& CData);
	void setPlayWaitAnimation(const struct FString& aniName, bool isLoop, float BlendTime, bool isRandomStart);
	void setPlayAnimation(TEnumAsByte<ENUM_SNPC_PlayAnimationName> aniEnumName, bool isLoop, float BlendTime, bool isRandomStart);
	struct FName GetAnimationName(TEnumAsByte<ENUM_SNPC_PlayAnimationName> typAnim, bool isSet);
	void initial();
};


// Class EFGame.EFSeqAct_PlayCameraAnim
// 0x0000 (0x0180 - 0x0180)
class UEFSeqAct_PlayCameraAnim : public USeqAct_PlayCameraAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_PlayCameraAnim");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_PlaySwf
// 0x0018 (0x0170 - 0x0158)
class UEFSeqAct_PlaySwf : public USequenceAction
{
public:
	class UEFSwfMovie*                                 SwfObject;                                                // 0x0158(0x0008) (Edit)
	float                                              UnLoadTime;                                               // 0x0160(0x0004) (Edit)
	float                                              RemainingTime;                                            // 0x0164(0x0004) (Const)
	class UEFGFxMovieWidget*                           LoadedWidget;                                             // 0x0168(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_PlaySwf");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_SetRagdoll
// 0x0034 (0x018C - 0x0158)
class UEFSeqAct_SetRagdoll : public USequenceAction
{
public:
	struct FVector                                     VelocityDir;                                              // 0x0158(0x000C) (Edit)
	float                                              VelocityMag;                                              // 0x0164(0x0004) (Edit)
	struct FName                                       BoneName;                                                 // 0x0168(0x0008) (Edit)
	uint32_t                                           bRagdoll : 1;                                             // 0x0170(0x0004) (Edit)
	uint32_t                                           bVelocityRelativeToActorRotation : 1;                     // 0x0170(0x0004) (Edit)
	uint32_t                                           bUseBoneImpulse : 1;                                      // 0x0170(0x0004) (Edit)
	float                                              ApexDamage;                                               // 0x0174(0x0004) (Edit)
	float                                              ApexRadius;                                               // 0x0178(0x0004) (Edit)
	class UObject*                                     Target;                                                   // 0x017C(0x0008)
	class UObject*                                     HitLocaiton;                                              // 0x0184(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetRagdoll");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_StopParticle
// 0x0004 (0x015C - 0x0158)
class UEFSeqAct_StopParticle : public USequenceAction
{
public:
	uint32_t                                           bIsStop : 1;                                              // 0x0158(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_StopParticle");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_UIWindowClientEvent
// 0x0014 (0x016C - 0x0158)
class UEFSeqAct_UIWindowClientEvent : public USequenceAction
{
public:
	struct FName                                       EventName;                                                // 0x0158(0x0008) (Edit)
	int                                                EventParams[0x3];                                         // 0x0160(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_UIWindowClientEvent");
		return ptr;
	}

};


// Class EFGame.EFSeqAct_WeaponOnOff
// 0x0004 (0x015C - 0x0158)
class UEFSeqAct_WeaponOnOff : public USequenceAction
{
public:
	uint32_t                                           bIsOnOff : 1;                                             // 0x0158(0x0004) (Edit)
	uint32_t                                           bPartyAll : 1;                                            // 0x0158(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_WeaponOnOff");
		return ptr;
	}

};


// Class EFGame.EFSequence
// 0x0008 (0x01BC - 0x01B4)
class UEFSequence : public USequence
{
public:
	class UClass*                                      DefaultChildClass;                                        // 0x01B4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequence");
		return ptr;
	}

};


// Class EFGame.EFSeqVar_SpawnedObject
// 0x0005 (0x00F9 - 0x00F4)
class UEFSeqVar_SpawnedObject : public USeqVar_Object
{
public:
	int                                                SpawnIndex;                                               // 0x00F4(0x0004) (Edit, EditInline)
	TEnumAsByte<ENameplatetype>                        eNamePlateType;                                           // 0x00F8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqVar_SpawnedObject");
		return ptr;
	}

};


// Class EFGame.EFLevelStreamingAlwaysLoaded
// 0x0000 (0x0114 - 0x0114)
class UEFLevelStreamingAlwaysLoaded : public ULevelStreamingAlwaysLoaded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class EFGame.EFLevelStreamingEditorOnly
// 0x0000 (0x0110 - 0x0110)
class UEFLevelStreamingEditorOnly : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLevelStreamingEditorOnly");
		return ptr;
	}

};


// Class EFGame.EFParticleSceneCapture2DActor
// 0x0000 (0x027C - 0x027C)
class AEFParticleSceneCapture2DActor : public ASceneCapture2DActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSceneCapture2DActor");
		return ptr;
	}

};


// Class EFGame.EFPCSelectStart
// 0x0009 (0x0275 - 0x026C)
class AEFPCSelectStart : public AActor
{
public:
	int                                                WallPaperPirmaryKey;                                      // 0x026C(0x0004) (Edit)
	int                                                PCSelectPositionIndex;                                    // 0x0270(0x0004) (Edit)
	TEnumAsByte<EPCSelectStartActionType>              PCSelectActionType;                                       // 0x0274(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPCSelectStart");
		return ptr;
	}

};


// Class EFGame.EFPlayerStart
// 0x0000 (0x0394 - 0x0394)
class AEFPlayerStart : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPlayerStart");
		return ptr;
	}

};


// Class EFGame.EFPortalPoint
// 0x0034 (0x03B8 - 0x0384)
class AEFPortalPoint : public ANavigationPoint
{
public:
	int                                                PortalPoint_Index;                                        // 0x0384(0x0004) (Edit)
	struct FVector                                     PortalPoint_Position;                                     // 0x0388(0x000C) (Edit, EditConst)
	struct FRotator                                    PortalPoint_Rotation;                                     // 0x0394(0x000C) (Edit, EditConst)
	struct FString                                     PortalPoint_Name;                                         // 0x03A0(0x0010) (Edit, NeedCtorLink)
	int                                                SecretDungeonRoomNo;                                      // 0x03B0(0x0004) (Edit)
	int                                                StreamingZoneID;                                          // 0x03B4(0x0004) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPortalPoint");
		return ptr;
	}

};


// Class EFGame.EFSceneCapture2DActor
// 0x0018 (0x0294 - 0x027C)
class AEFSceneCapture2DActor : public ASceneCapture2DActor
{
public:
	TEnumAsByte<EBindCaptureType>                      BindType;                                                 // 0x027C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0280(0x0008) (Transient)
	int                                                SnapShotEventStep;                                        // 0x0288(0x0004) (Transient)
	int                                                SnapShotNextEventStepFrame;                               // 0x028C(0x0004) (Transient)
	float                                              SnapShotLastRenderTimeseconds;                            // 0x0290(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSceneCapture2DActor");
		return ptr;
	}

};


// Class EFGame.EFSceneCapture2DComponent
// 0x0018 (0x0188 - 0x0170)
class UEFSceneCapture2DComponent : public USceneCapture2DComponent
{
public:
	uint32_t                                           bKeepOriginalSurface : 1;                                 // 0x0170(0x0004) (Edit)
	uint32_t                                           bParticleCapture : 1;                                     // 0x0170(0x0004) (Transient)
	class AActor*                                      FocusActor;                                               // 0x0174(0x0008) (Transient)
	struct FVector                                     ViewOriginOffset;                                         // 0x017C(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSceneCapture2DComponent");
		return ptr;
	}

};


// Class EFGame.EFSceneCaptureObjectLocation
// 0x0008 (0x0274 - 0x026C)
class AEFSceneCaptureObjectLocation : public AActor
{
public:
	TEnumAsByte<EBindCaptureType>                      BindType;                                                 // 0x026C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	struct FLightingChannelContainer                   LightingChannels;                                         // 0x0270(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSceneCaptureObjectLocation");
		return ptr;
	}

};


// Class EFGame.EFEnvironmentInfoData
// 0x00C4 (0x011C - 0x0058)
class UEFEnvironmentInfoData : public UObject
{
public:
	uint32_t                                           EHF_Override : 1;                                         // 0x0058(0x0004) (Edit)
	uint32_t                                           CPL_Override : 1;                                         // 0x0058(0x0004) (Edit)
	uint32_t                                           CPL_bEnabled : 1;                                         // 0x0058(0x0004) (Edit, Const)
	uint32_t                                           CPL_OverrideLightingChannels : 1;                         // 0x0058(0x0004) (Edit, Const)
	uint32_t                                           WLE_Override : 1;                                         // 0x0058(0x0004) (Edit)
	uint32_t                                           DDL_Override : 1;                                         // 0x0058(0x0004) (Edit)
	float                                              EHF_FogDensity;                                           // 0x005C(0x0004) (Edit, Const)
	float                                              EHF_FogHeightFalloff;                                     // 0x0060(0x0004) (Edit, Const)
	float                                              EHF_FogMaxOpacity;                                        // 0x0064(0x0004) (Edit, Const)
	float                                              EHF_StartDistance;                                        // 0x0068(0x0004) (Edit, Const)
	float                                              EHF_LightTerminatorAngle;                                 // 0x006C(0x0004) (Edit, Const)
	float                                              EHF_OppositeLightBrightness;                              // 0x0070(0x0004) (Edit, Const)
	struct FColor                                      EHF_OppositeLightColor;                                   // 0x0074(0x0004) (Edit, Const)
	float                                              EHF_LightInscatteringBrightness;                          // 0x0078(0x0004) (Edit, Const)
	struct FColor                                      EHF_LightInscatteringColor;                               // 0x007C(0x0004) (Edit, Const)
	float                                              CPL_Brightness;                                           // 0x0080(0x0004) (Edit, Const)
	struct FColor                                      CPL_LightColor;                                           // 0x0084(0x0004) (Edit, Const)
	float                                              CPL_Radius;                                               // 0x0088(0x0004) (Edit)
	float                                              CPL_FalloffExponent;                                      // 0x008C(0x0004) (Edit)
	float                                              CPL_ShadowFalloffExponent;                                // 0x0090(0x0004) (Edit)
	struct FVector                                     CPL_Translation;                                          // 0x0094(0x000C) (Edit, Const)
	struct FLightingChannelContainer                   CPL_LightingChannels;                                     // 0x00A0(0x0004) (Edit, Const)
	float                                              WLE_CharacterLitIndirectBrightness;                       // 0x00A4(0x0004) (Edit)
	float                                              WLE_CharacterLitIndirectContrastFactor;                   // 0x00A8(0x0004) (Edit)
	float                                              WLE_CharacterShadowedIndirectBrightness;                  // 0x00AC(0x0004) (Edit)
	float                                              WLE_CharacterShadowedIndirectContrastFactor;              // 0x00B0(0x0004) (Edit)
	float                                              WLE_CharacterLightingContrastFactor;                      // 0x00B4(0x0004) (Edit)
	float                                              DDL_Brightness;                                           // 0x00B8(0x0004) (Edit, Const)
	struct FColor                                      DDL_LightColor;                                           // 0x00BC(0x0004) (Edit, Const)
	class AEmitter*                                    Emitter_Actor;                                            // 0x00C0(0x0008) (Edit)
	float                                              CamOffset;                                                // 0x00C8(0x0004) (Edit)
	class UMaterialInstanceConstant*                   MIC_Original;                                             // 0x00CC(0x0008) (Edit)
	class UMaterialInstanceConstant*                   MIC_Target;                                               // 0x00D4(0x0008) (Edit)
	class UEFCameraViewShake*                          CameraViewShakeParam;                                     // 0x00DC(0x0008) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	class UEFCameraViewShakeAnim*                      CameraViewShakeAnim;                                      // 0x00E4(0x0008) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	float                                              PlayRate;                                                 // 0x00EC(0x0004) (Edit)
	class UMaterialInstanceConstant*                   PPM_Material;                                             // 0x00F0(0x0008) (Edit)
	float                                              PPM_Opacity;                                              // 0x00F8(0x0004)
	class UAkEvent*                                    InAkEvent_Music;                                          // 0x00FC(0x0008) (Edit)
	class UAkEvent*                                    OutAkEvent_Music;                                         // 0x0104(0x0008) (Edit)
	class UAkEvent*                                    InAkEvent_Ambient;                                        // 0x010C(0x0008) (Edit)
	class UAkEvent*                                    OutAkEvent_Ambient;                                       // 0x0114(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfoData");
		return ptr;
	}

};


// Class EFGame.EFEnvironmentInfoVolume
// 0x0124 (0x0550 - 0x042C)
class AEFEnvironmentInfoVolume : public APostProcessVolume
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x042C(0x0008) (Const, Native, NoExport)
	int                                                VolumeIndex;                                              // 0x0434(0x0004) (Edit)
	class UEFEnvironmentInfoData*                      EnviromentValue;                                          // 0x0438(0x0008) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	float                                              BlendTimeIn;                                              // 0x0440(0x0004) (Edit)
	float                                              BlendTimeOut;                                             // 0x0444(0x0004) (Edit)
	uint32_t                                           bCastDynamicShadow : 1;                                   // 0x0448(0x0004) (Edit)
	uint32_t                                           bActivateByPlayerLocation : 1;                            // 0x0448(0x0004) (Edit)
	uint32_t                                           bIsInit : 1;                                              // 0x0448(0x0004) (Transient)
	uint32_t                                           bPlayInEditor : 1;                                        // 0x0448(0x0004) (Transient)
	uint32_t                                           bEnableMIC : 1;                                           // 0x0448(0x0004) (Transient)
	TArray<class AStaticMeshActor*>                    ExcludedActors;                                           // 0x044C(0x0010) (Edit, Transient, AlwaysInit, NeedCtorLink)
	class UTexture*                                    IBL_Texture;                                              // 0x045C(0x0008) (Edit)
	TEnumAsByte<EnvVolumeState>                        eVolumeState;                                             // 0x0464(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	float                                              BlendTime;                                                // 0x0468(0x0004) (Transient)
	float                                              LastBlendTime;                                            // 0x046C(0x0004) (Transient)
	float                                              LastAlpha;                                                // 0x0470(0x0004) (Transient)
	float                                              fAlpha;                                                   // 0x0474(0x0004) (Transient)
	class UEFEnvironmentInfoData*                      TargetEnvData;                                            // 0x0478(0x0008) (Transient)
	class UEFEnvironmentInfoData*                      OriginalEnvData;                                          // 0x0480(0x0008) (Transient)
	class UEFEnvironmentInfoData*                      CurrentEnvData;                                           // 0x0488(0x0008) (Transient)
	class AExponentialHeightFog*                       EHFogActor;                                               // 0x0490(0x0008) (Transient)
	class ADominantDirectionalLight*                   DDLightActor;                                             // 0x0498(0x0008) (Transient)
	class UFunction*                                   DDLColorFucntion;                                         // 0x04A0(0x0008) (Transient)
	struct FMICParamInfo                               OriginalMICParamData;                                     // 0x04A8(0x0030) (Transient, NeedCtorLink)
	struct FMICParamInfo                               CurrentMICParamData;                                      // 0x04D8(0x0030) (Transient, NeedCtorLink)
	struct FMICParamInfo                               TargetMICParamData;                                       // 0x0508(0x0030) (Transient, NeedCtorLink)
	int                                                CameraShakeGroupType;                                     // 0x0538(0x0004) (Transient)
	int                                                CameraShakePlayId;                                        // 0x053C(0x0004) (Transient)
	class UMaterialEffect*                             EnvMaterialEffect;                                        // 0x0540(0x0008) (Transient)
	class UMaterialInterface*                          PrevMaterialEffectMIC;                                    // 0x0548(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfoVolume");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void UpdateEnvironment(float InAlpha, bool bUpdateComponent, bool bIgnoreOverride);
	void OnToggle(class USeqAct_Toggle* Action);
};


// Class EFGame.EFLevelStreamingVolume
// 0x0010 (0x02D4 - 0x02C4)
class AEFLevelStreamingVolume : public ALevelStreamingVolume
{
public:
	struct FString                                     VolumeName;                                               // 0x02C4(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLevelStreamingVolume");
		return ptr;
	}

};


// Class EFGame.EFAreaNameVolume
// 0x0024 (0x02D4 - 0x02B0)
class AEFAreaNameVolume : public AEFVolume
{
public:
	struct FstGameMsgID                                AreaName;                                                 // 0x02B0(0x0024) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAreaNameVolume");
		return ptr;
	}

};


// Class EFGame.EFCharPerfOptionOverrideVolume
// 0x0004 (0x02B4 - 0x02B0)
class AEFCharPerfOptionOverrideVolume : public AEFVolume
{
public:
	uint32_t                                           bSynthesizeSHLight : 1;                                   // 0x02B0(0x0004) (Edit)
	uint32_t                                           bUseBooleanEnvironmentShadowing : 1;                      // 0x02B0(0x0004) (Edit)
	uint32_t                                           bAllowDynamicShadowsOnTranslucency : 1;                   // 0x02B0(0x0004) (Edit)
	uint32_t                                           bEnableLineCheckWithBounds : 1;                           // 0x02B0(0x0004) (Edit)
	uint32_t                                           bUpdateSkelWhenNotRendered : 1;                           // 0x02B0(0x0004) (Edit)
	uint32_t                                           bIgnoreControllersWhenNotRendered : 1;                    // 0x02B0(0x0004) (Edit)
	uint32_t                                           bTickAnimNodesWhenNotRendered : 1;                        // 0x02B0(0x0004) (Edit)
	uint32_t                                           bAcceptsStaticDecals : 1;                                 // 0x02B0(0x0004) (Edit)
	uint32_t                                           bAcceptsDynamicDecals : 1;                                // 0x02B0(0x0004) (Edit)
	uint32_t                                           bPerBoneMotionBlur : 1;                                   // 0x02B0(0x0004) (Edit)
	uint32_t                                           bPC : 1;                                                  // 0x02B0(0x0004) (Edit)
	uint32_t                                           bNPC : 1;                                                 // 0x02B0(0x0004) (Edit)
	uint32_t                                           bMonster : 1;                                             // 0x02B0(0x0004) (Edit)
	uint32_t                                           bBossMonster : 1;                                         // 0x02B0(0x0004) (Edit)
	uint32_t                                           bVehicle : 1;                                             // 0x02B0(0x0004) (Edit)
	uint32_t                                           bItem : 1;                                                // 0x02B0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCharPerfOptionOverrideVolume");
		return ptr;
	}

};


// Class EFGame.EFCoastVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFCoastVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCoastVolume");
		return ptr;
	}

};


// Class EFGame.EFDynamicBlockingVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFDynamicBlockingVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDynamicBlockingVolume");
		return ptr;
	}

};


// Class EFGame.EFDynamicVolumeBrush
// 0x0000 (0x02B0 - 0x02B0)
class AEFDynamicVolumeBrush : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDynamicVolumeBrush");
		return ptr;
	}

};


// Class EFGame.EFMatineePathNodeVolume
// 0x0060 (0x0310 - 0x02B0)
class AEFMatineePathNodeVolume : public AEFVolume
{
public:
	struct FString                                     TLinkMatinee_Matinee;                                     // 0x02B0(0x0010) (Edit, NeedCtorLink)
	class AEFMatineePathNode*                          MatineePathNode;                                          // 0x02C0(0x0008) (Edit)
	uint32_t                                           bEnableRewind : 1;                                        // 0x02C8(0x0004) (Edit)
	uint32_t                                           bActivate : 1;                                            // 0x02C8(0x0004) (Transient)
	class USeqAct_Interp*                              Matinee;                                                  // 0x02CC(0x0008) (Transient)
	struct FQWord                                      m_PlayerUid;                                              // 0x02D4(0x0008) (Transient)
	float                                              m_fPathTotalLength;                                       // 0x02DC(0x0004) (Transient)
	float                                              m_fMatineeTotalTime;                                      // 0x02E0(0x0004) (Transient)
	TArray<class AEFMatineePathNode*>                  m_MatineePathNodeArr;                                     // 0x02E4(0x0010) (Transient, NeedCtorLink)
	int                                                m_iClosestPathNode;                                       // 0x02F4(0x0004) (Transient)
	struct FVector                                     m_vClosestLoc;                                            // 0x02F8(0x000C) (Transient)
	struct FVector                                     m_vPlayerLoc;                                             // 0x0304(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMatineePathNodeVolume");
		return ptr;
	}

};


// Class EFGame.EFMovingNavigationVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFMovingNavigationVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMovingNavigationVolume");
		return ptr;
	}

};


// Class EFGame.EFNamingVolume
// 0x0010 (0x02C0 - 0x02B0)
class AEFNamingVolume : public AEFVolume
{
public:
	struct FString                                     Naming;                                                   // 0x02B0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNamingVolume");
		return ptr;
	}

};


// Class EFGame.EFOcclusionOutlineVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFOcclusionOutlineVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFOcclusionOutlineVolume");
		return ptr;
	}

};


// Class EFGame.EFPathBlockingVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFPathBlockingVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPathBlockingVolume");
		return ptr;
	}


	bool StopsProjectile(class AProjectile* P);
};


// Class EFGame.EFSearchPathObjectVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFSearchPathObjectVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSearchPathObjectVolume");
		return ptr;
	}

};


// Class EFGame.EFSightVolume
// 0x0000 (0x02B0 - 0x02B0)
class AEFSightVolume : public AEFVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSightVolume");
		return ptr;
	}

};


// Class EFGame.EFSoundMusicVolume
// 0x0024 (0x02D4 - 0x02B0)
class AEFSoundMusicVolume : public AEFVolume
{
public:
	struct FString                                     VolumeName;                                               // 0x02B0(0x0010) (Edit, NeedCtorLink)
	class UAkEvent*                                    InAkEvent;                                                // 0x02C0(0x0008) (Edit)
	class UAkEvent*                                    OutAkEvent;                                               // 0x02C8(0x0008) (Edit)
	int                                                Priority;                                                 // 0x02D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSoundMusicVolume");
		return ptr;
	}

};


// Class EFGame.EFSoundAmbientVolume
// 0x0000 (0x02D4 - 0x02D4)
class AEFSoundAmbientVolume : public AEFSoundMusicVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSoundAmbientVolume");
		return ptr;
	}

};


// Class EFGame.EFSoundReverbVolume
// 0x0028 (0x02D8 - 0x02B0)
class AEFSoundReverbVolume : public AEFVolume
{
public:
	struct FString                                     Auxilliary;                                               // 0x02B0(0x0010) (Edit, NeedCtorLink)
	float                                              AuxilliaryValue;                                          // 0x02C0(0x0004) (Edit)
	TArray<struct FString>                             IncludedAmbientsSounds;                                   // 0x02C4(0x0010) (Edit, NeedCtorLink)
	int                                                Priority;                                                 // 0x02D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSoundReverbVolume");
		return ptr;
	}

};


// Class EFGame.EFTranslucentVolume
// 0x0004 (0x02B4 - 0x02B0)
class AEFTranslucentVolume : public AEFVolume
{
public:
	uint32_t                                           bPendingOnEnter : 1;                                      // 0x02B0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTranslucentVolume");
		return ptr;
	}

};


// Class EFGame.EFCursorData
// 0x0050 (0x00A8 - 0x0058)
class UEFCursorData : public UObject
{
public:
	struct FString                                     SourceDirectoryPath;                                      // 0x0058(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FString                                     SourceFileName;                                           // 0x0068(0x0010) (Edit, NeedCtorLink)
	struct FString                                     CursorDescription;                                        // 0x0078(0x0010) (Edit, NeedCtorLink)
	TArray<unsigned char>                              CursorData;                                               // 0x0088(0x0010) (Const, NeedCtorLink)
	struct FString                                     ResourceTimeStamp;                                        // 0x0098(0x0010) (EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCursorData");
		return ptr;
	}

};


// Class EFGame.EFGFxDataProvider
// 0x0000 (0x00AC - 0x00AC)
class UEFGFxDataProvider : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxDataProvider");
		return ptr;
	}

};


// Class EFGame.EFGFxMoviePlayer
// 0x001C (0x0208 - 0x01EC)
class UEFGFxMoviePlayer : public UGFxMoviePlayer
{
public:
	TArray<struct FEFUIIniStruct>                      EFUIIniList;                                              // 0x01EC(0x0010) (Config, NeedCtorLink)
	float                                              MinAppliedAdvanceTime;                                    // 0x01FC(0x0004)
	float                                              AppliedAdvanceTime;                                       // 0x0200(0x0004)
	float                                              MaxAppliedAdvanceTime;                                    // 0x0204(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMoviePlayer");
		return ptr;
	}


	struct FString GetStringINI(const struct FString& Type);
	void SetStringINI(const struct FString& Type, const struct FString& Value);
	class UGFxObject* CreateArrayEx(const struct FString& SourceFile, int SourceLine);
	class UGFxObject* CreateObjectEx(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args, const struct FString& SourceFile, int SourceLine);
	void PostAdvance(float DeltaTime);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class EFGame.EFGFxEditorMoviePlayer
// 0x0000 (0x0208 - 0x0208)
class UEFGFxEditorMoviePlayer : public UEFGFxMoviePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxEditorMoviePlayer");
		return ptr;
	}


	bool Start(bool StartPaused);
};


// Class EFGame.EFGFxMovieWidget
// 0x0010 (0x0218 - 0x0208)
class UEFGFxMovieWidget : public UEFGFxMoviePlayer
{
public:
	TArray<class UGFxObject*>                          GFxObjectBinding;                                         // 0x0208(0x0010) (Const, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMovieWidget");
		return ptr;
	}


	class UTexture* GetExternalTexture(const struct FString& Resource);
	bool HasGFxObjectBinding(class UGFxObject* Widget);
	bool DelGFxObjectBinding(class UGFxObject* Widget);
	bool AddGFxObjectBinding(class UGFxObject* Widget);
	void SetVisible(bool bVisible);
	void GFxFristFrameCallback();
	void PostWidgetInit();
	bool Start(bool StartPaused);
};


// Class EFGame.EFGFxMovieWidgetMain
// 0x0000 (0x0218 - 0x0218)
class UEFGFxMovieWidgetMain : public UEFGFxMovieWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxMovieWidgetMain");
		return ptr;
	}


	void ActivateFrame(class UGFxObject* FrameObject, bool ActivateWhenShow, bool OnlyModal);
	void ARKSlotMouseDoubleClick(class UEFUISlot* SlotObj);
	void ARKSlotMouseRightClick(class UEFUISlot* SlotObj);
	void ARKSlotMouseLeftClick(class UEFUISlot* SlotObj);
	void ClearBindWidgetByName(const struct FName& WidgetPath);
	void ClearBindWidgetByWidget(class UGFxObject* Widget);
	bool UnBindWidget(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool BindWidget(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class EFGame.EFSwfMovie
// 0x0014 (0x00F8 - 0x00E4)
class UEFSwfMovie : public USwfMovie
{
public:
	TArray<struct FExternalBind>                       ExternalBinding;                                          // 0x00E4(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	uint32_t                                           bSetAlwaysNoMipsTexture : 1;                              // 0x00F4(0x0004) (Edit, EditConst)
	uint32_t                                           SetVectorDisplacement : 1;                                // 0x00F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSwfMovie");
		return ptr;
	}

};


// Class EFGame.EFUIComponent
// 0x0000 (0x00BC - 0x00BC)
class UEFUIComponent : public UGFxClikWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIComponent");
		return ptr;
	}


	void InvalidateSize();
	void InvalidateData();
	void Invalidate(const struct FString& Keyword);
	void ValidateNow();
	bool HasFocus();
	float GetY();
	void SetY(float Y);
	float GetX();
	void SetX(float X);
	float GetHeight();
	void SetHeight(float Height);
	float GetWidth();
	void SetWidth(float Width);
	bool GetEnabled();
	void SetEnabled(bool Enabled);
	bool GetVisible();
	void SetVisible(bool Visible);
	struct FString GetName();
	void SetName(const struct FString& strName);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class EFGame.EFUIControl
// 0x0000 (0x00BC - 0x00BC)
class UEFUIControl : public UEFUIComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIControl");
		return ptr;
	}

};


// Class EFGame.EFUIBuffManager
// 0x0000 (0x00BC - 0x00BC)
class UEFUIBuffManager : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIBuffManager");
		return ptr;
	}

};


// Class EFGame.EFUIButton
// 0x0000 (0x00BC - 0x00BC)
class UEFUIButton : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIButton");
		return ptr;
	}

};


// Class EFGame.EFUICheckBox
// 0x0000 (0x00BC - 0x00BC)
class UEFUICheckBox : public UEFUIButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUICheckBox");
		return ptr;
	}

};


// Class EFGame.EFUIComboBox
// 0x0000 (0x00BC - 0x00BC)
class UEFUIComboBox : public UEFUIButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIComboBox");
		return ptr;
	}

};


// Class EFGame.EFUISlot
// 0x0008 (0x00C4 - 0x00BC)
class UEFUISlot : public UEFUIButton
{
public:
	class UEFUISlotData*                               SlotData;                                                 // 0x00BC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlot");
		return ptr;
	}


	void SetItemData(class UGFxObject* SlotDataObject);
	void SetDisableType(int iType);
	void SetUniqueData(const struct FString& NewUniqueData);
	struct FString GetUniqueData();
	void SetLocked(int iLockType);
	bool IsLocked();
	void SetItemGrade(int NewGrade);
	int GetItemGrade();
	void SetSoundTheme(const struct FString& NewSoundTheme);
	struct FString GetSoundTheme();
	void SetDisabled(bool bValue);
	bool IsDisabled();
	void SetCooltime(float NewRemainTime, float NewTotalTime);
	float GetTotalCoolTime();
	float GetRemainCoolTime();
	void SetIconHeight(int NewIconHeight);
	int GetIconHeight();
	void SetIconWidth(int NewIconWidth);
	int GetIconWidth();
	void SetIconY(int NewIconY);
	int GetIconY();
	void SetIconX(int NewIconX);
	int GetIconX();
	void SetIconCount(int NewIconIndex);
	int GetIconCount();
	void SetIconPath(const struct FString& NewIconPath);
	struct FString GetIconPath();
	void SetWindowType(int NewWindowType);
	int GetWindowType();
	void SetSlotIndex(int NewSlotIndex);
	int GetSlotIndex();
	void SetBindID(const struct FString& NewSlotID);
	struct FString GetBindID();
	void SetSlotType(int NewSlotType);
	int GetSlotType();
	void SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, TEnumAsByte<EItemGrade> eItemGrade, int TableID, int IconCount);
	class UEFUISlotData* GetSlotItemData();
};


// Class EFGame.EFUIChatTabControl
// 0x0004 (0x00C0 - 0x00BC)
class UEFUIChatTabControl : public UEFUIControl
{
public:
	int                                                TabID;                                                    // 0x00BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIChatTabControl");
		return ptr;
	}


	void ChatLogInputSelectType(int InChannelType);
	void ChatLogMainWidgetTabInsertGroup(int InTabID);
	void ChatLogInTabGroupElementStartDrag(int InTabID, float InTabX, float InTabY);
	void ChatLogLinkClick(const struct FString& InLinkName, int InLinkCode, int InMouseClick);
	void ChatLogTabContextMenuShow(int InTabID);
	void ChatLogMainWidgetSizeUpdated();
};


// Class EFGame.EFUIComponentContainer
// 0x0000 (0x00BC - 0x00BC)
class UEFUIComponentContainer : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIComponentContainer");
		return ptr;
	}

};


// Class EFGame.EFUIDynamicList
// 0x0000 (0x00BC - 0x00BC)
class UEFUIDynamicList : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIDynamicList");
		return ptr;
	}

};


// Class EFGame.EFUIFactory
// 0x0000 (0x00BC - 0x00BC)
class UEFUIFactory : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIFactory");
		return ptr;
	}

};


// Class EFGame.EFUIGradientLabel
// 0x0000 (0x00BC - 0x00BC)
class UEFUIGradientLabel : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIGradientLabel");
		return ptr;
	}

};


// Class EFGame.EFUIIcon
// 0x0000 (0x00BC - 0x00BC)
class UEFUIIcon : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIIcon");
		return ptr;
	}

};


// Class EFGame.EFUISlot2
// 0x0000 (0x00BC - 0x00BC)
class UEFUISlot2 : public UEFUIIcon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlot2");
		return ptr;
	}

};


// Class EFGame.EFUILabel
// 0x0000 (0x00BC - 0x00BC)
class UEFUILabel : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUILabel");
		return ptr;
	}

};


// Class EFGame.EFUIList
// 0x0008 (0x00C4 - 0x00BC)
class UEFUIList : public UEFUIControl
{
public:
	class UEFGFxDataProvider*                          ListDataProvider;                                         // 0x00BC(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIList");
		return ptr;
	}


	void SetSelectedIndex(int NewListIndex);
	int GetSelectedIndex();
	class UEFUIListItem* GetData(int DataIndex, class UClass* ListItemClass);
};


// Class EFGame.EFUISlotManager
// 0x0000 (0x00C4 - 0x00C4)
class UEFUISlotManager : public UEFUIList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlotManager");
		return ptr;
	}

};


// Class EFGame.EFUISlotManager2
// 0x0000 (0x00C4 - 0x00C4)
class UEFUISlotManager2 : public UEFUIList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlotManager2");
		return ptr;
	}

};


// Class EFGame.EFUITree
// 0x0000 (0x00C4 - 0x00C4)
class UEFUITree : public UEFUIList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITree");
		return ptr;
	}

};


// Class EFGame.EFUIListItem
// 0x0010 (0x00CC - 0x00BC)
class UEFUIListItem : public UEFUIControl
{
public:
	TArray<struct FSVariableInfo>                      VariableNameData;                                         // 0x00BC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIListItem");
		return ptr;
	}


	bool HasAttribute();
};


// Class EFGame.EFUIListItemSlot
// 0x0000 (0x00CC - 0x00CC)
class UEFUIListItemSlot : public UEFUIListItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIListItemSlot");
		return ptr;
	}


	void SetAdvBookShow(bool bValue);
	void SetTemporary(bool bValue);
	void SetTrash(bool bValue);
	void SetDisableType(int iType);
	void SetTableID(int NewTableID);
	int GetTableID();
	void SetUniqueData(const struct FString& NewUniqueData);
	struct FString GetUniqueData();
	void SetLocked(int iLockType);
	bool IsLocked();
	void SetItemGrade(int NewGrade);
	int GetItemGrade();
	void SetSoundTheme(const struct FString& NewSoundTheme);
	struct FString GetSoundTheme();
	void SetDisabled(bool bValue);
	bool IsDisabled();
	void SetItemName(const struct FString& ItemName);
	struct FString GetItemName();
	void SetLabel(const struct FString& Label);
	struct FString GetLabel();
	void SetCooltime(float NewRemainTime, float NewTotalTime);
	float GetTotalCoolTime();
	float GetRemainCoolTime();
	void SetIconHeight(int NewIconHeight);
	int GetIconHeight();
	void SetIconWidth(int NewIconWidth);
	int GetIconWidth();
	void SetIconY(int NewIconY);
	int GetIconY();
	void SetIconX(int NewIconX);
	int GetIconX();
	void SetIconCount(int NewIconIndex);
	int GetIconCount();
	void SetIconPath(const struct FString& NewIconPath);
	struct FString GetIconPath();
	void SetWindowType(int NewWindowType);
	int GetWindowType();
	void SetSlotIndex(int NewSlotIndex);
	int GetSlotIndex();
	void SetBindID(const struct FString& NewSlotID);
	struct FString GetBindID();
	void SetSlotType(int NewSlotType);
	int GetSlotType();
	void SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, int TableID, int IconCount, bool bTrash, bool bTemporary);
};


// Class EFGame.EFUINumericStepper
// 0x0000 (0x00BC - 0x00BC)
class UEFUINumericStepper : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUINumericStepper");
		return ptr;
	}

};


// Class EFGame.EFUIProgress
// 0x0000 (0x00BC - 0x00BC)
class UEFUIProgress : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIProgress");
		return ptr;
	}

};


// Class EFGame.EFUITimingBar
// 0x0000 (0x00BC - 0x00BC)
class UEFUITimingBar : public UEFUIProgress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITimingBar");
		return ptr;
	}

};


// Class EFGame.EFUIScrollBar
// 0x0000 (0x00BC - 0x00BC)
class UEFUIScrollBar : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIScrollBar");
		return ptr;
	}

};


// Class EFGame.EFUIScrollView
// 0x0000 (0x00BC - 0x00BC)
class UEFUIScrollView : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIScrollView");
		return ptr;
	}

};


// Class EFGame.EFUIMinimapView
// 0x0000 (0x00BC - 0x00BC)
class UEFUIMinimapView : public UEFUIScrollView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIMinimapView");
		return ptr;
	}

};


// Class EFGame.EFUISlider
// 0x0000 (0x00BC - 0x00BC)
class UEFUISlider : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlider");
		return ptr;
	}

};


// Class EFGame.EFUITextField
// 0x0000 (0x00BC - 0x00BC)
class UEFUITextField : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITextField");
		return ptr;
	}

};


// Class EFGame.EFUITextInput
// 0x0000 (0x00BC - 0x00BC)
class UEFUITextInput : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITextInput");
		return ptr;
	}

};


// Class EFGame.EFUITextArea
// 0x0000 (0x00BC - 0x00BC)
class UEFUITextArea : public UEFUITextInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUITextArea");
		return ptr;
	}

};


// Class EFGame.EFUIWindowContent
// 0x0000 (0x00BC - 0x00BC)
class UEFUIWindowContent : public UEFUIControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIWindowContent");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetAchievement
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetAchievement : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAchievement");
		return ptr;
	}


	void AchievementRewardTakeBtnClick(int iRewardIndex);
};


// Class EFGame.EFGFxWidgetBuddy
// 0x0010 (0x00CC - 0x00BC)
class UEFGFxWidgetBuddy : public UEFUIWindowContent
{
public:
	TArray<struct FGroupExtendedInfo>                  ExtendedInfo;                                             // 0x00BC(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetBuddy");
		return ptr;
	}


	void showNew();
	void setSelectedTab(int Index);
	void setAFK(bool bAFK);
	void FriendsGroupRendererMouseOver(const struct FString& strUID);
	void FriendsGroupRendererRightClick(const struct FString& strUID);
	void FriendsGroupRendererExtended(const struct FString& strUID, bool bShow);
	void FriendsRendererRightClick(const struct FString& strUID);
	void FriendsInvite(const struct FString& strUID);
	void FriendsBlock(const struct FString& strUID);
	void FriendsUnBlock(const struct FString& strUID);
	void FriendsBuddyCancel(const struct FString& strUID);
	void FriendsBuddyReject(const struct FString& strUID);
	void FriendsBuddyAgree(const struct FString& strUID);
};


// Class EFGame.EFGFxWidgetCandidate
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCandidate : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCandidate");
		return ptr;
	}


	void SetCandidateFocus(bool isFocus);
};


// Class EFGame.EFGFxWidgetChattingOption
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetChattingOption : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetChattingOption");
		return ptr;
	}


	void SetChannelColor(int ChannelIndex, const struct FString& colorCode);
	void ChatLogFilterOptionAddTab(TArray<int> ArrFilterList);
	void ChatLogFilterOptionOKWnd(TArray<int> ArrFilterList);
	void ChatLogFilterOptionResetData();
	void ChatLogFilterOptionAppliedChannelList(TArray<int> ArrFilterList);
};


// Class EFGame.EFGFxWidgetCinematicDungeonEntrance
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCinematicDungeonEntrance : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCinematicDungeonEntrance");
		return ptr;
	}


	void DungeonEntranceDifficultyIndex(int InIndex);
};


// Class EFGame.EFGFxWidgetColorPicker
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetColorPicker : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetColorPicker");
		return ptr;
	}


	void SetTargetPosition(float X, float Y, float W, float H);
	void SetTargetCode(int InCode);
	void SetColor(const struct FString& InColor);
	void SetDefaultColor(const struct FString& InColor);
	void RequestEventColorPickerCursorDragEnd(const struct FString& InColor);
	void RequestEventColorPickerProgressValueChange(const struct FString& InColor);
	void ChatMessageInputTextHasFocus(bool InFocus);
	void RequestARKColorPickerDefaultSetting();
	void RequestARKColorPickerSaveSetting(const struct FString& InChannelColor, int InTargetCode);
	void RequestARKColorPickerClose();
};


// Class EFGame.EFGFxWidgetCurrencyInfo
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCurrencyInfo : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCurrencyInfo");
		return ptr;
	}


	void CurrencyInfoTreeItemClick(int InCurrencyIndex);
};


// Class EFGame.EFGFxWidgetCustomColorPicker
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetCustomColorPicker : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCustomColorPicker");
		return ptr;
	}


	void SetTargetPosition(float X, float Y, float W, float H);
	void SetTargetCode(int InCode);
	void SetColor(const struct FString& InColor);
	void SetInit(float InRadian, float InDistance, float InLightness, const struct FString& InColor, const struct FString& InColorPalette, float InMinLightness, float InMaxLightness);
	void ColorPickerColorChanged(float InRadian, float InDistance);
	void ColorPickerLightnessChanged(float InLightness);
	void RequestARKColorPickerDefaultSetting();
	void RequestARKColorPickerSaveSetting(int InTargetCode, float InRadian, float InDistance, float InLightness);
	void RequestARKColorPickerClose();
};


// Class EFGame.EFGFxWidgetFriendship
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetFriendship : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetFriendship");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetGuild
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetGuild : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetGuild");
		return ptr;
	}


	void GuildApplicantRightClick(const struct FString& Uid);
	void GuildMemberRightClick(const struct FString& Uid);
	void GuildReject(const struct FString& Uid);
	void GuildAccept(const struct FString& Uid);
	void GuildNoticeCopyButtonClick(const struct FString& sNotice);
	void GuildChangeGuildIntroduction(const struct FString& sIntroduction);
	void GuildChangeGuildNotice(const struct FString& sNotice);
	void GuildChangeBtnClick(bool bShow);
	void GuildChangeGuildMark(const struct FString& sMarkIdx);
	void GuildCreate(const struct FString& imarkIdx, const struct FString& sGuildName, const struct FString& sGuildDesc, bool bRecommend);
	void GuildCancel(const struct FString& Uid);
	void GuildApply(const struct FString& Uid);
};


// Class EFGame.EFGFxWidgetHotKey
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetHotKey : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHotKey");
		return ptr;
	}


	void killOptionKey();
	void selectOptionHotKeyMainMenu(int Index);
	void OptionHotKeyCloseBtnClick();
	void OptionHotKeyKillFocus();
	void OptionHotKeyCancelClick();
	void OptionHotKeyAcceptClick();
	void OptionHotKeyConfirmClick();
	void OptionHotKeyResetClick();
	void OptionHotKeyButtonChange(int mainListIndex, const struct FString& buttonType, int subListIndex);
	void OptionHotKeyMainListIndexChange(int Index);
};


// Class EFGame.EFGFxWidgetInstanceDungeonEntrance
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInstanceDungeonEntrance : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInstanceDungeonEntrance");
		return ptr;
	}


	void DungeonEntranceDifficultyIndex(int InIndex);
};


// Class EFGame.EFGFxWidgetInteractionAbility_Refine
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionAbility_Refine : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionAbility_Refine");
		return ptr;
	}


	void InteractionMarbleStoneRollOut(int Index);
	void InteractionMarbleStoneRollOver(int Index);
	void ChangeCursor(int Row);
	void InteractionMarbleStoneClick(int Index);
	void InteractionMarbleChangeTabClick(int Index);
	void InteractionMarbleStoneSelected(int Index);
};


// Class EFGame.EFGFxWidgetInteractionBarter
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionBarter : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionBarter");
		return ptr;
	}


	void BarterShopPurchaseItem(const struct FString& strUniqueData);
};


// Class EFGame.EFGFxWidgetInteractionColosseum
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionColosseum : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionColosseum");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetInteractionMail
// 0x0068 (0x0124 - 0x00BC)
class UEFGFxWidgetInteractionMail : public UEFUIWindowContent
{
public:
	TArray<struct FUIMailInfo>                         MailInfoArr;                                              // 0x00BC(0x0010) (NeedCtorLink)
	TArray<struct FMailReceiverCategory>               MailReceiverCategoryArr;                                  // 0x00CC(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00DC(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFGFxWidgetInteractionMail.MailReceiverIndexingList

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionMail");
		return ptr;
	}


	void SetNextSlotDisable();
	void ASSetNextSlotDisable();
	void SetNextSlotEnable();
	void ASSetNextSlotEnable();
	void SetMailOpenType(TEnumAsByte<EFMailOpenType> MailOpenType);
	void SetOpenType(TEnumAsByte<EFMailOpenType> MailOpenType);
	void StopLoading();
	void StructReceiverCacheData();
	void AddReceiverData(TEnumAsByte<EFMailReceiverType> ReceiverType, const struct FString& ReceiverName);
};


// Class EFGame.EFGFxWidgetInteractionShop
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionShop : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionShop");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetInteractionWarehouse
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInteractionWarehouse : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionWarehouse");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetInventory
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetInventory : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInventory");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetItemAssembly
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetItemAssembly : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetItemAssembly");
		return ptr;
	}


	void ItemCraftAlarmEffectLuckyPlayEnd();
};


// Class EFGame.EFGFxWidgetItemDisassembly
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetItemDisassembly : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetItemDisassembly");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetLifeSkill
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetLifeSkill : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetLifeSkill");
		return ptr;
	}


	void LifeLevelNoramlSkillClick(int Index);
	void LifeLevelMasterSkillPlusClick(int Index);
	void LifeLevelMasterSkillMinusClick(int Index);
	void LifeLevelPointPlusClick();
	void LifeLevelPointMinusClick();
	void LifeLevelGuideBtnClick(int Category);
	void LifeLevelGuideClosed();
	void OnLifeNoramlSkillClick(int Index);
	void OnLifeMasterSkillPlusClick(int Index);
	void OnLifeMasterSkillMinusClick(int Index);
	void OnLifePointPlusClick();
	void OnLifePointMinusClick();
	void LifeLevelGuide(int Category);
	void OnLifeLevelGuideClosed();
	void OpenLifeLevelGuideUI(int Category);
	void OpenLifeLevelGuide(int Category);
	void SetNoSkillUI(bool isNoSkill);
	void SetNoSkill(bool isNoSkill);
};


// Class EFGame.EFGFxWidgetMap
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMap : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMap");
		return ptr;
	}


	void RequestResetMapRotation();
	void RequestWorldMapUpperDepth();
	void WorldMapZoneIndex(int ZoneIndex);
	void WorldMapContinentType(int ContinentType);
};


// Class EFGame.EFGFxWidgetMarket
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMarket : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMarket");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetMOD_BossRush
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMOD_BossRush : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_BossRush");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetMOD_Tower
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMOD_Tower : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_Tower");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetMoviePlayer
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetMoviePlayer : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMoviePlayer");
		return ptr;
	}


	void TestLabSendInputMessage(const struct FString& InputText);
};


// Class EFGame.EFGFxWidgetNormalBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetNormalBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetNormalBox");
		return ptr;
	}


	void NormalBoxItemSelected();
};


// Class EFGame.EFGFxWidgetNoticeMOD
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetNoticeMOD : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetNoticeMOD");
		return ptr;
	}


	void NoticeModWaitListItemClick(int ListIndex);
};


// Class EFGame.EFGFxWidgetQuestJournal
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetQuestJournal : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetQuestJournal");
		return ptr;
	}


	void SetMaxTreeItemCheckNumber(int InMaxQuestCheckNumber);
	void SetMaxQuestCheckNumber(int InMaxQuestCheckNumber);
	void ARKQuestTraceButtonClicked(int InQuestIndex);
	void OnClicked_TraceQuestButton(int InQuestIndex);
	void QuestJournalTreeItemListOverPool();
	void OnCheckedTreeItemOverPool();
	void ARKQuestGiveUpButtonClicked(int InQuestIndex);
	void OnClicked_GiveUpButton(int InQuestIndex);
	void QuestJournalTreeItemMultiCheck(class UGFxObject* InArray);
	void OnChecked_QuestTreeItem(TArray<int> InQuestIndexArray);
};


// Class EFGame.EFGFxWidgetQuestSummary
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetQuestSummary : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetQuestSummary");
		return ptr;
	}


	void OnHide();
	void OnHideQuestSummary();
	void ARKQuestSelectedRewardItem(int InIndex);
	void OnClicked_SelectChoiceItem(int InIndex);
	void ARKQuestCompleteButtonClicked(int InQuestIndex);
	void OnClicked_CompleteButton(int InQuestIndex);
	void ARKQuestAcceptButtonClicked(int InQuestIndex);
	void OnClicked_AcceptButton(int InQuestIndex);
	void SelectChoiceRewardItem(int InSelectIndex);
	void SetSelectedIndex_ChoiceRewardItem(int InSelectIndex);
};


// Class EFGame.EFGFxWidgetRandomBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetRandomBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRandomBox");
		return ptr;
	}


	void Init();
	void startAni();
	void RandomBoxComplete();
	void RandomBoxClosed();
};


// Class EFGame.EFGFxWidgetSelectBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSelectBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSelectBox");
		return ptr;
	}


	void SelectBoxItemSelected(const struct FString& ItemId);
};


// Class EFGame.EFGFxWidgetSkillBook
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSkillBook : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSkillBook");
		return ptr;
	}


	void closePreset();
	void openPreset();
	void cancelSelection();
	void SkillBookPresetUnlock(int iIndex);
	void SkillBookPresetApply(int iIndex);
	void SkillBookPresetSelected(int iIndex);
	void SkillBookInitCancel();
	void SkillBookInitConfirm(int iIndex);
	void SkillBookPresetEdit();
	void SkillBookListSelected(int TierId);
	void SkillBookTierBtnClick(int TierId);
	void SkillBookDownBtnClick(int SkillId);
	void SkillBookUpBtnClick(int SkillId);
};


// Class EFGame.EFGFxWidgetSocialSkill
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSocialSkill : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSocialSkill");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetSystemOption
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetSystemOption : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetSystemOption");
		return ptr;
	}


	void SystemOptionButtonClickHandler(int iUID);
	void SystemOptionListIndexChange(int iUID, int iIndex);
	void OpenChattingOptionColorPicker(int iUID, const struct FString& sColor, float X, float Y, float W, float H);
	void OptionHotKeyKillFocus();
	void OptionHotKeyButtonChange(int iUID, int iIndex);
	void SystemOptionWndCloseButtonClicked();
	void SystemOptionChangedSlider(int iUID, int iValue);
	void SystemOptionSelectedComboBox(int iUID, int iIndex);
	void SystemOptionSelectedCheckBox(int iUID, bool bCheck);
};


// Class EFGame.EFGFxWidgetTownBuilding
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetTownBuilding : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetTownBuilding");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetTrophyAuction
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetTrophyAuction : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetTrophyAuction");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetUnLockBox
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetUnLockBox : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetUnLockBox");
		return ptr;
	}


	void UnlockBoxItemComplete();
	void UnlockBoxItemClosed();
};


// Class EFGame.EFGFxWidgetUserTrade
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetUserTrade : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetUserTrade");
		return ptr;
	}


	void SetOtherTradeReady(bool Ready);
	void ASSetOtherTradeReady(bool Ready);
	void SetMyTradeReady(bool Ready);
	void ASSetMyTradeReady(bool Ready);
	void SetOtherTradeConfirm();
	void ASSetOtherTradeConfirm();
	void SetMyTradeConfirm();
	void ASSetMyTradeConfirm();
};


// Class EFGame.EFGFxWidgetVictoryCrest
// 0x0000 (0x00BC - 0x00BC)
class UEFGFxWidgetVictoryCrest : public UEFUIWindowContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetVictoryCrest");
		return ptr;
	}


	void VictoryCrestWindowConfirmBtnClick(int iPlateIndex);
	void VictoryCrestWindowExchangeBtnClick(int iPlateIndex);
	void VictoryCrestWindowUnlockBtnClick(int iPlateIndex);
};


// Class EFGame.EFUIFrame
// 0x0004 (0x00C0 - 0x00BC)
class UEFUIFrame : public UEFUIComponent
{
public:
	uint32_t                                           OnlyModal : 1;                                            // 0x00BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIFrame");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void Deactivate();
	void Activate();
};


// Class EFGame.EFGFxWidgetAcquireItem
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetAcquireItem : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAcquireItem");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetAnnounce
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetAnnounce : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAnnounce");
		return ptr;
	}


	void AnnounceFrameMotionComplete(int Layer);
	void cleanUpLayer(int Layer);
	void setAnnouncePosition(int Layer, float YPos);
	class UGFxObject* getAnnounceListPosition(int Layer);
	void setAnnounceItemTime(int Layer, int Index, float Time);
	float getAnnounceItemTime(int Layer, int Index);
	class UGFxObject* getAnnounceListItem(int Layer, int Index);
	void setAnnounceTotalItem(int Layer, int Count);
	int getAnnounceMaxItem(int Layer);
	int getAnnounceCurrentItem(int Layer);
	void addAnnounceMessage(int Layer, class UGFxObject* Obj);
};


// Class EFGame.EFGFxWidgetClassPreview
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetClassPreview : public UEFUIFrame
{
public:
	TArray<int>                                        ClassPreviewClassArr;                                     // 0x00C0(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetClassPreview");
		return ptr;
	}


	void SetEnableResetButton(bool bEnable);
	void SetShowType(int Type);
	void SetClassUpgradeChoiceInfo(int Index, int ClassID, const struct FString& ClassName, class UGFxObject* ClassData, bool bPublic);
	void SetPlayingClassData(int ClassID, const struct FString& ClassName, const struct FString& classInfo);
	void ClassUpgradeCancelRelease();
	void ClassUpgradeSelectClassID(int iIndex);
	void ClassUpgradeConfirmClass(int iIndex);
	void ClassUpgradeReturnRelease();
	void ClassUpgradeAddBossMonster();
	void ClassUpgradeAddNormalMonster();
	void ClassUpgradePlayReset();
	void RequestStopMovie();
	void RequestPlayMovieClassUpgradePreview(int Index);
	void ClassUpgradePreviewRequestCloseWnd();
	void ClassUpgradePreviewPlaySelectClass(int iIndex);
};


// Class EFGame.EFGFxWidgetColosseum_New
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetColosseum_New : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetColosseum_New");
		return ptr;
	}


	void setObserverMod(int iMode, int iSide);
	void setTimerPause(bool bPause);
	void AddItem(class UGFxObject* Object);
	void setModType(int iType);
	void roundAnnounceShowType(int iType, const struct FString& Title, const struct FString& Subtitle);
	void announceShowType(int iType);
	void setStartData(class UGFxObject* Object);
	void setWaitData(class UGFxObject* Object);
};


// Class EFGame.EFGFxWidgetCommon
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetCommon : public UEFUIFrame
{
public:
	TArray<struct FCommonWidgetBinding>                CommonWidgetBindings;                                     // 0x00C0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetCommon");
		return ptr;
	}


	void SetPartyMemberValue(const struct FString& remainPartyMember);
	void SetCommonObjectAvailableSkip(bool bShow, int skipType);
	void ShowCommonObjectAvailableSkip(bool bShow);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class EFGame.EFGFxWidgetContentsUnlock
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetContentsUnlock : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetContentsUnlock");
		return ptr;
	}


	void ContentsUnlockCallbackTypeID(int Index);
	void OnContentsUnlockCallbackTypeID(int Index);
};


// Class EFGame.EFGFxWidgetDamage
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetDamage : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetDamage");
		return ptr;
	}


	int EFDataBinding_UpdateData(const struct FString& BindName, class UGFxObject* DataProvider);
};


// Class EFGame.EFGFxWidgetExcavationMiniGame
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetExcavationMiniGame : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetExcavationMiniGame");
		return ptr;
	}


	void MiniGameStateChanged(const struct FString& WndName, int currentGameState, int lastGameState);
	void OnChangeGameState(const struct FString& WndName, int currentGameState, int lastGameState);
	void ArcheologyResultComplete();
	void OnResultComplete();
};


// Class EFGame.EFGFxWidgetFishingNetMiniGame
// 0x003C (0x00FC - 0x00C0)
class UEFGFxWidgetFishingNetMiniGame : public UEFUIFrame
{
public:
	int                                                UpValue1;                                                 // 0x00C0(0x0004) (Config)
	int                                                DownValuePerSec1;                                         // 0x00C4(0x0004) (Config)
	int                                                UpValue2;                                                 // 0x00C8(0x0004) (Config)
	int                                                DownValuePerSec2;                                         // 0x00CC(0x0004) (Config)
	int                                                UpValue3;                                                 // 0x00D0(0x0004) (Config)
	int                                                DownValuePerSec3;                                         // 0x00D4(0x0004) (Config)
	int                                                InputPower1;                                              // 0x00D8(0x0004) (Config)
	int                                                InputPower2;                                              // 0x00DC(0x0004) (Config)
	int                                                InputPower3;                                              // 0x00E0(0x0004) (Config)
	int                                                InputStamina1;                                            // 0x00E4(0x0004) (Config)
	int                                                InputStamina2;                                            // 0x00E8(0x0004) (Config)
	int                                                InputStamina3;                                            // 0x00EC(0x0004) (Config)
	int                                                MaxPower1;                                                // 0x00F0(0x0004) (Config)
	int                                                MaxPower2;                                                // 0x00F4(0x0004) (Config)
	int                                                MaxPower3;                                                // 0x00F8(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetFishingNetMiniGame");
		return ptr;
	}


	void MiniGameStateChanged(const struct FString& WndName, int currentGameState, int lastGameState);
	void OnChangeGameState(const struct FString& WndName, int currentGameState, int lastGameState);
	void FishingGameOver(int overType);
	void OnFishingGameOver(int overType);
};


// Class EFGame.EFGFxWidgetHeadStatus
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHeadStatus : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHeadStatus");
		return ptr;
	}


	void MoveHeadStatus(const struct FString& strID, float fX, float fY, float fZ);
};


// Class EFGame.EFGFxWidgetHudCommon
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudCommon : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudCommon");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetHudCommonExp
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudCommonExp : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudCommonExp");
		return ptr;
	}


	void HUD_CommonTabIndex(int TabIndex);
	void CommonTabIndex(int TabIndex);
};


// Class EFGame.EFGFxWidgetHudIdentity
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudIdentity : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudIdentity");
		return ptr;
	}


	void SummonerSkillButtonClick(int iButtonIndex);
};


// Class EFGame.EFGFxWidgetHudLeftTop
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetHudLeftTop : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetHudLeftTop");
		return ptr;
	}


	void TopHUDAlarmListRightBtnClick(int InListIndex);
	void TopHUDAlarmListLeftBtnClick(int InListIndex);
	void TopHUDAlarmListItemClick(int InListIndex);
};


// Class EFGame.EFGFxWidgetInteraction
// 0x0010 (0x00D0 - 0x00C0)
class UEFGFxWidgetInteraction : public UEFUIFrame
{
public:
	class UEFGFxWidgetInteractionWarehouse*            InteractionWarehouse;                                     // 0x00C0(0x0008)
	class UEFGFxWidgetInteractionColosseum*            InteractionColosseum;                                     // 0x00C8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteraction");
		return ptr;
	}


	void RelationShipLevelUp();
	void CloseBackGround();
	void InteractionCloseBackGround();
	void OpenBackGround();
	void InteractionOpenBackGround();
	void SelectQuestListIndex(int ListIndex);
	void SelectQuestList(int ListIndex);
	void SelectFunctionType(const struct FString& Type);
	void SelectFunctionContainer(const struct FString& Type);
	void ShowMaxIntimatePoint(bool B);
	void ShowMaximumIntimatePoint(bool B);
	void ClearInteractionState();
	void ClearFunctionButtonState();
	void InteractionCommonCloseBtnClick();
	void EndInteractionMode();
	void InteractionCommonPlayerTalkListClick(int Index);
	void ClickInteractionTalkSelectList(int Index);
	void InteractionCommonNPCTalkListClick(int Index);
	void ClickInteractionTalkList(int Index);
	void InteractionCommonMenuListClick(int Index);
	void ClickInteractionFunctionMenu(int Index);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class EFGame.EFGFxWidgetInteractionKeyIcon
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetInteractionKeyIcon : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionKeyIcon");
		return ptr;
	}


	void InteractionKeySelected();
	void FinishSwitchInteractionMode();
};


// Class EFGame.EFGFxWidgetInteractionMark
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetInteractionMark : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetInteractionMark");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetLifeToolDurability
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetLifeToolDurability : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetLifeToolDurability");
		return ptr;
	}


	void HideLifeDurability();
	void DecreaseLifeDurability(int CurrentValue, int decreaseValue);
	void ShowLifeDurability(int iconType, int CurrentValue);
};


// Class EFGame.EFGFxWidgetLifeVessel
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetLifeVessel : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetLifeVessel");
		return ptr;
	}


	void LifeVesselCompleteAnimationEnd(int iCompleteIndex);
};


// Class EFGame.EFGFxWidgetMenu
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMenu : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMenu");
		return ptr;
	}


	void QuickSlotMenuClick(int iMenuIndex);
	class UGFxObject* GetMenu(int iSlotIndex);
	void SetEnableButton(int iMenuIndex, bool bEnable);
	void SetToolTip(int iMenuIndex, const struct FString& strToolTip);
	void SetBindKey(int iMenuIndex, const struct FString& strBindKey);
	void SetSelectButton(int iMenuIndex, bool bSelect);
	void SelectButton(int iMenuIndex, bool bSelect);
};


// Class EFGame.EFGFxWidgetMinimap
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMinimap : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMinimap");
		return ptr;
	}


	void RequestShowMinimapChannelList();
};


// Class EFGame.EFGFxWidgetMOD_Cube
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMOD_Cube : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_Cube");
		return ptr;
	}


	void ModCommonMergeCompensation();
	void FinishMergeCompensation();
	void ModCommonEndCubeEffect(int TabIndex, int selectZoneID, int selectDifficulty);
	void EndBuffEffect();
	void PlayModCommonMergeCompensation(bool bSuccess);
	void SetModCommonRandomState(bool bStart, class UGFxObject* Obj);
	void SetModCommonCurrentCompensation(class UGFxObject* Obj);
	void SetModCommonAccumulateCompensation(class UGFxObject* Obj);
	void UpdateModCommonCubeState(int SkillEffectIndex, int StackCount, int ExpireStageIndex);
	void RemoveModCommonCubeState(int SkillEffectIndex);
	void AddModCommonCubeState(class UGFxObject* Obj);
	void SetModCommonStateList(class UGFxObject* Obj);
	void SetModCommonWaveStep(class UGFxObject* Obj);
	void SetModCommonHudType(int ModType);
};


// Class EFGame.EFGFxWidgetMOD_PlatinumArea
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMOD_PlatinumArea : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMOD_PlatinumArea");
		return ptr;
	}


	void ModPlatinumCoopComplete(int InCompleteCoopStep);
};


// Class EFGame.EFGFxWidgetMODEntrance
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetMODEntrance : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMODEntrance");
		return ptr;
	}


	void ModEntranceMapCanvasItemClick(int ZoneID);
};


// Class EFGame.EFGFxWidgetNotice
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetNotice : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetNotice");
		return ptr;
	}


	void setNoticeIcon(bool show, int noticeType, int StackCount);
	void NoticeFrameAlarmBtnClick(int noticeType);
};


// Class EFGame.EFGFxWidgetPcCreateHUD
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetPcCreateHUD : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetPcCreateHUD");
		return ptr;
	}


	void SetDefaultClassData(TArray<class UGFxObject*> pObject);
	void RequestStopMovie();
	void RequestPlayMovieClassSelectPreview(int ClassID);
	void RequestUpdateClassSelectData(int ClassID);
};


// Class EFGame.EFGFxWidgetPcCustomizing
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetPcCustomizing : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetPcCustomizing");
		return ptr;
	}


	void previewImg(class UGFxObject* Obj);
	void setCostume(int Index);
	void setClassID(int ClassID);
	void setPreviewcostumeData(TArray<uint32_t> Array);
	void setPresetData(TArray<uint32_t> Array);
	void CustomizingSettingValueChanged(const struct FString& InFirstCategory, const struct FString& InSecondCategory, int iValue, float fValue);
};


// Class EFGame.EFGFxWidgetPcSelect
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetPcSelect : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetPcSelect");
		return ptr;
	}


	void ShowAnim();
	void ShowNotice(const struct FString& Str);
	void SetCharacterSelect(int Index);
	void WallpaperCancel();
	void WallpaperSelected(int Index);
	void WallpaperConfirm(int Index);
	void CharacterSelectDeleteCancel(int Index);
	void CharacterSelectedIndex(int Index);
	void RequestNewCharacter(int Index);
};


// Class EFGame.EFGFxWidgetRaidClear
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidClear : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidClear");
		return ptr;
	}


	void RaidProcessResultComplete();
};


// Class EFGame.EFGFxWidgetRaidExitNotice
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidExitNotice : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidExitNotice");
		return ptr;
	}


	void RaidProcessNoticeTimeOut();
};


// Class EFGame.EFGFxWidgetRaidFail
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidFail : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidFail");
		return ptr;
	}


	void RaidProcessResultComplete();
};


// Class EFGame.EFGFxWidgetRaidHUD
// 0x0000 (0x00C0 - 0x00C0)
class UEFGFxWidgetRaidHUD : public UEFUIFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetRaidHUD");
		return ptr;
	}


	void RaidProcessTimeOut();
};


// Class EFGame.EFUIWindow
// 0x0008 (0x00C8 - 0x00C0)
class UEFUIWindow : public UEFUIFrame
{
public:
	class UEFUIWindowContent*                          Content;                                                  // 0x00C0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIWindow");
		return ptr;
	}

};


// Class EFGame.EFGFxWidgetAnchorModeCrew
// 0x0000 (0x00C8 - 0x00C8)
class UEFGFxWidgetAnchorModeCrew : public UEFUIWindow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetAnchorModeCrew");
		return ptr;
	}


	void AnchorCrewSkillSlotClick(int slotIndexInPage);
	void AnchorCrewPageIndexChanged(int pageIndex);
};


// Class EFGame.EFGFxWidgetMODWatingInfo
// 0x0000 (0x00C8 - 0x00C8)
class UEFGFxWidgetMODWatingInfo : public UEFUIWindow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxWidgetMODWatingInfo");
		return ptr;
	}


	void MinimapAlarmListRightBtnClick(int InListIndex);
};


// Class EFGame.EFUISlotData
// 0x0000 (0x00BC - 0x00BC)
class UEFUISlotData : public UEFUIComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUISlotData");
		return ptr;
	}


	void SetToolTip(const struct FString& Tooltipdata);
	void SetRecommend(bool bValue);
	void SetAdvBookShow(bool bValue);
	void SetTemporary(bool bValue);
	void SetTrash(bool bValue);
	void SetDisableType(int iType);
	void SetTableID(int NewTableID);
	int GetTableID();
	void SetUniqueData(const struct FString& NewUniqueData);
	struct FString GetUniqueData();
	void SetLocked(int iLockType);
	bool IsLocked();
	void SetItemGrade(int NewGrade);
	int GetItemGrade();
	void SetSoundTheme(const struct FString& NewSoundTheme);
	struct FString GetSoundTheme();
	void SetDisabled(bool bValue);
	bool IsDisabled();
	void SetLabelName(const struct FString& NewLabelName);
	struct FString GetLabelName();
	void SetCooltime(float NewRemainTime, float NewTotalTime);
	float GetTotalCoolTime();
	float GetRemainCoolTime();
	void SetIconHeight(int NewIconHeight);
	int GetIconHeight();
	void SetIconWidth(int NewIconWidth);
	int GetIconWidth();
	void SetIconY(int NewIconY);
	int GetIconY();
	void SetIconX(int NewIconX);
	int GetIconX();
	void SetIconCount(int NewIconIndex);
	int GetIconCount();
	void SetIconPath(const struct FString& NewIconPath);
	struct FString GetIconPath();
	void SetWindowType(int NewWindowType);
	int GetWindowType();
	void SetSlotIndex(int NewSlotIndex);
	int GetSlotIndex();
	void SetBindID(const struct FString& NewSlotID);
	struct FString GetBindID();
	void SetSlotType(int NewSlotType);
	int GetSlotType();
	void SetIconData_New(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconKey, TEnumAsByte<EItemGrade> eItemGrade, int TableID, int IconCount, bool bTrash, bool bTemporary);
	void SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, TEnumAsByte<EItemGrade> eItemGrade, int TableID, int IconCount, bool bTrash, bool bTemporary, const struct FString& Tooltipdata);
	void SetImageData_New(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconKey, int TableID);
	void SetImageData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, int TableID);
};


// Class EFGame.EFInterpGroupSpawn
// 0x0010 (0x00B0 - 0x00A0)
class UEFInterpGroupSpawn : public UInterpGroup
{
public:
	class UInterpGroupInst*                            GroupInst;                                                // 0x00A0(0x0008)
	class AEFSpawnMatineeActor*                        SpawnMatineeActor;                                        // 0x00A8(0x0008) (DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupSpawn");
		return ptr;
	}

};


// Class EFGame.EFInterpGroupSpawnInfo
// 0x0028 (0x00C8 - 0x00A0)
class UEFInterpGroupSpawnInfo : public UInterpGroup
{
public:
	struct FString                                     NpcName;                                                  // 0x00A0(0x0010) (Edit, NeedCtorLink)
	int                                                NpcKey;                                                   // 0x00B0(0x0004) (Edit)
	int                                                NpcCount;                                                 // 0x00B4(0x0004) (Edit)
	TArray<class UEFInterpGroupSpawn*>                 SpawnGroup;                                               // 0x00B8(0x0010) (Edit, EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupSpawnInfo");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnAnimControl
// 0x0008 (0x0104 - 0x00FC)
class UEFInterpTrackSpawnAnimControl : public UInterpTrackAnimControl
{
public:
	struct FPointer                                    m_pLastPlayAnimKey;                                       // 0x00FC(0x0008) (Native, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnAnimControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnEffectControl
// 0x0000 (0x00CC - 0x00CC)
class UEFInterpTrackSpawnEffectControl : public UInterpTrackToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnEffectControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnEvent
// 0x0000 (0x00CC - 0x00CC)
class UEFInterpTrackSpawnEvent : public UInterpTrackEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnEvent");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSpawnMove
// 0x001A (0x0120 - 0x0106)
class UEFInterpTrackSpawnMove : public UInterpTrackMove
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0106(0x0002) MISSED OFFSET
	struct FRotator                                    SpawnRotation;                                            // 0x0108(0x000C) (Transient)
	struct FVector                                     PrevMovePos;                                              // 0x0114(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSpawnMove");
		return ptr;
	}

};


// Class EFGame.EFSpawnEnvirNpc
// 0x0074 (0x02E0 - 0x026C)
class AEFSpawnEnvirNpc : public AActor
{
public:
	class USkeletalMesh*                               EN_SkelMesh;                                              // 0x026C(0x0008) (Edit)
	class UAnimSet*                                    EN_AnimSet;                                               // 0x0274(0x0008) (Edit)
	TEnumAsByte<EN_AI_Type>                            EN_eAiType;                                               // 0x027C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	class UAkEvent*                                    EN_SoundEvent;                                            // 0x0280(0x0008) (Edit)
	uint32_t                                           EN_Air : 1;                                               // 0x0288(0x0004) (Edit)
	uint32_t                                           EN_DieAfterMove : 1;                                      // 0x0288(0x0004) (Edit)
	uint32_t                                           EN_UseInitRot : 1;                                        // 0x0288(0x0004) (Edit)
	float                                              EN_EscapeDistance;                                        // 0x028C(0x0004) (Edit)
	struct FVector2D                                   EN_vIdleSecond;                                           // 0x0290(0x0008) (Edit)
	float                                              EN_fRadiusForDeath;                                       // 0x0298(0x0004) (Edit)
	float                                              EN_fHeightForDeath;                                       // 0x029C(0x0004) (Edit)
	float                                              EN_fInitScale;                                            // 0x02A0(0x0004) (Edit)
	int                                                EN_iMovingChance;                                         // 0x02A4(0x0004) (Edit)
	struct FVector2D                                   EN_vMovingDistance;                                       // 0x02A8(0x0008) (Edit)
	struct FVector2D                                   EN_vMovingHeight;                                         // 0x02B0(0x0008) (Edit)
	struct FVector2D                                   EN_vMovingRot;                                            // 0x02B8(0x0008) (Edit)
	float                                              EN_fMovingVelocity;                                       // 0x02C0(0x0004) (Edit)
	float                                              EN_fEscapeVelocity;                                       // 0x02C4(0x0004) (Edit)
	struct FVector                                     EN_LastLocation;                                          // 0x02C8(0x000C) (Transient)
	struct FRotator                                    EN_LastRotation;                                          // 0x02D4(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnEnvirNpc");
		return ptr;
	}

};


// Class EFGame.EFSpawnMatineeActor
// 0x0014 (0x0280 - 0x026C)
class AEFSpawnMatineeActor : public AActor
{
public:
	class USequence*                                   Sequence;                                                 // 0x026C(0x0008)
	class USeqAct_Interp*                              Matinee;                                                  // 0x0274(0x0008) (Const)
	uint32_t                                           SpawnInAHiddenState : 1;                                  // 0x027C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSpawnMatineeActor");
		return ptr;
	}

};


// Class EFGame.EFGameViewportClient
// 0x00E0 (0x0280 - 0x01A0)
class UEFGameViewportClient : public UGameViewportClient
{
public:
	float                                              last_time_seconds;                                        // 0x01A0(0x0004) (Transient)
	TEnumAsByte<EFCursor>                              CurrentMouseCursor;                                       // 0x01A4(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	TArray<class UEFCursorData*>                       EFMouseCursorData;                                        // 0x01A8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPointer>                            MouseCursorResource;                                      // 0x01B8(0x0010) (Native)
	TArray<class UTextureRenderTarget2D*>              RenderTargetArr;                                          // 0x01C8(0x0010) (NeedCtorLink)
	uint32_t                                           bReady : 1;                                               // 0x01D8(0x0004) (Transient)
	uint32_t                                           bActivateFade : 1;                                        // 0x01D8(0x0004) (Transient)
	uint32_t                                           bInfinityFadeOut : 1;                                     // 0x01D8(0x0004) (Transient)
	struct FColor                                      FadeColor;                                                // 0x01DC(0x0004) (Transient)
	float                                              FadeCurrAlpha;                                            // 0x01E0(0x0004) (Transient)
	float                                              FadeEndTime;                                              // 0x01E4(0x0004) (Transient)
	struct FInterpCurveFloat                           FadeAlphaValue;                                           // 0x01E8(0x0014) (Transient, NeedCtorLink)
	struct FEFRelativeTimeFadeInfo                     RelativeTimeFadeInfo;                                     // 0x01FC(0x002C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET
	struct FMatrix                                     CachedViewProjectionMatrix;                               // 0x0230(0x0040) (Const, Native, Transient)
	struct FVector2D                                   CachedViewportSize;                                       // 0x0270(0x0008) (Const, Native, Transient)
	struct FQWord                                      CachedFrameNumber;                                        // 0x0278(0x0008) (Const, Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameViewportClient");
		return ptr;
	}


	void Tick(float DeltaTime);
	void PostRender(class UCanvas* Canvas);
	void CreateScreenshot(bool bCreateAsync, bool bAddInputInfo, bool bUseBMP, struct FString* ScreenshotFilename);
	void InitRelativeTimeFadeInfo();
	bool CacheViewProjectionMatrix(bool bForceUpdate);
	void PostFadeInOutRender(class UCanvas* Canvas);
	void SetHardwareMouseCursorVisibility(bool bIsVisible);
};


// Class EFGame.EFNxForceFieldTornado
// 0x0000 (0x0304 - 0x0304)
class AEFNxForceFieldTornado : public ANxForceFieldTornado
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNxForceFieldTornado");
		return ptr;
	}


	void UpdateDynamicProperty();
	void OnUpdatePropertyHeightOffset();
	void OnUpdatePropertyForceHeight();
	void OnUpdatePropertyEscapeVelocity();
	void OnUpdatePropertyLiftFalloffHeight();
	void OnUpdatePropertyForceTopRadius();
	void OnUpdatePropertyForceRadius();
	void OnUpdatePropertyLiftStrength();
	void OnUpdatePropertyRotationalStrength();
	void OnUpdatePropertyRadialStrength();
};


// Class EFGame.EFAbilityEffectInfo
// 0x0010 (0x0068 - 0x0058)
class UEFAbilityEffectInfo : public UObject
{
public:
	TArray<struct FEFAbilityParticleEvent>             ParticleDataList;                                         // 0x0058(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAbilityEffectInfo");
		return ptr;
	}

};


// Class EFGame.EFCommonDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFCommonDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFCommonDataDefine");
		return ptr;
	}

};


// Class EFGame.EFData
// 0x000C (0x0064 - 0x0058)
class UEFData : public UObject
{
public:
	int                                                PrimaryKey;                                               // 0x0058(0x0004) (Edit, EditConst)
	int                                                SecondaryKey;                                             // 0x005C(0x0004) (Edit, EditConst)
	uint32_t                                           bUpdatedObjectsFromPaths : 1;                             // 0x0060(0x0004) (Const, Transient)
	uint32_t                                           bPostUpdateObjectsFromPaths : 1;                          // 0x0060(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData");
		return ptr;
	}

};


// Class EFGame.EFData_Action
// 0x0010 (0x0074 - 0x0064)
class UEFData_Action : public UEFData
{
public:
	TArray<struct FEFParamActionInfo>                  ActionInfoArray;                                          // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_Action");
		return ptr;
	}

};


// Class EFGame.EFData_CharacterCustomizing
// 0x00DC (0x0140 - 0x0064)
class UEFData_CharacterCustomizing : public UEFData
{
public:
	int                                                CharacterClass;                                           // 0x0064(0x0004) (Edit, EditConst)
	struct FString                                     strCustomizingName;                                       // 0x0068(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     strCustomizingRuleName;                                   // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)
	class UEFData_CharacterCustomizingRule*            pCustomizingRule;                                         // 0x0088(0x0008) (Transient, AlwaysInit)
	struct FString                                     strFullName;                                              // 0x0090(0x0010) (Edit, NeedCtorLink)
	TArray<struct FCustomPartItemValue>                arrCustomPartItem;                                        // 0x00A0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FstBoneMorphGroupWeight>             arrBoneMorphGroupWeight;                                  // 0x00B0(0x0010) (Edit, Transient, EditConst, AlwaysInit, NeedCtorLink)
	TArray<struct FstBoneMorphWeight>                  arrBoneMorphWeight;                                       // 0x00C0(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)
	TArray<struct FstMeshMorphWeight>                  arrMeshMorphWeight;                                       // 0x00D0(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)
	TArray<struct FstMaterialExpressionParameterGroupFactor> arrMaterialExpressionParamGroupFactor;                    // 0x00E0(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FEFIconInfo                                 GameIcon;                                                 // 0x00F0(0x0024) (Edit, NeedCtorLink)
	uint32_t                                           bUseFacePreset : 1;                                       // 0x0114(0x0004) (Edit, DuplicateTransient)
	int                                                FacePresetID;                                             // 0x0118(0x0004) (Edit, DuplicateTransient)
	struct FEFIconInfo                                 FaceGameIcon;                                             // 0x011C(0x0024) (Edit, DuplicateTransient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_CharacterCustomizing");
		return ptr;
	}

};


// Class EFGame.EFData_CharacterCustomizingRule
// 0x013C (0x01A0 - 0x0064)
class UEFData_CharacterCustomizingRule : public UEFData
{
public:
	int                                                CharacterClass;                                           // 0x0064(0x0004) (Edit)
	struct FString                                     strCustomizingRuleName;                                   // 0x0068(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)
	struct FString                                     strFullName;                                              // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FCustomizingMotionActionItem>        MotionActionArr;                                          // 0x0088(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	class UAnimSet*                                    FaceActionAnimSet;                                        // 0x0098(0x0008) (Edit)
	TArray<struct FCustomizingFaceActionItem>          FaceActionArr;                                            // 0x00A0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FEFIconInfo                                 LeftEyeIcon;                                              // 0x00B0(0x0024) (Edit, NeedCtorLink)
	struct FEFIconInfo                                 RightEyeIcon;                                             // 0x00D4(0x0024) (Edit, NeedCtorLink)
	TArray<struct FCustomPartItemLook>                 arrCustomPartItemLook;                                    // 0x00F8(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FCostumeDataSet>                     arrCostumeDataSet;                                        // 0x0108(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     strCostumePreview;                                        // 0x0118(0x0010) (Edit, Transient, AlwaysInit, NeedCtorLink)
	class UAnimSet*                                    BoneMorphAnimset;                                         // 0x0128(0x0008) (Edit, Transient)
	TArray<struct FstBoneMorphGroup>                   arrBoneMorphTargetGroup;                                  // 0x0130(0x0010) (Edit, NeedCtorLink)
	TArray<struct FstBoneMorph>                        arrBoneMorphTarget;                                       // 0x0140(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FObjectPath                                 PATH_BoneMorphAnimSet;                                    // 0x0150(0x0020) (NeedCtorLink)
	TArray<struct FBoneMorphAnimData>                  arrBoneMorphAnimData;                                     // 0x0170(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FstMeshMorphRule>                    arrMeshMorphRuleArray;                                    // 0x0180(0x0010) (Edit, NeedCtorLink)
	TArray<struct FstMaterialExpressionParameterGroup> arrMaterialExpressionParamGroup;                          // 0x0190(0x0010) (Edit, EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_CharacterCustomizingRule");
		return ptr;
	}

};


// Class EFGame.EFData_CustomizeBoneScaleItem
// 0x0020 (0x0084 - 0x0064)
class UEFData_CustomizeBoneScaleItem : public UEFData
{
public:
	struct FString                                     CustomizeBoneScalePresetName;                             // 0x0064(0x0010) (Edit, NeedCtorLink)
	TArray<struct FEFCustomizeSkelControlValue>        SkelControlValueArr;                                      // 0x0074(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_CustomizeBoneScaleItem");
		return ptr;
	}

};


// Class EFGame.EFData_MeshLookInfo
// 0x0030 (0x0094 - 0x0064)
class UEFData_MeshLookInfo : public UEFData
{
public:
	class UEFData_PartsMesh*                           PartsMesh;                                                // 0x0064(0x0008) (Edit, EditInline)
	class UObject*                                     DefaultEFEffectSpawn;                                     // 0x006C(0x0008) (Edit)
	struct FObjectPath                                 PATH_DefaultEFEffectSpawn;                                // 0x0074(0x0020) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_MeshLookInfo");
		return ptr;
	}

};


// Class EFGame.EFData_NpcPartInfo
// 0x0020 (0x0084 - 0x0064)
class UEFData_NpcPartInfo : public UEFData
{
public:
	TArray<struct FActionNpcPartExtentInfo>            ActionNpcPartExtentInfoArray;                             // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FActionNpcPartTransformInfoSet>      ActionNpcPartTransformInfoSetArray;                       // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_NpcPartInfo");
		return ptr;
	}

};


// Class EFGame.EFData_PaletteItemBase
// 0x0010 (0x0074 - 0x0064)
class UEFData_PaletteItemBase : public UEFData
{
public:
	struct FString                                     PaletteName;                                              // 0x0064(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_PaletteItemBase");
		return ptr;
	}

};


// Class EFGame.EFData_ColorPaletteItem
// 0x0030 (0x00A4 - 0x0074)
class UEFData_ColorPaletteItem : public UEFData_PaletteItemBase
{
public:
	TArray<struct FColorSwatchItem>                    SwatchList;                                               // 0x0074(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	float                                              SaturationMin;                                            // 0x0084(0x0004) (Edit)
	float                                              SaturationMax;                                            // 0x0088(0x0004) (Edit)
	float                                              LightnessMin;                                             // 0x008C(0x0004) (Edit)
	float                                              LightnessMax;                                             // 0x0090(0x0004) (Edit)
	TArray<struct FColor>                              ColorPalettePixelData;                                    // 0x0094(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_ColorPaletteItem");
		return ptr;
	}

};


// Class EFGame.EFData_TexturePaletteItem
// 0x0010 (0x0084 - 0x0074)
class UEFData_TexturePaletteItem : public UEFData_PaletteItemBase
{
public:
	TArray<struct FTextureSwatchItem>                  SwatchList;                                               // 0x0074(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_TexturePaletteItem");
		return ptr;
	}

};


// Class EFGame.EFData_PartsMesh
// 0x0124 (0x0188 - 0x0064)
class UEFData_PartsMesh : public UEFData
{
public:
	TEnumAsByte<EFEQUIP_PART>                          eMeshPartsType;                                           // 0x0064(0x0001) (Edit)
	unsigned char                                      RequireStance;                                            // 0x0065(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	class USkeletalMesh*                               PartsMesh;                                                // 0x0068(0x0008) (Edit)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (Edit, EditFixedSize, AlwaysInit, NeedCtorLink)
	TArray<struct FEFMaterialVariation>                MaterialsVariation;                                       // 0x0080(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	class UAnimSet*                                    AnimSetTemplate;                                          // 0x0090(0x0008) (Edit)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0098(0x0008) (Edit)
	struct FString                                     SocketGroupName;                                          // 0x00A0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<class UEFActionSkelControl*>                SkelControlList;                                          // 0x00B0(0x0010) (ExportObject, NeedCtorLink, EditInline, Deprecated)
	class UEFData_SkelControlGroup*                    SkelControllGroup;                                        // 0x00C0(0x0008) (Deprecated)
	class UEFData_SkelControlGroup*                    SkelControlGroup;                                         // 0x00C8(0x0008) (Edit)
	class UMorphTargetSet*                             MorphSet;                                                 // 0x00D0(0x0008) (Edit)
	class UAnimNotify_Trails*                          Trail_Default;                                            // 0x00D8(0x0008) (ExportObject, NeedCtorLink, EditInline, Deprecated)
	class UEFData_AnimNotify_Trails*                   Trails_Default;                                           // 0x00E0(0x0008) (Edit)
	struct FObjectPath                                 PATH_PartsMesh;                                           // 0x00E8(0x0020) (NeedCtorLink)
	TArray<struct FObjectPath>                         PATH_Material;                                            // 0x0108(0x0010) (NeedCtorLink)
	struct FObjectPath                                 PATH_AnimSetTemplate;                                     // 0x0118(0x0020) (NeedCtorLink)
	struct FObjectPath                                 PATH_PhysicsAsset;                                        // 0x0138(0x0020) (NeedCtorLink)
	struct FObjectPath                                 PATH_MorphTargetSet;                                      // 0x0158(0x0020) (NeedCtorLink)
	uint32_t                                           bUseOnePassLightingOnTranslucency : 1;                    // 0x0178(0x0004) (Edit)
	float                                              fPartsScale;                                              // 0x017C(0x0004) (Edit)
	float                                              TranslucencySortKeyFactor;                                // 0x0180(0x0004) (Edit)
	int                                                TranslucencySortPriority;                                 // 0x0184(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_PartsMesh");
		return ptr;
	}

};


// Class EFGame.EFData_AnimNotify_Trails
// 0x0008 (0x0060 - 0x0058)
class UEFData_AnimNotify_Trails : public UObject
{
public:
	class UAnimNotify_Trails*                          Trail_Default;                                            // 0x0058(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_AnimNotify_Trails");
		return ptr;
	}

};


// Class EFGame.EFData_MaskInfo
// 0x0010 (0x0068 - 0x0058)
class UEFData_MaskInfo : public UObject
{
public:
	TArray<struct FEFMaskData>                         m_MaskDataArr;                                            // 0x0058(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_MaskInfo");
		return ptr;
	}


	unsigned char GetProperLevel(TEnumAsByte<EFEQUIP_PART> ePartsOwn, TEnumAsByte<EFEQUIP_PART> ePartsRelated, TEnumAsByte<EFMASK_LEVEL> eCurLevel);
};


// Class EFGame.EFData_SkelControlGroup
// 0x0010 (0x0068 - 0x0058)
class UEFData_SkelControlGroup : public UObject
{
public:
	TArray<class UEFActionSkelControl*>                SkelControlList;                                          // 0x0058(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFData_SkelControlGroup");
		return ptr;
	}

};


// Class EFGame.EFExcelShell
// 0x0058 (0x00B0 - 0x0058)
class UEFExcelShell : public UObject
{
public:
	TArray<struct FEFLookPreset>                       LookPresets;                                              // 0x0058(0x0010) (Transient, NeedCtorLink)
	int                                                CurRow;                                                   // 0x0068(0x0004) (Transient)
	int                                                StartCol;                                                 // 0x006C(0x0004) (Transient)
	TArray<struct FString>                             ColumnTitles;                                             // 0x0070(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             ColumnDataTypes;                                          // 0x0080(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             ColumnDataMinMax;                                         // 0x0090(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             DataArr;                                                  // 0x00A0(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFExcelShell");
		return ptr;
	}


	int GetColumNum(const struct FString& strName);
	void NewLine();
	void ResetEdit();
	void SetLookPresetPosition(int ColNo, int RowNo, TEnumAsByte<ECELL_LOOK> eLook);
	void SetLookPresetRange(const struct FString& Range, TEnumAsByte<ECELL_LOOK> eLook);
	bool ReadStringRange(const struct FString& Range, bool IsRaw, TArray<struct FString>* outStringArr);
	void ReadString(int ColNo, struct FString* Value);
	void WriteString(int ColNo, const struct FString& Value);
	void WriteName(int ColNo, const struct FName& Value);
	void WriteFloat(int ColNo, float Value);
	void WriteInt(int ColNo, int Value);
	void WriteUINT(int ColNo, int Value);
	bool SetSheetName(int nSheeteIndex, const struct FString& szSheetName);
	bool SetFont(const struct FString& Range, const struct FString& FontName, int FontSize, int FontColor, bool bBold, bool bItalic);
	bool SetBorder(const struct FString& Range);
	bool SetBackgroundColor(const struct FString& Range, int BGColor);
	bool GetWorkSheetName(int nSheetIndex, struct FString* strSheetName);
	bool SelectWorkSheet(int nSheetIndex);
	bool SelectWorkSheetByName(const struct FString& strSheetName);
	bool SaveAs(const struct FString& FilePath);
	bool OpenExcelFile(const struct FString& FilePath);
	bool NewSheet();
	bool NewExcelFile();
	bool AutoFitColomn(int ColNo);
	bool AutoFitColumn(const struct FString& ColName);
};


// Class EFGame.EFKismetData_Pack
// 0x0028 (0x0080 - 0x0058)
class UEFKismetData_Pack : public UObject
{
public:
	struct FString                                     PackName;                                                 // 0x0058(0x0010) (Edit, NeedCtorLink)
	class UEFKismetData_Unit*                          KismetUnit;                                               // 0x0068(0x0008) (Edit)
	TArray<class UEFKismetData_Unit*>                  KismetUnits;                                              // 0x0070(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFKismetData_Pack");
		return ptr;
	}

};


// Class EFGame.EFKismetData_Unit
// 0x0030 (0x01E4 - 0x01B4)
class UEFKismetData_Unit : public USequence
{
public:
	int                                                UniqueId;                                                 // 0x01B4(0x0004) (EditConst)
	int                                                UnitIndex;                                                // 0x01B8(0x0004) (EditConst)
	struct FString                                     UnitName;                                                 // 0x01BC(0x0010) (NeedCtorLink)
	struct FString                                     UnitDesc;                                                 // 0x01CC(0x0010) (NeedCtorLink)
	int                                                Editor_Version;                                           // 0x01DC(0x0004) (EditConst)
	uint32_t                                           Editor_IsUpdate : 1;                                      // 0x01E0(0x0004) (Transient, EditConst)
	uint32_t                                           Editor_IsExist : 1;                                       // 0x01E0(0x0004) (Transient, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFKismetData_Unit");
		return ptr;
	}

};


// Class EFGame.EFKismetMapData
// 0x0024 (0x007C - 0x0058)
class UEFKismetMapData : public UObject
{
public:
	struct FString                                     MapName;                                                  // 0x0058(0x0010) (Edit, NeedCtorLink, EditInline)
	int                                                MapIndex;                                                 // 0x0068(0x0004) (Edit, EditInline)
	TArray<class UEFKismetData_Unit*>                  KismetUnitArray;                                          // 0x006C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFKismetMapData");
		return ptr;
	}

};


// Class EFGame.EFLocalTrigger
// 0x0004 (0x0280 - 0x027C)
class AEFLocalTrigger : public ATrigger
{
public:
	uint32_t                                           bCinematicControl : 1;                                    // 0x027C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLocalTrigger");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
	bool IsCinematicControl();
	bool IsLocalMode();
};


// Class EFGame.EFLocalTriggerVolume
// 0x0004 (0x02AC - 0x02A8)
class AEFLocalTriggerVolume : public ATriggerVolume
{
public:
	uint32_t                                           bCinematicControl : 1;                                    // 0x02A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLocalTriggerVolume");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
	bool IsCinematicControl();
	bool IsLocalMode();
};


// Class EFGame.EFParticleBuffInfoBase
// 0x0001 (0x0059 - 0x0058)
class UEFParticleBuffInfoBase : public UObject
{
public:
	TEnumAsByte<EF_PARTICLE_BUFF_INFO_TYPE>            BuffInfoType;                                             // 0x0058(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleBuffInfoBase");
		return ptr;
	}

};


// Class EFGame.EFParticleBuffInfo
// 0x0027 (0x0080 - 0x0059)
class UEFParticleBuffInfo : public UEFParticleBuffInfoBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              DelayTime;                                                // 0x005C(0x0004) (Edit)
	TArray<class UEFParticleData*>                     PSData;                                                   // 0x0060(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<int>                                        BuffParticleType;                                         // 0x0070(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleBuffInfo");
		return ptr;
	}

};


// Class EFGame.EFParticleStackBuffInfo
// 0x0008 (0x0088 - 0x0080)
class UEFParticleStackBuffInfo : public UEFParticleBuffInfo
{
public:
	TEnumAsByte<EeParticleStackBuffInfoAddType>        AddType;                                                  // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                ApplyStackCount;                                          // 0x0084(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleStackBuffInfo");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainer
// 0x0038 (0x0090 - 0x0058)
class UEFParticleSoundContainer : public UObject
{
public:
	TArray<class UEFParticleSoundData*>                TempEditorChildData;                                      // 0x0058(0x0010) (Transient, NeedCtorLink)
	TArray<class UEFParticleSoundDataComment*>         CommentList;                                              // 0x0068(0x0010) (ExportObject, NeedCtorLink, EditInline)
	struct FString                                     ContainerName;                                            // 0x0078(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TEnumAsByte<EF_PARTICLE_SOUND_TYPE>                ParticleSoundType;                                        // 0x0088(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	uint32_t                                           EditorDirty : 1;                                          // 0x008C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainer");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerArmorHitSet
// 0x0010 (0x00A0 - 0x0090)
class UEFParticleSoundContainerArmorHitSet : public UEFParticleSoundContainer
{
public:
	class UEFParticleSoundDataHittedArmorSet*          Default;                                                  // 0x0090(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Armor;                                        // 0x0098(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerArmorHitSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerBeHittedSet
// 0x0060 (0x00F0 - 0x0090)
class UEFParticleSoundContainerBeHittedSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerBeHittedSet.PawnMaterialBeHittedMap
	TArray<class UEFParticleSoundDataBeHittedPawnMaterial*> PawnMaterialBeHittedArr;                                  // 0x00D8(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_BeHitted;                                     // 0x00E8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerBeHittedSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerBuffSet
// 0x0060 (0x00F0 - 0x0090)
class UEFParticleSoundContainerBuffSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerBuffSet.BuffFXMap
	TArray<class UEFParticleSoundDataBuffFX*>          BuffFXArr;                                                // 0x00D8(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Buff;                                         // 0x00E8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerBuffSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerCommon
// 0x0070 (0x0100 - 0x0090)
class UEFParticleSoundContainerCommon : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerCommon.CommonFXMap
	TArray<class UEFParticleSoundDataCommon*>          CommonFXArr;                                              // 0x00D8(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UEFDropItemEffectInfo*                       DropItemEffect;                                           // 0x00E8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFAbilityEffectInfo*                        AbilityEffect;                                            // 0x00F0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Common;                                       // 0x00F8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerCommon");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerDown
// 0x0020 (0x00B0 - 0x0090)
class UEFParticleSoundContainerDown : public UEFParticleSoundContainer
{
public:
	class UEFParticleSoundDataFloorMaterial*           Small;                                                    // 0x0090(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataFloorMaterial*           Medium;                                                   // 0x0098(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Small;                                        // 0x00A0(0x0008) (Edit)
	class UTexture2D*                                  EditorImage_Medium;                                       // 0x00A8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerDown");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerFootStep
// 0x0030 (0x00C0 - 0x0090)
class UEFParticleSoundContainerFootStep : public UEFParticleSoundContainer
{
public:
	class UEFParticleSoundDataFloorMaterial*           Left;                                                     // 0x0090(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataFloorMaterial*           Right;                                                    // 0x0098(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataArmorMaterial*           ArmorEffect;                                              // 0x00A0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Left;                                         // 0x00A8(0x0008) (Edit)
	class UTexture2D*                                  EditorImage_Right;                                        // 0x00B0(0x0008) (Edit)
	class UTexture2D*                                  EditorImage_ArmorEffect;                                  // 0x00B8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerFootStep");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerGroundEffect
// 0x0070 (0x0100 - 0x0090)
class UEFParticleSoundContainerGroundEffect : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerGroundEffect.GroundEffectMap
	TArray<class UEFParticleSoundDataGroundEffect*>    GroundEffectArr;                                          // 0x00D8(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataGroundEffect*            DefaultRange;                                             // 0x00E8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataGroundEffect*            DefaultTarget;                                            // 0x00F0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_GroundEffect;                                 // 0x00F8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerGroundEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerKnockback
// 0x0010 (0x00A0 - 0x0090)
class UEFParticleSoundContainerKnockback : public UEFParticleSoundContainer
{
public:
	class UEFParticleSoundDataFloorMaterial*           KnockbackEffect;                                          // 0x0090(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Knockback;                                    // 0x0098(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerKnockback");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerSkillHitSet
// 0x0060 (0x00F0 - 0x0090)
class UEFParticleSoundContainerSkillHitSet : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerSkillHitSet.SkillMap
	TArray<class UEFParticleSoundDataHittedSkillSet*>  SkillSetEffectArr;                                        // 0x00D8(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Skill;                                        // 0x00E8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerSkillHitSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerWeaponAttributeEffect
// 0x00C8 (0x0158 - 0x0090)
class UEFParticleSoundContainerWeaponAttributeEffect : public UEFParticleSoundContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0090(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFParticleSoundContainerWeaponAttributeEffect.WeaponAttributeEffectMap
	TArray<class UEFParticleSoundDataWeaponAttributeEffect*> WeaponAttributeEffectArr;                                 // 0x00D8(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_WeaponAttributeEffect;                        // 0x00E8(0x0008) (Edit)
	TArray<class UEFParticleSoundDataWeaponAttributeEffect*> DefaultAttributeEffectArr;                                // 0x00F0(0x0010) (Const, ExportObject, Native, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Sword;                                                    // 0x0100(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Bow;                                                      // 0x0108(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Gun;                                                      // 0x0110(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Spear;                                                    // 0x0118(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Gauntlet;                                                 // 0x0120(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Instrument;                                               // 0x0128(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Hammer;                                                   // 0x0130(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Dagger;                                                   // 0x0138(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Wand;                                                     // 0x0140(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Carddeck;                                                 // 0x0148(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttributeEffect*   Symbol;                                                   // 0x0150(0x0008) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerWeaponAttributeEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerWeaponFX
// 0x0020 (0x00B0 - 0x0090)
class UEFParticleSoundContainerWeaponFX : public UEFParticleSoundContainer
{
public:
	class UParticleSystem*                             Defaul_Trail;                                             // 0x0090(0x0008) (Edit)
	TArray<class UEFParticleSoundDataWeaponFXDir*>     WeaponDir;                                                // 0x0098(0x0010) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Weapon;                                       // 0x00A8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerWeaponFX");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerWeaponHitSet
// 0x0078 (0x0108 - 0x0090)
class UEFParticleSoundContainerWeaponHitSet : public UEFParticleSoundContainer
{
public:
	TArray<class UEFParticleSoundDataHittedWeaponSet*> WeaponSetEffectArr;                                       // 0x0090(0x0010) (Const, ExportObject, Native, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Default;                                                  // 0x00A0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Sword;                                                    // 0x00A8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Bow;                                                      // 0x00B0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Gun;                                                      // 0x00B8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Spear;                                                    // 0x00C0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Gauntlet;                                                 // 0x00C8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Instrument;                                               // 0x00D0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Hammer;                                                   // 0x00D8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Dagger;                                                   // 0x00E0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Wand;                                                     // 0x00E8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Carddeck;                                                 // 0x00F0(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataHittedWeaponSet*         Symbol;                                                   // 0x00F8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UTexture2D*                                  EditorImage_Weapon;                                       // 0x0100(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerWeaponHitSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerSetBase
// 0x0014 (0x006C - 0x0058)
class UEFParticleSoundContainerSetBase : public UObject
{
public:
	struct FString                                     Desc;                                                     // 0x0058(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           EditorDirty : 1;                                          // 0x0068(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerSetBase");
		return ptr;
	}

};


// Class EFGame.EFGameObjectParticleSoundContainerSet
// 0x0040 (0x00AC - 0x006C)
class UEFGameObjectParticleSoundContainerSet : public UEFParticleSoundContainerSetBase
{
public:
	class UEFParticleSoundContainerFootStep*           Footstep;                                                 // 0x006C(0x0008) (Edit)
	class UEFParticleSoundContainerKnockback*          Knockback;                                                // 0x0074(0x0008) (Edit, Deprecated)
	class UEFParticleSoundContainerDown*               Down;                                                     // 0x007C(0x0008) (Edit)
	class UEFParticleSoundContainerSkillHitSet*        SkillHitSet;                                              // 0x0084(0x0008) (Edit)
	class UEFParticleSoundContainerWeaponHitSet*       WeaponHitSet;                                             // 0x008C(0x0008) (Edit)
	class UEFParticleSoundContainerArmorHitSet*        ArmorHitSet;                                              // 0x0094(0x0008) (Edit)
	class UEFParticleSoundContainerWeaponFX*           WeaponFX;                                                 // 0x009C(0x0008) (Edit)
	class UEFParticleSoundContainerBeHittedSet*        BeHittedSet;                                              // 0x00A4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGameObjectParticleSoundContainerSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundContainerSet
// 0x00F0 (0x015C - 0x006C)
class UEFParticleSoundContainerSet : public UEFParticleSoundContainerSetBase
{
public:
	struct FString                                     ContainerSetName;                                         // 0x006C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             FootstepArrays;                                           // 0x007C(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             DownArrays;                                               // 0x008C(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             SkillHitSetArrays;                                        // 0x009C(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             WeaponHitSetArrays;                                       // 0x00AC(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             ArmorHitSetArrays;                                        // 0x00BC(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             WeaponFXArrays;                                           // 0x00CC(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             BeHittedSetArrays;                                        // 0x00DC(0x0010) (Transient, NeedCtorLink)
	struct FString                                     Footstep;                                                 // 0x00EC(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Down;                                                     // 0x00FC(0x0010) (Edit, NeedCtorLink)
	struct FString                                     SkillHitSet;                                              // 0x010C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     WeaponHitSet;                                             // 0x011C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     ArmorHitSet;                                              // 0x012C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     WeaponFX;                                                 // 0x013C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     BeHittedSet;                                              // 0x014C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundContainerSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundData
// 0x0048 (0x00A0 - 0x0058)
class UEFParticleSoundData : public UObject
{
public:
	int                                                X;                                                        // 0x0058(0x0004) (Edit)
	int                                                Y;                                                        // 0x005C(0x0004) (Edit)
	class UTexture2D*                                  Image;                                                    // 0x0060(0x0008) (Edit)
	struct FString                                     Desc;                                                     // 0x0068(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Keyword;                                                  // 0x0078(0x0010) (Edit, EditConst, NeedCtorLink)
	uint32_t                                           EditorDirty : 1;                                          // 0x0088(0x0004) (Transient)
	int                                                DataIndex;                                                // 0x008C(0x0004) (AlwaysInit)
	struct FString                                     ParticleSoundDataName;                                    // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundData");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataArmorMaterial
// 0x0070 (0x0110 - 0x00A0)
class UEFParticleSoundDataArmorMaterial : public UEFParticleSoundData
{
public:
	TArray<class UEFParticleData*>                     ArmorMaterialEffectDataArr;                               // 0x00A0(0x0010) (Const, ExportObject, Native, EditInline)
	class UEFParticleData*                             Data_Water;                                               // 0x00B0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Air;                                                 // 0x00B8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Stone;                                               // 0x00C0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Flesh1;                                              // 0x00C8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Flesh2;                                              // 0x00D0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Metal;                                               // 0x00D8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Wood;                                                // 0x00E0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Leather;                                             // 0x00E8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Ice;                                                 // 0x00F0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Lava;                                                // 0x00F8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Mucus;                                               // 0x0100(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Exoskeletal;                                         // 0x0108(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataArmorMaterial");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBeHittedPawnMaterial
// 0x0088 (0x0128 - 0x00A0)
class UEFParticleSoundDataBeHittedPawnMaterial : public UEFParticleSoundData
{
public:
	struct FString                                     LookInfoKey;                                              // 0x00A0(0x0010) (Edit, NeedCtorLink)
	struct FEFPawnMaterialBeHittedCurveInfo            PawnMaterialHittedInfo;                                   // 0x00B0(0x0060) (Edit, NeedCtorLink)
	uint32_t                                           bSkipAttackerEffect : 1;                                  // 0x0110(0x0004) (Edit)
	uint32_t                                           bSkipDirectionEffect : 1;                                 // 0x0110(0x0004) (Edit)
	uint32_t                                           bSkipBloodEffect : 1;                                     // 0x0110(0x0004) (Edit)
	uint32_t                                           bUseHitDirection : 1;                                     // 0x0110(0x0004) (Edit)
	TEnumAsByte<EParticleSoundDataBeHittedPawnMaterial_HitParticleType> HitEffectType;                                            // 0x0114(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	TArray<class UEFParticleData*>                     HitEffectData;                                            // 0x0118(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBeHittedPawnMaterial");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBuffBeam
// 0x008C (0x012C - 0x00A0)
class UEFParticleSoundDataBuffBeam : public UEFParticleSoundData
{
public:
	struct FString                                     BuffKey;                                                  // 0x00A0(0x0010) (Edit, NeedCtorLink)
	float                                              DelayTime;                                                // 0x00B0(0x0004) (Edit)
	class UParticleSystem*                             BeamParticleSystem;                                       // 0x00B4(0x0008) (Edit)
	TArray<struct FParticleSysParam>                   BeamParticleSystemParamList;                              // 0x00BC(0x0010) (Edit, Component, NeedCtorLink)
	class UParticleSystem*                             BeamSourceParticleSystem;                                 // 0x00CC(0x0008) (Edit)
	TArray<struct FParticleSysParam>                   BeamSourceParticleSystemParamList;                        // 0x00D4(0x0010) (Edit, Component, NeedCtorLink)
	class UParticleSystem*                             BeamCasterParticleSystem;                                 // 0x00E4(0x0008) (Edit)
	TArray<struct FParticleSysParam>                   BeamCasterParticleSystemParamList;                        // 0x00EC(0x0010) (Edit, Component, NeedCtorLink)
	struct FName                                       BeamCasterSocketName;                                     // 0x00FC(0x0008) (Edit)
	struct FVector                                     BeamCasterOffset;                                         // 0x0104(0x000C) (Edit)
	struct FVector                                     BeamScale;                                                // 0x0110(0x000C) (Edit)
	TArray<struct FEFBeamUpdateInfo>                   BeamEmitterUpdateInfos;                                   // 0x011C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBuffBeam");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBuffFX
// 0x0128 (0x01C8 - 0x00A0)
class UEFParticleSoundDataBuffFX : public UEFParticleSoundData
{
public:
	struct FString                                     BuffKey;                                                  // 0x00A0(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           bUseBloodColor : 1;                                       // 0x00B0(0x0004) (Edit)
	uint32_t                                           bDefaultParticleRemove : 1;                               // 0x00B0(0x0004) (Edit)
	uint32_t                                           bBuffEndShake : 1;                                        // 0x00B0(0x0004) (Edit)
	uint32_t                                           bUseHitDirection : 1;                                     // 0x00B0(0x0004) (Edit)
	uint32_t                                           bSkipAttackerEffect : 1;                                  // 0x00B0(0x0004) (Edit)
	uint32_t                                           bSkipDirectionEffect : 1;                                 // 0x00B0(0x0004) (Edit)
	uint32_t                                           bSkipBloodEffect : 1;                                     // 0x00B0(0x0004) (Edit)
	TEnumAsByte<EParticleSoundDataBuffFX_ScaleOption>  BuffScaleOption;                                          // 0x00B4(0x0001) (Edit)
	TEnumAsByte<EParticleSoundDataBuffFXSet_HitParticleType> HitEffectType;                                            // 0x00B5(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	TArray<class UEFParticleBuffInfoBase*>             StartEffect;                                              // 0x00B8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSingleAKEvent*          StartSound;                                               // 0x00C8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleBuffInfoBase*>             LoopEffect;                                               // 0x00D0(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSingleAKEvent*          LoopSound;                                                // 0x00E0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleBuffInfoBase*>             EndEffect;                                                // 0x00E8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              EndSoundFadeOutTime;                                      // 0x00F8(0x0004) (Edit)
	TArray<class UEFParticleBuffInfoBase*>             ForcedEndEffect;                                          // 0x00FC(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSingleAKEvent*          ForcedEndSound;                                           // 0x010C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleBuffInfoBase*>             SkillEffectUnitParticle;                                  // 0x0114(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSingleAKEvent*          SkillEffectUnitSound;                                     // 0x0124(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              FadeIn;                                                   // 0x012C(0x0004) (Edit)
	float                                              FadeOut;                                                  // 0x0130(0x0004) (Edit)
	class UPostProcessChain*                           PPChain;                                                  // 0x0134(0x0008) (Edit)
	TArray<struct FScalarTimeVarying>                  ScalarParameterList;                                      // 0x013C(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	class UEFPostProcessMaterialEffectStatus*          BuffPostProcessMaterialData;                              // 0x014C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFCameraViewShake*                          NewViewShake;                                             // 0x0154(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              BuffHitOffsetScale;                                       // 0x015C(0x0004) (Edit)
	TArray<class UEFParticleData*>                     BuffHitEffectData;                                        // 0x0160(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSingleAKEvent*          BuffHitSoundData;                                         // 0x0170(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFPostProcessMaterialEffectHit*             BuffBeHittedProcessMaterialData;                          // 0x0178(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFCameraViewShake*                          NewBuffBeHittedCameraShakeParams;                         // 0x0180(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleSoundDataBuffWeaponFXDir*> BuffHitChangeWeaponDirArr;                                // 0x0188(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FString                                     CommonHittedSkillKey;                                     // 0x0198(0x0010) (Edit, NeedCtorLink)
	class UEFPostProcessMaterialEffectHit*             BuffWeaponHittedProcessMaterialData;                      // 0x01A8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFCameraViewShake*                          NewBuffWeaponHittedCameraShakeParams;                     // 0x01B0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleSoundDataWeaponFXDir*>     CacheHitChangeWeaponDir;                                  // 0x01B8(0x0010) (Const, ExportObject, Native, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBuffFX");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataComment
// 0x0038 (0x00D8 - 0x00A0)
class UEFParticleSoundDataComment : public UEFParticleSoundData
{
public:
	struct FString                                     Comment;                                                  // 0x00A0(0x0010) (Edit, NeedCtorLink)
	int                                                SizeX;                                                    // 0x00B0(0x0004) (Edit)
	int                                                SizeY;                                                    // 0x00B4(0x0004) (Edit)
	int                                                BorderWidth;                                              // 0x00B8(0x0004) (Edit)
	uint32_t                                           bDrawBox : 1;                                             // 0x00BC(0x0004) (Edit)
	uint32_t                                           bFilled : 1;                                              // 0x00BC(0x0004) (Edit)
	uint32_t                                           bTileFill : 1;                                            // 0x00BC(0x0004) (Edit)
	struct FColor                                      BorderColor;                                              // 0x00C0(0x0004) (Edit)
	struct FColor                                      FillColor;                                                // 0x00C4(0x0004) (Edit)
	TArray<class UEFParticleSoundData*>                GroupDataArr;                                             // 0x00C8(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataComment");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataCommon
// 0x0020 (0x00C0 - 0x00A0)
class UEFParticleSoundDataCommon : public UEFParticleSoundData
{
public:
	struct FString                                     Key;                                                      // 0x00A0(0x0010) (Edit, NeedCtorLink)
	TArray<class UEFParticleDataBase*>                 ParticleDataSet;                                          // 0x00B0(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataCommon");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataFloorMaterial
// 0x0080 (0x0120 - 0x00A0)
class UEFParticleSoundDataFloorMaterial : public UEFParticleSoundData
{
public:
	TArray<class UEFParticleData*>                     FloorTypeEffectDataArr;                                   // 0x00A0(0x0010) (Const, ExportObject, Native, EditInline)
	class UEFParticleData*                             Data_Default;                                             // 0x00B0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Dirt;                                                // 0x00B8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Grass;                                               // 0x00C0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_WaterDeep;                                           // 0x00C8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_WaterSwamp;                                          // 0x00D0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_WoodFloor;                                           // 0x00D8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_WoodTree;                                            // 0x00E0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_MetalHeavy;                                          // 0x00E8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_MetalLight;                                          // 0x00F0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Stone;                                               // 0x00F8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Mud;                                                 // 0x0100(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Carpet;                                              // 0x0108(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Snow;                                                // 0x0110(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Magic01;                                             // 0x0118(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataFloorMaterial");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataFloorMaterialSound
// 0x0080 (0x0120 - 0x00A0)
class UEFParticleSoundDataFloorMaterialSound : public UEFParticleSoundData
{
public:
	TArray<class UEFParticleDataModuleSoundBase*>      FloorTypeEffectDataArr;                                   // 0x00A0(0x0010) (Const, ExportObject, Native, Transient, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Default;                                             // 0x00B0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Dirt;                                                // 0x00B8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Grass;                                               // 0x00C0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_WaterDeep;                                           // 0x00C8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_WaterSwamp;                                          // 0x00D0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_WoodFloor;                                           // 0x00D8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_WoodTree;                                            // 0x00E0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_MetalHeavy;                                          // 0x00E8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_MetalLight;                                          // 0x00F0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Stone;                                               // 0x00F8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Mud;                                                 // 0x0100(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Carpet;                                              // 0x0108(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Snow;                                                // 0x0110(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleDataModuleSoundBase*              Data_Magic01;                                             // 0x0118(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataFloorMaterialSound");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataGroundEffect
// 0x0030 (0x00D0 - 0x00A0)
class UEFParticleSoundDataGroundEffect : public UEFParticleSoundData
{
public:
	struct FString                                     Key;                                                      // 0x00A0(0x0010) (Edit, NeedCtorLink)
	TArray<class UEFParticleGroundData*>               ParticleDataSet;                                          // 0x00B0(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<struct FEFGroundDecalSystemInfo>            DecalSet;                                                 // 0x00C0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataGroundEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataHittedArmorSet
// 0x0008 (0x00A8 - 0x00A0)
class UEFParticleSoundDataHittedArmorSet : public UEFParticleSoundData
{
public:
	class UEFParticleSoundDataArmorMaterial*           TargetArmorEffect;                                        // 0x00A0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataHittedArmorSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataHittedSkillSet
// 0x0020 (0x00C0 - 0x00A0)
class UEFParticleSoundDataHittedSkillSet : public UEFParticleSoundData
{
public:
	struct FString                                     Key;                                                      // 0x00A0(0x0010) (Edit, NeedCtorLink)
	class UEFParticleSystemData*                       Default;                                                  // 0x00B0(0x0008) (ExportObject, NeedCtorLink, EditInline, Deprecated)
	class UEFParticleData*                             DefaultData;                                              // 0x00B8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataHittedSkillSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataHittedWeaponSet
// 0x0024 (0x00C4 - 0x00A0)
class UEFParticleSoundDataHittedWeaponSet : public UEFParticleSoundData
{
public:
	TEnumAsByte<EMaterialWeapon>                       Key;                                                      // 0x00A0(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponEffect;                                     // 0x00A4(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponCriticalEffect;                             // 0x00AC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponBackAttackEffect;                           // 0x00B4(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleSoundDataWeaponAttribute*         AttackerWeaponBackAttackCriticalEffect;                   // 0x00BC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataHittedWeaponSet");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponAttribute
// 0x0060 (0x0100 - 0x00A0)
class UEFParticleSoundDataWeaponAttribute : public UEFParticleSoundData
{
public:
	TArray<class UEFParticleData*>                     WeaponAttributeEffectDataArr;                             // 0x00A0(0x0010) (Const, ExportObject, Native, EditInline)
	class UEFParticleData*                             Data_Default;                                             // 0x00B0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Fire;                                                // 0x00B8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Ice;                                                 // 0x00C0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Electric;                                            // 0x00C8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Wind;                                                // 0x00D0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Earth;                                               // 0x00D8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Dark;                                                // 0x00E0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Holy;                                                // 0x00E8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Water;                                               // 0x00F0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFParticleData*                             Data_Lava;                                                // 0x00F8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponAttribute");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponAttributeEffect
// 0x00A8 (0x0148 - 0x00A0)
class UEFParticleSoundDataWeaponAttributeEffect : public UEFParticleSoundData
{
public:
	struct FName                                       EffectKey;                                                // 0x00A0(0x0008) (Edit)
	TArray<struct FPointer>                            Attribute;                                                // 0x00A8(0x0010) (Const, Native, Transient)
	TArray<class UEFParticleData*>                     Fire;                                                     // 0x00B8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Ice;                                                      // 0x00C8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Electric;                                                 // 0x00D8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Wind;                                                     // 0x00E8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Earth;                                                    // 0x00F8(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Dark;                                                     // 0x0108(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Holy;                                                     // 0x0118(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     Water;                                                    // 0x0128(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleData*>                     BaseDefault;                                              // 0x0138(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponAttributeEffect");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponFXDir
// 0x0054 (0x00F4 - 0x00A0)
class UEFParticleSoundDataWeaponFXDir : public UEFParticleSoundData
{
public:
	int                                                MaxSpawn;                                                 // 0x00A0(0x0004) (Edit, EditConst)
	int                                                FXIndex;                                                  // 0x00A4(0x0004) (Edit, EditConst)
	TArray<struct FEFParticleSoundWeaponFXAttacker>    AttackerParticles;                                        // 0x00A8(0x0010) (Edit, NeedCtorLink)
	TArray<struct FEFParticleSoundWeaponFXDelay>       Particles;                                                // 0x00B8(0x0010) (Edit, NeedCtorLink)
	struct FEFParticleSoundWeaponFXBlood               BloodParticle;                                            // 0x00C8(0x0014) (Edit, NeedCtorLink)
	struct FEFParticleSoundWeaponFXRandomBlood         RandomBloods;                                             // 0x00DC(0x0010) (Edit, NeedCtorLink)
	class UEFCameraViewShake*                          NewHitCameraShake;                                        // 0x00EC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponFXDir");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataBuffWeaponFXDir
// 0x0004 (0x00F8 - 0x00F4)
class UEFParticleSoundDataBuffWeaponFXDir : public UEFParticleSoundDataWeaponFXDir
{
public:
	int                                                ChangeFXIndex;                                            // 0x00F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataBuffWeaponFXDir");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponFXAttacker
// 0x0014 (0x006C - 0x0058)
class UEFParticleSoundDataWeaponFXAttacker : public UObject
{
public:
	float                                              DelayTime;                                                // 0x0058(0x0004)
	float                                              Duration;                                                 // 0x005C(0x0004)
	uint32_t                                           bSpawnAll : 1;                                            // 0x0060(0x0004)
	class UEFParticleData*                             ParticleData;                                             // 0x0064(0x0008) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponFXAttacker");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundDataWeaponFXDelay
// 0x000C (0x0064 - 0x0058)
class UEFParticleSoundDataWeaponFXDelay : public UObject
{
public:
	float                                              DelayTime;                                                // 0x0058(0x0004)
	class UEFParticleData*                             ParticleData;                                             // 0x005C(0x0008) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundDataWeaponFXDelay");
		return ptr;
	}

};


// Class EFGame.EFParticleSoundSet
// 0x0030 (0x0088 - 0x0058)
class UEFParticleSoundSet : public UObject
{
public:
	TArray<class UEFParticleSoundContainerSet*>        ParticleSoundContainerSetArr;                             // 0x0058(0x0010) (ExportObject, AlwaysInit, NeedCtorLink, EditInline)
	TArray<class UEFParticleSoundContainer*>           ParticleSoundContainerArr;                                // 0x0068(0x0010) (ExportObject, AlwaysInit, NeedCtorLink, EditInline)
	struct FString                                     strName;                                                  // 0x0078(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFParticleSoundSet");
		return ptr;
	}

};


// Class EFGame.EFTeleportLocationActor
// 0x0004 (0x0270 - 0x026C)
class AEFTeleportLocationActor : public AActor
{
public:
	int                                                TeleportIndex;                                            // 0x026C(0x0004) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTeleportLocationActor");
		return ptr;
	}

};


// Class EFGame.EFDataContainer
// 0x0060 (0x00B8 - 0x0058)
class UEFDataContainer : public UObject
{
public:
	TArray<class UObject*>                             DataList;                                                 // 0x0058(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer.DataListCache
	TEnumAsByte<EUPKDataType>                          DataType;                                                 // 0x00B0(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	uint32_t                                           bCanXlsImport : 1;                                        // 0x00B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
	bool XlsExport(class UEFExcelShell* Shell);
	bool XlsImport(class UEFExcelShell* Shell);
};


// Class EFGame.EFDataContainer_Action
// 0x0020 (0x00D8 - 0x00B8)
class UEFDataContainer_Action : public UEFDataContainer
{
public:
	struct FString                                     CategoryName;                                             // 0x00B8(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UEFActionObjectGroup*>                ActionObjectGroupList;                                    // 0x00C8(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_Action");
		return ptr;
	}

};


// Class EFGame.EFDataContainer_CharacterCustomizing
// 0x00D8 (0x0190 - 0x00B8)
class UEFDataContainer_CharacterCustomizing : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CharacterCustomizing.DataListCache0
	unsigned char                                      UnknownData01[0x48];                                      // 0x0100(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CharacterCustomizing.DataListCache1
	unsigned char                                      UnknownData02[0x48];                                      // 0x0148(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CharacterCustomizing.CachedCustomDataArrayMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_CharacterCustomizing");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFDataContainer_ColorPalette
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_ColorPalette : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_ColorPalette.CachedPaletteItemsByName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_ColorPalette");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFDataContainer_CustomizeBoneScale
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_CustomizeBoneScale : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_CustomizeBoneScale.CachedCustomizeBoneScaleByName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_CustomizeBoneScale");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFDataContainer_LookInfos
// 0x0001 (0x00B9 - 0x00B8)
class UEFDataContainer_LookInfos : public UEFDataContainer
{
public:
	unsigned char                                      DataUnitType;                                             // 0x00B8(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfos");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFDataContainer_LookInfosGibs
// 0x0003 (0x00BC - 0x00B9)
class UEFDataContainer_LookInfosGibs : public UEFDataContainer_LookInfos
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfosGibs");
		return ptr;
	}

};


// Class EFGame.EFDataContainer_LookInfosPC
// 0x0003 (0x00BC - 0x00B9)
class UEFDataContainer_LookInfosPC : public UEFDataContainer_LookInfos
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_LookInfosPC");
		return ptr;
	}

};


// Class EFGame.EFDataContainer_NpcFunction
// 0x0050 (0x0108 - 0x00B8)
class UEFDataContainer_NpcFunction : public UEFDataContainer
{
public:
	TArray<class UEFKismetMapData*>                    NpcFunctionMapDataArray;                                  // 0x00B8(0x0010) (Edit, NeedCtorLink)
	class UCameraAnim*                                 InteractionCamAnim_Low;                                   // 0x00C8(0x0008) (Edit)
	int                                                InteractionDistance_Low;                                  // 0x00D0(0x0004) (Edit)
	class UCameraAnim*                                 InteractionCamAnim_Middle;                                // 0x00D4(0x0008) (Edit)
	int                                                InteractionDistance_Middle;                               // 0x00DC(0x0004) (Edit)
	class UCameraAnim*                                 InteractionCamAnim_High;                                  // 0x00E0(0x0008) (Edit)
	int                                                InteractionDistance_High;                                 // 0x00E8(0x0004) (Edit)
	int                                                ApproachEvent_Distance;                                   // 0x00EC(0x0004) (Edit)
	class UAkEvent*                                    InteractionStartSound;                                    // 0x00F0(0x0008) (Edit)
	class UAkEvent*                                    InteractionEndSound;                                      // 0x00F8(0x0008) (Edit)
	class UAkEvent*                                    InteractionNextLinkSound;                                 // 0x0100(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_NpcFunction");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFDataContainer_Quest
// 0x00F0 (0x01A8 - 0x00B8)
class UEFDataContainer_Quest : public UEFDataContainer
{
public:
	TArray<class UEFKismetMapData*>                    QuestMapDataArray;                                        // 0x00B8(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           RootQuestDataContainer : 1;                               // 0x00C8(0x0004) (Edit)
	class UAkEvent*                                    StartSound;                                               // 0x00CC(0x0008) (Edit)
	class UAkEvent*                                    CompleteSound;                                            // 0x00D4(0x0008) (Edit)
	class UAkEvent*                                    ObjectiveCountingSound;                                   // 0x00DC(0x0008) (Edit)
	class UAkEvent*                                    SuccessSound;                                             // 0x00E4(0x0008) (Edit)
	class UAkEvent*                                    GiveUpSound;                                              // 0x00EC(0x0008) (Edit)
	class UAkEvent*                                    FailSound;                                                // 0x00F4(0x0008) (Edit)
	struct FString                                     UnableStartFxPath;                                        // 0x00FC(0x0010) (Edit, NeedCtorLink)
	struct FString                                     StartFxPath;                                              // 0x010C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     ProgressFxPath;                                           // 0x011C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     CompleteFxPath;                                           // 0x012C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     BalloonTalkFxPath;                                        // 0x013C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     BasicInteractionFxPath;                                   // 0x014C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     EmptyMeshInteractionFxPath;                               // 0x015C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     VolumeInteractionFxPath;                                  // 0x016C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     LifeLevelInteractionFxPath;                               // 0x017C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     FxAttachBoneName;                                         // 0x018C(0x0010) (Edit, NeedCtorLink)
	struct FVector                                     RelativeLocation;                                         // 0x019C(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_Quest");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFDataContainer_TexturePalette
// 0x0048 (0x0100 - 0x00B8)
class UEFDataContainer_TexturePalette : public UEFDataContainer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty EFGame.EFDataContainer_TexturePalette.CachedPaletteItemsByName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDataContainer_TexturePalette");
		return ptr;
	}


	bool XmlExport(const struct FString& strPath, struct FString* strErrorMsg);
};


// Class EFGame.EFEnvironmentInfo
// 0x0078 (0x00D0 - 0x0058)
class UEFEnvironmentInfo : public UObject
{
public:
	class UDominantDirectionalLightComponent*          LightComponent;                                           // 0x0058(0x0008) (Edit, ExportObject, Component, EditInline)
	uint32_t                                           bUseGlobalIllumination : 1;                               // 0x0060(0x0004) (Edit)
	uint32_t                                           bForceNoPrecomputedLighting : 1;                          // 0x0060(0x0004) (Edit)
	struct FLightmassWorldInfoSettings                 LightmassSettings;                                        // 0x0064(0x0058) (Edit)
	TEnumAsByte<ELightingBuildQuality>                 LevelLightingQuality;                                     // 0x00BC(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UExponentialHeightFogComponent*              FogComponent;                                             // 0x00C0(0x0008) (Edit, ExportObject, EditConst, Component, EditInline)
	class UPostProcessChain*                           WorldPostProcessChain;                                    // 0x00C8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFEnvironmentInfo");
		return ptr;
	}

};


// Class EFGame.EFLightBeam
// 0x0028 (0x02A0 - 0x0278)
class AEFLightBeam : public ASpotLightMovable
{
public:
	class UStaticMeshComponent*                        BeamMesh;                                                 // 0x0278(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              BeamMeshRadius;                                           // 0x0280(0x0004) (Edit)
	float                                              BeamMeshHeight;                                           // 0x0284(0x0004) (Edit)
	float                                              AutoRotation;                                             // 0x0288(0x0004) (Edit)
	uint32_t                                           bActive : 1;                                              // 0x028C(0x0004) (Transient)
	TArray<struct FEFLightBeamIntersectInfo>           IntersectInfos;                                           // 0x0290(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLightBeam");
		return ptr;
	}


	void SetActive(bool bAct);
};


// Class EFGame.EFPointLightMovable
// 0x0000 (0x0278 - 0x0278)
class AEFPointLightMovable : public APointLightMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFPointLightMovable");
		return ptr;
	}

};


// Class EFGame.EFDropItemEffectInfo
// 0x0794 (0x07EC - 0x0058)
class UEFDropItemEffectInfo : public UObject
{
public:
	float                                              TopGradePlayRate;                                         // 0x0058(0x0004) (Edit)
	TArray<struct FEFDropItemEffectEventTimeInfo>      EventInfoArr;                                             // 0x005C(0x0010) (Edit, NeedCtorLink)
	struct FEFDropItemEffectGroup                      NormalItem;                                               // 0x006C(0x0140) (Edit)
	struct FEFDropItemEffectGroup                      RareItem;                                                 // 0x01AC(0x0140) (Edit)
	struct FEFDropItemEffectGroup                      EliteItem;                                                // 0x02EC(0x0140) (Edit)
	struct FEFDropItemEffectGroup                      EpicItem;                                                 // 0x042C(0x0140) (Edit)
	struct FEFDropItemEffectGroup                      UniqueItem;                                               // 0x056C(0x0140) (Edit)
	struct FEFDropItemEffectGroup                      LegendItem;                                               // 0x06AC(0x0140) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDropItemEffectInfo");
		return ptr;
	}

};


// Class EFGame.EFItem
// 0x0000 (0x0310 - 0x0310)
class AEFItem : public AEFSkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFItem");
		return ptr;
	}


	void SetLocationForceUpdateComponent(const struct FVector& NewLocation);
	void SetLocationForce(const struct FVector& NewLocation);
	void ClearAttachedPSIIndex();
	void NotifyChangedBase();
	void EncroachedBy(class AActor* Other);
	void BaseChange();
	void Destroyed();
};


// Class EFGame.EFInteractiveFoliageActor
// 0x001C (0x030C - 0x02F0)
class AEFInteractiveFoliageActor : public AInteractiveFoliageActor
{
public:
	class UParticleSystem*                             BurnParticleSystem;                                       // 0x02F0(0x0008) (Edit)
	uint32_t                                           bStateMaterialMIC : 1;                                    // 0x02F8(0x0004) (Transient)
	uint32_t                                           bState : 1;                                               // 0x02F8(0x0004) (Transient)
	uint32_t                                           bUpdateStateMaterial : 1;                                 // 0x02F8(0x0004) (Transient)
	uint32_t                                           bJustTickStateMaterial : 1;                               // 0x02F8(0x0004) (Transient)
	float                                              CurStateTime;                                             // 0x02FC(0x0004) (Transient)
	float                                              MaxStateTime;                                             // 0x0300(0x0004) (Transient)
	float                                              CurDissolveTime;                                          // 0x0304(0x0004) (Transient)
	float                                              MaxDissolveTime;                                          // 0x0308(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInteractiveFoliageActor");
		return ptr;
	}


	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
};


// Class EFGame.EFDebugTransportComponent
// 0x004C (0x02D0 - 0x0284)
class UEFDebugTransportComponent : public UPrimitiveComponent
{
public:
	class USkeletalMeshComponent*                      DebugSkeletalMeshComponent;                               // 0x0284(0x0008) (ExportObject, Transient, Component, EditInline)
	class UPhysicsAsset*                               DebugPhysicAsset;                                         // 0x028C(0x0008) (Transient)
	class USkeletalMesh*                               DebugSkeletalMesh;                                        // 0x0294(0x0008) (Transient)
	class UMaterialInterface*                          DebugPhysicAssetMaterial;                                 // 0x029C(0x0008) (Transient)
	class UMaterialInterface*                          DebugNavMeshAssetMaterial;                                // 0x02A4(0x0008) (Transient)
	int                                                DebugTransitIndex;                                        // 0x02AC(0x0004) (Native, Transient)
	TArray<struct FBoneAtom>                           DebugSpaceBases;                                          // 0x02B0(0x0010) (Const, Native, Transient)
	TArray<struct FVector>                             DebugNavMeshVertexes;                                     // 0x02C0(0x0010) (Const, Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFDebugTransportComponent");
		return ptr;
	}

};


// Class EFGame.EFAction_Notify
// 0x0074 (0x00CC - 0x0058)
class UEFAction_Notify : public UObject
{
public:
	int                                                TriggerSkillEffectId;                                     // 0x0058(0x0004) (Edit)
	uint32_t                                           ActiveByMemoryPos : 1;                                    // 0x005C(0x0004) (Edit)
	uint32_t                                           FullRange : 1;                                            // 0x005C(0x0004) (Edit)
	uint32_t                                           Enable : 1;                                               // 0x005C(0x0004)
	uint32_t                                           PrivateTemplate : 1;                                      // 0x005C(0x0004) (Edit)
	uint32_t                                           OverwriteTemplate : 1;                                    // 0x005C(0x0004) (Edit)
	float                                              Time;                                                     // 0x0060(0x0004) (Edit)
	float                                              OriginalTime;                                             // 0x0064(0x0004)
	float                                              Duration;                                                 // 0x0068(0x0004) (Edit)
	TEnumAsByte<ECTE_NOTIFY_ACTIVATE_TYPE>             NotifyType;                                               // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                RepeatCount;                                              // 0x0070(0x0004) (Edit)
	float                                              RepeatTerm;                                               // 0x0074(0x0004) (Edit)
	struct FString                                     ToolTip;                                                  // 0x0078(0x0010) (Edit, NeedCtorLink)
	struct FString                                     NotifyName;                                               // 0x0088(0x0010) (Edit, NeedCtorLink)
	int                                                SortPriority;                                             // 0x0098(0x0004) (Transient)
	struct FColor                                      NotifyColor;                                              // 0x009C(0x0004)
	struct FString                                     GroupName;                                                // 0x00A0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             ViewGroupList;                                            // 0x00B0(0x0010) (NeedCtorLink)
	struct FPointer                                    TmpActionNotifyData;                                      // 0x00C0(0x0008) (Native, DuplicateTransient)
	int                                                Probability;                                              // 0x00C8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFAction_Notify");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AddClientStatusEffect
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_AddClientStatusEffect : public UEFAction_Notify
{
public:
	uint32_t                                           bRemoveNotifyEnd : 1;                                     // 0x00CC(0x0004) (Edit)
	TArray<struct FEFAddStatusEffectByAbilityInfo>     ChangeToolInfo;                                           // 0x00D0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AddClientStatusEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AKEvent
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_AKEvent : public UEFAction_Notify
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x00CC(0x0008) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x00D4(0x0004) (Edit)
	uint32_t                                           bFollowActor : 1;                                         // 0x00D4(0x0004) (Edit)
	uint32_t                                           bStopWhenNotifyEnd : 1;                                   // 0x00D4(0x0004) (Edit)
	uint32_t                                           bMute : 1;                                                // 0x00D4(0x0004) (Edit)
	uint32_t                                           bStopWhenChangeAction : 1;                                // 0x00D4(0x0004) (Edit)
	struct FName                                       BoneName;                                                 // 0x00D8(0x0008) (Edit)
	float                                              StopWhenNotifyEndFadeTime;                                // 0x00E0(0x0004) (Edit)
	float                                              StopWhenChangeActionFadeTime;                             // 0x00E4(0x0004) (Edit)
	TEnumAsByte<EFActionNotifyFixSoundPosType>         FixSoundPosType;                                          // 0x00E8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              AkEventDuration;                                          // 0x00EC(0x0004) (Edit)
	int                                                AkEventPlayingID;                                         // 0x00F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AKEvent");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AkEventSwitchFloorMaterial
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_AkEventSwitchFloorMaterial : public UEFAction_Notify
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x00CC(0x0008) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x00D4(0x0004) (Edit)
	struct FName                                       AttachBoneName;                                           // 0x00D8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AkEventSwitchFloorMaterial");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Anim
// 0x0060 (0x012C - 0x00CC)
class UEFActionNotify_Anim : public UEFAction_Notify
{
public:
	struct FName                                       anim_name;                                                // 0x00CC(0x0008) (Edit)
	int                                                MoveSpeed_Anim1;                                          // 0x00D4(0x0004) (Edit)
	struct FString                                     landstage_name;                                           // 0x00D8(0x0010) (Edit, NeedCtorLink)
	struct FEFAnimInfo                                 anim_info;                                                // 0x00E8(0x0030) (Edit)
	uint32_t                                           AnimErrorAlert : 1;                                       // 0x0118(0x0004) (Edit)
	uint32_t                                           DurationFitFromAni : 1;                                   // 0x0118(0x0004) (Edit)
	uint32_t                                           DurationFitFromStageEnd : 1;                              // 0x0118(0x0004) (Edit)
	uint32_t                                           StageDurationFitToEnd : 1;                                // 0x0118(0x0004) (Edit)
	uint32_t                                           ValidAnimName1 : 1;                                       // 0x0118(0x0004)
	struct FName                                       AnimName;                                                 // 0x011C(0x0008)
	float                                              StageRootMotionMoveDistance;                              // 0x0124(0x0004)
	float                                              StageRootMotionMaxMoveDistance;                           // 0x0128(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Anim");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Stance_Anim
// 0x0024 (0x0150 - 0x012C)
class UEFActionNotify_Stance_Anim : public UEFActionNotify_Anim
{
public:
	uint32_t                                           WeaponMode : 1;                                           // 0x012C(0x0004) (Edit)
	uint32_t                                           IgnoreWeaponMode : 1;                                     // 0x012C(0x0004) (Edit)
	struct FName                                       stance00_anim_name;                                       // 0x0130(0x0008) (Edit)
	struct FName                                       stance01_anim_name;                                       // 0x0138(0x0008) (Edit)
	struct FName                                       stance02_anim_name;                                       // 0x0140(0x0008) (Edit)
	struct FName                                       stance03_anim_name;                                       // 0x0148(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Stance_Anim");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_AnimBlendDirectional
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_AnimBlendDirectional : public UEFAction_Notify
{
public:
	float                                              BlendingTime;                                             // 0x00CC(0x0004) (Edit)
	float                                              DirDegreesPerSecond;                                      // 0x00D0(0x0004) (Edit)
	struct FName                                       AnimName_Front;                                           // 0x00D4(0x0008) (Edit)
	struct FName                                       AnimName_Back;                                            // 0x00DC(0x0008) (Edit)
	struct FName                                       AnimName_Left;                                            // 0x00E4(0x0008) (Edit)
	struct FName                                       AnimName_Right;                                           // 0x00EC(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_AnimBlendDirectional");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ChangeFigurePropState
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_ChangeFigurePropState : public UEFAction_Notify
{
public:
	TEnumAsByte<EPropState>                            ePropState;                                               // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	uint32_t                                           bLoopAnimation : 1;                                       // 0x00D0(0x0004) (Edit)
	uint32_t                                           bDespawnNotify : 1;                                       // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ChangeFigurePropState");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ClientProjectile
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_ClientProjectile : public UEFAction_Notify
{
public:
	TArray<struct FEFSkillEffectInfo>                  SkillEffectInfoList;                                      // 0x00CC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ClientProjectile");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_CommonActionExcute
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_CommonActionExcute : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_CommonActionExcute");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_CommonActionVoiceSet
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_CommonActionVoiceSet : public UEFAction_Notify
{
public:
	TEnumAsByte<EFCommonActionVoiceSetType>            CommonActionType;                                         // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FString                                     Keyword;                                                  // 0x00D0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_CommonActionVoiceSet");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Condition
// 0x001C (0x00E8 - 0x00CC)
class UEFActionNotify_Condition : public UEFAction_Notify
{
public:
	class UEFActionCondition*                          Condition;                                                // 0x00CC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	int                                                ConditionOutputCount;                                     // 0x00D4(0x0004) (Edit)
	TArray<struct FString>                             ConditionOutputDesc;                                      // 0x00D8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Condition");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ConsumeSkillCost
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_ConsumeSkillCost : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ConsumeSkillCost");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_DefaultParticle
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_DefaultParticle : public UEFAction_Notify
{
public:
	TArray<int>                                        SelectDPIndexArr;                                         // 0x00CC(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           bDeactivate : 1;                                          // 0x00DC(0x0004) (Edit)
	uint32_t                                           bActivate : 1;                                            // 0x00DC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_DefaultParticle");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_DetachParts
// 0x0020 (0x00EC - 0x00CC)
class UEFActionNotify_DetachParts : public UEFAction_Notify
{
public:
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FVector                                     Velocity;                                                 // 0x00D0(0x000C) (Edit)
	class UParticleSystem*                             PSTemplate;                                               // 0x00DC(0x0008) (Edit)
	struct FName                                       SocketName;                                               // 0x00E4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_DetachParts");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_DominantDirectionalLight_Control
// 0x0018 (0x00E4 - 0x00CC)
class UEFActionNotify_DominantDirectionalLight_Control : public UEFAction_Notify
{
public:
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (Edit)
	uint32_t                                           RollBackOrigin : 1;                                       // 0x00CC(0x0004) (Edit)
	uint32_t                                           EndIsRelease : 1;                                         // 0x00CC(0x0004) (Edit)
	uint32_t                                           EnableBrightness : 1;                                     // 0x00CC(0x0004) (Edit)
	uint32_t                                           EnableLightColor : 1;                                     // 0x00CC(0x0004) (Edit)
	float                                              ChangeTime;                                               // 0x00D0(0x0004) (Edit)
	float                                              DirectionGuaranteeTime;                                   // 0x00D4(0x0004) (Edit)
	float                                              ReleaseTime;                                              // 0x00D8(0x0004) (Edit)
	float                                              Brightness;                                               // 0x00DC(0x0004) (Edit)
	struct FColor                                      LightColor;                                               // 0x00E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_DominantDirectionalLight_Control");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Down
// 0x0020 (0x00EC - 0x00CC)
class UEFActionNotify_Down : public UEFAction_Notify
{
public:
	TArray<struct FString>                             ParticleAttachBoneName;                                   // 0x00CC(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             ParticleAttachSoketName;                                  // 0x00DC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Down");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Effect
// 0x0044 (0x0110 - 0x00CC)
class UEFActionNotify_Effect : public UEFAction_Notify
{
public:
	TArray<struct FEFSkillEffectInfo>                  SkillEffectInfoList;                                      // 0x00CC(0x0010) (Edit, NeedCtorLink)
	struct FString                                     TestParticleSoundHittedKeyword;                           // 0x00DC(0x0010) (Edit, NeedCtorLink)
	class UEFParticleSoundContainerSkillHitSet*        TestUsedSkillHitSetContainer;                             // 0x00EC(0x0008) (Edit)
	TEnumAsByte<EFTestBuffMode>                        TestParticleSoundBuffMode;                                // 0x00F4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FString                                     TestParticleSoundBuffKeyword;                             // 0x00F8(0x0010) (Edit, NeedCtorLink)
	float                                              TestParticleSoundBuffLifeTime;                            // 0x0108(0x0004) (Edit)
	float                                              TestParticleSoundBuffValue;                               // 0x010C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Effect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_EmitTriggerSignal
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_EmitTriggerSignal : public UEFAction_Notify
{
public:
	struct FString                                     SignalString;                                             // 0x00CC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_EmitTriggerSignal");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_EquipCommonActionTool
// 0x0040 (0x010C - 0x00CC)
class UEFActionNotify_EquipCommonActionTool : public UEFAction_Notify
{
public:
	TEnumAsByte<ECommonActionAttachType>               AttachType;                                               // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	TArray<struct FPlaySkeletalMeshActor>              SkeletalMeshActors;                                       // 0x00D0(0x0010) (Edit, NeedCtorLink)
	struct FName                                       AttachName;                                               // 0x00E0(0x0008) (Edit)
	uint32_t                                           bNotifyEndDetach : 1;                                     // 0x00E8(0x0004) (Edit)
	struct FString                                     strAttachToolLookInfo;                                    // 0x00EC(0x0010) (Edit, NeedCtorLink)
	TArray<struct FEFChageToolByAbilityInfo>           ChangeToolInfo;                                           // 0x00FC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_EquipCommonActionTool");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_FakeEffect
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_FakeEffect : public UEFAction_Notify
{
public:
	TArray<struct FEFSkillEffectInfo>                  SkillEffectInfoList;                                      // 0x00CC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_FakeEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Footstep
// 0x0024 (0x00F0 - 0x00CC)
class UEFActionNotify_Footstep : public UEFAction_Notify
{
public:
	int                                                FootDown;                                                 // 0x00CC(0x0004) (Edit)
	TArray<struct FString>                             ParticleAttachBoneName;                                   // 0x00D0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             ParticleAttachSoketName;                                  // 0x00E0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Footstep");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_GameActionExcute
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_GameActionExcute : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_GameActionExcute");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_HidePawn
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_HidePawn : public UEFAction_Notify
{
public:
	uint32_t                                           HidePawn : 1;                                             // 0x00CC(0x0004) (Edit)
	uint32_t                                           bWeaponTypeIgnoresGadget : 1;                             // 0x00CC(0x0004) (Edit)
	uint32_t                                           bHideBaseMeshWithFX : 1;                                  // 0x00CC(0x0004) (Edit)
	uint32_t                                           bExecuteNotifyEnd : 1;                                    // 0x00CC(0x0004) (Edit)
	TArray<struct FHideInfoUnit>                       sHideInfoUnitArr;                                         // 0x00D0(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_HidePawn");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_IdentityParts
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_IdentityParts : public UEFAction_Notify
{
public:
	uint32_t                                           MakeParts : 1;                                            // 0x00CC(0x0004) (Edit)
	uint32_t                                           FailCompleteCancel : 1;                                   // 0x00CC(0x0004) (Edit)
	int                                                changeStance;                                             // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_IdentityParts");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_InputTiming
// 0x005C (0x0128 - 0x00CC)
class UEFActionNotify_InputTiming : public UEFAction_Notify
{
public:
	struct FInputTimingInfo                            InputTiming;                                              // 0x00CC(0x0038) (Edit, NeedCtorLink)
	TArray<struct FInputTimingInfo>                    InputTimings;                                             // 0x0104(0x0010) (NeedCtorLink)
	TArray<int>                                        StartHotKeyIdArray;                                       // 0x0114(0x0010) (NeedCtorLink)
	uint32_t                                           TriggerDelayMoveCancel : 1;                               // 0x0124(0x0004)
	uint32_t                                           TriggerMoveCancel : 1;                                    // 0x0124(0x0004)
	uint32_t                                           TriggerDelaySkillCancel : 1;                              // 0x0124(0x0004)
	uint32_t                                           TriggerSkillCancel : 1;                                   // 0x0124(0x0004)
	uint32_t                                           TriggerMoveDirInput : 1;                                  // 0x0124(0x0004)
	uint32_t                                           TriggerSkillDirInput : 1;                                 // 0x0124(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_InputTiming");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_LifeToolDurabilityUI
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_LifeToolDurabilityUI : public UEFAction_Notify
{
public:
	TEnumAsByte<EProfessionType>                       LifeToolType;                                             // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	uint32_t                                           bHideNotifyEnd : 1;                                       // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_LifeToolDurabilityUI");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_LookTarget
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_LookTarget : public UEFAction_Notify
{
public:
	TEnumAsByte<EFActionNotify_LookTarget_Type>        LookType;                                                 // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_LookTarget");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MemoryPos
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_MemoryPos : public UEFAction_Notify
{
public:
	TEnumAsByte<EMemoryPosType>                        eMemoryPosType;                                           // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MemoryPos");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageBase
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_MonsterMoveNextStageBase : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageBase");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStage
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_MonsterMoveNextStage : public UEFActionNotify_MonsterMoveNextStageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStage");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionBase
// 0x0020 (0x00EC - 0x00CC)
class UEFActionNotify_MonsterMoveNextStageConditionBase : public UEFActionNotify_MonsterMoveNextStageBase
{
public:
	TArray<int>                                        OutputStageIndex;                                         // 0x00CC(0x0010) (NeedCtorLink)
	TArray<struct FString>                             OutputStageDesc;                                          // 0x00DC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionBase");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionCheckArea
// 0x0014 (0x0100 - 0x00EC)
class UEFActionNotify_MonsterMoveNextStageConditionCheckArea : public UEFActionNotify_MonsterMoveNextStageConditionBase
{
public:
	uint32_t                                           ANDOperation : 1;                                         // 0x00EC(0x0004) (Edit)
	TArray<struct FEFCheckAreaInfo>                    AreaInfos;                                                // 0x00F0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionCheckArea");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionProbability
// 0x0004 (0x00F0 - 0x00EC)
class UEFActionNotify_MonsterMoveNextStageConditionProbability : public UEFActionNotify_MonsterMoveNextStageConditionBase
{
public:
	int                                                ProbabilityValue;                                         // 0x00EC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionProbability");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_MonsterMoveNextStageConditionSkillEffectHit
// 0x0010 (0x00FC - 0x00EC)
class UEFActionNotify_MonsterMoveNextStageConditionSkillEffectHit : public UEFActionNotify_MonsterMoveNextStageConditionBase
{
public:
	TArray<int>                                        SkillEffectId;                                            // 0x00EC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_MonsterMoveNextStageConditionSkillEffectHit");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_NpcLimbState
// 0x0038 (0x0104 - 0x00CC)
class UEFActionNotify_NpcLimbState : public UEFAction_Notify
{
public:
	int                                                LimbId;                                                   // 0x00CC(0x0004) (Edit)
	uint32_t                                           LimbHitEnabled : 1;                                       // 0x00D0(0x0004) (Edit)
	struct FEFPartsHighlightInfo                       PartsHighlightInfo;                                       // 0x00D4(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_NpcLimbState");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_NPCSkillMove
// 0x0018 (0x00E4 - 0x00CC)
class UEFActionNotify_NPCSkillMove : public UEFAction_Notify
{
public:
	TEnumAsByte<EFActionNotify_NPCSkillMoveType>       MoveType;                                                 // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              MoveSpeed;                                                // 0x00D0(0x0004) (Edit)
	float                                              TargetingCycleTime;                                       // 0x00D4(0x0004) (Edit)
	float                                              PursuitSightDegree;                                       // 0x00D8(0x0004) (Edit)
	float                                              PursuitRange;                                             // 0x00DC(0x0004) (Edit)
	float                                              MoveDegree;                                               // 0x00E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_NPCSkillMove");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Paralyzation
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_Paralyzation : public UEFAction_Notify
{
public:
	uint32_t                                           bActive : 1;                                              // 0x00CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Paralyzation");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ParticleControl
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_ParticleControl : public UEFAction_Notify
{
public:
	struct FString                                     ControlNotifyName;                                        // 0x00CC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ParticleControl");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ParticleHit
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_ParticleHit : public UEFAction_Notify
{
public:
	int                                                WeaponFXIndex;                                            // 0x00CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ParticleHit");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PartsAnim
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_PartsAnim : public UEFAction_Notify
{
public:
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                iPartsIndex;                                              // 0x00D0(0x0004) (Edit)
	struct FName                                       anim_name;                                                // 0x00D4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PartsAnim");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PawnMaterialChange
// 0x002C (0x00F8 - 0x00CC)
class UEFActionNotify_PawnMaterialChange : public UEFAction_Notify
{
public:
	uint32_t                                           bActionType : 1;                                          // 0x00CC(0x0004) (Edit)
	struct FMaterialChangeUnit                         sUnit;                                                    // 0x00D0(0x0018) (Edit, NeedCtorLink)
	TArray<struct FMaterialLookChangeUnit>             sUnitArr;                                                 // 0x00E8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PawnMaterialChange");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PawnMaterialParam
// 0x0090 (0x015C - 0x00CC)
class UEFActionNotify_PawnMaterialParam : public UEFAction_Notify
{
public:
	uint32_t                                           bActionType : 1;                                          // 0x00CC(0x0004) (Edit)
	struct FMaterialParamUnit                          sUnit;                                                    // 0x00D0(0x007C) (Edit, NeedCtorLink)
	TArray<struct FMaterialLookParamUnit>              sUnitArr;                                                 // 0x014C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PawnMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Physics
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_Physics : public UEFAction_Notify
{
public:
	TEnumAsByte<EPhysics>                              StartPhysics;                                             // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	uint32_t                                           bRestorePrevPhysics : 1;                                  // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Physics");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PhysicsParam
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_PhysicsParam : public UEFAction_Notify
{
public:
	struct FPhysicsParam                               Param;                                                    // 0x00CC(0x0028) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PhysicsParam");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayBeamEffect
// 0x01AC (0x0278 - 0x00CC)
class UEFActionNotify_PlayBeamEffect : public UEFAction_Notify
{
public:
	uint32_t                                           bSkipIfOwnerIsHidden : 1;                                 // 0x00CC(0x0004) (Edit)
	uint32_t                                           bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	struct FEFParticleSystemInfo                       PSInfo;                                                   // 0x00D0(0x0158) (Component, NeedCtorLink, Deprecated)
	class UEFActionParticleData*                       ActionParticleData;                                       // 0x0228(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FString                                     SyncSkillEffectNotify;                                    // 0x0230(0x0010) (NeedCtorLink)
	struct FEFBeamActionParam                          SourceInfo;                                               // 0x0240(0x0018) (Edit)
	struct FEFBeamActionParam                          TargetInfo;                                               // 0x0258(0x0018) (Edit)
	class UEFBeamActionBase*                           BeamAction;                                               // 0x0270(0x0008) (Edit, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayBeamEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayCameraParticleEffect
// 0x003D (0x0109 - 0x00CC)
class UEFActionNotify_PlayCameraParticleEffect : public UEFAction_Notify
{
public:
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004)
	uint32_t                                           bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	class UParticleSystem*                             CameraParticle;                                           // 0x00D0(0x0008) (Edit)
	float                                              CameraOffset;                                             // 0x00D8(0x0004) (Edit)
	struct FRotator                                    ParticleRotation;                                         // 0x00DC(0x000C) (Edit)
	struct FVector                                     ParticleSize3D;                                           // 0x00E8(0x000C) (Edit)
	TArray<struct FParticleSysParam>                   ParticleSystemParamList;                                  // 0x00F4(0x0010) (Edit, Component, NeedCtorLink)
	int                                                ActionParticleId;                                         // 0x0104(0x0004) (Edit)
	TEnumAsByte<EACTION_PARTICLE_DATA_TYPE>            ActionParticleDataType;                                   // 0x0108(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayCameraParticleEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayDecalEffect
// 0x0044 (0x0110 - 0x00CC)
class UEFActionNotify_PlayDecalEffect : public UEFAction_Notify
{
public:
	int                                                DecalTableIndex;                                          // 0x00CC(0x0004) (Edit)
	uint32_t                                           bPlayActionAgentDecal : 1;                                // 0x00D0(0x0004) (Edit)
	uint32_t                                           OffsetIsTargetPosition : 1;                               // 0x00D0(0x0004) (Edit)
	uint32_t                                           AutoDirectionAngle : 1;                                   // 0x00D0(0x0004) (Edit)
	uint32_t                                           bOnlyLocalPlayer : 1;                                     // 0x00D0(0x0004) (Edit)
	uint32_t                                           bFrontTarget : 1;                                         // 0x00D0(0x0004) (Edit)
	float                                              OffsetX;                                                  // 0x00D4(0x0004) (Edit)
	float                                              OffsetY;                                                  // 0x00D8(0x0004) (Edit)
	float                                              SizeWidth;                                                // 0x00DC(0x0004) (Edit)
	float                                              SizeHeight;                                               // 0x00E0(0x0004) (Edit)
	float                                              DecalDirectionAngle;                                      // 0x00E4(0x0004) (Edit)
	int                                                SkillEffectId;                                            // 0x00E8(0x0004) (Edit)
	int                                                EffectAngle;                                              // 0x00EC(0x0004) (Edit)
	float                                              DecalBlendInTime;                                         // 0x00F0(0x0004) (Edit)
	float                                              DecalScaleTime;                                           // 0x00F4(0x0004) (Edit)
	float                                              DecalFillTime;                                            // 0x00F8(0x0004) (Edit)
	float                                              DecalBlendOutTime;                                        // 0x00FC(0x0004) (Edit)
	struct FLinearColor                                DecalColor;                                               // 0x0100(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayDecalEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayParticleEffect
// 0x00AC (0x0178 - 0x00CC)
class UEFActionNotify_PlayParticleEffect : public UEFAction_Notify
{
public:
	uint32_t                                           bPlayOnlyFirstLoop : 1;                                   // 0x00CC(0x0004) (Edit)
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (Edit)
	uint32_t                                           bOriginScale : 1;                                         // 0x00CC(0x0004) (Edit)
	uint32_t                                           bCharge : 1;                                              // 0x00CC(0x0004) (Edit)
	uint32_t                                           bSkillEndDetach : 1;                                      // 0x00CC(0x0004) (Edit)
	uint32_t                                           bSkipIfOwnerIsHidden : 1;                                 // 0x00CC(0x0004) (Edit)
	uint32_t                                           bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	uint32_t                                           bFloorCheck : 1;                                          // 0x00CC(0x0004) (Edit)
	uint32_t                                           bUseRandomTransform : 1;                                  // 0x00CC(0x0004) (Edit)
	int                                                AbilityTypeCondition;                                     // 0x00D0(0x0004) (Edit)
	TArray<int>                                        AbilityTypeConditionNotExistArray;                        // 0x00D4(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<ECommonActionEffectType>               CommonActionEffectTypeCondition;                          // 0x00E4(0x0001) (Edit)
	TEnumAsByte<ECommonActionEffectType>               CommonActionEffectTypeConditionNotExist;                  // 0x00E5(0x0001) (Edit)
	TEnumAsByte<EACTION_PARTICLE_DATA_TYPE>            ActionParticleDataType;                                   // 0x00E6(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E7(0x0001) MISSED OFFSET
	struct FString                                     SyncPosSkillEffectNotifyName;                             // 0x00E8(0x0010) (NeedCtorLink)
	int                                                ActionParticleId;                                         // 0x00F8(0x0004) (Edit)
	struct FVector                                     StartTimePawnLocation;                                    // 0x00FC(0x000C)
	class UEFActionParticleData*                       ParticleData;                                             // 0x0108(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFParticleDataModifier*>             PSLookSet;                                                // 0x0110(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<struct FEFActionPSFloorInfo>                PSFloorSet;                                               // 0x0120(0x0010) (Edit, EditFixedSize, EditConst, NeedCtorLink)
	struct FEFPSRandomVector                           RandomTransformLocation;                                  // 0x0130(0x0018) (Edit)
	struct FEFPSRandomRotator                          RandomTransformRotation;                                  // 0x0148(0x0018) (Edit)
	struct FEFPSRandomVector                           RandomTransformScale;                                     // 0x0160(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayPIPUI
// 0x0034 (0x0100 - 0x00CC)
class UEFActionNotify_PlayPIPUI : public UEFAction_Notify
{
public:
	struct FString                                     SuccessMovieName;                                         // 0x00CC(0x0010) (Edit, NeedCtorLink)
	struct FString                                     GreatSuccessMovieName;                                    // 0x00DC(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FailMovieName;                                            // 0x00EC(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           bHideNotifyEnd : 1;                                       // 0x00FC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayPIPUI");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlayProjectileDecalEffect
// 0x0020 (0x00EC - 0x00CC)
class UEFActionNotify_PlayProjectileDecalEffect : public UEFAction_Notify
{
public:
	int                                                DecalTableIndex;                                          // 0x00CC(0x0004) (Edit)
	uint32_t                                           bPlayActionAgentDecal : 1;                                // 0x00D0(0x0004) (Edit)
	int                                                SkillEffectId;                                            // 0x00D4(0x0004) (Edit)
	int                                                ProjectileSkillEffectId;                                  // 0x00D8(0x0004) (Edit)
	float                                              DecalBlendInTime;                                         // 0x00DC(0x0004) (Edit)
	float                                              DecalScaleTime;                                           // 0x00E0(0x0004) (Edit)
	float                                              DecalFillTime;                                            // 0x00E4(0x0004) (Edit)
	float                                              DecalBlendOutTime;                                        // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlayProjectileDecalEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlaySkeletalMesh
// 0x0038 (0x0104 - 0x00CC)
class UEFActionNotify_PlaySkeletalMesh : public UEFAction_Notify
{
public:
	class UEFAN_Params*                                dummy01;                                                  // 0x00CC(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFActionNotify_AnimEvent*                   dummy02;                                                  // 0x00D4(0x0008) (ExportObject, NeedCtorLink, EditInline)
	TArray<struct FPlaySkeletalMeshActor>              SkeletalMeshActors;                                       // 0x00DC(0x0010) (Edit, NeedCtorLink)
	uint32_t                                           SpawnFromMouseTargetPos : 1;                              // 0x00EC(0x0004) (Edit)
	uint32_t                                           bIgnoreAnimRate : 1;                                      // 0x00EC(0x0004)
	float                                              RootMotionScaleBaseDist;                                  // 0x00F0(0x0004) (Edit)
	struct FName                                       AttachName;                                               // 0x00F4(0x0008) (Edit)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x00FC(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlaySkeletalMesh");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PlaySkeletalMeshMaterialParam
// 0x0050 (0x011C - 0x00CC)
class UEFActionNotify_PlaySkeletalMeshMaterialParam : public UEFAction_Notify
{
public:
	struct FString                                     ActionNotifyTag;                                          // 0x00CC(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FActionNotify_SM_AnimEventData              AnimEventData;                                            // 0x00DC(0x0040) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PlaySkeletalMeshMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PostProcessChain
// 0x001C (0x00E8 - 0x00CC)
class UEFActionNotify_PostProcessChain : public UEFAction_Notify
{
public:
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (Edit)
	uint32_t                                           bStageEndClear : 1;                                       // 0x00CC(0x0004) (Edit)
	class UPostProcessChain*                           PPChain;                                                  // 0x00D0(0x0008) (Edit)
	class UPostProcessChain*                           PPChain_Clone;                                            // 0x00D8(0x0008)
	class UEFPostProcessMaterialEffectSkill*           PostProcessMaterialData;                                  // 0x00E0(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PostProcessChain");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_PostProcessCrossHair
// 0x0000 (0x00E8 - 0x00E8)
class UEFActionNotify_PostProcessCrossHair : public UEFActionNotify_PostProcessChain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_PostProcessCrossHair");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ReAttachParts
// 0x0002 (0x00CE - 0x00CC)
class UEFActionNotify_ReAttachParts : public UEFAction_Notify
{
public:
	TEnumAsByte<EFEQUIP_PART>                          ePartsType;                                               // 0x00CC(0x0001) (Edit)
	TEnumAsByte<EFSOCKET_STATE>                        eSocketState;                                             // 0x00CD(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ReAttachParts");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Rotate
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_Rotate : public UEFAction_Notify
{
public:
	TEnumAsByte<EFActionNotify_Rotate_Type>            LookType;                                                 // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              Degree;                                                   // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Rotate");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetDownMid
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetDownMid : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetDownMid");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetDownSmall
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetDownSmall : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetDownSmall");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetFootStep
// 0x0010 (0x00DC - 0x00CC)
class UEFActionNotify_SoundSetFootStep : public UEFAction_Notify
{
public:
	struct FString                                     AttachBoneName;                                           // 0x00CC(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetFootStep");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetKnockback
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetKnockback : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetKnockback");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetLanding
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_SoundSetLanding : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetLanding");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SoundSetStuff
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_SoundSetStuff : public UEFAction_Notify
{
public:
	TEnumAsByte<EFSoundSetStuffType>                   StuffType;                                                // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SoundSetStuff");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_StopParticleEffect
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_StopParticleEffect : public UEFAction_Notify
{
public:
	TEnumAsByte<EACTION_PARTICLE_DATA_TYPE>            ActionParticleDataType;                                   // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                ActionParticleId;                                         // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_StopParticleEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_SuperArmor
// 0x0008 (0x00D4 - 0x00CC)
class UEFActionNotify_SuperArmor : public UEFAction_Notify
{
public:
	TEnumAsByte<ESuperArmorType>                       SuperArmorTypeValue;                                      // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	uint32_t                                           bShowEffect : 1;                                          // 0x00D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_SuperArmor");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_TargetPosControl
// 0x001C (0x00E8 - 0x00CC)
class UEFActionNotify_TargetPosControl : public UEFAction_Notify
{
public:
	float                                              StartDistance;                                            // 0x00CC(0x0004) (Edit)
	float                                              EndDistance;                                              // 0x00D0(0x0004) (Edit)
	int                                                Rotation;                                                 // 0x00D4(0x0004) (Edit)
	struct FString                                     ControlDecalNotifyName;                                   // 0x00D8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_TargetPosControl");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_TimingCancel
// 0x0000 (0x00CC - 0x00CC)
class UEFActionNotify_TimingCancel : public UEFAction_Notify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_TimingCancel");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ToggleCollision
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_ToggleCollision : public UEFAction_Notify
{
public:
	uint32_t                                           bCollide : 1;                                             // 0x00CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ToggleCollision");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_TrailGhostEffect
// 0x002C (0x00F8 - 0x00CC)
class UEFActionNotify_TrailGhostEffect : public UEFAction_Notify
{
public:
	uint32_t                                           bForceRemovePreviousEffect : 1;                           // 0x00CC(0x0004) (Edit)
	uint32_t                                           bStopWhenNotifyEnd : 1;                                   // 0x00CC(0x0004) (Edit)
	uint32_t                                           bForceChildAllRemove : 1;                                 // 0x00CC(0x0004) (Edit)
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (Edit)
	float                                              TrailDuration;                                            // 0x00D0(0x0004) (Edit)
	float                                              TrailDeltaSecondsBetweenChildren;                         // 0x00D4(0x0004) (Edit)
	float                                              TrailPerChildLifetime;                                    // 0x00D8(0x0004) (Edit)
	float                                              InitialAlphaValue;                                        // 0x00DC(0x0004) (Edit)
	float                                              InitialAlphaDuration;                                     // 0x00E0(0x0004) (Edit)
	float                                              SourceColorIntensity;                                     // 0x00E4(0x0004) (Edit)
	struct FColor                                      AmbientGlowColorS;                                        // 0x00E8(0x0004) (Edit)
	struct FColor                                      AmbientGlowColorE;                                        // 0x00EC(0x0004) (Edit)
	struct FColor                                      RimLightColorS;                                           // 0x00F0(0x0004) (Edit)
	struct FColor                                      RimLightColorE;                                           // 0x00F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_TrailGhostEffect");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_Trails
// 0x004C (0x0118 - 0x00CC)
class UEFActionNotify_Trails : public UEFAction_Notify
{
public:
	TEnumAsByte<EFEQUIP_PART>                          TrailParts;                                               // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                TrailPartsIndex;                                          // 0x00D0(0x0004) (Edit)
	class UAnimNotify_Trails*                          AnimTrails;                                               // 0x00D4(0x0008) (ExportObject, NeedCtorLink, EditInline)
	class UEFData_AnimNotify_Trails*                   AnimNotifyTrailsData;                                     // 0x00DC(0x0008) (Edit)
	TArray<class UEFParticleDataModifier*>             TrailLookSet;                                             // 0x00E4(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UParticleSystem*                             PSTemplate;                                               // 0x00F4(0x0008) (Edit)
	TArray<struct FParticleSysParam>                   DefaultTrailParamList;                                    // 0x00FC(0x0010) (Edit, Component, NeedCtorLink)
	uint32_t                                           bSetTemplate : 1;                                         // 0x010C(0x0004)
	int                                                TrailSampledDataCount;                                    // 0x0110(0x0004) (Edit, EditConst)
	float                                              DistanceTessellationStepSize;                             // 0x0114(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_Trails");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_UIEventChecker
// 0x0014 (0x00E0 - 0x00CC)
class UEFActionNotify_UIEventChecker : public UEFAction_Notify
{
public:
	uint32_t                                           bInstant : 1;                                             // 0x00CC(0x0004) (Edit)
	uint32_t                                           bSyncAnimEnd : 1;                                         // 0x00CC(0x0004) (Edit)
	uint32_t                                           bChangeStageServer : 1;                                   // 0x00CC(0x0004) (Edit)
	int                                                NextStageIndex;                                           // 0x00D0(0x0004) (Edit)
	int                                                UIUnitIndex;                                              // 0x00D4(0x0004) (Edit)
	TEnumAsByte<EActionNotifyUIEventKey>               UIEventKey;                                               // 0x00D8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                SendServerSuccessValue;                                   // 0x00DC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_UIEventChecker");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_ViewShake
// 0x0028 (0x00F4 - 0x00CC)
class UEFActionNotify_ViewShake : public UEFAction_Notify
{
public:
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x00CC(0x0004) (Edit)
	uint32_t                                           bIgnoreAnimRate : 1;                                      // 0x00CC(0x0004)
	uint32_t                                           StopShakeOnNotifyEnd : 1;                                 // 0x00CC(0x0004) (Edit)
	uint32_t                                           ViewShakeSpawn : 1;                                       // 0x00CC(0x0004)
	float                                              SkipDistance;                                             // 0x00D0(0x0004) (Edit)
	class UEFCameraViewShake*                          NewViewShake;                                             // 0x00D4(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFCameraViewShakeAnim*                      NewViewShakeAnim;                                         // 0x00DC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FString                                     ViewShakePrefix;                                          // 0x00E4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_ViewShake");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAdditional
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAdditional : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetAdditionalType>              AdditionalType;                                           // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAdditional");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackCast
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackCast : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetAttackCastType>              AttackCastType;                                           // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackCast");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackCastLong
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackCastLong : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetAttackCastLongType>          AttackCastLongType;                                       // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackCastLong");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackExec
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackExec : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetAttackExecType>              AttackExecType;                                           // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackExec");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetAttackShot
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetAttackShot : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetAttackShotType>              AttackShotType;                                           // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetAttackShot");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetDamage
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetDamage : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetDamageType>                  DamageType;                                               // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetDamage");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetDeath
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetDeath : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetDeathType>                   DeathType;                                                // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetDeath");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetDown
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetDown : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetDownType>                    DownType;                                                 // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetDown");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetIdle
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetIdle : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetIdleType>                    IdleType;                                                 // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetIdle");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetRun
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetRun : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetRunType>                     RunType;                                                  // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetRun");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetSpawn
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetSpawn : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetSpawnType>                   SpawnType;                                                // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetSpawn");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetStandUp
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetStandUp : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetStandUpType>                 StandUpType;                                              // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetStandUp");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_VoiceSetWalk
// 0x0001 (0x00CD - 0x00CC)
class UEFActionNotify_VoiceSetWalk : public UEFAction_Notify
{
public:
	TEnumAsByte<EFVoiceSetWalkType>                    WalkType;                                                 // 0x00CC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_VoiceSetWalk");
		return ptr;
	}

};


// Class EFGame.EFActionNotify_WeaponMode
// 0x0004 (0x00D0 - 0x00CC)
class UEFActionNotify_WeaponMode : public UEFAction_Notify
{
public:
	uint32_t                                           EquipWhenStart : 1;                                       // 0x00CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionNotify_WeaponMode");
		return ptr;
	}

};


// Class EFGame.EFActionCondition
// 0x0030 (0x0088 - 0x0058)
class UEFActionCondition : public UObject
{
public:
	TArray<int>                                        OutputStageIndex;                                         // 0x0058(0x0010) (NeedCtorLink)
	TArray<struct FString>                             OutputStageDesc;                                          // 0x0068(0x0010) (NeedCtorLink)
	TArray<int>                                        ValidOutputStageIndex;                                    // 0x0078(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionCondition");
		return ptr;
	}

};


// Class EFGame.EFActionConditionAbility
// 0x0004 (0x008C - 0x0088)
class UEFActionConditionAbility : public UEFActionCondition
{
public:
	int                                                AbilityTypeCondition;                                     // 0x0088(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionAbility");
		return ptr;
	}

};


// Class EFGame.EFActionConditionAbnormal
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionAbnormal : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionAbnormal");
		return ptr;
	}

};


// Class EFGame.EFActionConditionAlreadyDie
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionAlreadyDie : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionAlreadyDie");
		return ptr;
	}

};


// Class EFGame.EFActionConditionBattleMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionBattleMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionBattleMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionBurrow
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionBurrow : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionBurrow");
		return ptr;
	}

};


// Class EFGame.EFActionConditionComaDuraion
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionComaDuraion : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionComaDuraion");
		return ptr;
	}

};


// Class EFGame.EFActionConditionDespawn
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionDespawn : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionDespawn");
		return ptr;
	}

};


// Class EFGame.EFActionConditionDespawnAnimIndex
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionDespawnAnimIndex : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionDespawnAnimIndex");
		return ptr;
	}

};


// Class EFGame.EFActionConditionDyingType
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionDyingType : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionDyingType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionForcedMove
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionForcedMove : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionForcedMove");
		return ptr;
	}

};


// Class EFGame.EFActionConditionGadgetExitType
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionGadgetExitType : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionGadgetExitType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionGadgetState
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionGadgetState : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionGadgetState");
		return ptr;
	}

};


// Class EFGame.EFActionConditionHitAdditive
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionHitAdditive : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionHitAdditive");
		return ptr;
	}

};


// Class EFGame.EFActionConditionHitReaction
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionHitReaction : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionHitReaction");
		return ptr;
	}

};


// Class EFGame.EFActionConditionIdentity
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionIdentity : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionIdentity");
		return ptr;
	}

};


// Class EFGame.EFActionConditionIsDeleteMe
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionIsDeleteMe : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionIsDeleteMe");
		return ptr;
	}

};


// Class EFGame.EFActionConditionLearnCommonActionEffectType
// 0x0001 (0x0089 - 0x0088)
class UEFActionConditionLearnCommonActionEffectType : public UEFActionCondition
{
public:
	TEnumAsByte<ECommonActionEffectType>               LearnCommonActionEffectType;                              // 0x0088(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionLearnCommonActionEffectType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionMoveAni
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionMoveAni : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionMoveAni");
		return ptr;
	}

};


// Class EFGame.EFActionConditionNpcStatus
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionNpcStatus : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionNpcStatus");
		return ptr;
	}

};


// Class EFGame.EFActionConditionPickupMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionPickupMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionPickupMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionPlayerClass
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionPlayerClass : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionPlayerClass");
		return ptr;
	}

};


// Class EFGame.EFActionConditionProbablity
// 0x0004 (0x008C - 0x0088)
class UEFActionConditionProbablity : public UEFActionCondition
{
public:
	int                                                Probability;                                              // 0x0088(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionProbablity");
		return ptr;
	}

};


// Class EFGame.EFActionConditionRandom
// 0x0010 (0x0098 - 0x0088)
class UEFActionConditionRandom : public UEFActionCondition
{
public:
	TArray<struct FName>                               ValidOutputStageAnimName;                                 // 0x0088(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionRandom");
		return ptr;
	}

};


// Class EFGame.EFActionConditionRidingMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionRidingMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionRidingMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSelectNpcIdleType
// 0x0010 (0x0098 - 0x0088)
class UEFActionConditionSelectNpcIdleType : public UEFActionCondition
{
public:
	TArray<struct FExceptionalNpcIdleData>             ExceptionalNpcIdleDataArray;                              // 0x0088(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSelectNpcIdleType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionShipAnchorMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionShipAnchorMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionShipAnchorMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionShipBoostMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionShipBoostMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionShipBoostMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSpawnAnimIndex
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionSpawnAnimIndex : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSpawnAnimIndex");
		return ptr;
	}

};


// Class EFGame.EFActionConditionSpawnType
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionSpawnType : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionSpawnType");
		return ptr;
	}

};


// Class EFGame.EFActionConditionStanceMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionStanceMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionStanceMode");
		return ptr;
	}

};


// Class EFGame.EFActionConditionStatusEffect
// 0x0008 (0x0090 - 0x0088)
class UEFActionConditionStatusEffect : public UEFActionCondition
{
public:
	int                                                AddedStatusEffectId;                                      // 0x0088(0x0004) (Edit)
	int                                                RemovedStatusEffectId;                                    // 0x008C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionStatusEffect");
		return ptr;
	}

};


// Class EFGame.EFActionConditionTakeDamage
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionTakeDamage : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionTakeDamage");
		return ptr;
	}

};


// Class EFGame.EFActionConditionWeaponMode
// 0x0000 (0x0088 - 0x0088)
class UEFActionConditionWeaponMode : public UEFActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionConditionWeaponMode");
		return ptr;
	}

};


// Class EFGame.EFActionObject
// 0x0054 (0x00AC - 0x0058)
class UEFActionObject : public UObject
{
public:
	int                                                ActionId;                                                 // 0x0058(0x0004) (Edit)
	struct FString                                     ActionName;                                               // 0x005C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	uint32_t                                           MergeActionStage : 1;                                     // 0x006C(0x0004) (Edit)
	uint32_t                                           bSetPerfectZoneInfo : 1;                                  // 0x006C(0x0004)
	TArray<struct FEFStageLayer>                       StageLayerList;                                           // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        ChargeSkillLayerIndexArray;                               // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FNpcPartInfo>                        NpcPartInfoArray;                                         // 0x0090(0x0010) (Edit, DuplicateTransient, NeedCtorLink)
	int                                                EditorSkillTierIndex1;                                    // 0x00A0(0x0004) (Edit, Transient)
	int                                                EditorSkillTierIndex2;                                    // 0x00A4(0x0004) (Edit, Transient)
	int                                                EditorSkillTierIndex3;                                    // 0x00A8(0x0004) (Edit, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionObject");
		return ptr;
	}

};


// Class EFGame.EFActionObjectGroup
// 0x00B0 (0x0108 - 0x0058)
class UEFActionObjectGroup : public UObject
{
public:
	struct FEFNPCIdleReferenceData                     NPCIdleReferenceData;                                     // 0x0058(0x0024) (NeedCtorLink)
	struct FString                                     Category;                                                 // 0x007C(0x0010) (Edit, NeedCtorLink)
	struct FString                                     GroupName;                                                // 0x008C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     PackageName;                                              // 0x009C(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)
	struct FString                                     LookInfoKey;                                              // 0x00AC(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<class UAnimSet*>                            ReferenceAnimSetList;                                     // 0x00BC(0x0010) (Edit, Transient, NeedCtorLink)
	struct FString                                     Comment;                                                  // 0x00CC(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	class UEFActionObjectGroup*                        Template;                                                 // 0x00DC(0x0008) (Edit, AlwaysInit)
	TArray<class UEFActionObject*>                     ActionList;                                               // 0x00E4(0x0010) (AlwaysInit, NeedCtorLink)
	uint32_t                                           bNpcPartInfoExport : 1;                                   // 0x00F4(0x0004) (Edit)
	uint32_t                                           SetStageTransitionInfoComplete : 1;                       // 0x00F4(0x0004)
	uint32_t                                           SetNpcDestructionPartsRadiusInfoComplete : 1;             // 0x00F4(0x0004)
	TArray<struct FEFActionGroupReference>             ActionGroupReferenceList;                                 // 0x00F8(0x0010) (Edit, Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionObjectGroup");
		return ptr;
	}

};


// Class EFGame.EFActionSkelControl
// 0x0014 (0x006C - 0x0058)
class UEFActionSkelControl : public UObject
{
public:
	uint32_t                                           Enable : 1;                                               // 0x0058(0x0004) (Edit)
	struct FName                                       AffectBoneName;                                           // 0x005C(0x0008) (Edit)
	class USkelControlBase*                            SkelControl;                                              // 0x0064(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionSkelControl");
		return ptr;
	}

};


// Class EFGame.EFActionStage
// 0x00C8 (0x0120 - 0x0058)
class UEFActionStage : public UObject
{
public:
	TArray<struct FEFSkill_NotifyGroup>                NotifyGroupList;                                          // 0x0058(0x0010) (AlwaysInit, NeedCtorLink)
	struct FEFSkill_NotifyGroup                        AnimGroup;                                                // 0x0068(0x0018) (NeedCtorLink)
	float                                              ViewPosX;                                                 // 0x0080(0x0004) (Edit)
	float                                              ViewPosY;                                                 // 0x0084(0x0004) (Edit)
	uint32_t                                           Differ : 1;                                               // 0x0088(0x0004)
	uint32_t                                           InfiniteStage : 1;                                        // 0x0088(0x0004) (Edit)
	uint32_t                                           AtkSpeedStage : 1;                                        // 0x0088(0x0004) (Edit)
	uint32_t                                           bTimingBarReverse : 1;                                    // 0x0088(0x0004) (Edit)
	uint32_t                                           bTestTimingBarCategory : 1;                               // 0x0088(0x0004) (Edit)
	uint32_t                                           EnableESCCancel : 1;                                      // 0x0088(0x0004) (Edit)
	uint32_t                                           EnableStageBuff : 1;                                      // 0x0088(0x0004) (Edit)
	uint32_t                                           bUseAimOffset : 1;                                        // 0x0088(0x0004) (Edit)
	uint32_t                                           bUsePreviousStageMouseTargetPos : 1;                      // 0x0088(0x0004) (Edit)
	uint32_t                                           AnimError : 1;                                            // 0x0088(0x0004)
	uint32_t                                           bNpcPartInfoExportStage : 1;                              // 0x0088(0x0004) (Edit)
	struct FString                                     StageName;                                                // 0x008C(0x0010) (Edit, NeedCtorLink)
	float                                              StageLength;                                              // 0x009C(0x0004) (Edit)
	float                                              StagePlayRate;                                            // 0x00A0(0x0004) (Edit)
	TEnumAsByte<EFSTAGE_TIMINGBARTYPE>                 TimingBarType;                                            // 0x00A4(0x0001) (Edit)
	TEnumAsByte<EFSTAGE_TIMINGBARTEXTTYPE>             TimingBarTextType;                                        // 0x00A5(0x0001) (Edit)
	TEnumAsByte<EFSTAGE_TIMINGBARCATEGORY>             TestTimingBarCategory;                                    // 0x00A6(0x0001) (Edit)
	TEnumAsByte<EFSTAGE_CHANGEDIRTYPE>                 StageChangeDirType;                                       // 0x00A7(0x0001) (Edit)
	TEnumAsByte<EFSTAGE_MOVEPOSTYPE>                   StageChangeMovePosType;                                   // 0x00A8(0x0001) (Edit)
	TEnumAsByte<ESkipCollidePawnType>                  SkipPawnCollision;                                        // 0x00A9(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	int                                                NextStageIndex;                                           // 0x00AC(0x0004) (Edit)
	int                                                StageBuffId;                                              // 0x00B0(0x0004) (Edit)
	float                                              StageChangeDirInterpolationTime;                          // 0x00B4(0x0004) (Edit)
	float                                              MovePosValue;                                             // 0x00B8(0x0004) (Edit)
	float                                              MovePosOffsetValue;                                       // 0x00BC(0x0004) (Edit)
	TArray<class UEFAction_Notify*>                    NotifyList;                                               // 0x00C0(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                AnimNotifyIndex;                                          // 0x00D0(0x0004)
	struct FVector                                     MaxRootMotionDelta;                                       // 0x00D4(0x000C) (Edit)
	struct FVector                                     MinRootMotionDelta;                                       // 0x00E0(0x000C) (Edit)
	float                                              RootMotionSampleTime;                                     // 0x00EC(0x0004) (Edit, DuplicateTransient)
	TArray<struct FVector>                             RootMotionSample;                                         // 0x00F0(0x0010) (Edit, DuplicateTransient, NeedCtorLink)
	TArray<int>                                        RootMotionRotationYawSample;                              // 0x0100(0x0010) (Edit, DuplicateTransient, NeedCtorLink)
	float                                              StageCancelTime;                                          // 0x0110(0x0004) (Edit, EditConst)
	struct FEFStageTransitionInfo                      StageTransitionInfo;                                      // 0x0114(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFActionStage");
		return ptr;
	}

};


// Class EFGame.EFMatineePathNode
// 0x002C (0x0298 - 0x026C)
class AEFMatineePathNode : public AActor
{
public:
	TArray<struct FMatineePathNodeConnection>          Connections;                                              // 0x026C(0x0010) (Edit, Component, NeedCtorLink)
	TArray<class AEFMatineePathNode*>                  LinksFrom;                                                // 0x027C(0x0010) (NeedCtorLink)
	struct FName                                       PathName;                                                 // 0x028C(0x0008) (Edit)
	struct FColor                                      LineColor;                                                // 0x0294(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMatineePathNode");
		return ptr;
	}


	void BreakAllConnectionsFrom();
	void BreakAllConnections();
	void BreakConnectionTo(class AEFMatineePathNode* NextActor);
	bool IsConnectedTo(class AEFMatineePathNode* NextActor);
	void AddConnectionTo(class AEFMatineePathNode* NextActor);
	void UpdateConnectedLineComponents(bool bFinish);
	void UpdateLineComponents();
};


// Class EFGame.EFGlobal
// 0x0000 (0x0058 - 0x0058)
class UEFGlobal : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGlobal");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummons
// 0x003C (0x01F0 - 0x01B4)
class UEFSequenceSummons : public USequence
{
public:
	struct FString                                     SummonsName;                                              // 0x01B4(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	int                                                SummonsID;                                                // 0x01C4(0x0004) (Edit)
	class UEFSequenceSummonsProjectile*                SequenceSummonsProjectile;                                // 0x01C8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFSequenceSummonsBase*>              NoneUseList;                                              // 0x01D0(0x0010) (ExportObject, AlwaysInit, NeedCtorLink, EditInline)
	int                                                EditorSkillTierIndex1;                                    // 0x01E0(0x0004) (Edit, Transient)
	int                                                EditorSkillTierIndex2;                                    // 0x01E4(0x0004) (Edit, Transient)
	int                                                EditorSkillTierIndex3;                                    // 0x01E8(0x0004) (Edit, Transient)
	uint32_t                                           EditorDirty : 1;                                          // 0x01EC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummons");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsBase
// 0x0014 (0x0140 - 0x012C)
class UEFSequenceSummonsBase : public USequenceOp
{
public:
	struct FString                                     SummonsDesc;                                              // 0x012C(0x0010) (Config, AlwaysInit, NeedCtorLink)
	uint32_t                                           IsExportSet : 1;                                          // 0x013C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsBase");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsAction
// 0x0018 (0x0158 - 0x0140)
class UEFSequenceSummonsAction : public UEFSequenceSummonsBase
{
public:
	TArray<class UEFSequenceSummonsAction*>            ActivateActionList;                                       // 0x0140(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TEnumAsByte<EFSummonsSummonProjectileUsePlatformType> ProjectileUsePlatform;                                    // 0x0150(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	uint32_t                                           IsUseProjectile_Missile : 1;                              // 0x0154(0x0004)
	uint32_t                                           IsUseProjectile_FixArea : 1;                              // 0x0154(0x0004)
	uint32_t                                           IsUseProjectile_Grenade : 1;                              // 0x0154(0x0004)
	uint32_t                                           IsUseProjectile_Trace : 1;                                // 0x0154(0x0004)
	uint32_t                                           IsTierCheckData : 1;                                      // 0x0154(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsAction");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionAccel
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionAccel : public UEFSequenceSummonsAction
{
public:
	uint32_t                                           bEnableAccel : 1;                                         // 0x0158(0x0004) (Edit)
	TEnumAsByte<EFSummonsAAType>                       AccelType;                                                // 0x015C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              AccelStartValue;                                          // 0x0160(0x0004) (Edit)
	float                                              AccelMaxSpeedElapseTime;                                  // 0x0164(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionAccel");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionAkEvent
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionAkEvent : public UEFSequenceSummonsAction
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x0158(0x0008) (Edit)
	uint32_t                                           bSwitchCharacterAKEvent : 1;                              // 0x0160(0x0004) (Edit)
	uint32_t                                           StopWhenBaseDestroy : 1;                                  // 0x0160(0x0004) (Edit)
	float                                              StopWhenBaseDestroyFadeTime;                              // 0x0164(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionAkEvent");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionAuraBuff
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionAuraBuff : public UEFSequenceSummonsAction
{
public:
	int                                                BuffID;                                                   // 0x0158(0x0004) (Edit)
	int                                                BuffID2;                                                  // 0x015C(0x0004) (Edit)
	float                                              Delay;                                                    // 0x0160(0x0004) (Edit)
	float                                              Lifetime;                                                 // 0x0164(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionAuraBuff");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionBankData
// 0x0040 (0x0198 - 0x0158)
class UEFSequenceSummonsActionBankData : public UEFSequenceSummonsAction
{
public:
	TArray<struct FEFSequenceSummonsActionBankDataParticle> ParticleDatas;                                            // 0x0158(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FEFSequenceSummonsActionBankDataFloatValue> FloatValueDatas;                                          // 0x0168(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FEFSequenceSummonsActionBankDataBOOLValue> BOOLValueDatas;                                           // 0x0178(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FEFSequenceSummonsActionBankDataMultiUseValueDataArray> SkillEffectMultiUseArrayDataArray;                        // 0x0188(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionBankData");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionCameraShake
// 0x000C (0x0164 - 0x0158)
class UEFSequenceSummonsActionCameraShake : public UEFSequenceSummonsAction
{
public:
	uint32_t                                           ApplySelfOnly : 1;                                        // 0x0158(0x0004) (Edit)
	class UEFCameraViewShake*                          NewViewShake;                                             // 0x015C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionCameraShake");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionCreateFX
// 0x0008 (0x0160 - 0x0158)
class UEFSequenceSummonsActionCreateFX : public UEFSequenceSummonsAction
{
public:
	class UEFProjectileParticleData*                   ParticleData;                                             // 0x0158(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionCreateFX");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionPostProcessChainTimeVarying
// 0x000C (0x0164 - 0x0158)
class UEFSequenceSummonsActionPostProcessChainTimeVarying : public UEFSequenceSummonsAction
{
public:
	uint32_t                                           bUseOnlyLocalPlayer : 1;                                  // 0x0158(0x0004) (Edit)
	class UEFPostProcessMaterialEffectSkill*           ProcessMaterialData;                                      // 0x015C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionPostProcessChainTimeVarying");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSetSkeletalMesh
// 0x008C (0x01E4 - 0x0158)
class UEFSequenceSummonsActionSetSkeletalMesh : public UEFSequenceSummonsAction
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponentData;                                // 0x0158(0x0008) (ExportObject, Component, EditInline, Deprecated)
	class USkeletalMesh*                               SkeletalMeshData;                                         // 0x0160(0x0008) (Edit)
	TArray<class UAnimSet*>                            AnimSets;                                                 // 0x0168(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PlayAniName;                                              // 0x0178(0x0010) (Edit, NeedCtorLink)
	float                                              AnimPlayRate;                                             // 0x0188(0x0004) (Edit)
	float                                              AnimPlayStartTime;                                        // 0x018C(0x0004) (Edit)
	struct FVector                                     RelativeScale;                                            // 0x0190(0x000C) (Edit)
	struct FVector                                     Translation;                                              // 0x019C(0x000C) (Edit)
	struct FVector                                     Rotation;                                                 // 0x01A8(0x000C) (Edit)
	uint32_t                                           bAniChange : 1;                                           // 0x01B4(0x0004) (Edit)
	uint32_t                                           bAnimIsLoop : 1;                                          // 0x01B4(0x0004) (Edit)
	uint32_t                                           IsTrailParticleRemove : 1;                                // 0x01B4(0x0004) (Edit)
	uint32_t                                           bApplyFxArleadySkeletalMesh : 1;                          // 0x01B4(0x0004) (Edit)
	uint32_t                                           IsCollisionResize : 1;                                    // 0x01B4(0x0004) (Edit, Const, EditConst)
	uint32_t                                           bDeleteAleardyProjectileActionSkeletalMeshMaterialParameterArray : 1;// 0x01B4(0x0004) (Edit)
	class UEFProjectileParticleData*                   AppearParticleData;                                       // 0x01B8(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFProjectileParticleData*>           AttachParticleDataArray;                                  // 0x01C0(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              CollisionReSize;                                          // 0x01D0(0x0004) (Edit, Const, EditConst)
	TArray<struct FEFProjectileActionSkeletalMeshMaterialParameter> EFProjectileActionSkeletalMeshMaterialParameterArray;     // 0x01D4(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSetSkeletalMesh");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSkeletalMeshFX
// 0x00B4 (0x020C - 0x0158)
class UEFSequenceSummonsActionSkeletalMeshFX : public UEFSequenceSummonsAction
{
public:
	struct FPlaySkeletalMeshActor                      SkeletalMeshActors;                                       // 0x0158(0x00B4) (Edit, ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSkeletalMeshFX");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSkeletalMeshFXMaterialParam
// 0x0050 (0x01A8 - 0x0158)
class UEFSequenceSummonsActionSkeletalMeshFXMaterialParam : public UEFSequenceSummonsAction
{
public:
	struct FString                                     ActionNotifyTag;                                          // 0x0158(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FActionNotify_SM_AnimEventData              AnimEventData;                                            // 0x0168(0x0040) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSkeletalMeshFXMaterialParam");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionSkillEffect
// 0x0009 (0x0161 - 0x0158)
class UEFSequenceSummonsActionSkillEffect : public UEFSequenceSummonsAction
{
public:
	int                                                SkillEffectId;                                            // 0x0158(0x0004) (Edit)
	int                                                SkillEffectCheckCount;                                    // 0x015C(0x0004) (Edit)
	unsigned char                                      UniqueId;                                                 // 0x0160(0x0001) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionSkillEffect");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionTimer
// 0x0010 (0x0168 - 0x0158)
class UEFSequenceSummonsActionTimer : public UEFSequenceSummonsAction
{
public:
	float                                              EventDelay;                                               // 0x0158(0x0004) (Edit)
	int                                                EventCount;                                               // 0x015C(0x0004) (Edit)
	float                                              EventTerm;                                                // 0x0160(0x0004) (Edit)
	uint32_t                                           StopWhenBaseDestroy : 1;                                  // 0x0164(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionTimer");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsCondition
// 0x0020 (0x0178 - 0x0158)
class UEFSequenceSummonsCondition : public UEFSequenceSummonsAction
{
public:
	TArray<class UEFSequenceSummonsAction*>            ifActionList;                                             // 0x0158(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFSequenceSummonsAction*>            elseActionList;                                           // 0x0168(0x0010) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsCondition");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionTierChecker
// 0x0010 (0x0188 - 0x0178)
class UEFSequenceSummonsActionTierChecker : public UEFSequenceSummonsCondition
{
public:
	TArray<struct FEFSequenceSummonsActionTierCheckerData> EFSequenceSummonsActionTierCheckerDataArray;              // 0x0178(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionTierChecker");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsActionTierChecker4BankData
// 0x0000 (0x0188 - 0x0188)
class UEFSequenceSummonsActionTierChecker4BankData : public UEFSequenceSummonsActionTierChecker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsActionTierChecker4BankData");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsComment
// 0x0038 (0x0178 - 0x0140)
class UEFSequenceSummonsComment : public UEFSequenceSummonsBase
{
public:
	struct FString                                     Comment;                                                  // 0x0140(0x0010) (Edit, NeedCtorLink)
	int                                                SizeX;                                                    // 0x0150(0x0004) (Edit)
	int                                                SizeY;                                                    // 0x0154(0x0004) (Edit)
	int                                                BorderWidth;                                              // 0x0158(0x0004) (Edit)
	uint32_t                                           bDrawBox : 1;                                             // 0x015C(0x0004) (Edit)
	uint32_t                                           bFilled : 1;                                              // 0x015C(0x0004) (Edit)
	uint32_t                                           bTileFill : 1;                                            // 0x015C(0x0004) (Edit)
	struct FColor                                      BorderColor;                                              // 0x0160(0x0004) (Edit)
	struct FColor                                      FillColor;                                                // 0x0164(0x0004) (Edit)
	class UTexture2D*                                  FillTexture;                                              // 0x0168(0x0008) (Edit)
	class UMaterial*                                   FillMaterial;                                             // 0x0170(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsComment");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectile
// 0x008C (0x01CC - 0x0140)
class UEFSequenceSummonsProjectile : public UEFSequenceSummonsBase
{
public:
	uint32_t                                           LocalControl : 1;                                         // 0x0140(0x0004) (Edit)
	uint32_t                                           DestroyWhenSkillEnd : 1;                                  // 0x0140(0x0004) (Edit)
	uint32_t                                           DestroyWhenSkillStageEnd : 1;                             // 0x0140(0x0004) (Edit)
	uint32_t                                           IsMoveableProjectile : 1;                                 // 0x0140(0x0004) (Const, EditConst)
	uint32_t                                           FixRotation : 1;                                          // 0x0140(0x0004) (Edit)
	uint32_t                                           Penerate : 1;                                             // 0x0140(0x0004) (Edit)
	uint32_t                                           CollisionPreCheck : 1;                                    // 0x0140(0x0004) (Edit)
	float                                              CreateDelay;                                              // 0x0144(0x0004) (Edit)
	int                                                UniqueGroupIndex;                                         // 0x0148(0x0004) (Edit)
	int                                                MaxIdentityGaugeRecoveryCount;                            // 0x014C(0x0004) (Edit)
	TEnumAsByte<EFSummonsATSelect>                     TargetSelectType;                                         // 0x0150(0x0001) (Edit)
	TEnumAsByte<EFSummonsHitCheckType>                 HitCheckType;                                             // 0x0151(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	class UEFProjectileParticleData*                   TrailParticleData;                                        // 0x0154(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFProjectileParticleData*                   ExplodeParticleData;                                      // 0x015C(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFProjectileParticleData*                   EnvExplodeParticleData;                                   // 0x0164(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              ResScale;                                                 // 0x016C(0x0004) (Edit)
	float                                              CollisionSize;                                            // 0x0170(0x0004) (Edit)
	float                                              CollisionSize_HeightClientOnly;                           // 0x0174(0x0004) (Edit)
	int                                                Speed;                                                    // 0x0178(0x0004) (Edit)
	int                                                MaxSpeed;                                                 // 0x017C(0x0004) (Edit)
	float                                              Lifetime;                                                 // 0x0180(0x0004) (Edit)
	int                                                MaxDistance;                                              // 0x0184(0x0004) (Edit)
	int                                                MaxApplyCount;                                            // 0x0188(0x0004) (Edit)
	TArray<class UEFSequenceSummonsAction*>            StartActionList;                                          // 0x018C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFSequenceSummonsAction*>            HitActionList;                                            // 0x019C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFSequenceSummonsAction*>            EndActionList;                                            // 0x01AC(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class UEFSequenceSummonsAction*>            BGCollisionActionList;                                    // 0x01BC(0x0010) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectile");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileFixArea
// 0x005C (0x0228 - 0x01CC)
class UEFSequenceSummonsProjectileFixArea : public UEFSequenceSummonsProjectile
{
public:
	class UEFProjectileParticleData*                   StartFXParticleData;                                      // 0x01CC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFProjectileParticleData*                   StartDecalParticleData;                                   // 0x01D4(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<struct FEFSummonsFixAreaStartIndexDecal>    StartIndexDecalDatas;                                     // 0x01DC(0x0010) (Edit, ExportObject, AlwaysInit, NeedCtorLink, EditInline)
	class UEFProjectileParticleData*                   LoopFXParticleData;                                       // 0x01EC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UEFProjectileParticleData*                   LoopDecalParticleData;                                    // 0x01F4(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              fLoopFXStartTime;                                         // 0x01FC(0x0004) (Edit)
	uint32_t                                           bDecalOverPrevent : 1;                                    // 0x0200(0x0004) (Edit)
	uint32_t                                           bInitialLocGround : 1;                                    // 0x0200(0x0004) (Edit)
	float                                              fDecalFadeOutTime;                                        // 0x0204(0x0004) (Edit)
	struct FRotator                                    RandomRotateMin;                                          // 0x0208(0x000C) (Edit)
	struct FRotator                                    RandomRotateMax;                                          // 0x0214(0x000C) (Edit)
	struct FEFSummonsJudgmentRotation                  JudgmentRotation;                                         // 0x0220(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileFixArea");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileGrenade
// 0x0014 (0x01E0 - 0x01CC)
class UEFSequenceSummonsProjectileGrenade : public UEFSequenceSummonsProjectile
{
public:
	int                                                GrenadeMinHeight;                                         // 0x01CC(0x0004) (Edit)
	int                                                GrenadeMaxHeight;                                         // 0x01D0(0x0004) (Edit)
	float                                              GrenadeMaxheightRatio;                                    // 0x01D4(0x0004) (Edit)
	float                                              GrenadeMaxheightStartDist;                                // 0x01D8(0x0004) (Edit)
	float                                              StandardDistance;                                         // 0x01DC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileGrenade");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileMissile
// 0x0014 (0x01E0 - 0x01CC)
class UEFSequenceSummonsProjectileMissile : public UEFSequenceSummonsProjectile
{
public:
	class UEFProjectileParticleData*                   NaturalDieParticleData;                                   // 0x01CC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	uint32_t                                           bUseAttachHitParticle : 1;                                // 0x01D4(0x0004) (Edit)
	uint32_t                                           bIsIgnoreBGround : 1;                                     // 0x01D4(0x0004) (Edit)
	struct FEFSummonsJudgmentRotation                  JudgmentRotation;                                         // 0x01D8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileMissile");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsProjectileTrace
// 0x0028 (0x01F4 - 0x01CC)
class UEFSequenceSummonsProjectileTrace : public UEFSequenceSummonsProjectile
{
public:
	class UEFProjectileParticleData*                   NaturalDieParticleData;                                   // 0x01CC(0x0008) (Edit, ExportObject, NeedCtorLink, EditInline)
	uint32_t                                           bIsIgnoreBGround : 1;                                     // 0x01D4(0x0004) (Edit)
	TEnumAsByte<ETraceProjectileStartMoveType>         StartMoveType;                                            // 0x01D8(0x0001) (Edit)
	TEnumAsByte<ETraceProjectileEndMoveType>           EndMoveType;                                              // 0x01D9(0x0001) (Edit)
	TEnumAsByte<ETraceProjectileTargetSelectType>      TraceTargetSelectType;                                    // 0x01DA(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01DB(0x0001) MISSED OFFSET
	float                                              TurnVelocity;                                             // 0x01DC(0x0004) (Edit)
	float                                              TargetSearchStartTime;                                    // 0x01E0(0x0004) (Edit)
	float                                              TargetSearchRadius;                                       // 0x01E4(0x0004) (Edit)
	float                                              TargetSearchAngle;                                        // 0x01E8(0x0004) (Edit)
	float                                              TraceGiveUpRadius;                                        // 0x01EC(0x0004) (Edit)
	float                                              TraceDuration;                                            // 0x01F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsProjectileTrace");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsData
// 0x0008 (0x0060 - 0x0058)
class UEFSequenceSummonsData : public UObject
{
public:
	class USequence*                                   SummonsSequence;                                          // 0x0058(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsData");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsEditorFilter
// 0x0010 (0x01C4 - 0x01B4)
class UEFSequenceSummonsEditorFilter : public USequence
{
public:
	TArray<struct FSummonsEditorFilterData>            SubFilters;                                               // 0x01B4(0x0010) (ExportObject, AlwaysInit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsEditorFilter");
		return ptr;
	}

};


// Class EFGame.EFSequenceSummonsEditorFilterData
// 0x0034 (0x01E8 - 0x01B4)
class UEFSequenceSummonsEditorFilterData : public USequence
{
public:
	struct FString                                     FilterName;                                               // 0x01B4(0x0010) (Edit, Transient, AlwaysInit, NeedCtorLink)
	uint32_t                                           UnkownFilter : 1;                                         // 0x01C4(0x0004) (Transient, AlwaysInit)
	TArray<class UEFSequenceSummons*>                  summons;                                                  // 0x01C8(0x0010) (ExportObject, Transient, AlwaysInit, NeedCtorLink, EditInline)
	TArray<class UEFSequenceSummonsEditorFilterData*>  SubFilters;                                               // 0x01D8(0x0010) (ExportObject, Transient, AlwaysInit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSequenceSummonsEditorFilterData");
		return ptr;
	}

};


// Class EFGame.EFInterpGroupGameOption
// 0x0010 (0x0068 - 0x0058)
class UEFInterpGroupGameOption : public UObject
{
public:
	struct FString                                     Comment;                                                  // 0x0058(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpGroupGameOption");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAnimBlendingControl
// 0x0008 (0x0104 - 0x00FC)
class UEFInterpTrackAnimBlendingControl : public UInterpTrackAnimControl
{
public:
	float                                              BeginBlendTime;                                           // 0x00FC(0x0004) (Edit)
	float                                              EndBlendTime;                                             // 0x0100(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAnimBlendingControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAnimNodeBlendWeight
// 0x000C (0x00E4 - 0x00D8)
class UEFInterpTrackAnimNodeBlendWeight : public UInterpTrackSkelControlStrength
{
public:
	struct FName                                       AnimNodeBlendName;                                        // 0x00D8(0x0008) (Edit)
	float                                              EndAnimBlendTime;                                         // 0x00E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAnimNodeBlendWeight");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendBase
// 0x0000 (0x0058 - 0x0058)
class UEFInterpTrackAutoBlendBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendBase");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendColorProp
// 0x0010 (0x00E8 - 0x00D8)
class UEFInterpTrackAutoBlendColorProp : public UInterpTrackColorProp
{
public:
	struct FPointer                                    VfTable_IEFInterpTrackAutoBlendBase;                      // 0x00D8(0x0008) (Const, Native, NoExport)
	float                                              BlendInTimeFromOriginal;                                  // 0x00E0(0x0004) (Edit)
	float                                              BlendOutTimeToOriginal;                                   // 0x00E4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendColorProp");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendFloatProp
// 0x0010 (0x00E8 - 0x00D8)
class UEFInterpTrackAutoBlendFloatProp : public UInterpTrackFloatProp
{
public:
	struct FPointer                                    VfTable_IEFInterpTrackAutoBlendBase;                      // 0x00D8(0x0008) (Const, Native, NoExport)
	float                                              BlendInTimeFromOriginal;                                  // 0x00E0(0x0004) (Edit)
	float                                              BlendOutTimeToOriginal;                                   // 0x00E4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendFloatProp");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackAutoBlendVectorProp
// 0x0010 (0x00E8 - 0x00D8)
class UEFInterpTrackAutoBlendVectorProp : public UInterpTrackVectorProp
{
public:
	struct FPointer                                    VfTable_IEFInterpTrackAutoBlendBase;                      // 0x00D8(0x0008) (Const, Native, NoExport)
	float                                              BlendInTimeFromOriginal;                                  // 0x00E0(0x0004) (Edit)
	float                                              BlendOutTimeToOriginal;                                   // 0x00E4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackAutoBlendVectorProp");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstAnimBlendingControl
// 0x0020 (0x0098 - 0x0078)
class UEFInterpTrackInstAnimBlendingControl : public UInterpTrackInstAnimControl
{
public:
	struct FName                                       BeginBlendingAnimName;                                    // 0x0078(0x0008) (Transient)
	struct FName                                       EndBlendingAnimName;                                      // 0x0080(0x0008) (Transient)
	float                                              BeginAnimStartTime;                                       // 0x0088(0x0004) (Transient)
	float                                              BeginAnimTime;                                            // 0x008C(0x0004) (Transient)
	float                                              EndAnimTime;                                              // 0x0090(0x0004) (Transient)
	float                                              CurrentWeight;                                            // 0x0094(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstAnimBlendingControl");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstAnimNodeBlendWeight
// 0x0000 (0x005C - 0x005C)
class UEFInterpTrackInstAnimNodeBlendWeight : public UInterpTrackInstSkelControlStrength
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstAnimNodeBlendWeight");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstPlayerClassAkEvent
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstPlayerClassAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstPlayerClassAkEvent");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSkelControlMulti
// 0x0010 (0x0068 - 0x0058)
class UEFInterpTrackInstSkelControlMulti : public UInterpTrackInst
{
public:
	TArray<uint32_t>                                   SavedControlledByAnimMetaDataList;                        // 0x0058(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSkelControlMulti");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSkelControlVector
// 0x0060 (0x00B8 - 0x0058)
class UEFInterpTrackInstSkelControlVector : public UInterpTrackInst
{
public:
	TArray<uint32_t>                                   AnimMetaDataFlagList_PositiveX;                           // 0x0058(0x0010) (Transient, NeedCtorLink)
	TArray<uint32_t>                                   AnimMetaDataFlagList_NegativeX;                           // 0x0068(0x0010) (Transient, NeedCtorLink)
	TArray<uint32_t>                                   AnimMetaDataFlagList_PositiveY;                           // 0x0078(0x0010) (Transient, NeedCtorLink)
	TArray<uint32_t>                                   AnimMetaDataFlagList_NegativeY;                           // 0x0088(0x0010) (Transient, NeedCtorLink)
	TArray<uint32_t>                                   AnimMetaDataFlagList_PositiveZ;                           // 0x0098(0x0010) (Transient, NeedCtorLink)
	TArray<uint32_t>                                   AnimMetaDataFlagList_NegativeZ;                           // 0x00A8(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSkelControlVector");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSoundSet
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstSoundSet : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSoundSet");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSubtitle
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstSubtitle : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSubtitle");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstSubtitleBalloon
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstSubtitleBalloon : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstSubtitleBalloon");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstVectorParticleParam
// 0x000C (0x0064 - 0x0058)
class UEFInterpTrackInstVectorParticleParam : public UInterpTrackInst
{
public:
	struct FVector                                     ResetVector;                                              // 0x0058(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstVectorParticleParam");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackInstVoiceSet
// 0x0004 (0x005C - 0x0058)
class UEFInterpTrackInstVoiceSet : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackInstVoiceSet");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackPlayerClassAkEvent
// 0x0010 (0x00C8 - 0x00B8)
class UEFInterpTrackPlayerClassAkEvent : public UInterpTrack
{
public:
	TArray<struct FEFPlayerClassAkEventTrackKey>       AkEvents;                                                 // 0x00B8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackPlayerClassAkEvent");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSkelControlMulti
// 0x0010 (0x00E0 - 0x00D0)
class UEFInterpTrackSkelControlMulti : public UInterpTrackFloatBase
{
public:
	TArray<struct FName>                               SkelControlNameList;                                      // 0x00D0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSkelControlMulti");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSkelControlVector
// 0x0060 (0x0130 - 0x00D0)
class UEFInterpTrackSkelControlVector : public UInterpTrackVectorBase
{
public:
	TArray<struct FName>                               SKelControlNameList_PositiveX;                            // 0x00D0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FName>                               SKelControlNameList_NegativeX;                            // 0x00E0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FName>                               SKelControlNameList_PositiveY;                            // 0x00F0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FName>                               SKelControlNameList_NegativeY;                            // 0x0100(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FName>                               SKelControlNameList_PositiveZ;                            // 0x0110(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FName>                               SKelControlNameList_NegativeZ;                            // 0x0120(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSkelControlVector");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSoundSet
// 0x0010 (0x00C8 - 0x00B8)
class UEFInterpTrackSoundSet : public UInterpTrack
{
public:
	TArray<struct FEFInterpTrackSoundSetInfo>          SoundSets;                                                // 0x00B8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSoundSet");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSubtitle
// 0x002C (0x00E4 - 0x00B8)
class UEFInterpTrackSubtitle : public UInterpTrack
{
public:
	TArray<struct FEFSubtitleInfo>                     SubtitleInfoArr;                                          // 0x00B8(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<ESubtitleDisplayMethod>                SubtitleDisplayMethod;                                    // 0x00C8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FEFFacialAnimInfo                           FacialAnimInfo;                                           // 0x00CC(0x0010) (Edit)
	uint32_t                                           bApplyFacialAnim : 1;                                     // 0x00DC(0x0004) (Transient)
	int                                                PrevKeyIndex;                                             // 0x00E0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSubtitle");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackSubtitleBalloon
// 0x002C (0x00E4 - 0x00B8)
class UEFInterpTrackSubtitleBalloon : public UInterpTrack
{
public:
	TArray<struct FEFSubtitleBalloonInfo>              SubtitleBalloonInfoArr;                                   // 0x00B8(0x0010) (Edit, NeedCtorLink)
	int                                                GroupActorIndex;                                          // 0x00C8(0x0004) (Transient)
	struct FEFFacialAnimInfo                           FacialAnimInfo;                                           // 0x00CC(0x0010) (Edit)
	uint32_t                                           bApplyFacialAnim : 1;                                     // 0x00DC(0x0004) (Transient)
	int                                                PrevKeyIndex;                                             // 0x00E0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackSubtitleBalloon");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackVectorParticleParam
// 0x0008 (0x00D8 - 0x00D0)
class UEFInterpTrackVectorParticleParam : public UInterpTrackVectorBase
{
public:
	struct FName                                       ParamName;                                                // 0x00D0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackVectorParticleParam");
		return ptr;
	}

};


// Class EFGame.EFInterpTrackVoiceSet
// 0x0010 (0x00C8 - 0x00B8)
class UEFInterpTrackVoiceSet : public UInterpTrack
{
public:
	TArray<struct FEFInterpTrackVoiceSetInfo>          VoiceSets;                                                // 0x00B8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInterpTrackVoiceSet");
		return ptr;
	}

};


// Class EFGame.EFTexture2D
// 0x001C (0x0248 - 0x022C)
class UEFTexture2D : public UTexture2D
{
public:
	uint32_t                                           bAtlas : 1;                                               // 0x022C(0x0004) (Edit)
	TArray<struct FEFTexture2DHitPixel>                HitTestPixelArray;                                        // 0x0230(0x0010) (EditConst, NeedCtorLink)
	int                                                EachWidth;                                                // 0x0240(0x0004) (Edit, EditConst)
	int                                                EachHeight;                                               // 0x0244(0x0004) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTexture2D");
		return ptr;
	}

};


// Class EFGame.EFTextureRenderTarget
// 0x000C (0x0158 - 0x014C)
class UEFTextureRenderTarget : public UTextureRenderTarget2D
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x014C(0x0008) (Const, Native, NoExport)
	uint32_t                                           bResizeToFitViewport : 1;                                 // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTextureRenderTarget");
		return ptr;
	}

};


// Class EFGame.EFTextureWeb
// 0x000B (0x012F - 0x0124)
class UEFTextureWeb : public UTexture
{
public:
	int                                                SizeX;                                                    // 0x0124(0x0004) (Const)
	int                                                SizeY;                                                    // 0x0128(0x0004) (Const)
	TEnumAsByte<EPixelFormat>                          Format;                                                   // 0x012C(0x0001) (Const)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x012D(0x0001) (Edit)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x012E(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTextureWeb");
		return ptr;
	}

};


// Class EFGame.EFMinimapData
// 0x0054 (0x00AC - 0x0058)
class UEFMinimapData : public UObject
{
public:
	int                                                ZoneID;                                                   // 0x0058(0x0004)
	TArray<class AEFMinimapVolume*>                    MinimapVolumes;                                           // 0x005C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class AEFMinimapVolume*>                    IndoorLinkVolumes;                                        // 0x006C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class AEFInDoorVolume*>                     IndoorVolumes;                                            // 0x007C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class AEFExpandedMinimapVolume*>            ExMinimapVolumes;                                         // 0x008C(0x0010) (ExportObject, NeedCtorLink, EditInline)
	TArray<class AEFVoyagemapVolume*>                  VoyagemapVolumes;                                         // 0x009C(0x0010) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMinimapData");
		return ptr;
	}

};


// Class EFGame.EFExpandedMinimapVolume
// 0x0050 (0x0300 - 0x02B0)
class AEFExpandedMinimapVolume : public AEFVolume
{
public:
	int                                                VolumeIndex;                                              // 0x02B0(0x0004) (Edit, EditConst, DuplicateTransient)
	struct FString                                     PackageName;                                              // 0x02B4(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FString                                     GroupName;                                                // 0x02C4(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     TextureName;                                              // 0x02D4(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)
	struct FBox                                        BoundingBox;                                              // 0x02E4(0x001C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFExpandedMinimapVolume");
		return ptr;
	}

};


// Class EFGame.EFInDoorVolume
// 0x002C (0x02DC - 0x02B0)
class AEFInDoorVolume : public AEFVolume
{
public:
	int                                                VolumeIndex;                                              // 0x02B0(0x0004) (Edit, EditConst, DuplicateTransient)
	int                                                MinimapVolumeIndex;                                       // 0x02B4(0x0004) (Edit, EditConst, DuplicateTransient)
	class AEFMinimapVolume*                            MinimapVolume;                                            // 0x02B8(0x0008) (Edit, DuplicateTransient)
	struct FBox                                        BoundingBox;                                              // 0x02C0(0x001C) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFInDoorVolume");
		return ptr;
	}

};


// Class EFGame.EFMinimapVolume
// 0x0090 (0x0340 - 0x02B0)
class AEFMinimapVolume : public AEFVolume
{
public:
	int                                                VolumeIndex;                                              // 0x02B0(0x0004) (Edit, EditConst, DuplicateTransient)
	int                                                UnitWidth;                                                // 0x02B4(0x0004) (Edit, EditConst)
	int                                                UnitHeight;                                               // 0x02B8(0x0004) (Edit, EditConst)
	int                                                VolumeCutSize;                                            // 0x02BC(0x0004) (Edit)
	struct FString                                     PackageName;                                              // 0x02C0(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FString                                     GroupName;                                                // 0x02D0(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     FullTextureName;                                          // 0x02E0(0x0010) (Edit, EditConst, AlwaysInit, NeedCtorLink)
	TArray<struct FMinimapPeiceInfo>                   PieceInfos;                                               // 0x02F0(0x0010) (Edit, EditFixedSize, AlwaysInit, NeedCtorLink)
	struct FBox                                        BoundingBox;                                              // 0x0300(0x001C) (Edit)
	int                                                InDoorVolumeIndex;                                        // 0x031C(0x0004) (Edit, EditConst, DuplicateTransient)
	class AEFInDoorVolume*                             InDoorVolume;                                             // 0x0320(0x0008) (Edit, DuplicateTransient)
	uint32_t                                           bUseIndoorExMinimap : 1;                                  // 0x0328(0x0004) (Edit)
	uint32_t                                           bDefaultFloor : 1;                                        // 0x0328(0x0004) (Edit)
	int                                                Floor;                                                    // 0x032C(0x0004) (Edit)
	struct FString                                     FloorName;                                                // 0x0330(0x0010) (Edit, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFMinimapVolume");
		return ptr;
	}

};


// Class EFGame.EFVoyagemapVolume
// 0x0004 (0x0344 - 0x0340)
class AEFVoyagemapVolume : public AEFMinimapVolume
{
public:
	int                                                VolumeHeightCutSize;                                      // 0x0340(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFVoyagemapVolume");
		return ptr;
	}

};


// Class EFGame.EFTriggerDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFTriggerDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFTriggerDataDefine");
		return ptr;
	}

};


// Class EFGame.EFQuestDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFQuestDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFQuestDataDefine");
		return ptr;
	}

};


// Class EFGame.EFNPCFunctionDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFNPCFunctionDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFNPCFunctionDataDefine");
		return ptr;
	}

};


// Class EFGame.EFUIDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFUIDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFUIDataDefine");
		return ptr;
	}

};


// Class EFGame.EFLookInfoDataDefine
// 0x0000 (0x0058 - 0x0058)
class UEFLookInfoDataDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFLookInfoDataDefine");
		return ptr;
	}

};


// Class EFGame.EFConst
// 0x0000 (0x0058 - 0x0058)
class UEFConst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFConst");
		return ptr;
	}

};


// Class EFGame.EFGFxHUDWrapper
// 0x0000 (0x058C - 0x058C)
class AEFGFxHUDWrapper : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFGFxHUDWrapper");
		return ptr;
	}


	void PostRender();
	void PostBeginPlay();
	void Destroyed();
};


// Class EFGame.EFSeqAct_SetPostProcessEffectProperties
// 0x0008 (0x0160 - 0x0158)
class UEFSeqAct_SetPostProcessEffectProperties : public USequenceAction
{
public:
	struct FName                                       PostProcessEffectName;                                    // 0x0158(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetPostProcessEffectProperties");
		return ptr;
	}


	void GetPostProcessEffects(class UClass* MatchingPostProcessEffectClass, TArray<class UPostProcessEffect*>* PostProcessEffects);
};


// Class EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties
// 0x0054 (0x01B4 - 0x0160)
class UEFSeqAct_SetAmbientOcclusionEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	struct FLinearColor                                OcclusionColor;                                           // 0x0160(0x0010) (Edit)
	float                                              OcclusionPower;                                           // 0x0170(0x0004) (Edit)
	float                                              OcclusionScale;                                           // 0x0174(0x0004) (Edit)
	float                                              OcclusionBias;                                            // 0x0178(0x0004) (Edit)
	float                                              MinOcclusion;                                             // 0x017C(0x0004) (Edit)
	uint32_t                                           bAngleBasedSSAO : 1;                                      // 0x0180(0x0004) (Edit)
	float                                              OcclusionRadius;                                          // 0x0184(0x0004) (Edit)
	TEnumAsByte<EAmbientOcclusionQuality>              OcclusionQuality;                                         // 0x0188(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              OcclusionFadeoutMinDistance;                              // 0x018C(0x0004) (Edit)
	float                                              OcclusionFadeoutMaxDistance;                              // 0x0190(0x0004) (Edit)
	float                                              HaloDistanceThreshold;                                    // 0x0194(0x0004) (Edit)
	float                                              HaloDistanceScale;                                        // 0x0198(0x0004) (Edit)
	float                                              HaloOcclusion;                                            // 0x019C(0x0004) (Edit)
	float                                              EdgeDistanceThreshold;                                    // 0x01A0(0x0004) (Edit)
	float                                              EdgeDistanceScale;                                        // 0x01A4(0x0004) (Edit)
	float                                              FilterDistanceScale;                                      // 0x01A8(0x0004) (Edit)
	float                                              HistoryConvergenceTime;                                   // 0x01AC(0x0004) (Edit)
	float                                              HistoryWeightConvergenceTime;                             // 0x01B0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetBlurEffectProperties
// 0x0004 (0x0164 - 0x0160)
class UEFSeqAct_SetBlurEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	float                                              BlurKernelSize;                                           // 0x0160(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetBlurEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetDOFEffectProperties
// 0x002C (0x018C - 0x0160)
class UEFSeqAct_SetDOFEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	float                                              FalloffExponent;                                          // 0x0160(0x0004) (Edit)
	float                                              BlurKernelSize;                                           // 0x0164(0x0004) (Edit)
	float                                              MaxNearBlurAmount;                                        // 0x0168(0x0004) (Edit)
	float                                              MinBlurAmount;                                            // 0x016C(0x0004) (Edit)
	float                                              MaxFarBlurAmount;                                         // 0x0170(0x0004) (Edit)
	TEnumAsByte<EFocusType>                            FocusType;                                                // 0x0174(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              FocusInnerRadius;                                         // 0x0178(0x0004) (Edit)
	float                                              FocusDistance;                                            // 0x017C(0x0004) (Edit)
	struct FVector                                     FocusPosition;                                            // 0x0180(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetDOFEffectProperties");
		return ptr;
	}


	void SetProperties(class UPostProcessEffect* PostProcessEffect);
	void Activated();
};


// Class EFGame.EFSeqAct_SetDOFAndBloomEffectProperties
// 0x0020 (0x01AC - 0x018C)
class UEFSeqAct_SetDOFAndBloomEffectProperties : public UEFSeqAct_SetDOFEffectProperties
{
public:
	float                                              BloomScale;                                               // 0x018C(0x0004) (Edit)
	float                                              BloomThreshold;                                           // 0x0190(0x0004) (Edit)
	struct FColor                                      BloomTint;                                                // 0x0194(0x0004) (Edit)
	float                                              BloomScreenBlendThreshold;                                // 0x0198(0x0004) (Edit)
	float                                              BlurBloomKernelSize;                                      // 0x019C(0x0004) (Edit)
	TEnumAsByte<EDOFType>                              DepthOfFieldType;                                         // 0x01A0(0x0001) (Edit)
	TEnumAsByte<EDOFQuality>                           DepthOfFieldQuality;                                      // 0x01A1(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01A2(0x0002) MISSED OFFSET
	class UTexture2D*                                  BokehTexture;                                             // 0x01A4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetDOFAndBloomEffectProperties");
		return ptr;
	}


	void SetProperties(class UPostProcessEffect* PostProcessEffect);
};


// Class EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect
// 0x0014 (0x01A0 - 0x018C)
class UEFSeqAct_SetDOFBloomMotionBlurEffect : public UEFSeqAct_SetDOFEffectProperties
{
public:
	float                                              MaxVelocity;                                              // 0x018C(0x0004) (Edit)
	float                                              MotionBlurAmount;                                         // 0x0190(0x0004) (Edit)
	uint32_t                                           FullMotionBlur : 1;                                       // 0x0194(0x0004) (Edit)
	float                                              CameraRotationThreshold;                                  // 0x0198(0x0004) (Edit)
	float                                              CameraTranslationThreshold;                               // 0x019C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect");
		return ptr;
	}


	void SetProperties(class UPostProcessEffect* PostProcessEffect);
};


// Class EFGame.EFSeqAct_SetMaterialEffectProperties
// 0x0010 (0x0170 - 0x0160)
class UEFSeqAct_SetMaterialEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0160(0x0008) (Edit)
	class UObject*                                     ObjectReference;                                          // 0x0168(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetMaterialEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetMotionBlurEffectProperties
// 0x0014 (0x0174 - 0x0160)
class UEFSeqAct_SetMotionBlurEffectProperties : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	float                                              MaxVelocity;                                              // 0x0160(0x0004) (Edit)
	float                                              MotionBlurAmount;                                         // 0x0164(0x0004) (Edit)
	uint32_t                                           FullMotionBlur : 1;                                       // 0x0168(0x0004) (Edit)
	float                                              CameraRotationThreshold;                                  // 0x016C(0x0004) (Edit)
	float                                              CameraTranslationThreshold;                               // 0x0170(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetMotionBlurEffectProperties");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_SetUberPostProcessEffect
// 0x0068 (0x01C8 - 0x0160)
class UEFSeqAct_SetUberPostProcessEffect : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	struct FVector                                     SceneShadows;                                             // 0x0160(0x000C) (Edit)
	struct FVector                                     SceneHighLights;                                          // 0x016C(0x000C) (Edit)
	struct FVector                                     SceneMidTones;                                            // 0x0178(0x000C) (Edit)
	float                                              SceneDesaturation;                                        // 0x0184(0x0004) (Edit)
	struct FVector                                     SceneColorize;                                            // 0x0188(0x000C) (Edit)
	TEnumAsByte<ETonemapperType>                       TonemapperType;                                           // 0x0194(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              TonemapperRange;                                          // 0x0198(0x0004) (Edit)
	float                                              TonemapperToeFactor;                                      // 0x019C(0x0004) (Edit)
	float                                              TonemapperScale;                                          // 0x01A0(0x0004) (Edit)
	float                                              MotionBlurSoftEdgeKernelSize;                             // 0x01A4(0x0004) (Edit)
	uint32_t                                           bEnableImageGrain : 1;                                    // 0x01A8(0x0004) (Edit)
	uint32_t                                           bScaleEffectsWithViewSize : 1;                            // 0x01A8(0x0004) (Edit)
	float                                              SceneImageGrainScale;                                     // 0x01AC(0x0004) (Edit)
	float                                              BloomWeightSmall;                                         // 0x01B0(0x0004) (Edit)
	float                                              BloomWeightMedium;                                        // 0x01B4(0x0004) (Edit)
	float                                              BloomWeightLarge;                                         // 0x01B8(0x0004) (Edit)
	float                                              BloomSizeScaleSmall;                                      // 0x01BC(0x0004) (Edit)
	float                                              BloomSizeScaleMedium;                                     // 0x01C0(0x0004) (Edit)
	float                                              BloomSizeScaleLarge;                                      // 0x01C4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_SetUberPostProcessEffect");
		return ptr;
	}


	void Activated();
};


// Class EFGame.EFSeqAct_TogglePostProcessEffect
// 0x0004 (0x0164 - 0x0160)
class UEFSeqAct_TogglePostProcessEffect : public UEFSeqAct_SetPostProcessEffectProperties
{
public:
	uint32_t                                           Value : 1;                                                // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EFGame.EFSeqAct_TogglePostProcessEffect");
		return ptr;
	}


	void Activated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif