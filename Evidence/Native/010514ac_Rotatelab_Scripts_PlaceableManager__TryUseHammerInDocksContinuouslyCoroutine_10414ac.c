/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseHammerInDocksContinuouslyCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseHammerInDocksContinuouslyCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_10414ac
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01051518 + 0x10514c0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105151c + 0x10514d4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01051520 + 0x10514e8));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

