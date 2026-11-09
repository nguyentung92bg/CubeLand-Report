/* IL2CPP: Rotatelab.WinStreak.WinStreakInfoController$$Show
void Rotatelab_WinStreak_WinStreakInfoController__Show (Rotatelab_WinStreak_WinStreakInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakInfoController$$Show
   void Rotatelab_WinStreak_WinStreakInfoController__Show
   (Rotatelab_WinStreak_WinStreakInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakInfoController__Show_10917e4(int param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010a1924 + 0x10a17fc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1928 + 0x10a1810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a192c + 0x10a181c));
    *pcVar3 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x10),0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_010a1930 + 0x10a1880) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_28,uVar2,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  iVar1 = *(int *)(**(int **)(_UNK_010a1934 + 0x10a18ec) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2c40
            (&uStack_28,iVar1,uStack_28,uStack_24,uStack_20,uStack_1c,0);
  return;
}

