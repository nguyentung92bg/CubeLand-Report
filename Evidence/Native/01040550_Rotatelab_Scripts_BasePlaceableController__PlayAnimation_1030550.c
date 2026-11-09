/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$PlayAnimation
void Rotatelab_Scripts_BasePlaceableController__PlayAnimation (Rotatelab_Scripts_BasePlaceableController_o* __this, System_String_o* stateName, bool smoothTransition, float blendDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$PlayAnimation
   void Rotatelab_Scripts_BasePlaceableController__PlayAnimation
   (Rotatelab_Scripts_BasePlaceableController_o* __this, System_String_o* stateName, bool
   smoothTransition, float blendDuration, const MethodInfo* method); */

void Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_3 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac(iVar1,param_2,0,0,0);
  }
  else {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__CrossFadeInFixedTime_3591034(iVar1,param_2,param_4,0,0,0);
  }
  return;
}

