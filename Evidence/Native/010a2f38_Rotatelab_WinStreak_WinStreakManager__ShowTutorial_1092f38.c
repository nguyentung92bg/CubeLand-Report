/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$ShowTutorial
void Rotatelab_WinStreak_WinStreakManager__ShowTutorial (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$ShowTutorial
   void Rotatelab_WinStreak_WinStreakManager__ShowTutorial (Rotatelab_WinStreak_WinStreakManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__ShowTutorial_1092f38(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_010a314c + 0x10a2f50);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3150 + 0x10a2f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3154 + 0x10a2f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3158 + 0x10a2f7c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x38),0,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x38),0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x2c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar1,uStack_30,uStack_2c,uStack_28,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x38),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_010a315c + 0x10a3084) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_30,uVar4,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  iVar1 = *(int *)(**(int **)(_UNK_010a3160 + 0x10a30ec) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2c40
            (&uStack_30,iVar1,uStack_30,uStack_2c,uStack_28,uStack_24,0);
  if (*(int *)(**(int **)(_UNK_010a3164 + 0x10a3128) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_UI_UiElementHider__SetVisibility_112fd8c(0,0);
  return;
}

