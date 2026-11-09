/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$ResetCloudRush
void Rotatelab_CloudRush_CloudRushController__ResetCloudRush (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$ResetCloudRush
   void Rotatelab_CloudRush_CloudRushController__ResetCloudRush
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__ResetCloudRush_10dcd48(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010ece94 + 0x10ecd5c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ece98 + 0x10ecd70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ece9c + 0x10ecd7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecea0 + 0x10ecd88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecea4 + 0x10ecd94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecea8 + 0x10ecda0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eceac + 0x10ecdac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eceb0 + 0x10ecdb8));
    *pcVar7 = '\x01';
  }
  uVar1 = Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState_10dc1e0(param_1,0);
  uVar1 = Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentLevel_10dbdd8(uVar1,0);
  Rotatelab_CloudRush_CloudRushController__set_CloudRushRewardAmount_10dbfdc(uVar1,0);
  Rotatelab_CloudRush_CloudRushController__ClearPendingProgression_10dd534();
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010eceb4 + 0x10ecdf0),0);
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010eceb8 + 0x10ece04),0);
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010ecebc + 0x10ece18),0);
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010ecec0 + 0x10ece2c),0);
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010ecec4 + 0x10ece40),0);
  piVar6 = *(int **)(_UNK_010ecec8 + 0x10ece50);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = **(int **)(_UNK_010ececc + 0x10ece88);
  iVar2 = piVar6[5];
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (**(code **)(iVar2 + 0xc))
                      (*(undefined4 *)(iVar2 + 0x20),0,*(undefined4 *)(iVar2 + 0x14));
  }
  piVar4 = (int *)FUN_0142315c(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x24));
  if ((char)piVar6[7] == '\0') {
    iVar2 = (**(code **)(*piVar6 + 0xe0))(piVar6,*(undefined4 *)(*piVar6 + 0xe4));
    piVar6[8] = iVar2;
    *(undefined1 *)(piVar6 + 7) = 1;
  }
  else {
    iVar2 = piVar6[8];
  }
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar4 + 0x100))(piVar4,iVar2,iVar3,*(undefined4 *)(*piVar4 + 0x104));
  if (iVar2 == 0) {
    (**(code **)(*piVar6 + 0xe8))(piVar6,iVar3,*(undefined4 *)(*piVar6 + 0xec));
    iVar2 = piVar6[6];
    piVar6[8] = iVar3;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9c014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),iVar3,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  return;
}

