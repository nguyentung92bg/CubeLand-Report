/* IL2CPP: Rotatelab.Scripts.GameManager$$ObserveUnhandledTaskExceptions
void Rotatelab_Scripts_GameManager__ObserveUnhandledTaskExceptions (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$ObserveUnhandledTaskExceptions
   void Rotatelab_Scripts_GameManager__ObserveUnhandledTaskExceptions (const MethodInfo* method); */

void Rotatelab_Scripts_GameManager__ObserveUnhandledTaskExceptions_1066c00(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar4 = (char *)(_UNK_01076d64 + 0x1076c10);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076d68 + 0x1076c24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076d6c + 0x1076c30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076d70 + 0x1076c3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076d74 + 0x1076c48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076d78 + 0x1076c54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076d7c + 0x1076c60));
    *pcVar4 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01076d80 + 0x1076c74);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01076d84 + 0x1076c90);
  System_EventHandler_object____ctor_23479ac(uVar1,0,*puVar7,0);
  if (*(int *)(**(int **)(_UNK_01076d88 + 0x1076ca0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Threading_Tasks_TaskScheduler__remove_UnobservedTaskException_2bff7a0(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  System_EventHandler_object____ctor_23479ac(uVar1,0,*puVar7,0);
  System_Threading_Tasks_TaskScheduler__add_UnobservedTaskException_2bff5a8(uVar1,0);
  puVar6 = *(undefined4 **)(_UNK_01076d8c + 0x1076cf0);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01076d90 + 0x1076d0c);
  System_Action_object____ctor_1f11414(uVar1,0,*puVar7,0);
  if (*(int *)(**(int **)(_UNK_01076d94 + 0x1076d1c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Cysharp_Threading_Tasks_UniTaskScheduler__remove_UnobservedTaskException_321ee70(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  System_Action_object____ctor_1f11414(uVar1,0,*puVar7,0);
  pcVar4 = (char *)(_UNK_0322ee5c + 0x322ed84);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322ee60 + 0x322ed98),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322ee64 + 0x322eda4));
    *pcVar4 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0322ee68 + 0x322edb8);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar2 = *piVar9;
  }
  puVar6 = *(undefined4 **)(_UNK_0322ee6c + 0x322ede0);
  iVar2 = **(int **)(iVar2 + 0x5c);
  do {
    iVar8 = 0;
    iVar3 = System_Delegate__Combine_2bbca94(iVar2,uVar1,0);
    if (iVar3 != 0) {
      uVar5 = *puVar6;
      iVar8 = thunk_FUN_00f00bc8(iVar3,uVar5);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f4fe34(iVar3,uVar5);
      }
    }
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      iVar3 = *piVar9;
    }
    iVar3 = thunk_FUN_00efd180(*(undefined4 *)(iVar3 + 0x5c),iVar8,iVar2);
    bVar10 = iVar3 != iVar2;
    iVar2 = iVar3;
  } while (bVar10);
  return;
}

