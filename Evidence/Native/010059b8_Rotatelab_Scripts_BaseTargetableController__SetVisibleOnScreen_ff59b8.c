/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$SetVisibleOnScreen
void Rotatelab_Scripts_BaseTargetableController__SetVisibleOnScreen (Rotatelab_Scripts_BaseTargetableController_o* __this, bool isVisible, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$SetVisibleOnScreen
   void Rotatelab_Scripts_BaseTargetableController__SetVisibleOnScreen
   (Rotatelab_Scripts_BaseTargetableController_o* __this, bool isVisible, const MethodInfo* method);
    */

void Rotatelab_Scripts_BaseTargetableController__SetVisibleOnScreen_ff59b8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = UnityEngine_Time__get_frameCount_35fd3d8(0);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    return;
  }
  if ((*(char *)(param_1 + 0x20) != '\0') &&
     (iVar2 = UnityEngine_Time__get_frameCount_35fd3d8(0), 3 < iVar2 - *(int *)(param_1 + 0x1c))) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

