/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetHiddenModeActive
void Rotatelab_Scripts_BlasterController__SetHiddenModeActive (Rotatelab_Scripts_BlasterController_o* __this, bool isHidden, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetHiddenModeActive
   void Rotatelab_Scripts_BlasterController__SetHiddenModeActive
   (Rotatelab_Scripts_BlasterController_o* __this, bool isHidden, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SetHiddenModeActive_1031c54(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x15],0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,param_2 ^ 1,0);
  if (param_1[0x1e] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x1e],0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x01041cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
  return;
}

