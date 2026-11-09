/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$OnInstanceCreated
void Rotatelab_Pool_WallDestructionParticlePool__OnInstanceCreated (Rotatelab_Pool_WallDestructionParticlePool_o* __this, Rotatelab_FX_WallDestructionParticleController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$OnInstanceCreated
   void Rotatelab_Pool_WallDestructionParticlePool__OnInstanceCreated
   (Rotatelab_Pool_WallDestructionParticlePool_o* __this,
   Rotatelab_FX_WallDestructionParticleController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_WallDestructionParticlePool__OnInstanceCreated_1103e5c
               (undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01113ec4 + 0x1113e74);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113ec8 + 0x1113e88));
    *pcVar2 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceCreated_1857cf0
            (param_1,param_2,**(undefined4 **)(_UNK_01113ecc + 0x1113ea0));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = 0;
  *(undefined4 *)(param_2 + 0x80) = param_1;
  uStack_18 = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_2 + 0x80));
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_2 + 0x10),0);
  UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_30,&uStack_18,0);
  *(undefined8 *)(param_2 + 0x1c) = uStack_30;
  *(undefined8 *)(param_2 + 0x24) = uStack_28;
  *(undefined8 *)(param_2 + 0x2c) = uStack_20;
  thunk_FUN_00ec5080(param_2 + 0x24,0);
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_2 + 0x14),0);
  UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_48,&uStack_18,0);
  *(undefined8 *)(param_2 + 0x34) = uStack_48;
  *(undefined8 *)(param_2 + 0x3c) = uStack_40;
  *(undefined8 *)(param_2 + 0x44) = uStack_38;
  thunk_FUN_00ec5080(param_2 + 0x3c,0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = UnityEngine_ParticleSystem__get_trails_368eda8(*(int *)(param_2 + 0x10),0);
  iVar1 = UnityEngine_ParticleSystem_TrailModule__get_enabled_369064c(&uStack_14,0);
  *(char *)(param_2 + 0x7c) = (char)iVar1;
  if (iVar1 != 0) {
    UnityEngine_ParticleSystem_TrailModule__get_widthOverTrail_3690698(&uStack_30,&uStack_14,0);
    *(undefined8 *)(param_2 + 100) = uStack_30;
    *(undefined8 *)(param_2 + 0x6c) = uStack_28;
    *(undefined8 *)(param_2 + 0x74) = uStack_20;
    thunk_FUN_00ec5080(param_2 + 0x6c,0);
  }
  return;
}

