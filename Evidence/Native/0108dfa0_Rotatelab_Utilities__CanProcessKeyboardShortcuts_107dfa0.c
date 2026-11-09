/* IL2CPP: Rotatelab.Utilities$$CanProcessKeyboardShortcuts
bool Rotatelab_Utilities__CanProcessKeyboardShortcuts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$CanProcessKeyboardShortcuts
   bool Rotatelab_Utilities__CanProcessKeyboardShortcuts (const MethodInfo* method); */

bool Rotatelab_Utilities__CanProcessKeyboardShortcuts_107dfa0(void)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_0108e0e4 + 0x108dfb4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e0e8 + 0x108dfc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e0ec + 0x108dfd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e0f0 + 0x108dfe0));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0108e0f4 + 0x108dff8);
  iStack_14 = 0;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(**(int **)(_UNK_0108e0f8 + 0x108e030) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  bVar2 = true;
  if (iVar1 == 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_GameObject__TryGetComponent_object__1491628
                      (*(int *)(iVar1 + 0x24),&iStack_14,
                       **(undefined4 **)(_UNK_0108e0fc + 0x108e0ac));
    if (iVar1 != 0) {
      if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar2 = *(char *)(iStack_14 + 0x198) == '\0';
    }
  }
  return bVar2;
}

