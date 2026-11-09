/* IL2CPP: Rotatelab.UI.AdBreakController$$SubscribeToAdEvents
void Rotatelab_UI_AdBreakController__SubscribeToAdEvents (Rotatelab_UI_AdBreakController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$SubscribeToAdEvents
   void Rotatelab_UI_AdBreakController__SubscribeToAdEvents (Rotatelab_UI_AdBreakController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_AdBreakController__SubscribeToAdEvents_1117270(int param_1)

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
  
  pcVar5 = (char *)(_UNK_011273c0 + 0x1127284);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011273c4 + 0x1127298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011273c8 + 0x11272a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011273cc + 0x11272b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011273d0 + 0x11272bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011273d4 + 0x11272c8));
    *pcVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    return;
  }
  puVar7 = *(undefined4 **)(_UNK_011273d8 + 0x11272ec);
  *(undefined1 *)(param_1 + 0x68) = 1;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x48);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011273dc + 0x1127310));
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011273e0 + 0x1127330),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_InterstitialAdFormat__add_AdDisplayedEvent_10ef89c(iVar2,uVar3,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x48);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011273e4 + 0x1127378));
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011273e8 + 0x1127398),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_010ffaa0 + 0x10ffa14);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ffaa4 + 0x10ffa28),uVar3,0);
    *pcVar5 = '\x01';
  }
  piVar8 = (int *)(iVar2 + 0x34);
  puVar7 = *(undefined4 **)(_UNK_010ffaa8 + 0x10ffa40);
  iVar2 = *piVar8;
  do {
    iVar6 = 0;
    iVar1 = System_Delegate__Combine_2bbca94(iVar2,uVar3,0);
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

