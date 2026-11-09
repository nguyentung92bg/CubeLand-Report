/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<get_AnyBlasterHasShootableTarget>b__46_0
bool Rotatelab_Scripts_DockManager___c___get_AnyBlasterHasShootableTarget_b__46_0 (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<get_AnyBlasterHasShootableTarget>b__46_0
   bool Rotatelab_Scripts_DockManager___c___get_AnyBlasterHasShootableTarget_b__46_0
   (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* e,
   const MethodInfo* method); */

undefined4
Rotatelab_Scripts_DockManager___c___get_AnyBlasterHasShootableTarget_b__46_0_1009800
          (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_010198d4 + 0x1019814);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010198d8 + 0x1019828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010198dc + 0x1019834));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010198e0 + 0x1019858);
  uVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0(param_2,*puVar5)
  ;
  if (*(int *)(**(int **)(_UNK_010198e4 + 0x101986c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                              (param_2,*puVar5);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = 0;
    uStack_14 = 0;
    if ((0 < piVar3[0x45]) &&
       (iVar2 = (**(code **)(*piVar3 + 0x138))(piVar3,*(undefined4 *)(*piVar3 + 0x13c)), iVar2 != 0)
       ) {
      uVar1 = Rotatelab_Scripts_BlasterController__TryFindTarget_10365a8(piVar3,&uStack_14);
    }
    return uVar1;
  }
  return 0;
}

