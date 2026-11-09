/* IL2CPP: Rotatelab.UI.AdBreakController$$UnsubscribeFromAdEvents
void Rotatelab_UI_AdBreakController__UnsubscribeFromAdEvents (Rotatelab_UI_AdBreakController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$UnsubscribeFromAdEvents
   void Rotatelab_UI_AdBreakController__UnsubscribeFromAdEvents (Rotatelab_UI_AdBreakController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_AdBreakController__UnsubscribeFromAdEvents_1116a64(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  
  pcVar5 = (char *)(_UNK_01126bb8 + 0x1126a78);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126bbc + 0x1126a8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126bc0 + 0x1126a98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126bc4 + 0x1126aa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126bc8 + 0x1126ab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126bcc + 0x1126abc));
    *pcVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  puVar7 = *(undefined4 **)(_UNK_01126bd0 + 0x1126ae0);
  *(undefined1 *)(param_1 + 0x68) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x48);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01126bd4 + 0x1126b04));
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_01126bd8 + 0x1126b24),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_InterstitialAdFormat__remove_AdDisplayedEvent_10ef94c(iVar2,uVar3,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x48);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01126bdc + 0x1126b6c));
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_01126be0 + 0x1126b8c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_010ffb50 + 0x10ffac4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ffb54 + 0x10ffad8),uVar3,0);
    *pcVar5 = '\x01';
  }
  piVar8 = (int *)(iVar2 + 0x34);
  puVar7 = *(undefined4 **)(_UNK_010ffb58 + 0x10ffaf0);
  iVar2 = *piVar8;
  do {
    iVar6 = 0;
    iVar1 = System_Delegate__Remove_2bbcc8c(iVar2,uVar3,0);
    if (iVar1 != 0) {
      uVar4 = *puVar7;
      iVar6 = thunk_FUN_00f00bc8(iVar1,uVar4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar1,uVar4);
      }
    }
    iVar1 = FUN_00efd180(piVar8,iVar6,iVar2);
    bVar9 = iVar1 != iVar2;
    iVar2 = iVar1;
  } while (bVar9);
  return;
}

