/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$CalculateFocusedScrollPosition
UnityEngine_Vector2_o Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_Vector2_o focusPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$CalculateFocusedScrollPosition
   UnityEngine_Vector2_o Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition
   (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_Vector2_o focusPoint, const MethodInfo*
   method); */

void Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107ce10
               (float *param_1,int param_2,float param_3,float param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  pcVar5 = (char *)(_UNK_0108d044 + 0x108ce34);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d048 + 0x108ce4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d04c + 0x108ce58));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_60,*(int *)(param_2 + 0x10),0);
  fVar7 = fStack_54;
  fVar6 = fStack_58;
  if (*(int *)(**(int **)(_UNK_0108d050 + 0x108ce98) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)UnityEngine_Transform__get_parent_36148d8(*(int *)(param_2 + 0x10),0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*piVar4 != **(int **)(_UNK_0108d054 + 0x108cee8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(piVar4);
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_60,piVar4,0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_60,*(int *)(param_2 + 0x10),0);
  fVar3 = fStack_5c;
  fVar2 = fStack_60;
  UnityEngine_UI_ScrollRect__get_normalizedPosition_39bb94c(&fStack_60,param_2,0);
  if (*(char *)(param_2 + 0x14) != '\0') {
    fVar6 = fVar6 * fVar2;
    if (fStack_58 < fVar6) {
      fStack_60 = (fStack_58 * -0.5 + fVar2 * param_3) / (fVar6 - fStack_58);
      bVar1 = fStack_60 < 0.0;
      if (1.0 < fStack_60) {
        fStack_60 = 1.0;
      }
      if (bVar1) {
        fStack_60 = _UNK_0108d040;
      }
    }
  }
  if (*(char *)(param_2 + 0x15) != '\0') {
    fVar7 = fVar7 * fVar3;
    if (fStack_54 < fVar7) {
      fStack_5c = (fVar3 * param_4 + fStack_54 * -0.5) / (fVar7 - fStack_54);
      bVar1 = fStack_5c < 0.0;
      if (1.0 < fStack_5c) {
        fStack_5c = 1.0;
      }
      if (bVar1) {
        fStack_5c = _UNK_0108d040;
      }
    }
  }
  *param_1 = fStack_60;
  param_1[1] = fStack_5c;
  return;
}

