/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<>c$$<CanCheckLevelState>b__41_0
bool Rotatelab_Scripts_LevelStateManager___c___CanCheckLevelState_b__41_0 (Rotatelab_Scripts_LevelStateManager___c_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<>c$$<CanCheckLevelState>b__41_0
   bool Rotatelab_Scripts_LevelStateManager___c___CanCheckLevelState_b__41_0
   (Rotatelab_Scripts_LevelStateManager___c_o* __this,
   Rotatelab_Scripts_BaseBlasterDockController_o* e, const MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager___c___CanCheckLevelState_b__41_0_1018394
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  undefined4 *puVar6;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01028468 + 0x10283a8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102846c + 0x10283bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028470 + 0x10283c8));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = *(undefined4 **)(_UNK_01028474 + 0x10283ec);
  uVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0(param_2,*puVar6)
  ;
  if (*(int *)(**(int **)(_UNK_01028478 + 0x1028400) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0(param_2,*puVar6)
  ;
  if (iVar2 != 0) {
    pcVar5 = (char *)(_UNK_01040df4 + 0x1040d94);
    uVar1 = extraout_r3;
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01040df8 + 0x1040da8),0);
      *pcVar5 = '\x01';
      uVar1 = extraout_r3_00;
    }
    if (*(char *)(iVar2 + 0xc0) == '\0') {
      uVar4 = *(undefined4 *)(iVar2 + 0xbc);
      if (*(int *)(**(int **)(_UNK_01040dfc + 0x1040dcc) + 0x74) == 0) {
        FUN_00ec3934();
        uVar1 = extraout_r3_01;
      }
      pcVar5 = (char *)(_UNK_03611948 + 0x36118fc);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0,uVar1,unaff_r4,unaff_r5,
                           unaff_r6,unaff_lr);
        *pcVar5 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      uVar3 = UnityEngine_Object__CompareBaseObjects_3607f30(uVar4,0);
      return uVar3 ^ 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

