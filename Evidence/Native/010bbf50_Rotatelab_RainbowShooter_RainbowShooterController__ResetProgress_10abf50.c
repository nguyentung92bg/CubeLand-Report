/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$ResetProgress
void Rotatelab_RainbowShooter_RainbowShooterController__ResetProgress (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$ResetProgress
   void Rotatelab_RainbowShooter_RainbowShooterController__ResetProgress
   (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterController__ResetProgress_10abf50(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010bbfdc + 0x10bbf64);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbfe0 + 0x10bbf78));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_RainbowShooter_RainbowShooterController__get_RainbowShooterCurrentProgress_10ab8c0
                    ();
  if (iVar1 != 10) {
    return;
  }
  Rotatelab_RainbowShooter_RainbowShooterController__set_RainbowShooterCurrentProgress_10ab9c0
            (param_1,0);
  piVar2 = *(int **)(_UNK_010bbfe4 + 0x10bbfa4);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1a4);
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

