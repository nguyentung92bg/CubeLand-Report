/* IL2CPP: Rotatelab.Scripts.LevelStateManager.PreventFailSearchScope$$Get
Rotatelab_Scripts_LevelStateManager_PreventFailSearchScope_o* Rotatelab_Scripts_LevelStateManager_PreventFailSearchScope__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.PreventFailSearchScope$$Get
   Rotatelab_Scripts_LevelStateManager_PreventFailSearchScope_o*
   Rotatelab_Scripts_LevelStateManager_PreventFailSearchScope__Get (const MethodInfo* method); */

undefined4 Rotatelab_Scripts_LevelStateManager_PreventFailSearchScope__Get_1017a64(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01027b10 + 0x1027a74);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027b14 + 0x1027a88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027b18 + 0x1027a94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027b1c + 0x1027aa0));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01027b20 + 0x1027ab4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Pool_GenericPool_object___Get_2405b04
                    (**(undefined4 **)(_UNK_01027b24 + 0x1027ad0));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01027b28 + 0x1027ae4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetFailSearchAllowed_1017988(iVar2,0,uVar1);
  return uVar1;
}

