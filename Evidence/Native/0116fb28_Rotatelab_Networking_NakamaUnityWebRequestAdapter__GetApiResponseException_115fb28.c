/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter$$GetApiResponseException
System_Exception_o* Rotatelab_Networking_NakamaUnityWebRequestAdapter__GetApiResponseException (Rotatelab_Networking_NakamaUnityWebRequestAdapter_o* __this, int64_t statusCode, System_String_o* content, int32_t grpcCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter$$GetApiResponseException
   System_Exception_o* Rotatelab_Networking_NakamaUnityWebRequestAdapter__GetApiResponseException
   (Rotatelab_Networking_NakamaUnityWebRequestAdapter_o* __this, int64_t statusCode,
   System_String_o* content, int32_t grpcCode, const MethodInfo* method); */

undefined4
Rotatelab_Networking_NakamaUnityWebRequestAdapter__GetApiResponseException_115fb28
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(_UNK_0116fba4 + 0x116fb48);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116fba8 + 0x116fb60));
    *pcVar1 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116fbac + 0x116fb74));
  Nakama_ApiResponseException___ctor_2c08fd8
            ((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,param_5,param_6,0);
  return (int)uVar2;
}

