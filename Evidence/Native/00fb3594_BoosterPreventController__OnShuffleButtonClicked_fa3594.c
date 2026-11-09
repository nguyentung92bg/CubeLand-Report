/* IL2CPP: BoosterPreventController$$OnShuffleButtonClicked
void BoosterPreventController__OnShuffleButtonClicked (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$OnShuffleButtonClicked
   void BoosterPreventController__OnShuffleButtonClicked (BoosterPreventController_o* __this, const
   MethodInfo* method); */

void BoosterPreventController__OnShuffleButtonClicked_fa3594(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fb3614 + 0xfb35a8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3618 + 0xfb35bc));
    *pcVar3 = '\x01';
  }
  BoosterPreventController__SetInput_fa34d4(param_1,0);
  piVar2 = *(int **)(_UNK_00fb361c + 0xfb35dc);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x2c);
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

