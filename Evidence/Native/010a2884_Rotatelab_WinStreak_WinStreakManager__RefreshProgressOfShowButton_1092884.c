/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$RefreshProgressOfShowButton
void Rotatelab_WinStreak_WinStreakManager__RefreshProgressOfShowButton (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$RefreshProgressOfShowButton
   void Rotatelab_WinStreak_WinStreakManager__RefreshProgressOfShowButton
   (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__RefreshProgressOfShowButton_1092884(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar7;
  char *pcVar8;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                    (iVar5,*(undefined4 *)(iVar2 + 0x9c));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((int)uVar3 < *(int *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0x10);
    fVar11 = _UNK_010a2aac;
    if (0 < (int)uVar3) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar5 = *(int *)(iVar2 + (uVar3 - 1) * 4 + 0x10);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(param_1 + 0x10);
      fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 8),(byte)(in_fpscr >> 0x16) & 3);
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar2 + uVar3 * 4 + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(param_1 + 0x30);
    uVar6 = *(undefined4 *)(iVar5 + 8);
    iVar5 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar9) << 0x1e;
    fVar10 = _UNK_010a2aac;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xa0),(byte)(uVar4 >> 0x16) & 3);
      fVar10 = (fVar10 - fVar11) / (fVar9 - fVar11);
      bVar1 = fVar10 < 0.0;
      if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      if (bVar1) {
        fVar10 = _UNK_010a2aac;
      }
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar10 = 1.0;
  }
  UnityEngine_UI_Image__set_fillAmount_3721d6c(iVar2,fVar10,0);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x34);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                    (iVar7,*(undefined4 *)(iVar2 + 0xa0));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar4 != uVar3,0,extraout_r3,
                       unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    *pcVar8 = '\x01';
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar5 + 8);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar2,uVar4 != uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

