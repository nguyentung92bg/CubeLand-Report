/* IL2CPP: Rotatelab.Networking.SatoriBoolFlag$$get_Value
bool Rotatelab_Networking_SatoriBoolFlag__get_Value (Rotatelab_Networking_SatoriBoolFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriBoolFlag$$get_Value
   bool Rotatelab_Networking_SatoriBoolFlag__get_Value (Rotatelab_Networking_SatoriBoolFlag_o*
   __this, const MethodInfo* method); */

uint Rotatelab_Networking_SatoriBoolFlag__get_Value_fe734c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int aiStack_1c [3];
  
  pcVar6 = (char *)(_UNK_00ff73d8 + 0xff7360);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff73dc + 0xff7374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff73e0 + 0xff7380));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff73e4 + 0xff7394));
  uVar5 = *(undefined4 *)(param_1 + 8);
  if (iVar1 != 0) {
    uVar3 = (uint)(*(char *)(param_1 + 0xc) != '\0');
    iVar4 = **(int **)(_UNK_00ff73e8 + 0xff73cc);
    if ((*(int *)(iVar4 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_015a58b0 + 0x15a5784)), *(int *)(iVar4 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar4);
    }
    aiStack_1c[0] = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                        (*(int *)(iVar1 + 0x14),uVar5,aiStack_1c,
                         **(undefined4 **)(_UNK_015a58b4 + 0x15a57c0));
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = aiStack_1c[0];
      }
      if (iVar2 != 0 && iVar1 != 0) {
        uVar3 = Satori_TinyJson_JsonParser__FromJson_bool__14a92b4
                          (iVar1,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 4));
      }
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

