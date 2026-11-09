/* IL2CPP: Rotatelab.Boosters.CannonProjectileController.<>c$$<Fire>b__9_0
void Rotatelab_Boosters_CannonProjectileController___c___Fire_b__9_0 (Rotatelab_Boosters_CannonProjectileController___c_o* __this, Rotatelab_Boosters_CannonProjectileController_o* this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonProjectileController.<>c$$<Fire>b__9_0
   void Rotatelab_Boosters_CannonProjectileController___c___Fire_b__9_0
   (Rotatelab_Boosters_CannonProjectileController___c_o* __this,
   Rotatelab_Boosters_CannonProjectileController_o* this, float t, const MethodInfo* method); */

void Rotatelab_Boosters_CannonProjectileController___c___Fire_b__9_0_1133eac
               (undefined4 param_1,int param_2,float param_3)

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
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar8 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar5 = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x2c);
  fVar9 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 0x34);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = param_3;
  if (1.0 < param_3) {
    fVar2 = 1.0;
  }
  if (param_3 < 0.0) {
    fVar2 = _UNK_01143d24;
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar1,fVar4 + fVar2 * (fVar6 - fVar4),
             fVar3 + fVar2 * (fVar9 - fVar3) + (1.0 - param_3) * fVar8 * 4.0 * param_3,
             fVar5 + fVar2 * (fVar7 - fVar5),0);
  return;
}

