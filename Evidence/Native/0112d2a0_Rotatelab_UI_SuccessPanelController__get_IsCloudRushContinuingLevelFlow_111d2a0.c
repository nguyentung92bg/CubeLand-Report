/* IL2CPP: Rotatelab.UI.SuccessPanelController$$get_IsCloudRushContinuingLevelFlow
bool Rotatelab_UI_SuccessPanelController__get_IsCloudRushContinuingLevelFlow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$get_IsCloudRushContinuingLevelFlow
   bool Rotatelab_UI_SuccessPanelController__get_IsCloudRushContinuingLevelFlow (const MethodInfo*
   method); */

undefined1 Rotatelab_UI_SuccessPanelController__get_IsCloudRushContinuingLevelFlow_111d2a0(void)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_0112d330 + 0x112d2b0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d334 + 0x112d2c4));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_0112d338 + 0x112d2d8);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c(iVar2,0);
  uVar1 = 1;
  if (iVar2 != 1) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = 0;
    if (*(char *)(iVar2 + 0x30) != '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

