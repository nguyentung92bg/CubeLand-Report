/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$FocusAtPoint
void Rotatelab_ScrollViewFocusFunctions__FocusAtPoint (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_Vector2_o focusPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$FocusAtPoint
   void Rotatelab_ScrollViewFocusFunctions__FocusAtPoint (UnityEngine_UI_ScrollRect_o* scrollView,
   UnityEngine_Vector2_o focusPoint, const MethodInfo* method); */

void Rotatelab_ScrollViewFocusFunctions__FocusAtPoint_107d224
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107ce10
            (&uStack_18,param_1,param_2,param_3);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*param_1 + 0x248))(param_1,uStack_18,0,*(undefined4 *)(*param_1 + 0x24c));
                    /* WARNING: Could not recover jumptable at 0x039cbce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uStack_14,1,*(undefined4 *)(*param_1 + 0x24c));
  return;
}

