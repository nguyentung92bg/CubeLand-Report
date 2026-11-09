/* IL2CPP: Rotatelab.Networking.SatoriStringFlag$$get_Value
System_String_o* Rotatelab_Networking_SatoriStringFlag__get_Value (Rotatelab_Networking_SatoriStringFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriStringFlag$$get_Value
   System_String_o* Rotatelab_Networking_SatoriStringFlag__get_Value
   (Rotatelab_Networking_SatoriStringFlag_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_SatoriStringFlag__get_Value_fe8c70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_00ff8cf0 + 0xff8c84);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8cf4 + 0xff8c98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8cf8 + 0xff8ca4));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff8cfc + 0xff8cb8));
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar3 = **(int **)(_UNK_00ff8d00 + 0xff8ce4);
    if ((*(int *)(iVar3 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_015a5b90 + 0x15a5a64)), *(int *)(iVar3 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar3);
    }
    iStack_1c = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                        (*(int *)(iVar1 + 0x14),uVar5,&iStack_1c,
                         **(undefined4 **)(_UNK_015a5b94 + 0x15a5aa0));
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = iStack_1c;
      }
      if (iVar2 != 0 && iVar1 != 0) {
        uVar6 = Satori_TinyJson_JsonParser__FromJson_object__14a9a84
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

