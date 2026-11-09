/* IL2CPP: Rotatelab.UI.MainCanvasBase$$SetCanvasEnable
void Rotatelab_UI_MainCanvasBase__SetCanvasEnable (Rotatelab_UI_MainCanvasBase_o* __this, bool enable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.MainCanvasBase$$SetCanvasEnable
   void Rotatelab_UI_MainCanvasBase__SetCanvasEnable (Rotatelab_UI_MainCanvasBase_o* __this, bool
   enable, const MethodInfo* method); */

void Rotatelab_UI_MainCanvasBase__SetCanvasEnable_1127660(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = _UNK_011376e8;
  if (param_2 != 0) {
    uVar1 = 0x3f800000;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x14),uVar1,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x14),param_2,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_interactable_39a3940(*(int *)(param_1 + 0x14),param_2,0);
  return;
}

