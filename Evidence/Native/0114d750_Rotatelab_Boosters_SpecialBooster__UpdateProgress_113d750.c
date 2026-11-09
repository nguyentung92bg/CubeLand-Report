/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$UpdateProgress
void Rotatelab_Boosters_SpecialBooster__UpdateProgress (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$UpdateProgress
   void Rotatelab_Boosters_SpecialBooster__UpdateProgress (Rotatelab_Boosters_SpecialBooster_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_SpecialBooster__UpdateProgress_113d750(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d8;
  
  pcVar6 = (char *)(_UNK_0114d88c + 0x114d768);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d890 + 0x114d77c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d894 + 0x114d788));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = *(float *)(*(int *)(param_1 + 0x18) + 0x94);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar10 < 1.0) << 0x1f;
  uVar8 = uVar2 | (uint)NAN(fVar10) << 0x1c;
  if ((byte)(uVar2 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
    pcVar6 = (char *)(_UNK_0114dc50 + 0x114dbc4);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0114dc54 + 0x114dbd8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0114dc58 + 0x114dbe4));
      *pcVar6 = '\x01';
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114dc5c + 0x114dbf8));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BulletFlowTracker__ResetState_ff9cc0(iVar3,0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114dc60 + 0x114dc24));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_PlaceableManager__QueueRainbowBlasterSpawn_10433f4(iVar3,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_fillAmount_3721d6c
              (*(int *)(param_1 + 0x18),0,0,extraout_r3_01,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
    piVar5 = *(int **)(param_1 + 0x14);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar10 = 0.0;
    uVar4 = extraout_r3_00;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x18);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114d898 + 0x114d7c0));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar10 = (float)Rotatelab_Scripts_BulletFlowTracker__get_Bullets_ff94b0(iVar3,0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114d89c + 0x114d7f4));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_Debugging_CreativeCanvasController__get_RainbowShooterRequiredBulletCount_110b360
                      (iVar3,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x16) & 3);
    UnityEngine_UI_Image__set_fillAmount_3721d6c(iVar7,fVar10 / fVar9,0);
    piVar5 = *(int **)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar10 = *(float *)(*(int *)(param_1 + 0x18) + 0x94);
    uVar4 = extraout_r3;
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  pcVar6 = (char *)(_UNK_03731e0c + 0x3731d88);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar10,0,uVar4,unaff_d8,unaff_r4,
                       unaff_r5,unaff_r11,unaff_lr);
    *pcVar6 = '\x01';
  }
  bVar1 = fVar10 < 0.0;
  if (1.0 < fVar10) {
    fVar10 = 1.0;
  }
  if (bVar1) {
    fVar10 = _UNK_03731e08;
  }
  iVar3 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                    (piVar5 + 0x25,fVar10,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x1a0))(piVar5,*(undefined4 *)(*piVar5 + 0x1a4));
  return;
}

