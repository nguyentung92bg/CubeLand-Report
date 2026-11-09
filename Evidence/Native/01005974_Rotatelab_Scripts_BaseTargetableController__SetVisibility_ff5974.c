/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$SetVisibility
void Rotatelab_Scripts_BaseTargetableController__SetVisibility (Rotatelab_Scripts_BaseTargetableController_o* __this, bool isVisible, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$SetVisibility
   void Rotatelab_Scripts_BaseTargetableController__SetVisibility
   (Rotatelab_Scripts_BaseTargetableController_o* __this, bool isVisible, const MethodInfo* method);
    */

void Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 != 0) {
    UnityEngine_GameObject__SetActive_3602038(iVar1,param_2,0);
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

