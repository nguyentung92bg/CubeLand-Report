/* IL2CPP: Rotatelab.UI.PreLevelStartController$$UpdateDifficultyBackgroundSize
void Rotatelab_UI_PreLevelStartController__UpdateDifficultyBackgroundSize (Rotatelab_UI_PreLevelStartController_o* __this, int32_t difficulty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.PreLevelStartController$$UpdateDifficultyBackgroundSize
   void Rotatelab_UI_PreLevelStartController__UpdateDifficultyBackgroundSize
   (Rotatelab_UI_PreLevelStartController_o* __this, int32_t difficulty, const MethodInfo* method);
    */

void Rotatelab_UI_PreLevelStartController__UpdateDifficultyBackgroundSize_1125ee0
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x30),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_18,iVar1,0);
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x30),0);
  if (iVar1 != 0) {
    uVar2 = 0x440e8000;
    if (param_2 == 1) {
      uVar2 = 0x43af0000;
    }
    UnityEngine_RectTransform__set_sizeDelta_3613820(iVar1,uVar2,uStack_14,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

