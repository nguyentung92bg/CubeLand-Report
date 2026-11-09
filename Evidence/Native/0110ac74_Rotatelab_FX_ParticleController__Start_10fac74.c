/* IL2CPP: Rotatelab.FX.ParticleController$$Start
void Rotatelab_FX_ParticleController__Start (Rotatelab_FX_ParticleController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.FX.ParticleController$$Start
   void Rotatelab_FX_ParticleController__Start (Rotatelab_FX_ParticleController_o* __this, const
   MethodInfo* method); */

void Rotatelab_FX_ParticleController__Start_10fac74(int param_1)

{
  undefined4 uStack_c;
  
  uStack_c = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_c = UnityEngine_ParticleSystem__get_main_368ecf8(*(int *)(param_1 + 0x10),0);
  UnityEngine_ParticleSystem_MainModule__set_stopAction_368f5e8(&uStack_c,3,0);
  return;
}

