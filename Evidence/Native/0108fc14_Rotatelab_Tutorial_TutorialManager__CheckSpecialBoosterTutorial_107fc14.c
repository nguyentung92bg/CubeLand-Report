/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckSpecialBoosterTutorial
void Rotatelab_Tutorial_TutorialManager__CheckSpecialBoosterTutorial (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckSpecialBoosterTutorial
   void Rotatelab_Tutorial_TutorialManager__CheckSpecialBoosterTutorial
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__CheckSpecialBoosterTutorial_107fc14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0108fd18 + 0x108fc2c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fd1c + 0x108fc40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fd20 + 0x108fc4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fd24 + 0x108fc58));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108fd28 + 0x108fc6c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_RainbowShooter_RainbowShooterController__get_IsRainbowShooterActive_10ab8a8
                    (iVar1,0);
  if (iVar1 != 0) {
    iVar1 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
    uVar2 = Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar1 + 1);
    iVar1 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040
                      (uVar2,*(undefined4 *)(param_1 + 0x34));
    if (iVar1 == 0) {
      Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(0,*(undefined4 *)(param_1 + 0x34));
      piVar3 = *(int **)(_UNK_0108fd2c + 0x108fcc4);
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar3;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 200);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_object__bool__bool___Raise_23a61d0
                (iVar1,0,0,1,**(undefined4 **)(_UNK_0108fd30 + 0x108fd04));
    }
  }
  return;
}

