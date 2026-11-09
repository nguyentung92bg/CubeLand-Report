/* IL2CPP: Rotatelab.UI.UITransitionController.<UpdateLoaderSceneProgressbarCoroutine>d__32$$MoveNext
bool Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_d__32__MoveNext (Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_d__32_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.UI.UITransitionController.<UpdateLoaderSceneProgressbarCoroutine>d__32$$MoveNext
   bool Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_d__32__MoveNext
   (Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_d__32_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_d__32__MoveNext_112e07c
          (int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pcVar4 = (char *)(_UNK_0113e2d0 + 0x113e094);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113e2d4 + 0x113e0a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113e2d8 + 0x113e0b4));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) < 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x4c) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  else {
    if (*(uint *)(param_1 + 8) != 2) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  if (*(char *)(iVar6 + 0x10) == '\0') {
    if (*(int *)(iVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = 0;
    Rotatelab_UI_SlicedFilledImage__set_fillAmount_11205d8(*(int *)(iVar6 + 0x20),0x3f800000,0);
  }
  else {
    if (6 < *(int *)(iVar6 + 0x48)) {
      if (*(int *)(**(int **)(_UNK_0113e2dc + 0x113e148) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogError_35b238c(**(undefined4 **)(_UNK_0113e2e0 + 0x113e168),0);
      *(undefined4 *)(iVar6 + 0x48) = 6;
    }
    if (*(int *)(iVar6 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_AsyncOperation__get_allowSceneActivation_35fa850(*(int *)(iVar6 + 0x4c),0);
    if (iVar2 == 0) {
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x48),(byte)(in_fpscr >> 0x16) & 3)
      ;
    }
    else {
      fVar8 = 6.0;
    }
    if (*(int *)(iVar6 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = (float)UnityEngine_AsyncOperation__get_progress_35fa6d8(*(int *)(iVar6 + 0x4c),0);
    fVar7 = 10.0;
    iVar2 = *(int *)(iVar6 + 0x20);
    if (*(int *)(iVar6 + 0x48) < 6) {
      fVar7 = 3.0;
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar10 = *(float *)(iVar2 + 0x88);
    fVar9 = *(float *)(iVar2 + 0x88);
    fVar8 = (fVar8 + fVar3) / 7.0;
    fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
    fVar7 = fVar7 * fVar3;
    if (fVar8 < fVar10) {
      fVar8 = fVar10;
    }
    bVar1 = fVar7 < 0.0;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    if (bVar1) {
      fVar7 = _UNK_0113e2cc;
    }
    Rotatelab_UI_SlicedFilledImage__set_fillAmount_11205d8(iVar2,fVar9 + (fVar8 - fVar9) * fVar7,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar5 = 1;
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return uVar5;
}

