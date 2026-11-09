/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$set_CurrentStarChallengeIndex
void Rotatelab_Shop_StarChallengePopup__set_CurrentStarChallengeIndex (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$set_CurrentStarChallengeIndex
   void Rotatelab_Shop_StarChallengePopup__set_CurrentStarChallengeIndex (int32_t value, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengePopup__set_CurrentStarChallengeIndex_10c92f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010d9388 + 0x10d9304);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d938c + 0x10d9318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9390 + 0x10d9324));
    *pcVar3 = '\x01';
  }
  Rotatelab_Save_SaveManager__SetInt_1078f38(**(undefined4 **)(_UNK_010d9394 + 0x10d9340),param_1,0)
  ;
  piVar2 = *(int **)(_UNK_010d9398 + 0x10d9350);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x154);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

