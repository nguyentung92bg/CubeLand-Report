/* IL2CPP: Rotatelab.RemoteConfigManager$$GetSatoriFlag<bool>
bool Rotatelab_RemoteConfigManager__GetSatoriFlag_bool_ (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, bool defaultValue, const MethodInfo_1595754* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetSatoriFlag<bool>
   bool Rotatelab_RemoteConfigManager__GetSatoriFlag_bool_ (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, bool defaultValue, const MethodInfo_1595754* method); */

undefined4
Rotatelab_RemoteConfigManager__GetSatoriFlag_bool__1595754
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iStack_1c;
  
  if ((*(int *)(param_4 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_015a58b0 + 0x15a5784)), *(int *)(param_4 + 0x1c) == 0)) {
    FUN_00efd7c4(param_4);
  }
  iStack_1c = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                      (*(int *)(param_1 + 0x14),param_2,&iStack_1c,
                       **(undefined4 **)(_UNK_015a58b4 + 0x15a57c0));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iStack_1c;
    }
    if (iVar2 != 0 && iVar1 != 0) {
      param_3 = Satori_TinyJson_JsonParser__FromJson_bool__14a92b4
                          (iVar1,*(undefined4 *)(*(int *)(param_4 + 0x1c) + 4));
    }
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

