/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$<AddLargeCubesFromLive>g__EmitSingle|23_1
void Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__EmitSingle_23_1 (Rotatelab_Scripts_LargeVoxelController_o* large, Rotatelab_Scripts_LiveSnapshotBuilder___c__DisplayClass23_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$<AddLargeCubesFromLive>g__EmitSingle|23_1
   void Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__EmitSingle_23_1
   (Rotatelab_Scripts_LargeVoxelController_o* large,
   Rotatelab_Scripts_LiveSnapshotBuilder___c__DisplayClass23_0_o* , const MethodInfo* method); */

void Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__EmitSingle_23_1_1057f30
               (undefined4 param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  
  pcVar8 = (char *)(_UNK_010680ac + 0x1067f48);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010680b0 + 0x1067f5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010680b4 + 0x1067f68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010680b8 + 0x1067f74));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010680bc + 0x1067f88) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__MakeGroup_23_0_10580c8
                    (param_1);
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*param_2 + 0x18);
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010680c0 + 0x1067fc0));
  Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  if (iVar3 != 0) {
    uVar6 = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar4 + 0x18) = uVar6;
    thunk_FUN_00ec5080();
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x14);
    thunk_FUN_00ec5080();
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
    thunk_FUN_00ec5080();
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar7 + 8);
    uVar9 = *(uint *)(iVar7 + 0xc);
    piVar5 = *(int **)(_UNK_010680c4 + 0x106805c);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar3 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar9 + 1;
      piVar5 = (int *)(iVar3 + uVar9 * 4 + 0x10);
      *piVar5 = iVar4;
    }
    else {
      uVar9 = *(uint *)(iVar7 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar7,uVar9 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38) +
                                    0x10) + 0x60) + 0x3c));
      iVar3 = *(int *)(iVar7 + 8);
      *(uint *)(iVar7 + 0xc) = uVar9 + 1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar5 = (int *)(iVar3 + uVar9 * 4 + 0x10);
      *piVar5 = iVar4;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

