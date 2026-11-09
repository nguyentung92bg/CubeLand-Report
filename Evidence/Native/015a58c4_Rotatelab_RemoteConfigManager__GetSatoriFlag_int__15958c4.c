/* IL2CPP: Rotatelab.RemoteConfigManager$$GetSatoriFlag<int>
int32_t Rotatelab_RemoteConfigManager__GetSatoriFlag_int_ (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, int32_t defaultValue, const MethodInfo_15958C4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetSatoriFlag<int>
   int32_t Rotatelab_RemoteConfigManager__GetSatoriFlag_int_ (Rotatelab_RemoteConfigManager_o*
   __this, System_String_o* key, int32_t defaultValue, const MethodInfo_15958C4* method); */

undefined4
Rotatelab_RemoteConfigManager__GetSatoriFlag_int__15958c4
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iStack_1c;
  
  if ((*(int *)(param_4 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_015a5a20 + 0x15a58f4)), *(int *)(param_4 + 0x1c) == 0)) {
    FUN_00efd7c4(param_4);
  }
  iStack_1c = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                      (*(int *)(param_1 + 0x14),param_2,&iStack_1c,
                       **(undefined4 **)(_UNK_015a5a24 + 0x15a5930));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iStack_1c;
    }
    if (iVar2 != 0 && iVar1 != 0) {
      param_3 = Satori_TinyJson_JsonParser__FromJson_int__14a969c
                          (iVar1,*(undefined4 *)(*(int *)(param_4 + 0x1c) + 4));
    }
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

