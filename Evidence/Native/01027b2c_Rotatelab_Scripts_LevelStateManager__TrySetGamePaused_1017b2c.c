/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$TrySetGamePaused
void Rotatelab_Scripts_LevelStateManager__TrySetGamePaused (Rotatelab_Scripts_LevelStateManager_o* __this, bool isPaused, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$TrySetGamePaused
   void Rotatelab_Scripts_LevelStateManager__TrySetGamePaused
   (Rotatelab_Scripts_LevelStateManager_o* __this, bool isPaused, Il2CppObject* source, const
   MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar9 = '\x01';
  }
  piVar8 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74);
  if (param_2 == 0) {
    if (iVar3 == 0) {
      FUN_00ec3934();
    }
    iVar3 = **(int **)(_UNK_01027c00 + 0x1027bdc);
    if (*(int *)(iVar3 + 0x1c) == 0) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4));
      if (*(int *)(iVar3 + 0x1c) == 0) {
        FUN_00efd7c4(iVar3);
      }
    }
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (piVar8,param_3,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8));
    if (-1 < (int)uVar5) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (piVar8,uVar5,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xc));
    }
    return ~uVar5 >> 0x1f;
  }
  if (iVar3 == 0) {
    FUN_00ec3934();
  }
  iVar3 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    FUN_00efd7c4(iVar3);
  }
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
  }
  iVar1 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar4,4);
LAB_01494a00:
  uVar5 = (*(code *)*puVar2)(piVar8,param_3,puVar2[1]);
  if (uVar5 == 0) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar4 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,2);
LAB_01494a8c:
    (*(code *)*puVar2)(piVar8,param_3,puVar2[1]);
  }
  return uVar5 ^ 1;
}

