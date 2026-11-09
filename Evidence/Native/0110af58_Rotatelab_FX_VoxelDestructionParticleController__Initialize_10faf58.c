/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$Initialize
void Rotatelab_FX_VoxelDestructionParticleController__Initialize (Rotatelab_FX_VoxelDestructionParticleController_o* __this, Rotatelab_Pool_VoxelDestructionParticlePool_o* pool, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$Initialize
   void Rotatelab_FX_VoxelDestructionParticleController__Initialize
   (Rotatelab_FX_VoxelDestructionParticleController_o* __this,
   Rotatelab_Pool_VoxelDestructionParticlePool_o* pool, const MethodInfo* method); */

void Rotatelab_FX_VoxelDestructionParticleController__Initialize_10faf58
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  *(undefined4 *)(param_1 + 0x70) = param_2;
  uStack_18 = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_ParticleSystem__get_colorOverLifetime_368ed7c(*(int *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_1 + 0x10),0);
  UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_30,&uStack_18,0);
  *(undefined8 *)(param_1 + 0x24) = uStack_30;
  *(undefined8 *)(param_1 + 0x2c) = uStack_28;
  *(undefined8 *)(param_1 + 0x34) = uStack_20;
  thunk_FUN_00ec5080(param_1 + 0x2c,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_1 + 0x14),0);
  UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_48,&uStack_18,0);
  *(undefined8 *)(param_1 + 0x3c) = uStack_48;
  *(undefined8 *)(param_1 + 0x44) = uStack_40;
  *(undefined8 *)(param_1 + 0x4c) = uStack_38;
  thunk_FUN_00ec5080(param_1 + 0x44,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = UnityEngine_ParticleSystem__get_trails_368eda8(*(int *)(param_1 + 0x10),0);
  iVar2 = UnityEngine_ParticleSystem_TrailModule__get_enabled_369064c(&uStack_14,0);
  *(char *)(param_1 + 0x6c) = (char)iVar2;
  if (iVar2 != 0) {
    UnityEngine_ParticleSystem_TrailModule__get_widthOverTrail_3690698(&uStack_30,&uStack_14,0);
    *(undefined8 *)(param_1 + 0x54) = uStack_30;
    *(undefined8 *)(param_1 + 0x5c) = uStack_28;
    *(undefined8 *)(param_1 + 100) = uStack_20;
    thunk_FUN_00ec5080(param_1 + 0x5c,0);
  }
  return;
}

