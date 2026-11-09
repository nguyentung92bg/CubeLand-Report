/* IL2CPP: Rotatelab.Scripts.DockManager$$SinkPilotBlasterDocksBehindDim
void Rotatelab_Scripts_DockManager__SinkPilotBlasterDocksBehindDim (Rotatelab_Scripts_DockManager_o* __this, UnityEngine_Vector3_o docksRootOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$SinkPilotBlasterDocksBehindDim
   void Rotatelab_Scripts_DockManager__SinkPilotBlasterDocksBehindDim
   (Rotatelab_Scripts_DockManager_o* __this, UnityEngine_Vector3_o docksRootOffset, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__SinkPilotBlasterDocksBehindDim_1007a98
               (int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  pcVar5 = (char *)(_UNK_01017d90 + 0x1017ac4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017d94 + 0x1017ad8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017d98 + 0x1017ae4));
    *pcVar5 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x10);
  iVar2 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_forward_36152b0(&fStack_78,iVar2,0);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformVector_3616830
            (&fStack_78,iVar9,fStack_78 * 12.0,fStack_74 * 12.0,fStack_70 * 12.0,0);
  fVar1 = _UNK_01017d8c;
  iVar2 = 4;
  iVar9 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = iVar2 - 4;
    if (*(int *)(*(int *)(param_1 + 0x4c) + 0xc) <= (int)uVar8) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar6 + iVar2 * 4);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = Rotatelab_Scripts_PilotBlasterDockController__get_DockedPlaceable_1008e44(iVar6);
    if (*(int *)(**(int **)(_UNK_01017d9c + 0x1017c1c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar7 = 0;
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
    if (iVar3 != 0) {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = Rotatelab_Scripts_BlasterController__get_IsBeingPlacedToDock_1030d80(iVar6,0);
    }
    iVar6 = *(int *)(param_1 + 0x58);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    bVar10 = iVar7 == 0;
    iVar6 = iVar6 + iVar9;
    iVar3 = *(int *)(param_1 + 0x4c);
    fVar12 = fVar1;
    if (bVar10) {
      fVar12 = fStack_70;
    }
    fVar16 = *(float *)(iVar6 + 0x10);
    fVar14 = fVar1;
    if (bVar10) {
      fVar14 = fStack_74;
    }
    fVar11 = *(float *)(iVar6 + 0x14);
    fVar15 = fVar1;
    if (bVar10) {
      fVar15 = fStack_78;
    }
    fVar13 = *(float *)(iVar6 + 0x18);
    if (iVar3 == 0) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar3 + iVar2 * 4);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
    if (*(int *)(**(int **)(_UNK_01017da0 + 0x1017cfc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (&fStack_78,uVar4,(fVar16 - param_2) + fVar15,(fVar11 - param_3) + fVar14,
               (fVar13 - param_4) + fVar12,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    iVar9 = iVar9 + 0xc;
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

