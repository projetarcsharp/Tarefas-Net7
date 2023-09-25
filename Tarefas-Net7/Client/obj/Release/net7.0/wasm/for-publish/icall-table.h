#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
178,
183,
184,
185,
186,
187,
188,
189,
191,
192,
239,
240,
242,
265,
266,
267,
277,
278,
279,
280,
353,
354,
355,
358,
387,
388,
390,
392,
394,
396,
401,
409,
410,
411,
412,
413,
414,
415,
416,
417,
519,
527,
530,
532,
537,
538,
540,
541,
545,
546,
548,
549,
552,
553,
554,
557,
560,
562,
564,
625,
627,
629,
638,
639,
640,
642,
648,
649,
650,
651,
652,
660,
661,
662,
666,
667,
669,
671,
855,
996,
997,
4979,
4980,
4982,
4983,
4984,
4985,
4986,
4988,
4990,
4992,
4998,
5000,
5004,
5005,
5007,
5009,
5011,
5022,
5031,
5032,
5034,
5035,
5036,
5037,
5038,
5040,
5042,
5891,
5895,
5897,
5898,
5899,
5900,
6002,
6003,
6004,
6005,
6023,
6024,
6025,
6027,
6067,
6116,
6127,
6128,
6129,
6370,
6372,
6373,
6396,
6414,
6420,
6427,
6437,
6440,
6514,
6522,
6524,
6530,
6543,
6563,
6564,
6572,
6574,
6581,
6582,
6585,
6587,
6592,
6598,
6599,
6606,
6608,
6620,
6623,
6624,
6625,
6636,
6645,
6651,
6652,
6653,
6655,
6656,
6674,
6676,
6690,
6710,
6730,
6754,
6755,
7110,
7239,
7414,
7415,
7418,
7421,
7469,
7729,
7730,
8421,
8442,
8449,
8451,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 178,
ves_icall_System_Array_InternalCreate,
// token 183,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 184,
ves_icall_System_Array_CanChangePrimitive,
// token 185,
ves_icall_System_Array_FastCopy_raw,
// token 186,
ves_icall_System_Array_GetLength_raw,
// token 187,
ves_icall_System_Array_GetLowerBound_raw,
// token 188,
ves_icall_System_Array_GetGenericValue_icall,
// token 189,
ves_icall_System_Array_GetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetValueImpl_raw,
// token 192,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 239,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 240,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 242,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 265,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 266,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 267,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 277,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 278,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 279,
ves_icall_System_Enum_InternalGetCorElementType,
// token 280,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 353,
ves_icall_System_Environment_get_ProcessorCount,
// token 354,
ves_icall_System_Environment_get_TickCount,
// token 355,
ves_icall_System_Environment_get_TickCount64,
// token 358,
ves_icall_System_Environment_FailFast_raw,
// token 387,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 388,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 390,
ves_icall_System_GC_SuppressFinalize_raw,
// token 392,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 394,
ves_icall_System_GC_GetGCMemoryInfo,
// token 396,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 401,
ves_icall_System_Object_MemberwiseClone_raw,
// token 409,
ves_icall_System_Math_Ceiling,
// token 410,
ves_icall_System_Math_Cos,
// token 411,
ves_icall_System_Math_Floor,
// token 412,
ves_icall_System_Math_Log10,
// token 413,
ves_icall_System_Math_Pow,
// token 414,
ves_icall_System_Math_Sin,
// token 415,
ves_icall_System_Math_Sqrt,
// token 416,
ves_icall_System_Math_Tan,
// token 417,
ves_icall_System_Math_ModF,
// token 519,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 527,
ves_icall_RuntimeType_make_array_type_raw,
// token 530,
ves_icall_RuntimeType_make_byref_type_raw,
// token 532,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 537,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 538,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 540,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 541,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 545,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 546,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 548,
ves_icall_System_RuntimeType_getFullName_raw,
// token 549,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 552,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 553,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 554,
ves_icall_RuntimeType_GetFields_native_raw,
// token 557,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 560,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 562,
ves_icall_RuntimeType_GetName_raw,
// token 564,
ves_icall_RuntimeType_GetNamespace_raw,
// token 625,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 627,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 629,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 638,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 639,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 640,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 642,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 648,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 649,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 650,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 651,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 652,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 660,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 661,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 662,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 666,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 667,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 669,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 671,
ves_icall_System_String_FastAllocateString_raw,
// token 855,
ves_icall_System_Type_internal_from_handle_raw,
// token 996,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 997,
ves_icall_System_ValueType_Equals_raw,
// token 4979,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 4980,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 4982,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 4983,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 4984,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 4985,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 4986,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 4988,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 4990,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 4992,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 4998,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5000,
mono_monitor_exit_icall_raw,
// token 5004,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5005,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5007,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5009,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5011,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5022,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5031,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5032,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5034,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5035,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5036,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5037,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5038,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5040,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5042,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5891,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5895,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5897,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5898,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5899,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5900,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6002,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6003,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6004,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6005,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6023,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6024,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6025,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6027,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 6067,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6116,
mono_object_hash_icall_raw,
// token 6127,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6128,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6129,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6370,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6372,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6373,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6396,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6414,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6420,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6427,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6437,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6440,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6514,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6522,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 6524,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6530,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6543,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6563,
ves_icall_reflection_get_token_raw,
// token 6564,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6572,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6574,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6581,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6582,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6585,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6587,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6592,
ves_icall_reflection_get_token_raw,
// token 6598,
ves_icall_get_method_info_raw,
// token 6599,
ves_icall_get_method_attributes,
// token 6606,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6608,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6620,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6623,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6624,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6625,
ves_icall_reflection_get_token_raw,
// token 6636,
ves_icall_InternalInvoke_raw,
// token 6645,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6651,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6652,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6653,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6655,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6656,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6674,
ves_icall_InvokeClassConstructor_raw,
// token 6676,
ves_icall_InternalInvoke_raw,
// token 6690,
ves_icall_reflection_get_token_raw,
// token 6710,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6730,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6754,
ves_icall_reflection_get_token_raw,
// token 6755,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7110,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7239,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7414,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7415,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7418,
ves_icall_ModuleBuilder_getToken_raw,
// token 7421,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7469,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7729,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7730,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8421,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8442,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8449,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8451,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
