﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t1580782682;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;

extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* NavMeshPath_t2698325962_il2cpp_TypeInfo_var;
extern RuntimeClass* NavMesh_t1865600375_il2cpp_TypeInfo_var;
extern const uint32_t NavMeshAgent_get_path_m3133857361_MetadataUsageId;
extern const uint32_t NavMeshPath_Finalize_m1646253587_MetadataUsageId;
extern const uint32_t NavMesh_Internal_CallOnNavMeshPreUpdate_m3135297503_MetadataUsageId;
struct Vector3_t3722313464 ;

struct DelegateU5BU5D_t1703627840;
struct Vector3U5BU5D_t1718750761;


#ifndef U3CMODULEU3E_T692745534_H
#define U3CMODULEU3E_T692745534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745534 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745534_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef NAVMESH_T1865600375_H
#define NAVMESH_T1865600375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh
struct  NavMesh_t1865600375  : public RuntimeObject
{
public:

public:
};

struct NavMesh_t1865600375_StaticFields
{
public:
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t1580782682 * ___onPreUpdate_0;

public:
	inline static int32_t get_offset_of_onPreUpdate_0() { return static_cast<int32_t>(offsetof(NavMesh_t1865600375_StaticFields, ___onPreUpdate_0)); }
	inline OnNavMeshPreUpdate_t1580782682 * get_onPreUpdate_0() const { return ___onPreUpdate_0; }
	inline OnNavMeshPreUpdate_t1580782682 ** get_address_of_onPreUpdate_0() { return &___onPreUpdate_0; }
	inline void set_onPreUpdate_0(OnNavMeshPreUpdate_t1580782682 * value)
	{
		___onPreUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onPreUpdate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESH_T1865600375_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef NAVMESHHIT_T1526781090_H
#define NAVMESHHIT_T1526781090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshHit
struct  NavMeshHit_t1526781090 
{
public:
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t3722313464  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(NavMeshHit_t1526781090, ___m_Position_0)); }
	inline Vector3_t3722313464  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t3722313464 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t3722313464  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(NavMeshHit_t1526781090, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(NavMeshHit_t1526781090, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_Mask_3() { return static_cast<int32_t>(offsetof(NavMeshHit_t1526781090, ___m_Mask_3)); }
	inline int32_t get_m_Mask_3() const { return ___m_Mask_3; }
	inline int32_t* get_address_of_m_Mask_3() { return &___m_Mask_3; }
	inline void set_m_Mask_3(int32_t value)
	{
		___m_Mask_3 = value;
	}

	inline static int32_t get_offset_of_m_Hit_4() { return static_cast<int32_t>(offsetof(NavMeshHit_t1526781090, ___m_Hit_4)); }
	inline int32_t get_m_Hit_4() const { return ___m_Hit_4; }
	inline int32_t* get_address_of_m_Hit_4() { return &___m_Hit_4; }
	inline void set_m_Hit_4(int32_t value)
	{
		___m_Hit_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHHIT_T1526781090_H
#ifndef NAVMESHPATH_T2698325962_H
#define NAVMESHPATH_T2698325962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshPath
struct  NavMeshPath_t2698325962  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_corners
	Vector3U5BU5D_t1718750761* ___m_corners_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_corners_1() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_corners_1)); }
	inline Vector3U5BU5D_t1718750761* get_m_corners_1() const { return ___m_corners_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_corners_1() { return &___m_corners_1; }
	inline void set_m_corners_1(Vector3U5BU5D_t1718750761* value)
	{
		___m_corners_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_corners_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
#endif // NAVMESHPATH_T2698325962_H
#ifndef NAVMESHPATHSTATUS_T3657608265_H
#define NAVMESHPATHSTATUS_T3657608265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshPathStatus
struct  NavMeshPathStatus_t3657608265 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshPathStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NavMeshPathStatus_t3657608265, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHPATHSTATUS_T3657608265_H
#ifndef OFFMESHLINKTYPE_T3251975667_H
#define OFFMESHLINKTYPE_T3251975667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.OffMeshLinkType
struct  OffMeshLinkType_t3251975667 
{
public:
	// System.Int32 UnityEngine.AI.OffMeshLinkType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OffMeshLinkType_t3251975667, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OFFMESHLINKTYPE_T3251975667_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef OFFMESHLINKDATA_T1198555039_H
#define OFFMESHLINKDATA_T1198555039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.OffMeshLinkData
struct  OffMeshLinkData_t1198555039 
{
public:
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Valid
	int32_t ___m_Valid_0;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Activated
	int32_t ___m_Activated_1;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_InstanceID
	int32_t ___m_InstanceID_2;
	// UnityEngine.AI.OffMeshLinkType UnityEngine.AI.OffMeshLinkData::m_LinkType
	int32_t ___m_LinkType_3;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_StartPos
	Vector3_t3722313464  ___m_StartPos_4;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_EndPos
	Vector3_t3722313464  ___m_EndPos_5;

public:
	inline static int32_t get_offset_of_m_Valid_0() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_Valid_0)); }
	inline int32_t get_m_Valid_0() const { return ___m_Valid_0; }
	inline int32_t* get_address_of_m_Valid_0() { return &___m_Valid_0; }
	inline void set_m_Valid_0(int32_t value)
	{
		___m_Valid_0 = value;
	}

	inline static int32_t get_offset_of_m_Activated_1() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_Activated_1)); }
	inline int32_t get_m_Activated_1() const { return ___m_Activated_1; }
	inline int32_t* get_address_of_m_Activated_1() { return &___m_Activated_1; }
	inline void set_m_Activated_1(int32_t value)
	{
		___m_Activated_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_LinkType_3() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_LinkType_3)); }
	inline int32_t get_m_LinkType_3() const { return ___m_LinkType_3; }
	inline int32_t* get_address_of_m_LinkType_3() { return &___m_LinkType_3; }
	inline void set_m_LinkType_3(int32_t value)
	{
		___m_LinkType_3 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_4() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_StartPos_4)); }
	inline Vector3_t3722313464  get_m_StartPos_4() const { return ___m_StartPos_4; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_4() { return &___m_StartPos_4; }
	inline void set_m_StartPos_4(Vector3_t3722313464  value)
	{
		___m_StartPos_4 = value;
	}

	inline static int32_t get_offset_of_m_EndPos_5() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_EndPos_5)); }
	inline Vector3_t3722313464  get_m_EndPos_5() const { return ___m_EndPos_5; }
	inline Vector3_t3722313464 * get_address_of_m_EndPos_5() { return &___m_EndPos_5; }
	inline void set_m_EndPos_5(Vector3_t3722313464  value)
	{
		___m_EndPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OFFMESHLINKDATA_T1198555039_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef ONNAVMESHPREUPDATE_T1580782682_H
#define ONNAVMESHPREUPDATE_T1580782682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct  OnNavMeshPreUpdate_t1580782682  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONNAVMESHPREUPDATE_T1580782682_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};



// System.Boolean UnityEngine.AI.NavMesh::INTERNAL_CALL_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NavMesh_INTERNAL_CALL_Raycast_m1151207109 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___sourcePosition0, Vector3_t3722313464 * ___targetPosition1, NavMeshHit_t1526781090 * ___hit2, int32_t ___areaMask3, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::INTERNAL_CALL_SamplePosition(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NavMesh_INTERNAL_CALL_SamplePosition_m2184789596 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___sourcePosition0, NavMeshHit_t1526781090 * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_m2576853418 (OnNavMeshPreUpdate_t1580782682 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864 (RuntimeObject * __this /* static, unused */, NavMeshAgent_t1276799816 * ___self0, Vector3_t3722313464 * ___target1, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_set_destination_m3067388997 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_nextPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_get_nextPosition_m995760849 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
extern "C" IL2CPP_METHOD_ATTR OffMeshLinkData_t1198555039  NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_Move(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_CALL_Move_m2578575386 (RuntimeObject * __this /* static, unused */, NavMeshAgent_t1276799816 * ___self0, Vector3_t3722313464 * ___offset1, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath__ctor_m4063112187 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_CopyPathTo_m21507264 (NavMeshAgent_t1276799816 * __this, NavMeshPath_t2698325962 * ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NavMeshHit_get_position_m3696926229 (NavMeshHit_t1526781090 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float NavMeshHit_get_distance_m3015404035 (NavMeshHit_t1526781090 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_m2741412818 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* NavMeshPath_CalculateCornersInternal_m3464828738 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_m812086350 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.OffMeshLinkData::get_valid()
extern "C" IL2CPP_METHOD_ATTR bool OffMeshLinkData_get_valid_m1410359454 (OffMeshLinkData_t1198555039 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  OffMeshLinkData_get_endPos_m3360690749 (OffMeshLinkData_t1198555039 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMesh::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NavMesh_Raycast_m352921887 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___sourcePosition0, Vector3_t3722313464  ___targetPosition1, NavMeshHit_t1526781090 * ___hit2, int32_t ___areaMask3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NavMeshHit_t1526781090 * L_0 = ___hit2;
		int32_t L_1 = ___areaMask3;
		bool L_2 = NavMesh_INTERNAL_CALL_Raycast_m1151207109(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___sourcePosition0), (Vector3_t3722313464 *)(&___targetPosition1), (NavMeshHit_t1526781090 *)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::INTERNAL_CALL_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NavMesh_INTERNAL_CALL_Raycast_m1151207109 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___sourcePosition0, Vector3_t3722313464 * ___targetPosition1, NavMeshHit_t1526781090 * ___hit2, int32_t ___areaMask3, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_INTERNAL_CALL_Raycast_m1151207109_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, NavMeshHit_t1526781090 *, int32_t);
	static NavMesh_INTERNAL_CALL_Raycast_m1151207109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_INTERNAL_CALL_Raycast_m1151207109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::INTERNAL_CALL_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)");
	bool retVal = _il2cpp_icall_func(___sourcePosition0, ___targetPosition1, ___hit2, ___areaMask3);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_m2061351713 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___sourcePosition0, NavMeshHit_t1526781090 * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NavMeshHit_t1526781090 * L_0 = ___hit1;
		float L_1 = ___maxDistance2;
		int32_t L_2 = ___areaMask3;
		bool L_3 = NavMesh_INTERNAL_CALL_SamplePosition_m2184789596(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___sourcePosition0), (NavMeshHit_t1526781090 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::INTERNAL_CALL_SamplePosition(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NavMesh_INTERNAL_CALL_SamplePosition_m2184789596 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___sourcePosition0, NavMeshHit_t1526781090 * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_INTERNAL_CALL_SamplePosition_m2184789596_ftn) (Vector3_t3722313464 *, NavMeshHit_t1526781090 *, float, int32_t);
	static NavMesh_INTERNAL_CALL_SamplePosition_m2184789596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_INTERNAL_CALL_SamplePosition_m2184789596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::INTERNAL_CALL_SamplePosition(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)");
	bool retVal = _il2cpp_icall_func(___sourcePosition0, ___hit1, ___maxDistance2, ___areaMask3);
	return retVal;
}
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern "C" IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_m3135297503 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMesh_Internal_CallOnNavMeshPreUpdate_m3135297503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnNavMeshPreUpdate_t1580782682 * L_0 = ((NavMesh_t1865600375_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t1865600375_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		OnNavMeshPreUpdate_t1580782682 * L_1 = ((NavMesh_t1865600375_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t1865600375_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		NullCheck(L_1);
		OnNavMeshPreUpdate_Invoke_m2576853418(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t1580782682 (OnNavMeshPreUpdate_t1580782682 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_m2758342548 (OnNavMeshPreUpdate_t1580782682 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_m2576853418 (OnNavMeshPreUpdate_t1580782682 * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnNavMeshPreUpdate_BeginInvoke_m973935099 (OnNavMeshPreUpdate_t1580782682 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_EndInvoke_m1536959430 (OnNavMeshPreUpdate_t1580782682 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m2826390109 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  ___target0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864(NULL /*static, unused*/, __this, (Vector3_t3722313464 *)(&___target0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864 (RuntimeObject * __this /* static, unused */, NavMeshAgent_t1276799816 * ___self0, Vector3_t3722313464 * ___target1, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)");
	bool retVal = _il2cpp_icall_func(___self0, ___target1);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m41262300 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		NavMeshAgent_INTERNAL_set_destination_m3067388997(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_set_destination_m3067388997 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_INTERNAL_set_destination_m3067388997_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_set_destination_m3067388997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_set_destination_m3067388997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
extern "C" IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_m1834551109 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_stoppingDistance_m1834551109_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_stoppingDistance_m1834551109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_stoppingDistance_m1834551109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_nextPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NavMeshAgent_get_nextPosition_m2717948720 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		NavMeshAgent_INTERNAL_get_nextPosition_m995760849(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_nextPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_get_nextPosition_m995760849 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_INTERNAL_get_nextPosition_m995760849_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_get_nextPosition_m995760849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_get_nextPosition_m995760849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_get_nextPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NavMeshAgent_get_desiredVelocity_m3997864340 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
extern "C" IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m3597336304 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_remainingDistance_m3597336304_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_remainingDistance_m3597336304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m3597336304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_remainingDistance()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AI.NavMeshAgent::get_baseOffset()
extern "C" IL2CPP_METHOD_ATTR float NavMeshAgent_get_baseOffset_m526065499 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_baseOffset_m526065499_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_baseOffset_m526065499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_baseOffset_m526065499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_baseOffset()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_baseOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_baseOffset_m3547847262 (NavMeshAgent_t1276799816 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_baseOffset_m3547847262_ftn) (NavMeshAgent_t1276799816 *, float);
	static NavMeshAgent_set_baseOffset_m3547847262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_baseOffset_m3547847262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_baseOffset(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnOffMeshLink_m2179100791 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isOnOffMeshLink_m2179100791_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_isOnOffMeshLink_m2179100791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnOffMeshLink_m2179100791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::get_currentOffMeshLinkData()
extern "C" IL2CPP_METHOD_ATTR OffMeshLinkData_t1198555039  NavMeshAgent_get_currentOffMeshLinkData_m3659517268 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t1198555039  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		OffMeshLinkData_t1198555039  L_0 = NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		OffMeshLinkData_t1198555039  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
extern "C" IL2CPP_METHOD_ATTR OffMeshLinkData_t1198555039  NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef OffMeshLinkData_t1198555039  (*NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()");
	OffMeshLinkData_t1198555039  retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::CompleteOffMeshLink()
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_CompleteOffMeshLink_m248742111 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_CompleteOffMeshLink_m248742111_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_CompleteOffMeshLink_m248742111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_CompleteOffMeshLink_m248742111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::CompleteOffMeshLink()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_autoTraverseOffMeshLink_m770708411 (NavMeshAgent_t1276799816 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_autoTraverseOffMeshLink_m770708411_ftn) (NavMeshAgent_t1276799816 *, bool);
	static NavMeshAgent_set_autoTraverseOffMeshLink_m770708411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_autoTraverseOffMeshLink_m770708411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_hasPath()
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_get_hasPath_m1808188238 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_hasPath_m1808188238_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_hasPath_m1808188238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_hasPath_m1808188238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_hasPath()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_get_pathPending_m4180342381 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_pathPending_m4180342381_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_pathPending_m4180342381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathPending_m4180342381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathPending()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshAgent::get_pathStatus()
extern "C" IL2CPP_METHOD_ATTR int32_t NavMeshAgent_get_pathStatus_m153672476 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*NavMeshAgent_get_pathStatus_m153672476_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_pathStatus_m153672476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathStatus_m153672476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathStatus()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::Move(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_Move_m3685372814 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  ___offset0, const RuntimeMethod* method)
{
	{
		NavMeshAgent_INTERNAL_CALL_Move_m2578575386(NULL /*static, unused*/, __this, (Vector3_t3722313464 *)(&___offset0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_Move(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_INTERNAL_CALL_Move_m2578575386 (RuntimeObject * __this /* static, unused */, NavMeshAgent_t1276799816 * ___self0, Vector3_t3722313464 * ___offset1, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_INTERNAL_CALL_Move_m2578575386_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_CALL_Move_m2578575386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_CALL_Move_m2578575386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_Move(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___offset1);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isStopped()
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isStopped_m2351564986 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isStopped_m2351564986_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_isStopped_m2351564986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isStopped_m2351564986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isStopped()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_m1722711423 (NavMeshAgent_t1276799816 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_isStopped_m1722711423_ftn) (NavMeshAgent_t1276799816 *, bool);
	static NavMeshAgent_set_isStopped_m1722711423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_isStopped_m1722711423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_m2491688543 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_ResetPath_m2491688543_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_ResetPath_m2491688543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_ResetPath_m2491688543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::ResetPath()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AI.NavMeshPath UnityEngine.AI.NavMeshAgent::get_path()
extern "C" IL2CPP_METHOD_ATTR NavMeshPath_t2698325962 * NavMeshAgent_get_path_m3133857361 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshAgent_get_path_m3133857361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshPath_t2698325962 * V_0 = NULL;
	NavMeshPath_t2698325962 * V_1 = NULL;
	{
		NavMeshPath_t2698325962 * L_0 = (NavMeshPath_t2698325962 *)il2cpp_codegen_object_new(NavMeshPath_t2698325962_il2cpp_TypeInfo_var);
		NavMeshPath__ctor_m4063112187(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		NavMeshPath_t2698325962 * L_1 = V_0;
		NavMeshAgent_CopyPathTo_m21507264(__this, L_1, /*hidden argument*/NULL);
		NavMeshPath_t2698325962 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		NavMeshPath_t2698325962 * L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_CopyPathTo_m21507264 (NavMeshAgent_t1276799816 * __this, NavMeshPath_t2698325962 * ___path0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_CopyPathTo_m21507264_ftn) (NavMeshAgent_t1276799816 *, NavMeshPath_t2698325962 *);
	static NavMeshAgent_CopyPathTo_m21507264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_CopyPathTo_m21507264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)");
	_il2cpp_icall_func(__this, ___path0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m359410752 (NavMeshAgent_t1276799816 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_speed_m359410752_ftn) (NavMeshAgent_t1276799816 *, float);
	static NavMeshAgent_set_speed_m359410752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_speed_m359410752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateRotation_m333199218 (NavMeshAgent_t1276799816 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_updateRotation_m333199218_ftn) (NavMeshAgent_t1276799816 *, bool);
	static NavMeshAgent_set_updateRotation_m333199218_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateRotation_m333199218_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_radius()
extern "C" IL2CPP_METHOD_ATTR float NavMeshAgent_get_radius_m811499732 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_radius_m811499732_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_radius_m811499732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_radius_m811499732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AI.NavMeshAgent::get_height()
extern "C" IL2CPP_METHOD_ATTR float NavMeshAgent_get_height_m2109689158 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_height_m2109689158_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_height_m2109689158_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_height_m2109689158_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_height()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()
extern "C" IL2CPP_METHOD_ATTR bool NavMeshAgent_get_isOnNavMesh_m3342394377 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isOnNavMesh_m3342394377_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_isOnNavMesh_m3342394377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnNavMesh_m3342394377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnNavMesh()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NavMeshHit_get_position_m3696926229 (NavMeshHit_t1526781090 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Position_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  NavMeshHit_get_position_m3696926229_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshHit_t1526781090 * _thisAdjusted = reinterpret_cast<NavMeshHit_t1526781090 *>(__this + 1);
	return NavMeshHit_get_position_m3696926229(_thisAdjusted, method);
}
// System.Single UnityEngine.AI.NavMeshHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float NavMeshHit_get_distance_m3015404035 (NavMeshHit_t1526781090 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float NavMeshHit_get_distance_m3015404035_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshHit_t1526781090 * _thisAdjusted = reinterpret_cast<NavMeshHit_t1526781090 *>(__this + 1);
	return NavMeshHit_get_distance_m3015404035(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
extern "C" void NavMeshPath_t2698325962_marshal_pinvoke(const NavMeshPath_t2698325962& unmarshaled, NavMeshPath_t2698325962_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_corners_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_corners' of type 'NavMeshPath'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_corners_1Exception, NULL, NULL);
}
extern "C" void NavMeshPath_t2698325962_marshal_pinvoke_back(const NavMeshPath_t2698325962_marshaled_pinvoke& marshaled, NavMeshPath_t2698325962& unmarshaled)
{
	Exception_t* ___m_corners_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_corners' of type 'NavMeshPath'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_corners_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
extern "C" void NavMeshPath_t2698325962_marshal_pinvoke_cleanup(NavMeshPath_t2698325962_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AI.NavMeshPath
extern "C" void NavMeshPath_t2698325962_marshal_com(const NavMeshPath_t2698325962& unmarshaled, NavMeshPath_t2698325962_marshaled_com& marshaled)
{
	Exception_t* ___m_corners_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_corners' of type 'NavMeshPath'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_corners_1Exception, NULL, NULL);
}
extern "C" void NavMeshPath_t2698325962_marshal_com_back(const NavMeshPath_t2698325962_marshaled_com& marshaled, NavMeshPath_t2698325962& unmarshaled)
{
	Exception_t* ___m_corners_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_corners' of type 'NavMeshPath'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_corners_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AI.NavMeshPath
extern "C" void NavMeshPath_t2698325962_marshal_com_cleanup(NavMeshPath_t2698325962_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath__ctor_m4063112187 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshPath__ctor_m4063112187_ftn) (NavMeshPath_t2698325962 *);
	static NavMeshPath__ctor_m4063112187_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath__ctor_m4063112187_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::.ctor()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath_DestroyNavMeshPath_m2741412818 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshPath_DestroyNavMeshPath_m2741412818_ftn) (NavMeshPath_t2698325962 *);
	static NavMeshPath_DestroyNavMeshPath_m2741412818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_DestroyNavMeshPath_m2741412818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::DestroyNavMeshPath()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshPath::Finalize()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath_Finalize_m1646253587 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshPath_Finalize_m1646253587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		NavMeshPath_DestroyNavMeshPath_m2741412818(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* NavMeshPath_CalculateCornersInternal_m3464828738 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method)
{
	typedef Vector3U5BU5D_t1718750761* (*NavMeshPath_CalculateCornersInternal_m3464828738_ftn) (NavMeshPath_t2698325962 *);
	static NavMeshPath_CalculateCornersInternal_m3464828738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshPath_CalculateCornersInternal_m3464828738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshPath::CalculateCornersInternal()");
	Vector3U5BU5D_t1718750761* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
extern "C" IL2CPP_METHOD_ATTR void NavMeshPath_CalculateCorners_m812086350 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t1718750761* L_0 = __this->get_m_corners_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_1 = NavMeshPath_CalculateCornersInternal_m3464828738(__this, /*hidden argument*/NULL);
		__this->set_m_corners_1(L_1);
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* NavMeshPath_get_corners_m49832174 (NavMeshPath_t2698325962 * __this, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		NavMeshPath_CalculateCorners_m812086350(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_0 = __this->get_m_corners_1();
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		Vector3U5BU5D_t1718750761* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.OffMeshLinkData::get_valid()
extern "C" IL2CPP_METHOD_ATTR bool OffMeshLinkData_get_valid_m1410359454 (OffMeshLinkData_t1198555039 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Valid_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool OffMeshLinkData_get_valid_m1410359454_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t1198555039 * _thisAdjusted = reinterpret_cast<OffMeshLinkData_t1198555039 *>(__this + 1);
	return OffMeshLinkData_get_valid_m1410359454(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  OffMeshLinkData_get_endPos_m3360690749 (OffMeshLinkData_t1198555039 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_EndPos_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  OffMeshLinkData_get_endPos_m3360690749_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t1198555039 * _thisAdjusted = reinterpret_cast<OffMeshLinkData_t1198555039 *>(__this + 1);
	return OffMeshLinkData_get_endPos_m3360690749(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif