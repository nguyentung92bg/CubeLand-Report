/* IL2CPP: Rotatelab.Scripts.DockManager$$OnBoosterStarted
void Rotatelab_Scripts_DockManager__OnBoosterStarted (Rotatelab_Scripts_DockManager_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnBoosterStarted
   void Rotatelab_Scripts_DockManager__OnBoosterStarted (Rotatelab_Scripts_DockManager_o* __this,
   int32_t boosterType, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnBoosterStarted_10077a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 auStack_30 [16];
  
  pcVar6 = (char *)(_UNK_01017a64 + 0x10177c4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017a68 + 0x10177d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017a6c + 0x10177e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017a70 + 0x10177f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017a74 + 0x10177fc));
    *pcVar6 = '\x01';
  }
  if (param_2 - 1U < 2) {
    pcVar6 = (char *)(_UNK_01017a8c + 0x10179ac);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01017a90 + 0x10179c0));
      *pcVar6 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_01017a94 + 0x10179d4) + 0x5c);
    Rotatelab_Scripts_DockManager__SinkPilotBlasterDocksBehindDim_1007a98
              (param_1,*puVar2,puVar2[1],puVar2[2]);
  }
  else if (param_2 == 4) {
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01017a88 + 0x10179f4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (auStack_30,uVar9,0,0xc1f00000,0,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  }
  else if (param_2 == 3) {
    piVar10 = *(int **)(_UNK_01017a78 + 0x101782c);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar10;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    uVar11 = *puVar2;
    uVar8 = puVar2[1];
    uVar5 = puVar2[2];
    if (*(int *)(**(int **)(_UNK_01017a7c + 0x1017850) + 0x74) == 0) {
      FUN_00ec3934(**(int **)(_UNK_01017a7c + 0x1017850));
    }
    uVar7 = 0;
    PrimeTween_Tween__LocalPosition_2ce550c
              (auStack_30,uVar9,uVar11,uVar8,uVar5,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
    Rotatelab_Scripts_DockManager__SinkPilotBlasterDocksBehindDim_1007a98
              (param_1,*puVar2,puVar2[1],puVar2[2]);
    iVar1 = *(int *)(param_1 + 0x44);
    puVar2 = *(undefined4 **)(_UNK_01017a80 + 0x10178ec);
    piVar10 = *(int **)(_UNK_01017a84 + 0x10178f4);
    while( true ) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar7) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar1 + 0x10 + uVar7 * 4);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                        (iVar4,*puVar2);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar9,0,0);
      if (iVar3 != 0) {
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                          (iVar4,*puVar2);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled_1034e24(iVar4,1,0);
      }
      uVar7 = uVar7 + 1;
    }
  }
  return;
}

