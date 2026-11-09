/* IL2CPP: Rotatelab.Scripts.CameraManager.PreventManualRotationScope$$Dispose
void Rotatelab_Scripts_CameraManager_PreventManualRotationScope__Dispose (Rotatelab_Scripts_CameraManager_PreventManualRotationScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0100bc74) */
/* WARNING: Removing unreachable block (ram,0x0100bc7c) */
/* WARNING: Removing unreachable block (ram,0x0100bc80) */
/* WARNING: Removing unreachable block (ram,0x0100bca4) */
/* WARNING: Removing unreachable block (ram,0x0100bca8) */
/* WARNING: Removing unreachable block (ram,0x0100bcc4) */
/* WARNING: Removing unreachable block (ram,0x0100b880) */
/* WARNING: Removing unreachable block (ram,0x0100b8a0) */
/* WARNING: Removing unreachable block (ram,0x0100b8c0) */
/* WARNING: Removing unreachable block (ram,0x0100b8c8) */
/* WARNING: Removing unreachable block (ram,0x0100b8cc) */
/* WARNING: Removing unreachable block (ram,0x0100b8d0) */
/* WARNING: Removing unreachable block (ram,0x0100b8d4) */
/* WARNING: Removing unreachable block (ram,0x0100b8f0) */
/* WARNING: Removing unreachable block (ram,0x0100b8f8) */
/* WARNING: Removing unreachable block (ram,0x0100b908) */
/* WARNING: Removing unreachable block (ram,0x0100b90c) */
/* WARNING: Removing unreachable block (ram,0x023b2814) */
/* WARNING: Removing unreachable block (ram,0x023b2818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager.PreventManualRotationScope$$Dispose
   void Rotatelab_Scripts_CameraManager_PreventManualRotationScope__Dispose
   (Rotatelab_Scripts_CameraManager_PreventManualRotationScope_o* __this, const MethodInfo* method);
    */

uint Rotatelab_Scripts_CameraManager_PreventManualRotationScope__Dispose_ffbec4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0100bf70 + 0x100bed8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bf74 + 0x100beec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bf78 + 0x100bef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bf7c + 0x100bf04));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0100bf80 + 0x100bf18) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_GenericPool_object___Release_240597c
            (param_1,**(undefined4 **)(_UNK_0100bf84 + 0x100bf34));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0100bf88 + 0x100bf48));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0100bcc8 + 0x100bbf0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bccc + 0x100bc04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd0 + 0x100bc10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd4 + 0x100bc1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bcd8 + 0x100bc28));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (*(int *)(**(int **)(_UNK_0100bcdc + 0x100bc40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = **(int **)(_UNK_0100bce0 + 0x100bc68);
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

