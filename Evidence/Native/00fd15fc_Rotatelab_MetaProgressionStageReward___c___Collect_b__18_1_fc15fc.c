/* IL2CPP: Rotatelab.MetaProgressionStageReward.<>c$$<Collect>b__18_1
void Rotatelab_MetaProgressionStageReward___c___Collect_b__18_1 (Rotatelab_MetaProgressionStageReward___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageReward.<>c$$<Collect>b__18_1
   void Rotatelab_MetaProgressionStageReward___c___Collect_b__18_1
   (Rotatelab_MetaProgressionStageReward___c_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionStageReward___c___Collect_b__18_1_fc15fc(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_00fd167c + 0xfd160c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1680 + 0xfd1620));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00fd1684 + 0xfd1634);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x178);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd1678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

