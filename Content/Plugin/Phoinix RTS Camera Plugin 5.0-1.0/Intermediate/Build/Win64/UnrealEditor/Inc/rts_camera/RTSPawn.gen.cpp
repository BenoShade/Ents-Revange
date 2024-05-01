// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rts_camera/Public/RTSPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPawn() {}
// Cross Module References
	RTS_CAMERA_API UClass* Z_Construct_UClass_ARTSPawn_NoRegister();
	RTS_CAMERA_API UClass* Z_Construct_UClass_ARTSPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_rts_camera();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	DEFINE_FUNCTION(ARTSPawn::execZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Zoom(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPawn::execRotateCamera)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCamera(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPawn::execYMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->YMovement(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPawn::execXMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->XMovement(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void ARTSPawn::StaticRegisterNativesARTSPawn()
	{
		UClass* Class = ARTSPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RotateCamera", &ARTSPawn::execRotateCamera },
			{ "XMovement", &ARTSPawn::execXMovement },
			{ "YMovement", &ARTSPawn::execYMovement },
			{ "Zoom", &ARTSPawn::execZoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics
	{
		struct RTSPawn_eventRotateCamera_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPawn_eventRotateCamera_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "RotateCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::RTSPawn_eventRotateCamera_Parms), Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPawn_RotateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_RotateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPawn_XMovement_Statics
	{
		struct RTSPawn_eventXMovement_Parms
		{
			float AxisValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPawn_eventXMovement_Parms, AxisValue), METADATA_PARAMS(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_AxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_AxisValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_XMovement_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPawn_XMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_XMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "XMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::RTSPawn_eventXMovement_Parms), Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_XMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPawn_XMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_XMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPawn_YMovement_Statics
	{
		struct RTSPawn_eventYMovement_Parms
		{
			float AxisValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPawn_eventYMovement_Parms, AxisValue), METADATA_PARAMS(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_AxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_AxisValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_YMovement_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPawn_YMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_YMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "YMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::RTSPawn_eventYMovement_Parms), Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_YMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPawn_YMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_YMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPawn_Zoom_Statics
	{
		struct RTSPawn_eventZoom_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTSPawn_Zoom_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RTSPawn_eventZoom_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPawn_Zoom_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPawn_Zoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Camera" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPawn_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPawn, nullptr, "Zoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::RTSPawn_eventZoom_Parms), Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPawn_Zoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPawn_Zoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSPawn_Zoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSPawn);
	UClass* Z_Construct_UClass_ARTSPawn_NoRegister()
	{
		return ARTSPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_YAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementZoneInPercent_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MovementZoneInPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBoundaries_MetaData[];
#endif
		static void NewProp_IgnoreBoundaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreBoundaries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightAdjustment_MetaData[];
#endif
		static void NewProp_HeightAdjustment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HeightAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranceFromCamera_MetaData[];
#endif
		static void NewProp_TranceFromCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TranceFromCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampToStartHeight_MetaData[];
#endif
		static void NewProp_ClampToStartHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClampToStartHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightAdjustmentSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAdjustmentSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAxis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ZoomAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseZoomSteps_MetaData[];
#endif
		static void NewProp_UseZoomSteps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseZoomSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZoomSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_rts_camera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPawn_RotateCamera, "RotateCamera" }, // 1021687563
		{ &Z_Construct_UFunction_ARTSPawn_XMovement, "XMovement" }, // 178033867
		{ &Z_Construct_UFunction_ARTSPawn_YMovement, "YMovement" }, // 1687776955
		{ &Z_Construct_UFunction_ARTSPawn_Zoom, "Zoom" }, // 1910872820
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSPawn.h" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "RTS Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxis_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, XAxis), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxis_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, YAxis), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Defines the Area in % of the viewport in which the Movement is activated\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Defines the Area in % of the viewport in which the Movement is activated" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent = { "MovementZoneInPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, MovementZoneInPercent), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Ignores the boundaries, allows movement with the mouse off the viewport\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Ignores the boundaries, allows movement with the mouse off the viewport" },
	};
#endif
	void Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_SetBit(void* Obj)
	{
		((ARTSPawn*)Obj)->IgnoreBoundaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries = { "IgnoreBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// By how much the InputAxis should be multiplied\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "By how much the InputAxis should be multiplied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier = { "MovementMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, MovementMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Smoothness of the Movement\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Smoothness of the Movement" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness = { "MovementSmoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, MovementSmoothness), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// Whether the RTS Camera should always have the same height or adjust to the world\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Whether the RTS Camera should always have the same height or adjust to the world" },
	};
#endif
	void Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_SetBit(void* Obj)
	{
		((ARTSPawn*)Obj)->HeightAdjustment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment = { "HeightAdjustment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// The channel used for the height adjustment\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "The channel used for the height adjustment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// Whether the camera should be used for the height adjustead\n// instead of the screen center\n" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Whether the camera should be used for the height adjustead\ninstead of the screen center" },
	};
#endif
	void Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_SetBit(void* Obj)
	{
		((ARTSPawn*)Obj)->TranceFromCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera = { "TranceFromCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// The Threshold required to adjust the camera\n" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "The Threshold required to adjust the camera" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, Threshold), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "Comment", "// Whether the height should be clamped to the start height\n// if it is within the threshold\n" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Whether the height should be clamped to the start height\nif it is within the threshold" },
	};
#endif
	void Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight_SetBit(void* Obj)
	{
		((ARTSPawn*)Obj)->ClampToStartHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight = { "ClampToStartHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness_MetaData[] = {
		{ "Category", "Height Adjustment" },
		{ "EditCondition", "HeightAdjustment" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness = { "HeightAdjustmentSmoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, HeightAdjustmentSmoothness), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// By how much the InputAxis should be multiplied\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "By how much the InputAxis should be multiplied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, RotationMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, RotationAxis), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// Smoothness of the Rotation\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Smoothness of the Rotation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness = { "RotationSmoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, RotationSmoothness), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxis_MetaData[] = {
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxis = { "ZoomAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, ZoomAxis), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// By how much the InputAxis should be multiplied\n// Required for high Zoom Speeds\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "By how much the InputAxis should be multiplied\nRequired for high Zoom Speeds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier = { "ZoomMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, ZoomMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Smoothness of the Zoom\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Smoothness of the Zoom" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness = { "ZoomSmoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, ZoomSmoothness), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Minimum length of the Spring Arm\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Minimum length of the Spring Arm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm = { "MinSpringArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, MinSpringArm), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Maximum length of the Spring Arm\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Maximum length of the Spring Arm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm = { "MaxSpringArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, MaxSpringArm), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Maximum length of the Spring Arm\n" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Maximum length of the Spring Arm" },
	};
#endif
	void Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_SetBit(void* Obj)
	{
		((ARTSPawn*)Obj)->UseZoomSteps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps = { "UseZoomSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARTSPawn), &Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps_MetaData[] = {
		{ "Category", "Zoom" },
		{ "Comment", "// Maximum length of the Spring Arm\n" },
		{ "EditCondition", "UseZoomSteps" },
		{ "ModuleRelativePath", "Public/RTSPawn.h" },
		{ "ToolTip", "Maximum length of the Spring Arm" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps = { "ZoomSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPawn, ZoomSteps), METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_XAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_YAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementZoneInPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_IgnoreBoundaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MovementSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_TranceFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ClampToStartHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_HeightAdjustmentSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_RotationSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MinSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_MaxSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_UseZoomSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPawn_Statics::NewProp_ZoomSteps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSPawn_Statics::ClassParams = {
		&ARTSPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPawn()
	{
		if (!Z_Registration_Info_UClass_ARTSPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSPawn.OuterSingleton, Z_Construct_UClass_ARTSPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSPawn.OuterSingleton;
	}
	template<> RTS_CAMERA_API UClass* StaticClass<ARTSPawn>()
	{
		return ARTSPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPawn);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSPawn, ARTSPawn::StaticClass, TEXT("ARTSPawn"), &Z_Registration_Info_UClass_ARTSPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSPawn), 2286398382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_3402309975(TEXT("/Script/rts_camera"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
