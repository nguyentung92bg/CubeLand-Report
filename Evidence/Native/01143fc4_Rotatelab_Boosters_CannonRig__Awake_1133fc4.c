/* IL2CPP: Rotatelab.Boosters.CannonRig$$Awake
void Rotatelab_Boosters_CannonRig__Awake (Rotatelab_Boosters_CannonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Boosters.CannonRig$$Awake
   void Rotatelab_Boosters_CannonRig__Awake (Rotatelab_Boosters_CannonRig_o* __this, const
   MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__Awake_1133fc4(int param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localRotation_3614f58(&uStack_30,*(int *)(param_1 + 0x10),0);
  *(undefined8 *)(param_1 + 0x94) = uStack_30;
  *(undefined8 *)(param_1 + 0x9c) = uStack_28;
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
             *(undefined4 *)(param_1 + 0x34),0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  return;
}

