/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$ResetNeeds
void Rotatelab_SeasonPass_SeasonPassManager__ResetNeeds (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$ResetNeeds
   void Rotatelab_SeasonPass_SeasonPassManager__ResetNeeds
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__ResetNeeds_10a5090(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010b5174 + 0x10b50a8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5178 + 0x10b50bc));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_010b517c + 0x10b50e0);
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x34);
  iVar5 = *(int *)(param_1 + 100);
  uVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4(uVar7,*puVar8);
  uVar2 = Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget_10a6ed0(param_1,uVar2);
  uVar7 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4(uVar7,*puVar8);
  uVar7 = Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankPhase_10a6fb4(param_1,uVar7);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassTargetBar__SetTarget_10a7024(iVar5,uVar2,0,uVar7);
  iVar5 = *(int *)(param_1 + 100);
  uVar3 = Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankCapReached_10a7254(param_1);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassTargetBar__SetVisible_10a72ec(iVar5,uVar3 ^ 1);
  uStack_24 = 0;
  iStack_28 = 0;
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_SeasonPass_SeasonPassController__GetProjectedCheckPoint_10a5734
                    (*(int *)(param_1 + 0x7c),&uStack_24,&iStack_28);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  if (iStack_28 < *(int *)(*(int *)(param_1 + 0x40) + 0x14)) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_GameObject__get_activeSelf_360212c(iVar5,0);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x6c),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar5,1,0);
    }
    piVar6 = *(int **)(param_1 + 0x6c);
    fVar10 = (float)VectorSignedToFloat(uStack_24,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget_10a6ed0(param_1,uVar2);
    fVar9 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = fVar10 / fVar9;
    bVar1 = fVar10 < 0.0;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    if (bVar1) {
      fVar10 = _UNK_010b74ac;
    }
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar4 = (char *)(_UNK_03731e0c + 0x3731d88);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar10,0);
      *pcVar4 = '\x01';
    }
    bVar1 = fVar10 < 0.0;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    if (bVar1) {
      fVar10 = _UNK_03731e08;
    }
    iVar5 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                      (piVar6 + 0x25,fVar10,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar6 + 0x1a0))(piVar6,*(undefined4 *)(*piVar6 + 0x1a4));
      return;
    }
    return;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar4 = '\x01';
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

