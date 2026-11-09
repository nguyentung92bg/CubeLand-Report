/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnMainCanvasChangeEndedHandler
void Rotatelab_Tutorial_TutorialManager__OnMainCanvasChangeEndedHandler (Rotatelab_Tutorial_TutorialManager_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnMainCanvasChangeEndedHandler
   void Rotatelab_Tutorial_TutorialManager__OnMainCanvasChangeEndedHandler
   (Rotatelab_Tutorial_TutorialManager_o* __this, int32_t mainCanvasType, bool arg2, const
   MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__OnMainCanvasChangeEndedHandler_107fa4c
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_0108fbe0 + 0x108fa68);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fbe4 + 0x108fa7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fbe8 + 0x108fa88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fbec + 0x108fa94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fbf0 + 0x108faa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fbf4 + 0x108faac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fbf8 + 0x108fab8));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108fbfc + 0x108facc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar1,0);
  if ((param_2 == 1) && (iVar1 != 0)) {
    piVar3 = *(int **)(_UNK_0108fc00 + 0x108fb08);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) != '\0') {
      if (*(int *)(**(int **)(_UNK_0108fc04 + 0x108fb38) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Application__get_isEditor_35a9d10(0);
      if (iVar1 == 0) {
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
          uVar2 = Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8
                            (iVar1 + 1);
          iVar1 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040
                            (uVar2,*(undefined4 *)(param_1 + 0x34));
          if (iVar1 == 0) {
            Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(0,*(undefined4 *)(param_1 + 0x34))
            ;
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
            uStack_18 = **(undefined4 **)(_UNK_0108fd30 + 0x108fd04);
            Rotatelab_GameAction_object__bool__bool___Raise_23a61d0(iVar1,0,0,1);
          }
        }
        return;
      }
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108fc08 + 0x108fb64));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0108fc0c + 0x108fb84),0);
      if (*(int *)(**(int **)(_UNK_0108fc10 + 0x108fb98) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3f0ccccd,uVar2,0,0,0);
    }
  }
  return;
}

