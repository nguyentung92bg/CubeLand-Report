/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$GetShootingPoint
UnityEngine_Vector3_o Rotatelab_Scripts_BaseTargetableController__GetShootingPoint (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$GetShootingPoint
   UnityEngine_Vector3_o Rotatelab_Scripts_BaseTargetableController__GetShootingPoint
   (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseTargetableController__GetShootingPoint_ff5a18
               (undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}

