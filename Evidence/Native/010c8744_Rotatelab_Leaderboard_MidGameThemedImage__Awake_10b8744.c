/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedImage$$Awake
void Rotatelab_Leaderboard_MidGameThemedImage__Awake (Rotatelab_Leaderboard_MidGameThemedImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedImage$$Awake
   void Rotatelab_Leaderboard_MidGameThemedImage__Awake (Rotatelab_Leaderboard_MidGameThemedImage_o*
   __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedImage__Awake_10b8744(int param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x28) = uStack_20;
  *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x38) = uStack_18;
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_1c,uStack_20);
  return;
}

