/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnStarterBundleToggleChanged
void Rotatelab_Debugging_CreativeCanvasController__OnStarterBundleToggleChanged (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnStarterBundleToggleChanged
   void Rotatelab_Debugging_CreativeCanvasController__OnStarterBundleToggleChanged
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnStarterBundleToggleChanged_110c648
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0111c720 + 0x111c660);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c724 + 0x111c674));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(*(int *)(iVar1 + 0x34),param_2,0);
  puVar3 = *(undefined4 **)(_UNK_0111c728 + 0x111c6c0);
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

