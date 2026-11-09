/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ChangeChainOfferMode
void Rotatelab_Debugging_CreativeCanvasController__ChangeChainOfferMode (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ChangeChainOfferMode
   void Rotatelab_Debugging_CreativeCanvasController__ChangeChainOfferMode
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__ChangeChainOfferMode_110e4f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  
  pcVar5 = (char *)(_UNK_0111e61c + 0x111e508);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e620 + 0x111e51c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e624 + 0x111e528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e628 + 0x111e534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e62c + 0x111e540));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0111e630 + 0x111e554);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  iVar7 = **(int **)(iVar2 + 0x5c);
  iVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (iVar7,**(undefined4 **)(_UNK_0111e634 + 0x111e578));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820
            (iVar7,(iVar2 + 1) % 3,**(undefined4 **)(_UNK_0111e638 + 0x111e5b0));
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = *(undefined4 **)(_UNK_0111e63c + 0x111e5ec);
  *(undefined4 *)(iVar2 + 0x94) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ChainOffer_ChainOfferManager__Refresh_10e81b0(iVar2,0);
  pcVar5 = (char *)(_UNK_0111cf1c + 0x111ce08);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf20 + 0x111ce1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf24 + 0x111ce28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf28 + 0x111ce34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf2c + 0x111ce40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf30 + 0x111ce4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cf34 + 0x111ce58));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0111cf38 + 0x111ce6c);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                    (**(int **)(iVar2 + 0x5c),**(undefined4 **)(_UNK_0111cf3c + 0x111cea0));
  puVar3 = *(undefined4 **)(_UNK_0111cf44 + 0x111cec0);
  if (iVar2 == 2) {
    puVar3 = *(undefined4 **)(_UNK_0111cf40 + 0x111ceb8);
  }
  puVar4 = *(undefined4 **)(_UNK_0111cf4c + 0x111ced8);
  if (iVar2 != 1) {
    puVar4 = puVar3;
  }
  piVar6 = *(int **)(param_1 + 0x88);
  uVar1 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_0111cf48 + 0x111ced0),*puVar4,0);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0111cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar1,*(undefined4 *)(*piVar6 + 0x2b4));
  return;
}

