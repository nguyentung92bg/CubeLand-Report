/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$ScaleCurve
UnityEngine_ParticleSystem_MinMaxCurve_o Rotatelab_FX_VoxelDestructionParticleController__ScaleCurve (UnityEngine_ParticleSystem_MinMaxCurve_o baseline, float multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$ScaleCurve
   UnityEngine_ParticleSystem_MinMaxCurve_o
   Rotatelab_FX_VoxelDestructionParticleController__ScaleCurve
   (UnityEngine_ParticleSystem_MinMaxCurve_o baseline, float multiplier, const MethodInfo* method);
    */

void Rotatelab_FX_VoxelDestructionParticleController__ScaleCurve_10fb670
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8)

{
  int iVar1;
  float fVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_2c = param_5;
  uStack_50 = CONCAT44(param_3,param_2);
  uStack_48 = CONCAT44(param_5,param_4);
  uStack_28 = param_6;
  uStack_24 = param_7;
  uStack_40 = CONCAT44(param_7,param_6);
  uStack_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  iVar1 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode_368fd28(&uStack_50,0);
  if (iVar1 - 1U < 2) {
    fVar2 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_curveMultiplier_368fd30(&uStack_38,0)
    ;
    UnityEngine_ParticleSystem_MinMaxCurve__set_curveMultiplier_368fd38
              (&uStack_50,fVar2 * param_8,0);
  }
  else if (iVar1 == 3) {
    fVar2 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin_368fd60(&uStack_38,0);
    UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin_368fd68(&uStack_50,fVar2 * param_8,0);
    fVar2 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax_368fd50(&uStack_38,0);
    UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax_368fd58(&uStack_50,fVar2 * param_8,0);
  }
  else if (iVar1 == 0) {
    fVar2 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant_368fd70(&uStack_38,0);
    UnityEngine_ParticleSystem_MinMaxCurve__set_constant_368fd78(&uStack_50,fVar2 * param_8,0);
  }
  *param_1 = uStack_50;
  param_1[1] = uStack_48;
  param_1[2] = uStack_40;
  return;
}

