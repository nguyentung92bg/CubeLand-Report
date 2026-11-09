/* IL2CPP: Rotatelab.SeasonPassTutorialController$$<ButtonClicked>b__10_0
void Rotatelab_SeasonPassTutorialController___ButtonClicked_b__10_0 (Rotatelab_SeasonPassTutorialController_o* __this, float f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$<ButtonClicked>b__10_0
   void Rotatelab_SeasonPassTutorialController___ButtonClicked_b__10_0
   (Rotatelab_SeasonPassTutorialController_o* __this, float f, const MethodInfo* method); */

void Rotatelab_SeasonPassTutorialController___ButtonClicked_b__10_0_fc6364
               (int param_1,undefined4 param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  undefined4 unaff_r6;
  char *pcVar3;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_00fd63e4 + 0xfd637c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd63e8 + 0xfd6390));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),0,**(undefined4 **)(_UNK_00fd63ec + 0xfd63b8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_039b37ec + 0x39b3770);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b37f0 + 0x39b3784),param_2,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    *pcVar3 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b37f4 + 0x39b37bc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b37f8 + 0x39b37cc);
    *(code **)(_UNK_039b37fc + 0x39b37dc) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x039b37e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar2,param_2);
  return;
}

