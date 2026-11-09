/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetChainOfferModeText
void Rotatelab_Debugging_CreativeCanvasController__SetChainOfferModeText (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetChainOfferModeText
   void Rotatelab_Debugging_CreativeCanvasController__SetChainOfferModeText
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__SetChainOfferModeText_110cdf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0111cf1c + 0x111ce08);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf20 + 0x111ce1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf24 + 0x111ce28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf28 + 0x111ce34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf2c + 0x111ce40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf30 + 0x111ce4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf34 + 0x111ce58));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0111cf38 + 0x111ce6c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                    (**(int **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0111cf3c + 0x111cea0));
  puVar3 = *(undefined4 **)(_UNK_0111cf44 + 0x111cec0);
  if (iVar1 == 2) {
    puVar3 = *(undefined4 **)(_UNK_0111cf40 + 0x111ceb8);
  }
  puVar6 = *(undefined4 **)(_UNK_0111cf4c + 0x111ced8);
  if (iVar1 != 1) {
    puVar6 = puVar3;
  }
  piVar5 = *(int **)(param_1 + 0x88);
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_0111cf48 + 0x111ced0),*puVar6,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0111cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x2b4));
  return;
}

