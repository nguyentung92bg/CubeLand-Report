/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<Awake>b__47_0
UnityEngine_Vector3_o Rotatelab_Scripts_DockManager___c___Awake_b__47_0 (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_PilotBlasterDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<Awake>b__47_0
   UnityEngine_Vector3_o Rotatelab_Scripts_DockManager___c___Awake_b__47_0
   (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_PilotBlasterDockController_o* e,
   const MethodInfo* method); */

void Rotatelab_Scripts_DockManager___c___Awake_b__47_0_10098e8
               (undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}

