/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$FocusAtPointCoroutine
System_Collections_IEnumerator_o* Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_Vector2_o focusPoint, float speed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$FocusAtPointCoroutine
   System_Collections_IEnumerator_o* Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine
   (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_Vector2_o focusPoint, float speed, const
   MethodInfo* method); */

int Rotatelab_ScrollViewFocusFunctions__FocusAtPointCoroutine_107d370
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108d3fc + 0x108d390);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d400 + 0x108d3a8));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108d404 + 0x108d3bc));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  return iVar1;
}

