/* IL2CPP: Rotatelab.ScrollViewFocusFunctions.<FocusAtPointCoroutine>d__5$$MoveNext
bool Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine_d__5__MoveNext (Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ScrollViewFocusFunctions.<FocusAtPointCoroutine>d__5$$MoveNext
   bool Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine_d__5__MoveNext
   (Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine_d__5_o* __this, const MethodInfo*
   method); */

bool Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine_d__5__MoveNext_107d4e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107ce10
              (&uStack_18,uVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    uVar1 = Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_107d2bc
                      (uVar1,uStack_18,uStack_14,*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    thunk_FUN_00ec5080();
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return iVar2 == 0;
}

