/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<get_ShootingBlasterCount>b__44_0
bool Rotatelab_Scripts_DockManager___c___get_ShootingBlasterCount_b__44_0 (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<get_ShootingBlasterCount>b__44_0
   bool Rotatelab_Scripts_DockManager___c___get_ShootingBlasterCount_b__44_0
   (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* e,
   const MethodInfo* method); */

undefined1
Rotatelab_Scripts_DockManager___c___get_ShootingBlasterCount_b__44_0_1009718
          (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  pcVar4 = (char *)(_UNK_010197ec + 0x101972c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010197f0 + 0x1019740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010197f4 + 0x101974c));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010197f8 + 0x1019770);
  uVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0(param_2,*puVar5)
  ;
  if (*(int *)(**(int **)(_UNK_010197fc + 0x1019784) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = 0;
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                      (param_2,*puVar5);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = 0;
    if (*(char *)(iVar2 + 0xc3) != '\0') {
      uVar3 = 1;
    }
  }
  return uVar3;
}

