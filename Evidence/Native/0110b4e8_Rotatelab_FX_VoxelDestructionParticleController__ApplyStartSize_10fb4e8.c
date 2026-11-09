/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$ApplyStartSize
void Rotatelab_FX_VoxelDestructionParticleController__ApplyStartSize (UnityEngine_ParticleSystem_o* ps, UnityEngine_ParticleSystem_MinMaxCurve_o baseline, float multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$ApplyStartSize
   void Rotatelab_FX_VoxelDestructionParticleController__ApplyStartSize
   (UnityEngine_ParticleSystem_o* ps, UnityEngine_ParticleSystem_MinMaxCurve_o baseline, float
   multiplier, const MethodInfo* method); */

void Rotatelab_FX_VoxelDestructionParticleController__ApplyStartSize_10fb4e8(int param_1)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  Rotatelab_FX_VoxelDestructionParticleController__ScaleCurve_10fb670(&uStack_40);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = UnityEngine_ParticleSystem__get_main_368ecf8(param_1,0);
  UnityEngine_ParticleSystem_MainModule__set_startSize_368f154
            (&uStack_28,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,0);
  return;
}

