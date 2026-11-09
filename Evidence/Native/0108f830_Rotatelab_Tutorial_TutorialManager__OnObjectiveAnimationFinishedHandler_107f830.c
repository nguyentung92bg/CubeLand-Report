/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnObjectiveAnimationFinishedHandler
void Rotatelab_Tutorial_TutorialManager__OnObjectiveAnimationFinishedHandler (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnObjectiveAnimationFinishedHandler
   void Rotatelab_Tutorial_TutorialManager__OnObjectiveAnimationFinishedHandler
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__OnObjectiveAnimationFinishedHandler_107f830
               (undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0108f8f8 + 0x108f844);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f8fc + 0x108f858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f900 + 0x108f864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f904 + 0x108f870));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108f908 + 0x108f884));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar1,0);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108f90c + 0x108f8b8));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar2,param_1,**(undefined4 **)(_UNK_0108f910 + 0x108f8d4),0);
  pcVar5 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar2,1,0,unaff_r4,unaff_r5);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar3,0x3f19999a);
  uVar2 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar3,uVar2,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar2,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar4 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar1 != 0) {
    uVar4 = (uint)*(byte *)(iVar1 + 0x94);
  }
  if (iVar1 != 0 && uVar4 != 0) {
    if (*(char *)(iVar1 + 0xa4) == '\0') {
      *(undefined1 *)(iVar1 + 0x5c) = 1;
    }
    return;
  }
  return;
}

