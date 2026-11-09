/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$LerpToScrollPositionCoroutine
System_Collections_IEnumerator_o* Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_Vector2_o targetNormalizedPos, float speed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$LerpToScrollPositionCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine (UnityEngine_UI_ScrollRect_o*
   scrollView, UnityEngine_Vector2_o targetNormalizedPos, float speed, const MethodInfo* method); */

int Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_107d2bc
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108d348 + 0x108d2dc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d34c + 0x108d2f4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108d350 + 0x108d308));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  return iVar1;
}

