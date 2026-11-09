/* IL2CPP: Rotatelab.Scripts.MeteorController$$GetTargetOnPlane
UnityEngine_Vector3_o Rotatelab_Scripts_MeteorController__GetTargetOnPlane (Rotatelab_Scripts_MeteorController_o* __this, float planeZ, UnityEngine_Transform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.MeteorController$$GetTargetOnPlane
   UnityEngine_Vector3_o Rotatelab_Scripts_MeteorController__GetTargetOnPlane
   (Rotatelab_Scripts_MeteorController_o* __this, float planeZ, UnityEngine_Transform_o* target,
   const MethodInfo* method); */

void Rotatelab_Scripts_MeteorController__GetTargetOnPlane_10264e8
               (float *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  iVar1 = *(int *)(param_2 + 0x34);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_40,param_4,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__WorldToScreenPoint_35aea00(&fStack_40,iVar1,fStack_40,fStack_3c,fStack_38,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__ScreenPointToRay_35aedac(&fStack_40,iVar1,fStack_40,fStack_3c,fStack_38,0);
  fVar2 = (param_3 - fStack_38) / fStack_2c;
  param_1[2] = fStack_38 + fStack_2c * fVar2;
  param_1[1] = fStack_3c + fStack_30 * fVar2;
  *param_1 = fStack_40 + fStack_34 * fVar2;
  return;
}

