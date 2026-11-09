/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnPlaceableLeftQueueHandler
void Rotatelab_Scripts_BlasterController__OnPlaceableLeftQueueHandler (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnPlaceableLeftQueueHandler
   void Rotatelab_Scripts_BlasterController__OnPlaceableLeftQueueHandler
   (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   placeable, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__OnPlaceableLeftQueueHandler_1038800
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01048960 + 0x104881c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048964 + 0x1048830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048968 + 0x104883c));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__TryGetComponent_object__14402fc
                    (param_2,&iStack_14,**(undefined4 **)(_UNK_0104896c + 0x1048868));
  if (iVar1 != 0) {
    Rotatelab_Scripts_BlasterController__TryBreakIce_10331d0(param_1);
    if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BlasterController__TryUpdateColorCage_1034708
              (param_1,*(undefined4 *)(iStack_14 + 0x10c),*(undefined4 *)(iStack_14 + 0x110));
    pcVar3 = (char *)(_UNK_01048970 + 0x10488bc);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01048974 + 0x10488d0));
      *pcVar3 = '\x01';
    }
    if (**(char **)(**(int **)(_UNK_01048978 + 0x10488e4) + 0x5c) == '\0') {
      if (*(int *)(**(int **)(_UNK_0104897c + 0x1048900) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = UnityEngine_Object__op_Equality_36033f4(param_2,param_1,0);
      Rotatelab_Scripts_BlasterController__TryUpdateTrap_10341ec(param_1,uVar2);
    }
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x1c)) {
      Rotatelab_Scripts_BlasterController__SwingChains_1033814(param_1);
    }
    Rotatelab_Scripts_BlasterController__TryBreakChains_1033a90(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

