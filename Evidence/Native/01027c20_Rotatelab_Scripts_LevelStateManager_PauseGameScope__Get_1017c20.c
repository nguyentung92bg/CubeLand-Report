/* IL2CPP: Rotatelab.Scripts.LevelStateManager.PauseGameScope$$Get
Rotatelab_Scripts_LevelStateManager_PauseGameScope_o* Rotatelab_Scripts_LevelStateManager_PauseGameScope__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.PauseGameScope$$Get
   Rotatelab_Scripts_LevelStateManager_PauseGameScope_o*
   Rotatelab_Scripts_LevelStateManager_PauseGameScope__Get (const MethodInfo* method); */

undefined4 Rotatelab_Scripts_LevelStateManager_PauseGameScope__Get_1017c20(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01027ccc + 0x1027c30);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027cd0 + 0x1027c44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027cd4 + 0x1027c50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027cd8 + 0x1027c5c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01027cdc + 0x1027c70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Pool_GenericPool_object___Get_2405b04
                    (**(undefined4 **)(_UNK_01027ce0 + 0x1027c8c));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01027ce4 + 0x1027ca0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar2,1,uVar1);
  return uVar1;
}

