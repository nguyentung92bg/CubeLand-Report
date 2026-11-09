/* IL2CPP: Rotatelab.UI.Toggle.<>c$$<UpdateToggle>b__12_0
void Rotatelab_UI_Toggle___c___UpdateToggle_b__12_0 (Rotatelab_UI_Toggle___c_o* __this, Rotatelab_UI_Toggle_o* this, float time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.Toggle.<>c$$<UpdateToggle>b__12_0
   void Rotatelab_UI_Toggle___c___UpdateToggle_b__12_0 (Rotatelab_UI_Toggle___c_o* __this,
   Rotatelab_UI_Toggle_o* this, float time, const MethodInfo* method); */

void Rotatelab_UI_Toggle___c___UpdateToggle_b__12_0_112c5f0
               (undefined4 param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  float fStack_38;
  float fStack_34;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0113c568 + 0x113c444);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c56c + 0x113c458));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_2 + 0x14),0);
  if (*(int *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&fStack_38,*(int *)(param_2 + 0x28),0);
  fVar2 = fStack_34;
  fVar1 = fStack_38;
  if (*(int *)(param_2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&fStack_38,*(int *)(param_2 + 0x24),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610
            (iVar3,fVar1 + (fStack_38 - fVar1) * param_3,fVar2 + (fStack_34 - fVar2) * param_3,0);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(**(int **)(_UNK_0113c570 + 0x113c518) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetOpacity_fc1d88(uVar5,param_3,0);
  Rotatelab_Extensions__SetOpacity_fc1d88(*(undefined4 *)(param_2 + 0x1c),param_3,0);
  Rotatelab_Extensions__SetOpacity_fc1d88(*(undefined4 *)(param_2 + 0x10),param_3,0);
  return;
}

