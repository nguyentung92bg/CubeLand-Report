/* IL2CPP: Rotatelab.OfflinePlayController$$OnSessionTransitionCompleted
void Rotatelab_OfflinePlayController__OnSessionTransitionCompleted (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.OfflinePlayController$$OnSessionTransitionCompleted
   void Rotatelab_OfflinePlayController__OnSessionTransitionCompleted (const MethodInfo* method); */

void Rotatelab_OfflinePlayController__OnSessionTransitionCompleted_fb7ad4(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 uStack_19;
  
  pcVar3 = (char *)(_UNK_00fc7cbc + 0xfc7ae8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7cc0 + 0xfc7afc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7cc4 + 0xfc7b08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7cc8 + 0xfc7b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7ccc + 0xfc7b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7cd0 + 0xfc7b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7cd4 + 0xfc7b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7cd8 + 0xfc7b44));
    *pcVar3 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_00fc7cdc + 0xfc7b5c);
  uStack_19 = 0;
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  puVar7 = *(undefined4 **)(_UNK_00fc7ce0 + 0xfc7b7c);
  System_Action_bool____ctor_17aaff0(uVar1,0,*puVar7,0);
  if (*(int *)(**(int **)(_UNK_00fc7ce4 + 0xfc7b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__remove_focusChanged_35a8c60(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_bool____ctor_17aaff0(uVar1,0,*puVar7,0);
  UnityEngine_Application__add_focusChanged_35a8b5c(uVar1,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc7ce8 + 0xfc7bdc));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_00fc7cec + 0xfc7bfc);
  iVar4 = *(int *)(iVar2 + 0x2c);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  puVar5 = *(undefined4 **)(iVar2 + 0x5c);
  iVar6 = puVar5[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar1 = *puVar5;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc7cf0 + 0xfc7c48));
    System_EventHandler_object____ctor_23479ac
              (iVar6,uVar1,**(undefined4 **)(_UNK_00fc7cf4 + 0xfc7c68),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Hiro_NetworkMonitor__add_ConnectivityChanged_29673ac(iVar4,iVar6,0);
  uStack_19 = Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_fb7cf8();
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_19,0);
  return;
}

