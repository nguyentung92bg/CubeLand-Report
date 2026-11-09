/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$RefreshButtonRadialFill
void Rotatelab_SeasonPass_SeasonPassManager__RefreshButtonRadialFill (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$RefreshButtonRadialFill
   void Rotatelab_SeasonPass_SeasonPassManager__RefreshButtonRadialFill
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__RefreshButtonRadialFill_10a7320(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  int iStack_28;
  undefined4 uStack_24;
  
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
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iStack_28 < *(int *)(*(int *)(param_1 + 0x40) + 0x14)) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_GameObject__get_activeSelf_360212c(iVar4,0);
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x6c),0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
    }
    piVar5 = *(int **)(param_1 + 0x6c);
    fVar7 = (float)VectorSignedToFloat(uStack_24,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget_10a6ed0(param_1,uVar2);
    fVar6 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar7 / fVar6;
    bVar1 = fVar7 < 0.0;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    if (bVar1) {
      fVar7 = _UNK_010b74ac;
    }
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar3 = (char *)(_UNK_03731e0c + 0x3731d88);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar7,0);
      *pcVar3 = '\x01';
    }
    bVar1 = fVar7 < 0.0;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    if (bVar1) {
      fVar7 = _UNK_03731e08;
    }
    iVar4 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                      (piVar5 + 0x25,fVar7,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 0x1a0))(piVar5,*(undefined4 *)(*piVar5 + 0x1a4));
      return;
    }
    return;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar3 = '\x01';
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

