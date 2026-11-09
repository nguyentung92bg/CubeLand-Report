/* IL2CPP: Rotatelab.Boosters.CannonProjectileController$$UpdateFlightPosition
void Rotatelab_Boosters_CannonProjectileController__UpdateFlightPosition (Rotatelab_Boosters_CannonProjectileController_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonProjectileController$$UpdateFlightPosition
   void Rotatelab_Boosters_CannonProjectileController__UpdateFlightPosition
   (Rotatelab_Boosters_CannonProjectileController_o* __this, float t, const MethodInfo* method); */

void Rotatelab_Boosters_CannonProjectileController__UpdateFlightPosition_1133c64
               (int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar5 = *(float *)(param_1 + 0x28);
  fVar6 = *(float *)(param_1 + 0x2c);
  fVar9 = *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x34);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = param_2;
  if (1.0 < param_2) {
    fVar2 = 1.0;
  }
  if (param_2 < 0.0) {
    fVar2 = _UNK_01143d24;
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar1,fVar4 + fVar2 * (fVar6 - fVar4),
             fVar3 + fVar2 * (fVar9 - fVar3) + (1.0 - param_2) * fVar8 * 4.0 * param_2,
             fVar5 + fVar2 * (fVar7 - fVar5),0);
  return;
}

