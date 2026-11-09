/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$CalculateFocusedScrollPosition
UnityEngine_Vector2_o Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_RectTransform_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$CalculateFocusedScrollPosition
   UnityEngine_Vector2_o Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition
   (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_RectTransform_o* item, const MethodInfo*
   method); */

void Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107d058
               (float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar6 = (char *)(_UNK_0108d218 + 0x108d080);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d21c + 0x108d094));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_3,0);
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,param_3,0);
  fVar4 = fStack_4c;
  fVar3 = fStack_50;
  fVar2 = fStack_54;
  fVar1 = fStack_58;
  if (*(int *)(**(int **)(_UNK_0108d220 + 0x108d0fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968
            (&fStack_58,iVar5,fVar1 + fVar3 * 0.5,fVar2 + fVar4 * 0.5,0,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformPoint_3616aa0
            (&fStack_58,iVar7,fStack_58,fStack_54,fStack_50,0);
  fVar2 = fStack_54;
  fVar1 = fStack_58;
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,*(int *)(param_2 + 0x10),0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_pivot_3613920(&fStack_58,*(int *)(param_2 + 0x10),0);
  Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107ce10
            (&fStack_58,param_2,fVar1 + fStack_50 * fStack_58,fVar2 + fStack_4c * fStack_54);
  *param_1 = fStack_58;
  param_1[1] = fStack_54;
  return;
}

