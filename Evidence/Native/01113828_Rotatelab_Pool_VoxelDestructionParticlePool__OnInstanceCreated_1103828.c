/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnInstanceCreated
void Rotatelab_Pool_VoxelDestructionParticlePool__OnInstanceCreated (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, Rotatelab_FX_VoxelDestructionParticleController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnInstanceCreated
   void Rotatelab_Pool_VoxelDestructionParticlePool__OnInstanceCreated
   (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this,
   Rotatelab_FX_VoxelDestructionParticleController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_VoxelDestructionParticlePool__OnInstanceCreated_1103828
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01113890 + 0x1113840);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113894 + 0x1113854));
    *pcVar3 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceCreated_1857cf0
            (param_1,param_2,**(undefined4 **)(_UNK_01113898 + 0x111386c));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = 0;
  *(undefined4 *)(param_2 + 0x70) = param_1;
  uStack_18 = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_2 + 0x70));
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_ParticleSystem__get_colorOverLifetime_368ed7c(*(int *)(param_2 + 0x14),0);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_2 + 0x20),0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_2 + 0x10),0);
  UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_30,&uStack_18,0);
  *(undefined8 *)(param_2 + 0x24) = uStack_30;
  *(undefined8 *)(param_2 + 0x2c) = uStack_28;
  *(undefined8 *)(param_2 + 0x34) = uStack_20;
  thunk_FUN_00ec5080(param_2 + 0x2c,0);
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_2 + 0x14),0);
  UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_48,&uStack_18,0);
  *(undefined8 *)(param_2 + 0x3c) = uStack_48;
  *(undefined8 *)(param_2 + 0x44) = uStack_40;
  *(undefined8 *)(param_2 + 0x4c) = uStack_38;
  thunk_FUN_00ec5080(param_2 + 0x44,0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = UnityEngine_ParticleSystem__get_trails_368eda8(*(int *)(param_2 + 0x10),0);
  iVar2 = UnityEngine_ParticleSystem_TrailModule__get_enabled_369064c(&uStack_14,0);
  *(char *)(param_2 + 0x6c) = (char)iVar2;
  if (iVar2 != 0) {
    UnityEngine_ParticleSystem_TrailModule__get_widthOverTrail_3690698(&uStack_30,&uStack_14,0);
    *(undefined8 *)(param_2 + 0x54) = uStack_30;
    *(undefined8 *)(param_2 + 0x5c) = uStack_28;
    *(undefined8 *)(param_2 + 100) = uStack_20;
    thunk_FUN_00ec5080(param_2 + 0x5c,0);
  }
  return;
}

