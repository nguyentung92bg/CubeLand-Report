/* IL2CPP: Rotatelab.HomePageCoordinator$$DrainNextFrame
System_Collections_IEnumerator_o* Rotatelab_HomePageCoordinator__DrainNextFrame (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$DrainNextFrame
   System_Collections_IEnumerator_o* Rotatelab_HomePageCoordinator__DrainNextFrame
   (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method); */

int Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108a684 + 0x108a62c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a688 + 0x108a640));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108a68c + 0x108a654));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

