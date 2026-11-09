/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$<AddLargeCubesFromLive>g__MakeGroup|23_0
Rotatelab_Scripts_LargeWire_o* Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__MakeGroup_23_0 (Rotatelab_Scripts_LargeVoxelController_o* large, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$<AddLargeCubesFromLive>g__MakeGroup|23_0
   Rotatelab_Scripts_LargeWire_o*
   Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__MakeGroup_23_0
   (Rotatelab_Scripts_LargeVoxelController_o* large, const MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder___AddLargeCubesFromLive_g__MakeGroup_23_0_10580c8
              (int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_01068234 + 0x10680dc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068238 + 0x10680f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106823c + 0x10680fc));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068240 + 0x1068110));
  Rotatelab_Scripts_LargeWire___ctor_105c5ac(iVar1,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(_UNK_01068244 + 0x1068148);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar5;
  *(undefined4 *)(iVar1 + 8) = uVar4;
  uVar4 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                    (*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18),param_1);
  iVar2 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                    (*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                     *(undefined4 *)(iVar2 + 0x14));
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  thunk_FUN_00ec5080();
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                    (*(float *)(iVar2 + 0x18) + *(float *)(iVar2 + 0x18),
                     *(float *)(iVar2 + 0x1c) + *(float *)(iVar2 + 0x1c),
                     *(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x20));
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  thunk_FUN_00ec5080();
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88
                    (*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x2c));
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  thunk_FUN_00ec5080();
  return iVar1;
}

