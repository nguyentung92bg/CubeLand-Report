/* IL2CPP: Rotatelab.UI.PreLevelStartController$$UpdatePopupLayout
void Rotatelab_UI_PreLevelStartController__UpdatePopupLayout (Rotatelab_UI_PreLevelStartController_o* __this, bool isEasy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.PreLevelStartController$$UpdatePopupLayout
   void Rotatelab_UI_PreLevelStartController__UpdatePopupLayout
   (Rotatelab_UI_PreLevelStartController_o* __this, bool isEasy, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__UpdatePopupLayout_1125e38(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_20 [2];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_20,iVar2,0);
  uVar1 = 0x44c80000;
  if (param_2 != 0) {
    uVar1 = 0x44af0000;
  }
  UnityEngine_RectTransform__set_sizeDelta_3613820(iVar2,auStack_20[0],uVar1,0);
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x18),0,0xc53b8000,0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

