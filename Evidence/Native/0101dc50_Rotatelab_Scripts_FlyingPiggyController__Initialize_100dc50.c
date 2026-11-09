/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$Initialize
void Rotatelab_Scripts_FlyingPiggyController__Initialize (Rotatelab_Scripts_FlyingPiggyController_o* __this, Rotatelab_FlyingPiggyData_o* data, UnityEngine_Vector3_o center, float radius, UnityEngine_Transform_o* cameraTransform, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$Initialize
   void Rotatelab_Scripts_FlyingPiggyController__Initialize
   (Rotatelab_Scripts_FlyingPiggyController_o* __this, Rotatelab_FlyingPiggyData_o* data,
   UnityEngine_Vector3_o center, float radius, UnityEngine_Transform_o* cameraTransform, const
   MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__Initialize_100dc50
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               float param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  
  *(int *)(param_1 + 0x38) = param_2;
  thunk_FUN_00ec5080();
  fVar1 = _UNK_0101dd08;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(undefined4 *)(param_1 + 0x5c) = param_5;
  *(float *)(param_1 + 0x84) = fVar1 / fVar4;
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x4c) + param_6;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 100),param_7);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x50);
  Rotatelab_Scripts_FlyingPiggyController__UpdateOrbitPosition_100dd0c(param_1);
  Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(param_1,0,0);
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1,0,0);
  if (iVar2 != 0) {
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    *(undefined1 *)(param_1 + 0x19) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

