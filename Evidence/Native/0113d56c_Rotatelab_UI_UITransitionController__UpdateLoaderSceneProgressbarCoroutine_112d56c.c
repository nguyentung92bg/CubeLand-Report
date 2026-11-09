/* IL2CPP: Rotatelab.UI.UITransitionController$$UpdateLoaderSceneProgressbarCoroutine
System_Collections_IEnumerator_o* Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$UpdateLoaderSceneProgressbarCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine
   (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method); */

int Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_112d56c
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0113d5d8 + 0x113d580);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d5dc + 0x113d594));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113d5e0 + 0x113d5a8));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

