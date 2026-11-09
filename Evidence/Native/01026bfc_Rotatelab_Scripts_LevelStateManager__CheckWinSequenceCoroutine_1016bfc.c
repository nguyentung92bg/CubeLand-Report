/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$CheckWinSequenceCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$CheckWinSequenceCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine
   (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_1016bfc(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01026c68 + 0x1026c10);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01026c6c + 0x1026c24));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01026c70 + 0x1026c38));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

