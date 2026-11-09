/* IL2CPP: Rotatelab.UI.PreLevelStartController.<>c__DisplayClass34_0$$<ShowPreLevelMenuPopup>b__1
void Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0___ShowPreLevelMenuPopup_b__1 (Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController.<>c__DisplayClass34_0$$<ShowPreLevelMenuPopup>b__1
   void Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0___ShowPreLevelMenuPopup_b__1
   (Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0___ShowPreLevelMenuPopup_b__1_1126f38
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01137068 + 0x1136f50);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113706c + 0x1136f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137070 + 0x1136f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137074 + 0x1136f7c));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01137078 + 0x1136f9c));
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_14 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
    uStack_1c = **(undefined4 **)(_UNK_0113707c + 0x1136fc4);
    uStack_18 = 0xffffffff;
    uVar2 = System_Enum__ToString_2bab8c0(&uStack_1c,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(iVar1,uVar2,0);
    if (iVar1 == 0) goto LAB_01137030;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_PreBoosters_PreBoosterGenerator__ResetUsage_10ed700(iVar1,0);
LAB_01137030:
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01137080 + 0x113703c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,6,0);
  return;
}

