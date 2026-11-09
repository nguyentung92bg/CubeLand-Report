/* IL2CPP: Rotatelab.Networking.SatoriFloatFlag$$get_Value
float Rotatelab_Networking_SatoriFloatFlag__get_Value (Rotatelab_Networking_SatoriFloatFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriFloatFlag$$get_Value
   float Rotatelab_Networking_SatoriFloatFlag__get_Value (Rotatelab_Networking_SatoriFloatFlag_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_SatoriFloatFlag__get_Value_fe8470(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_00ff84fc + 0xff8488);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8500 + 0xff849c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8504 + 0xff84a8));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff8508 + 0xff84bc));
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar3 = **(int **)(_UNK_00ff850c + 0xff84ec);
    if ((*(int *)(iVar3 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_015a5d00 + 0x15a5bd4)), *(int *)(iVar3 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar3);
    }
    iStack_1c = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                        (*(int *)(iVar1 + 0x14),uVar4,&iStack_1c,
                         **(undefined4 **)(_UNK_015a5d04 + 0x15a5c10));
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = iStack_1c;
      }
      if (iVar2 != 0 && iVar1 != 0) {
        uVar6 = Satori_TinyJson_JsonParser__FromJson_float__14a9e6c
                          (iVar1,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 4));
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

