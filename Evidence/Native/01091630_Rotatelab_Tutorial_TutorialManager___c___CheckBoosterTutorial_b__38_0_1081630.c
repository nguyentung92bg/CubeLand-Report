/* IL2CPP: Rotatelab.Tutorial.TutorialManager.<>c$$<CheckBoosterTutorial>b__38_0
bool Rotatelab_Tutorial_TutorialManager___c___CheckBoosterTutorial_b__38_0 (Rotatelab_Tutorial_TutorialManager___c_o* __this, Rotatelab_Boosters_BoosterBaseData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager.<>c$$<CheckBoosterTutorial>b__38_0
   bool Rotatelab_Tutorial_TutorialManager___c___CheckBoosterTutorial_b__38_0
   (Rotatelab_Tutorial_TutorialManager___c_o* __this, Rotatelab_Boosters_BoosterBaseData_o* e, const
   MethodInfo* method); */

bool Rotatelab_Tutorial_TutorialManager___c___CheckBoosterTutorial_b__38_0_1081630
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010916ac + 0x1091644);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010916b0 + 0x1091658));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (*(int *)(**(int **)(_UNK_010916b4 + 0x1091678) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  return iVar3 == iVar2;
}

