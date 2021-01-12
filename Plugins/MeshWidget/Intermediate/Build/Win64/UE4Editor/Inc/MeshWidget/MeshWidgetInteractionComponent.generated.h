// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshWidgetComponent;
struct FHitResult;
class UWidgetComponent;
struct FKey;
#ifdef MESHWIDGET_MeshWidgetInteractionComponent_generated_h
#error "MeshWidgetInteractionComponent.generated.h already included, missing '#pragma once' in MeshWidgetInteractionComponent.h"
#endif
#define MESHWIDGET_MeshWidgetInteractionComponent_generated_h

#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_42_DELEGATE \
struct _Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms \
{ \
	UMeshWidgetComponent* MeshWidgetComponent; \
	UMeshWidgetComponent* PreviousMeshWidgetComponent; \
}; \
static inline void FOnHoveredMeshWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredMeshWidgetChanged, UMeshWidgetComponent* MeshWidgetComponent, UMeshWidgetComponent* PreviousMeshWidgetComponent) \
{ \
	_Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms Parms; \
	Parms.MeshWidgetComponent=MeshWidgetComponent; \
	Parms.PreviousMeshWidgetComponent=PreviousMeshWidgetComponent; \
	OnHoveredMeshWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_SPARSE_DATA
#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomHitResult); \
	DECLARE_FUNCTION(execGetLastHitResult); \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget); \
	DECLARE_FUNCTION(execIsOverFocusableWidget); \
	DECLARE_FUNCTION(execIsOverInteractableWidget); \
	DECLARE_FUNCTION(execGetHoveredMeshWidgetComponent); \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent); \
	DECLARE_FUNCTION(execScrollWheel); \
	DECLARE_FUNCTION(execSendKeyChar); \
	DECLARE_FUNCTION(execPressAndReleaseKey); \
	DECLARE_FUNCTION(execReleaseKey); \
	DECLARE_FUNCTION(execPressKey); \
	DECLARE_FUNCTION(execReleasePointerKey); \
	DECLARE_FUNCTION(execPressPointerKey);


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomHitResult); \
	DECLARE_FUNCTION(execGetLastHitResult); \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget); \
	DECLARE_FUNCTION(execIsOverFocusableWidget); \
	DECLARE_FUNCTION(execIsOverInteractableWidget); \
	DECLARE_FUNCTION(execGetHoveredMeshWidgetComponent); \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent); \
	DECLARE_FUNCTION(execScrollWheel); \
	DECLARE_FUNCTION(execSendKeyChar); \
	DECLARE_FUNCTION(execPressAndReleaseKey); \
	DECLARE_FUNCTION(execReleaseKey); \
	DECLARE_FUNCTION(execPressKey); \
	DECLARE_FUNCTION(execReleasePointerKey); \
	DECLARE_FUNCTION(execPressPointerKey);


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMeshWidgetInteractionComponent)


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUMeshWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMeshWidgetInteractionComponent)


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWidgetInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWidgetInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWidgetInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshWidgetInteractionComponent(UMeshWidgetInteractionComponent&&); \
	NO_API UMeshWidgetInteractionComponent(const UMeshWidgetInteractionComponent&); \
public:


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshWidgetInteractionComponent(UMeshWidgetInteractionComponent&&); \
	NO_API UMeshWidgetInteractionComponent(const UMeshWidgetInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWidgetInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWidgetInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWidgetInteractionComponent)


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomHitResult() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, CustomHitResult); } \
	FORCEINLINE static uint32 __PPO__LocalHitLocation() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, LocalHitLocation); } \
	FORCEINLINE static uint32 __PPO__LastLocalHitLocation() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, LastLocalHitLocation); } \
	FORCEINLINE static uint32 __PPO__HoveredWidgetComponent() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, HoveredWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__HoveredMeshWidgetComponent() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, HoveredMeshWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__LastHitResult() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, LastHitResult); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetInteractable() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, bIsHoveredWidgetInteractable); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetFocusable() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, bIsHoveredWidgetFocusable); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetHitTestVisible() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, bIsHoveredWidgetHitTestVisible); }


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_51_PROLOG
#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_SPARSE_DATA \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_SPARSE_DATA \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS_NO_PURE_DECLS \
	Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHWIDGET_API UClass* StaticClass<class UMeshWidgetInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sleep_Project_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
