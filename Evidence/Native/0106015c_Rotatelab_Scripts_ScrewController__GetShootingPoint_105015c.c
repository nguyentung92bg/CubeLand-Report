/* IL2CPP: Rotatelab.Scripts.ScrewController$$GetShootingPoint
UnityEngine_Vector3_o Rotatelab_Scripts_ScrewController__GetShootingPoint (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ScrewController$$GetShootingPoint
   UnityEngine_Vector3_o Rotatelab_Scripts_ScrewController__GetShootingPoint
   (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__GetShootingPoint_105015c(undefined8 *param_1,int param_2)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(int *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_20,*(int *)(param_2 + 0x40),0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}

