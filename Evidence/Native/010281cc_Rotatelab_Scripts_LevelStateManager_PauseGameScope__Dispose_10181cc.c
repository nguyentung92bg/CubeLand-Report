/* IL2CPP: Rotatelab.Scripts.LevelStateManager.PauseGameScope$$Dispose
void Rotatelab_Scripts_LevelStateManager_PauseGameScope__Dispose (Rotatelab_Scripts_LevelStateManager_PauseGameScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01027b98) */
/* WARNING: Removing unreachable block (ram,0x01027ba0) */
/* WARNING: Removing unreachable block (ram,0x01027ba4) */
/* WARNING: Removing unreachable block (ram,0x01494980) */
/* WARNING: Removing unreachable block (ram,0x01494988) */
/* WARNING: Removing unreachable block (ram,0x01494990) */
/* WARNING: Removing unreachable block (ram,0x01494994) */
/* WARNING: Removing unreachable block (ram,0x014949a8) */
/* WARNING: Removing unreachable block (ram,0x014949b4) */
/* WARNING: Removing unreachable block (ram,0x014949c4) */
/* WARNING: Removing unreachable block (ram,0x014949cc) */
/* WARNING: Removing unreachable block (ram,0x014949f4) */
/* WARNING: Removing unreachable block (ram,0x014949d8) */
/* WARNING: Removing unreachable block (ram,0x014949e4) */
/* WARNING: Removing unreachable block (ram,0x01494a00) */
/* WARNING: Removing unreachable block (ram,0x01494a20) */
/* WARNING: Removing unreachable block (ram,0x01494a34) */
/* WARNING: Removing unreachable block (ram,0x01494a40) */
/* WARNING: Removing unreachable block (ram,0x01494a50) */
/* WARNING: Removing unreachable block (ram,0x01494a58) */
/* WARNING: Removing unreachable block (ram,0x01494a80) */
/* WARNING: Removing unreachable block (ram,0x01494a64) */
/* WARNING: Removing unreachable block (ram,0x01494a70) */
/* WARNING: Removing unreachable block (ram,0x01494a8c) */
/* WARNING: Removing unreachable block (ram,0x01494aa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.PauseGameScope$$Dispose
   void Rotatelab_Scripts_LevelStateManager_PauseGameScope__Dispose
   (Rotatelab_Scripts_LevelStateManager_PauseGameScope_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager_PauseGameScope__Dispose_10181cc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01028278 + 0x10281e0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102827c + 0x10281f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028280 + 0x1028200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028284 + 0x102820c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01028288 + 0x1028220) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Pool_GenericPool_object___Release_2405c7c
            (param_1,**(undefined4 **)(_UNK_0102828c + 0x102823c));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01028290 + 0x1028250));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = **(int **)(_UNK_01027c00 + 0x1027bdc);
  if ((*(int *)(iVar3 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4)), *(int *)(iVar3 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar3);
  }
  if (iVar1 != 0) {
    uVar2 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (iVar1,param_1,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
    if (-1 < (int)uVar2) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (iVar1,uVar2,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xc));
    }
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

