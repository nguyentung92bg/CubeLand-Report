/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$UpdateOrbitPosition
void Rotatelab_Scripts_FlyingPiggyController__UpdateOrbitPosition (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$UpdateOrbitPosition
   void Rotatelab_Scripts_FlyingPiggyController__UpdateOrbitPosition
   (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__UpdateOrbitPosition_100dd0c(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = *(float *)(param_1 + 0x68) * _UNK_0101dec4;
  UnityEngine_Transform__get_right_3615130(&fStack_88,*(int *)(param_1 + 100),0);
  fVar4 = fStack_80;
  fVar2 = fStack_84;
  fVar1 = fStack_88;
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_forward_36152b0(&fStack_88,*(int *)(param_1 + 100),0);
  sincosf(fVar10,&fStack_8c,&fStack_90);
  fVar5 = fStack_80;
  fVar3 = fStack_84;
  fVar10 = fStack_88;
  fVar9 = fStack_8c * fStack_88;
  fVar8 = fStack_8c * fStack_84;
  fVar7 = fStack_8c * fStack_80;
  fVar11 = *(float *)(param_1 + 0x60);
  iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar6,*(float *)(param_1 + 0x54) + (fVar9 + fStack_90 * fVar1) * fVar11,
             *(float *)(param_1 + 0x58) + (fVar8 + fStack_90 * fVar2) * fVar11,
             *(float *)(param_1 + 0x5c) + (fVar7 + fStack_90 * fVar4) * fVar11,0);
  iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_up_36151f0(&fStack_88,*(int *)(param_1 + 100),0);
  fStack_78 = fStack_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  fStack_6c = fStack_90 * fVar10 - fStack_8c * fVar1;
  fStack_68 = fStack_90 * fVar3 - fStack_8c * fVar2;
  fStack_64 = fStack_90 * fVar5 - fStack_8c * fVar4;
  UnityEngine_Quaternion__Internal_LookRotation_35ee358(&fStack_88,&fStack_6c,&fStack_78,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_rotation_3614e20(iVar6,fStack_88,fStack_84,fStack_80,uStack_7c,0);
  return;
}

