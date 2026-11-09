/* IL2CPP: Rotatelab.Networking.SatoriUnityWebRequestAdapter$$GetApiResponseException
System_Exception_o* Rotatelab_Networking_SatoriUnityWebRequestAdapter__GetApiResponseException (Rotatelab_Networking_SatoriUnityWebRequestAdapter_o* __this, int64_t statusCode, System_String_o* content, int32_t grpcCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriUnityWebRequestAdapter$$GetApiResponseException
   System_Exception_o* Rotatelab_Networking_SatoriUnityWebRequestAdapter__GetApiResponseException
   (Rotatelab_Networking_SatoriUnityWebRequestAdapter_o* __this, int64_t statusCode,
   System_String_o* content, int32_t grpcCode, const MethodInfo* method); */

undefined4
Rotatelab_Networking_SatoriUnityWebRequestAdapter__GetApiResponseException_115feb0
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(_UNK_0116ff2c + 0x116fed0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116ff30 + 0x116fee8));
    *pcVar1 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116ff34 + 0x116fefc));
  Satori_ApiResponseException___ctor_2d04418
            ((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,param_5,param_6,0);
  return (int)uVar2;
}

