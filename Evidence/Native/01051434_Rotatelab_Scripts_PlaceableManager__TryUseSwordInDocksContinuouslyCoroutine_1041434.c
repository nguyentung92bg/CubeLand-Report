/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseSwordInDocksContinuouslyCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseSwordInDocksContinuouslyCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_1041434
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010514a0 + 0x1051448);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010514a4 + 0x105145c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010514a8 + 0x1051470));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

