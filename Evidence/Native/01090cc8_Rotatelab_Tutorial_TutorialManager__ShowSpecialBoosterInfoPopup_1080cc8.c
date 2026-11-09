/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$ShowSpecialBoosterInfoPopup
void Rotatelab_Tutorial_TutorialManager__ShowSpecialBoosterInfoPopup (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$ShowSpecialBoosterInfoPopup
   void Rotatelab_Tutorial_TutorialManager__ShowSpecialBoosterInfoPopup
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__ShowSpecialBoosterInfoPopup_1080cc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01090da4 + 0x1090cdc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090da8 + 0x1090cf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090dac + 0x1090cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090db0 + 0x1090d08));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Show_113f7c8(*(int *)(param_1 + 0x10),0);
  piVar5 = *(int **)(_UNK_01090db4 + 0x1090d38);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
  uVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
  uVar3 = System_String__Concat_29fee38
                    (*(undefined4 *)(param_1 + 0x34),**(undefined4 **)(_UNK_01090db8 + 0x1090d70),0)
  ;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),uVar2,uVar3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

