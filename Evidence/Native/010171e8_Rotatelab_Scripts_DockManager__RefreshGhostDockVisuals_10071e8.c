/* IL2CPP: Rotatelab.Scripts.DockManager$$RefreshGhostDockVisuals
void Rotatelab_Scripts_DockManager__RefreshGhostDockVisuals (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$RefreshGhostDockVisuals
   void Rotatelab_Scripts_DockManager__RefreshGhostDockVisuals (Rotatelab_Scripts_DockManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__RefreshGhostDockVisuals_10071e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar4 = (char *)(_UNK_0101745c + 0x1017208);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017460 + 0x101721c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017464 + 0x1017228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017468 + 0x1017234));
    *pcVar4 = '\x01';
  }
  if (*(char *)(param_1 + 100) != '\0') {
    uVar1 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0(*(undefined4 *)(param_1 + 0x48),0);
    iVar8 = 0x10;
    uVar7 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= (int)uVar7) break;
      iVar5 = *(int *)(param_1 + 0x48);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar6 = *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(iVar5 + uVar7 * 4 + 0x10);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(**(int **)(_UNK_0101746c + 0x10172c8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (*(uint *)(iVar6 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      PrimeTween_Tween__Stop_2ced694(iVar6 + iVar8,0);
      iVar6 = *(int *)(param_1 + 0x60);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
      Rotatelab_Scripts_DockManager__GetGhostDockLocalPosition_100747c
                (&uStack_48,param_1,uVar7,uVar1);
      PrimeTween_Tween__LocalPosition_2ce550c
                (&uStack_48,uVar2,uStack_48,uStack_44,uStack_40,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar6 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      puVar3 = (undefined8 *)(iVar6 + iVar8);
      *puVar3 = CONCAT44(uStack_44,uStack_48);
      puVar3[1] = CONCAT44(uStack_3c,uStack_40);
      thunk_FUN_00ec5080(puVar3 + 1,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                        (iVar5,**(undefined4 **)(_UNK_01017470 + 0x10173c4));
      if (*(int *)(**(int **)(_UNK_01017474 + 0x10173dc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar6 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
      if (iVar6 != 0) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                          (iVar5,**(undefined4 **)(_UNK_01017478 + 0x101741c));
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_BlasterController__RefreshGhostDockScale_1034104(iVar5,0);
      }
      iVar8 = iVar8 + 0x10;
      uVar7 = uVar7 + 1;
    }
  }
  return;
}

