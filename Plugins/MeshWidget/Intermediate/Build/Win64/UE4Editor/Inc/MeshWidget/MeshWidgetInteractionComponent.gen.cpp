// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshWidget/Public/MeshWidgetInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshWidgetInteractionComponent() {}
// Cross Module References
	MESHWIDGET_API UFunction* Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MeshWidget();
	MESHWIDGET_API UClass* Z_Construct_UClass_UMeshWidgetComponent_NoRegister();
	MESHWIDGET_API UClass* Z_Construct_UClass_UMeshWidgetInteractionComponent_NoRegister();
	MESHWIDGET_API UClass* Z_Construct_UClass_UMeshWidgetInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetInteractionSource();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics
	{
		struct _Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms
		{
			UMeshWidgetComponent* MeshWidgetComponent;
			UMeshWidgetComponent* PreviousMeshWidgetComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMeshWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousMeshWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshWidgetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_PreviousMeshWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_PreviousMeshWidgetComponent = { "PreviousMeshWidgetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms, PreviousMeshWidgetComponent), Z_Construct_UClass_UMeshWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_PreviousMeshWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_PreviousMeshWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_MeshWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_MeshWidgetComponent = { "MeshWidgetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms, MeshWidgetComponent), Z_Construct_UClass_UMeshWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_MeshWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_MeshWidgetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_PreviousMeshWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::NewProp_MeshWidgetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoveredWidgetChanged, UWidgetComponent*, WidgetComponent, UWidgetComponent*, PreviousWidgetComponent);\n" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoveredWidgetChanged, UWidgetComponent*, WidgetComponent, UWidgetComponent*, PreviousWidgetComponent);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MeshWidget, nullptr, "OnHoveredMeshWidgetChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms), Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execSetCustomHitResult)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomHitResult(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execGetLastHitResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->GetLastHitResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execIsOverHitTestVisibleWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverHitTestVisibleWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execIsOverFocusableWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverFocusableWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execIsOverInteractableWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverInteractableWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execGetHoveredMeshWidgetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredMeshWidgetComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execGetHoveredWidgetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredWidgetComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execScrollWheel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScrollDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollWheel(Z_Param_ScrollDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execSendKeyChar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Characters);
		P_GET_UBOOL(Z_Param_bRepeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendKeyChar(Z_Param_Characters,Z_Param_bRepeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execPressAndReleaseKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PressAndReleaseKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execReleaseKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execPressKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bRepeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PressKey(Z_Param_Key,Z_Param_bRepeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execReleasePointerKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleasePointerKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshWidgetInteractionComponent::execPressPointerKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PressPointerKey(Z_Param_Key);
		P_NATIVE_END;
	}
	void UMeshWidgetInteractionComponent::StaticRegisterNativesUMeshWidgetInteractionComponent()
	{
		UClass* Class = UMeshWidgetInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHoveredMeshWidgetComponent", &UMeshWidgetInteractionComponent::execGetHoveredMeshWidgetComponent },
			{ "GetHoveredWidgetComponent", &UMeshWidgetInteractionComponent::execGetHoveredWidgetComponent },
			{ "GetLastHitResult", &UMeshWidgetInteractionComponent::execGetLastHitResult },
			{ "IsOverFocusableWidget", &UMeshWidgetInteractionComponent::execIsOverFocusableWidget },
			{ "IsOverHitTestVisibleWidget", &UMeshWidgetInteractionComponent::execIsOverHitTestVisibleWidget },
			{ "IsOverInteractableWidget", &UMeshWidgetInteractionComponent::execIsOverInteractableWidget },
			{ "PressAndReleaseKey", &UMeshWidgetInteractionComponent::execPressAndReleaseKey },
			{ "PressKey", &UMeshWidgetInteractionComponent::execPressKey },
			{ "PressPointerKey", &UMeshWidgetInteractionComponent::execPressPointerKey },
			{ "ReleaseKey", &UMeshWidgetInteractionComponent::execReleaseKey },
			{ "ReleasePointerKey", &UMeshWidgetInteractionComponent::execReleasePointerKey },
			{ "ScrollWheel", &UMeshWidgetInteractionComponent::execScrollWheel },
			{ "SendKeyChar", &UMeshWidgetInteractionComponent::execSendKeyChar },
			{ "SetCustomHitResult", &UMeshWidgetInteractionComponent::execSetCustomHitResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics
	{
		struct MeshWidgetInteractionComponent_eventGetHoveredMeshWidgetComponent_Parms
		{
			UMeshWidgetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventGetHoveredMeshWidgetComponent_Parms, ReturnValue), Z_Construct_UClass_UMeshWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "GetHoveredMeshWidgetComponent", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventGetHoveredMeshWidgetComponent_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics
	{
		struct MeshWidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms
		{
			UWidgetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Get the currently hovered widget component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Get the currently hovered widget component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "GetHoveredWidgetComponent", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics
	{
		struct MeshWidgetInteractionComponent_eventGetLastHitResult_Parms
		{
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventGetLastHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Gets the last hit result generated by the component.  Returns the custom hit result if that was set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Gets the last hit result generated by the component.  Returns the custom hit result if that was set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "GetLastHitResult", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventGetLastHitResult_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics
	{
		struct MeshWidgetInteractionComponent_eventIsOverFocusableWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventIsOverFocusableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventIsOverFocusableWidget_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Returns true if a widget under the hit result is focusable.  e.g. Slate widgets that \n\x09 * return true for SupportsKeyboardFocus().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is focusable.  e.g. Slate widgets that\nreturn true for SupportsKeyboardFocus()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "IsOverFocusableWidget", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventIsOverFocusableWidget_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics
	{
		struct MeshWidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Returns true if a widget under the hit result is has a visibility that makes it hit test \n\x09 * visible.  e.g. Slate widgets that return true for GetVisibility().IsHitTestVisible().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is has a visibility that makes it hit test\nvisible.  e.g. Slate widgets that return true for GetVisibility().IsHitTestVisible()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "IsOverHitTestVisibleWidget", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics
	{
		struct MeshWidgetInteractionComponent_eventIsOverInteractableWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventIsOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventIsOverInteractableWidget_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Returns true if a widget under the hit result is interactive.  e.g. Slate widgets \n\x09 * that return true for IsInteractable().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is interactive.  e.g. Slate widgets\nthat return true for IsInteractable()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "IsOverInteractableWidget", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventIsOverInteractableWidget_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics
	{
		struct MeshWidgetInteractionComponent_eventPressAndReleaseKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventPressAndReleaseKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventPressAndReleaseKey_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventPressAndReleaseKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Does both the press and release of a simulated keyboard key.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Does both the press and release of a simulated keyboard key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "PressAndReleaseKey", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventPressAndReleaseKey_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics
	{
		struct MeshWidgetInteractionComponent_eventPressKey_Parms
		{
			FKey Key;
			bool bRepeat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventPressKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventPressKey_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventPressKey_Parms*)Obj)->bRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventPressKey_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventPressKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Press a key as if it had come from the keyboard.  Avoid using this for 'a-z|A-Z', things like\n\x09 * the Editable Textbox in Slate expect OnKeyChar to be called to signal a specific character being\n\x09 * send to the widget.  So for those cases you should use SendKeyChar.\n\x09 */" },
		{ "CPP_Default_bRepeat", "false" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Press a key as if it had come from the keyboard.  Avoid using this for 'a-z|A-Z', things like\nthe Editable Textbox in Slate expect OnKeyChar to be called to signal a specific character being\nsend to the widget.  So for those cases you should use SendKeyChar." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "PressKey", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventPressKey_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics
	{
		struct MeshWidgetInteractionComponent_eventPressPointerKey_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventPressPointerKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Presses a key as if the mouse/pointer were the source of it.  Normally you would just use\n\x09 * Left/Right mouse button for the Key.  However - advanced uses could also be imagined where you\n\x09 * send other keys to signal widgets to take special actions if they're under the cursor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Presses a key as if the mouse/pointer were the source of it.  Normally you would just use\nLeft/Right mouse button for the Key.  However - advanced uses could also be imagined where you\nsend other keys to signal widgets to take special actions if they're under the cursor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "PressPointerKey", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventPressPointerKey_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics
	{
		struct MeshWidgetInteractionComponent_eventReleaseKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventReleaseKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventReleaseKey_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventReleaseKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Releases a key as if it had been released by the keyboard.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Releases a key as if it had been released by the keyboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "ReleaseKey", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventReleaseKey_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics
	{
		struct MeshWidgetInteractionComponent_eventReleasePointerKey_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventReleasePointerKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Releases a key as if the mouse/pointer were the source of it.  Normally you would just use\n\x09 * Left/Right mouse button for the Key.  However - advanced uses could also be imagined where you\n\x09 * send other keys to signal widgets to take special actions if they're under the cursor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Releases a key as if the mouse/pointer were the source of it.  Normally you would just use\nLeft/Right mouse button for the Key.  However - advanced uses could also be imagined where you\nsend other keys to signal widgets to take special actions if they're under the cursor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "ReleasePointerKey", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventReleasePointerKey_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics
	{
		struct MeshWidgetInteractionComponent_eventScrollWheel_Parms
		{
			float ScrollDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::NewProp_ScrollDelta = { "ScrollDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventScrollWheel_Parms, ScrollDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::NewProp_ScrollDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Sends a scroll wheel event to the widget under the last hit result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Sends a scroll wheel event to the widget under the last hit result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "ScrollWheel", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventScrollWheel_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics
	{
		struct MeshWidgetInteractionComponent_eventSendKeyChar_Parms
		{
			FString Characters;
			bool bRepeat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventSendKeyChar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventSendKeyChar_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((MeshWidgetInteractionComponent_eventSendKeyChar_Parms*)Obj)->bRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshWidgetInteractionComponent_eventSendKeyChar_Parms), &Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventSendKeyChar_Parms, Characters), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::NewProp_Characters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Transmits a list of characters to a widget by simulating a OnKeyChar event for each key listed in\n\x09 * the string.\n\x09 */" },
		{ "CPP_Default_bRepeat", "false" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Transmits a list of characters to a widget by simulating a OnKeyChar event for each key listed in\nthe string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "SendKeyChar", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventSendKeyChar_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics
	{
		struct MeshWidgetInteractionComponent_eventSetCustomHitResult_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshWidgetInteractionComponent_eventSetCustomHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetInteractionComponent, nullptr, "SetCustomHitResult", nullptr, nullptr, sizeof(MeshWidgetInteractionComponent_eventSetCustomHitResult_Parms), Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshWidgetInteractionComponent_NoRegister()
	{
		return UMeshWidgetInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetHitTestVisible_MetaData[];
#endif
		static void NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetHitTestVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetFocusable_MetaData[];
#endif
		static void NewProp_bIsHoveredWidgetFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetInteractable_MetaData[];
#endif
		static void NewProp_bIsHoveredWidgetInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredMeshWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoveredMeshWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoveredWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocalHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastLocalHitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalHitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHitTesting_MetaData[];
#endif
		static void NewProp_bEnableHitTesting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHitTesting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualUserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VirtualUserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredMeshWidgetChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredMeshWidgetChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredWidgetChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredWidgetChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredMeshWidgetComponent, "GetHoveredMeshWidgetComponent" }, // 935841087
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetHoveredWidgetComponent, "GetHoveredWidgetComponent" }, // 3046734266
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_GetLastHitResult, "GetLastHitResult" }, // 422679762
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverFocusableWidget, "IsOverFocusableWidget" }, // 3124196077
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverHitTestVisibleWidget, "IsOverHitTestVisibleWidget" }, // 2515476041
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_IsOverInteractableWidget, "IsOverInteractableWidget" }, // 4282899294
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressAndReleaseKey, "PressAndReleaseKey" }, // 3596326871
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressKey, "PressKey" }, // 850600955
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_PressPointerKey, "PressPointerKey" }, // 2008810817
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleaseKey, "ReleaseKey" }, // 2634774975
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_ReleasePointerKey, "ReleasePointerKey" }, // 3659086648
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_ScrollWheel, "ScrollWheel" }, // 1865832224
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_SendKeyChar, "SendKeyChar" }, // 1121944119
		{ &Z_Construct_UFunction_UMeshWidgetInteractionComponent_SetCustomHitResult, "SetCustomHitResult" }, // 3169322112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Experimental" },
		{ "Comment", "/**\n * This is a highly experimental component to allow interaction with the Widget Component.  Not\n * everything should be expected to work correctly.  This class allows you to simulate a sort of\n * laser pointer device, when it hovers over widgets it will send the basic signals to show as if the\n * mouse were moving on top of it.  You'll then tell the component to simulate key presses, like\n * Left Mouse, down and up, to simulate a mouse click.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MeshWidgetInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is a highly experimental component to allow interaction with the Widget Component.  Not\neverything should be expected to work correctly.  This class allows you to simulate a sort of\nlaser pointer device, when it hovers over widgets it will send the basic signals to show as if the\nmouse were moving on top of it.  You'll then tell the component to simulate key presses, like\nLeft Mouse, down and up, to simulate a mouse click." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** The arrow component we show at editor time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "The arrow component we show at editor time." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_MetaData[] = {
		{ "Comment", "/** Are we hovered over a widget that is hit test visible? */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovered over a widget that is hit test visible?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void* Obj)
	{
		((UMeshWidgetInteractionComponent*)Obj)->bIsHoveredWidgetHitTestVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible = { "bIsHoveredWidgetHitTestVisible", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeshWidgetInteractionComponent), &Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_MetaData[] = {
		{ "Comment", "/** Are we hovering over any focusable widget? */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovering over any focusable widget?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit(void* Obj)
	{
		((UMeshWidgetInteractionComponent*)Obj)->bIsHoveredWidgetFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable = { "bIsHoveredWidgetFocusable", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeshWidgetInteractionComponent), &Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_MetaData[] = {
		{ "Comment", "/** Are we hovering over any interactive widgets. */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovering over any interactive widgets." },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit(void* Obj)
	{
		((UMeshWidgetInteractionComponent*)Obj)->bIsHoveredWidgetInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable = { "bIsHoveredWidgetInteractable", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeshWidgetInteractionComponent), &Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastHitResult_MetaData[] = {
		{ "Comment", "/** The last hit result we used. */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "The last hit result we used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastHitResult = { "LastHitResult", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, LastHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredMeshWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredMeshWidgetComponent = { "HoveredMeshWidgetComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, HoveredMeshWidgetComponent), Z_Construct_UClass_UMeshWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredMeshWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredMeshWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent_MetaData[] = {
		{ "Comment", "/** The widget component we're currently hovering over. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "The widget component we're currently hovering over." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent = { "HoveredWidgetComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, HoveredWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation_MetaData[] = {
		{ "Comment", "/** The last 2D location on the widget component that was hit. */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "The last 2D location on the widget component that was hit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation = { "LastLocalHitLocation", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, LastLocalHitLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LocalHitLocation_MetaData[] = {
		{ "Comment", "/** The 2D location on the widget component that was hit. */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "The 2D location on the widget component that was hit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LocalHitLocation = { "LocalHitLocation", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, LocalHitLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LocalHitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LocalHitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_CustomHitResult_MetaData[] = {
		{ "Comment", "/** Stores the custom hit result set by the player. */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Stores the custom hit result set by the player." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_CustomHitResult = { "CustomHitResult", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, CustomHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_CustomHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_CustomHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Determines the color of the debug lines.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Determines the color of the debug lines." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Shows some debugging lines and a hit sphere to help you debug interactions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Shows some debugging lines and a hit sphere to help you debug interactions." },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((UMeshWidgetInteractionComponent*)Obj)->bShowDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeshWidgetInteractionComponent), &Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Should the interaction component perform hit testing (Automatic or Custom) and attempt to \n\x09 * simulate hover - if you were going to emulate a keyboard you would want to turn this option off\n\x09 * if the virtual keyboard was separate from the virtual pointer device and used a second interaction\n\x09 * component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Should the interaction component perform hit testing (Automatic or Custom) and attempt to\nsimulate hover - if you were going to emulate a keyboard you would want to turn this option off\nif the virtual keyboard was separate from the virtual pointer device and used a second interaction\ncomponent." },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit(void* Obj)
	{
		((UMeshWidgetInteractionComponent*)Obj)->bEnableHitTesting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting = { "bEnableHitTesting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeshWidgetInteractionComponent), &Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Should we project from the world location of the component?  If you set this to false, you'll\n\x09 * need to call SetCustomHitResult(), and provide the result of a custom hit test form whatever\n\x09 * location you wish.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Should we project from the world location of the component?  If you set this to false, you'll\nneed to call SetCustomHitResult(), and provide the result of a custom hit test form whatever\nlocation you wish." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource = { "InteractionSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, InteractionSource), Z_Construct_UEnum_UMG_EWidgetInteractionSource, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * The distance in game units the component should be able to interact with a widget component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "The distance in game units the component should be able to interact with a widget component." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_PointerIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Each user virtual controller or virtual finger tips being simulated should use a different pointer index.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Each user virtual controller or virtual finger tips being simulated should use a different pointer index." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_PointerIndex = { "PointerIndex", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, PointerIndex), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_PointerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_PointerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Represents the Virtual User Index.  Each virtual user should be represented by a different \n\x09 * index number, this will maintain separate capture and focus states for them.  Each\n\x09 * controller or finger-tip should get a unique PointerIndex.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Represents the Virtual User Index.  Each virtual user should be represented by a different\nindex number, this will maintain separate capture and focus states for them.  Each\ncontroller or finger-tip should get a unique PointerIndex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex = { "VirtualUserIndex", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, VirtualUserIndex), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredMeshWidgetChanged_MetaData[] = {
		{ "Category", "Interaction|Event" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredMeshWidgetChanged = { "OnHoveredMeshWidgetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, OnHoveredMeshWidgetChanged), Z_Construct_UDelegateFunction_MeshWidget_OnHoveredMeshWidgetChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredMeshWidgetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredMeshWidgetChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged_MetaData[] = {
		{ "Category", "Interaction|Event" },
		{ "Comment", "/**\n\x09 * Called when the hovered Widget Component changes.  The interaction component functions at the Slate\n\x09 * level - so it's unable to report anything about what UWidget is under the hit result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshWidgetInteractionComponent.h" },
		{ "ToolTip", "Called when the hovered Widget Component changes.  The interaction component functions at the Slate\nlevel - so it's unable to report anything about what UWidget is under the hit result." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged = { "OnHoveredWidgetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshWidgetInteractionComponent, OnHoveredWidgetChanged), Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredMeshWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_LocalHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_CustomHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bShowDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_InteractionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_PointerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredMeshWidgetChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWidgetInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::ClassParams = {
		&UMeshWidgetInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshWidgetInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshWidgetInteractionComponent, 1273522559);
	template<> MESHWIDGET_API UClass* StaticClass<UMeshWidgetInteractionComponent>()
	{
		return UMeshWidgetInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshWidgetInteractionComponent(Z_Construct_UClass_UMeshWidgetInteractionComponent, &UMeshWidgetInteractionComponent::StaticClass, TEXT("/Script/MeshWidget"), TEXT("UMeshWidgetInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWidgetInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
