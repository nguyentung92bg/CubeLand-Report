/* IL2CPP: Rotatelab.Networking.SatoriIntFlag$$get_Value
int32_t Rotatelab_Networking_SatoriIntFlag__get_Value (Rotatelab_Networking_SatoriIntFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriIntFlag$$get_Value
   int32_t Rotatelab_Networking_SatoriIntFlag__get_Value (Rotatelab_Networking_SatoriIntFlag_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_SatoriIntFlag__get_Value_fe8564(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_00ff85e4 + 0xff8578);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff85e8 + 0xff858c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff85ec + 0xff8598));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff85f0 + 0xff85ac));
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar3 = **(int **)(_UNK_00ff85f4 + 0xff85d8);
    if ((*(int *)(iVar3 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_015a5a20 + 0x15a58f4)), *(int *)(iVar3 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar3);
    }
    iStack_1c = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                        (*(int *)(iVar1 + 0x14),uVar5,&iStack_1c,
                         **(undefined4 **)(_UNK_015a5a24 + 0x15a5930));
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = iStack_1c;
      }
      if (iVar2 != 0 && iVar1 != 0) {
        uVar6 = Satori_TinyJson_JsonParser__FromJson_int__14a969c
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

