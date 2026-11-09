/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$FocusOnItemCoroutine
System_Collections_IEnumerator_o* Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_RectTransform_o* item, float speed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ScrollViewFocusFunctions$$FocusOnItemCoroutine
   System_Collections_IEnumerator_o* Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine
   (UnityEngine_UI_ScrollRect_o* scrollView, UnityEngine_RectTransform_o* item, float speed, const
   MethodInfo* method); */

int Rotatelab_ScrollViewFocusFunctions__FocusOnItemCoroutine_107d424
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108d4b4 + 0x108d444);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d4b8 + 0x108d458));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108d4bc + 0x108d46c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_2);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  return iVar1;
}

