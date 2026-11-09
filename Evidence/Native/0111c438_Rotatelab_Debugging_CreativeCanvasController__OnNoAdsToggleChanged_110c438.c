/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnNoAdsToggleChanged
void Rotatelab_Debugging_CreativeCanvasController__OnNoAdsToggleChanged (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnNoAdsToggleChanged
   void Rotatelab_Debugging_CreativeCanvasController__OnNoAdsToggleChanged
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnNoAdsToggleChanged_110c438
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0111c528 + 0x111c450);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c52c + 0x111c464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c530 + 0x111c470));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0111c534 + 0x111c484) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar1,param_2,0);
  puVar3 = *(undefined4 **)(_UNK_0111c538 + 0x111c4c8);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_1143a20(&uStack_18,iVar1,0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88(uStack_18,uStack_14,0);
  return;
}

