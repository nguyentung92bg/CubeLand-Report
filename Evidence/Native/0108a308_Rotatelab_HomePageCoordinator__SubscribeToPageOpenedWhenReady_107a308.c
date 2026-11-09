/* IL2CPP: Rotatelab.HomePageCoordinator$$SubscribeToPageOpenedWhenReady
System_Collections_IEnumerator_o* Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$SubscribeToPageOpenedWhenReady
   System_Collections_IEnumerator_o* Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady
   (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method); */

int Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady_107a308(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108a374 + 0x108a31c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a378 + 0x108a330));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108a37c + 0x108a344));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

