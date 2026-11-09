/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$VacuumVoxel
void Rotatelab_Boosters_VacuumBoosterController__VacuumVoxel (Rotatelab_Boosters_VacuumBoosterController_o* __this, Rotatelab_Scripts_VoxelController_o* voxel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$VacuumVoxel
   void Rotatelab_Boosters_VacuumBoosterController__VacuumVoxel
   (Rotatelab_Boosters_VacuumBoosterController_o* __this, Rotatelab_Scripts_VoxelController_o*
   voxel, const MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController__VacuumVoxel_1138928(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01148aa8 + 0x1148944);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148aac + 0x1148958));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_VoxelController__DestroyViaVacuumBooster_105d574
            (param_2,*(undefined4 *)(param_1 + 0x14),0);
  fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
  if (*(float *)(param_1 + 0x2c) <= fVar1) {
    iVar3 = *(int *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar5 = *(undefined4 *)(iVar3 + *(uint *)(param_1 + 0x30) * 4 + 0x10);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,1,0);
    if (*(int *)(**(int **)(_UNK_01148ab0 + 0x11489f4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__MaterialProperty_2cea774
              (&uStack_38,uVar2,uVar5,0x3e000000,0x3f800000,0x3f19999a,uStack_38,uStack_34,uStack_30
               ,uStack_2c,uStack_28,1,0,0x3ecccccd,0,0,0);
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    FUN_00f88884(*(int *)(param_1 + 0x30) + 1,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
    *(undefined4 *)(param_1 + 0x30) = extraout_r1;
    fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
    *(float *)(param_1 + 0x2c) = fVar1 + _UNK_01148aa4;
  }
  return;
}

