/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$set_RainbowShooterCurrentProgress
void Rotatelab_RainbowShooter_RainbowShooterController__set_RainbowShooterCurrentProgress (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$set_RainbowShooterCurrentProgress
   void Rotatelab_RainbowShooter_RainbowShooterController__set_RainbowShooterCurrentProgress
   (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, int32_t value, const MethodInfo*
   method); */

void Rotatelab_RainbowShooter_RainbowShooterController__set_RainbowShooterCurrentProgress_10ab9c0
               (int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  
  pcVar8 = (char *)(_UNK_010bba58 + 0x10bb9d8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bba5c + 0x10bb9ec));
    *pcVar8 = '\x01';
  }
  if ((10 < param_2) || (*(char *)(param_1 + 0x15) == '\0')) {
    return;
  }
  uVar2 = Rotatelab_Save_SaveManager__SetInt_1078f38
                    (**(undefined4 **)(_UNK_010bba60 + 0x10bba1c),param_2,0);
  if (param_2 == 10) {
    uVar2 = (uint)*(byte *)(param_1 + 0x16);
  }
  if (param_2 == 10 && uVar2 == 0) {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_010bdcd4 + 0x10bdc28);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdcd8 + 0x10bdc3c),0);
    *pcVar8 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010bdcdc + 0x10bdc50));
  piVar7 = *(int **)(iVar6 + 0x3c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_RainbowShooter_RainbowShooterController__get_RainbowShooterCurrentProgress_10ab8c0
                    (iVar3,0);
  uVar5 = Rotatelab_RainbowShooter_RainbowShooterController__get_MaxProgression_10ab8a0(iVar3,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar9 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = fVar10 / fVar9;
  pcVar8 = (char *)(_UNK_03731e0c + 0x3731d88);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar10,0);
    *pcVar8 = '\x01';
  }
  bVar1 = fVar10 < 0.0;
  if (1.0 < fVar10) {
    fVar10 = 1.0;
  }
  if (bVar1) {
    fVar10 = _UNK_03731e08;
  }
  iVar6 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                    (piVar7 + 0x25,fVar10,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
  if (iVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar7 + 0x1a0))(piVar7,*(undefined4 *)(*piVar7 + 0x1a4));
  return;
}

