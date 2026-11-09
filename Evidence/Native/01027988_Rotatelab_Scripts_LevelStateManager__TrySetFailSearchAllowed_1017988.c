/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$TrySetFailSearchAllowed
void Rotatelab_Scripts_LevelStateManager__TrySetFailSearchAllowed (Rotatelab_Scripts_LevelStateManager_o* __this, bool isAllowed, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$TrySetFailSearchAllowed
   void Rotatelab_Scripts_LevelStateManager__TrySetFailSearchAllowed
   (Rotatelab_Scripts_LevelStateManager_o* __this, bool isAllowed, Il2CppObject* source, const
   MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager__TrySetFailSearchAllowed_1017988
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_01027a44 + 0x10279a4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027a48 + 0x10279b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027a4c + 0x10279c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027a50 + 0x10279d0));
    *pcVar9 = '\x01';
  }
  piVar8 = *(int **)(param_1 + 0x20);
  iVar4 = *(int *)(**(int **)(_UNK_01027a54 + 0x10279e8) + 0x74);
  if (param_2 != 0) {
    if (iVar4 == 0) {
      FUN_00ec3934();
    }
    iVar4 = **(int **)(_UNK_01027a58 + 0x1027a10);
    if (*(int *)(iVar4 + 0x1c) == 0) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4));
      if (*(int *)(iVar4 + 0x1c) == 0) {
        FUN_00efd7c4(iVar4);
      }
    }
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (piVar8,param_3,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 8));
    if (-1 < (int)uVar3) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (piVar8,uVar3,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0xc));
    }
    return ~uVar3 >> 0x1f;
  }
  if (iVar4 == 0) {
    FUN_00ec3934();
  }
  iVar4 = **(int **)(_UNK_01027a5c + 0x1027a38);
  if (*(int *)(iVar4 + 0x1c) == 0) {
    FUN_00efd7c4(iVar4);
  }
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  iVar1 = *piVar8;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar5,4);
LAB_01494a00:
  uVar3 = (*(code *)*puVar2)(piVar8,param_3,puVar2[1]);
  if (uVar3 == 0) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768(iVar4);
    }
    iVar5 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar4,2);
LAB_01494a8c:
    (*(code *)*puVar2)(piVar8,param_3,puVar2[1]);
  }
  return uVar3 ^ 1;
}

