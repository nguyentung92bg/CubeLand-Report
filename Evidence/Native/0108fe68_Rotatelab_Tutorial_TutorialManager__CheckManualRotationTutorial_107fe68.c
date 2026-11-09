/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckManualRotationTutorial
void Rotatelab_Tutorial_TutorialManager__CheckManualRotationTutorial (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckManualRotationTutorial
   void Rotatelab_Tutorial_TutorialManager__CheckManualRotationTutorial
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__CheckManualRotationTutorial_107fe68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_0108fefc + 0x108fe7c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ff00 + 0x108fe90));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0108ff04 + 0x108fea4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (iVar2 != 3) {
    return;
  }
  iVar2 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(3,*(undefined4 *)(param_1 + 0x30))
  ;
  if (iVar2 != 0) {
    return;
  }
  iVar2 = Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_107ff08(param_1);
  if (iVar2 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0,extraout_r3,unaff_r4,unaff_r5,
                       unaff_r11,unaff_lr);
    uVar4 = thunk_FUN_00f00cdc();
    uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar4,uVar1,0);
  }
  else {
    iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar3 != 0) {
      pcVar5 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar5 = '\x01';
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar3,iVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar4 = thunk_FUN_00f00cdc();
    uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar4,uVar1,0);
  }
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar4,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

