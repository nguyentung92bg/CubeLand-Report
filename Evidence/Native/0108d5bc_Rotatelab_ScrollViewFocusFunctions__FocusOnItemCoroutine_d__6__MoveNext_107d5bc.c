/* IL2CPP: Rotatelab.ScrollViewFocusFunctions.<FocusOnItemCoroutine>d__6$$MoveNext
bool Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine_d__6__MoveNext (Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine_d__6_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ScrollViewFocusFunctions.<FocusOnItemCoroutine>d__6$$MoveNext
   bool Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine_d__6__MoveNext
   (Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine_d__6_o* __this, const MethodInfo*
   method); */

bool Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine_d__6__MoveNext_107d5bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107d058
              (&uStack_20,uVar2,*(undefined4 *)(param_1 + 0x14));
    uVar2 = Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_107d2bc
                      (uVar2,uStack_20,uStack_1c,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080();
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return iVar1 == 0;
}

