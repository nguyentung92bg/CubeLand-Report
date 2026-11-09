/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$ForceWorldSimulation
void Rotatelab_FX_UnifiedParticleEmitter__ForceWorldSimulation (UnityEngine_ParticleSystem_o* system, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$ForceWorldSimulation
   void Rotatelab_FX_UnifiedParticleEmitter__ForceWorldSimulation (UnityEngine_ParticleSystem_o*
   system, const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__ForceWorldSimulation_10ff6e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0110f7a8 + 0x110f6f8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f7ac + 0x110f70c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  if (*(int *)(**(int **)(_UNK_0110f7b0 + 0x110f724) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_14 = UnityEngine_ParticleSystem__get_main_368ecf8(param_1,0);
    UnityEngine_ParticleSystem_MainModule__set_simulationSpace_368f4a0(&uStack_14,1,0);
    UnityEngine_ParticleSystem_MainModule__set_playOnAwake_368f4f4(&uStack_14,0,0);
    UnityEngine_ParticleSystem_MainModule__set_stopAction_368f5e8(&uStack_14,0,0);
  }
  return;
}

