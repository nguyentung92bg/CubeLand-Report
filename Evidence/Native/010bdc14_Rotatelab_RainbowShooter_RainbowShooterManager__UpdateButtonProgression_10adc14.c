/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$UpdateButtonProgression
void Rotatelab_RainbowShooter_RainbowShooterManager__UpdateButtonProgression (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$UpdateButtonProgression
   void Rotatelab_RainbowShooter_RainbowShooterManager__UpdateButtonProgression
   (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterManager__UpdateButtonProgression_10adc14(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  pcVar6 = (char *)(_UNK_010bdcd4 + 0x10bdc28);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdcd8 + 0x10bdc3c));
    *pcVar6 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010bdcdc + 0x10bdc50));
  piVar5 = *(int **)(param_1 + 0x3c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_RainbowShooter_RainbowShooterController__get_RainbowShooterCurrentProgress_10ab8c0
                    (iVar2,0);
  uVar4 = Rotatelab_RainbowShooter_RainbowShooterController__get_MaxProgression_10ab8a0(iVar2,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = fVar8 / fVar7;
  pcVar6 = (char *)(_UNK_03731e0c + 0x3731d88);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar8,0);
    *pcVar6 = '\x01';
  }
  bVar1 = fVar8 < 0.0;
  if (1.0 < fVar8) {
    fVar8 = 1.0;
  }
  if (bVar1) {
    fVar8 = _UNK_03731e08;
  }
  iVar2 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                    (piVar5 + 0x25,fVar8,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar5 + 0x1a0))(piVar5,*(undefined4 *)(*piVar5 + 0x1a4));
    return;
  }
  return;
}

