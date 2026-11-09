/* IL2CPP: Rotatelab.Grid.GridManager$$ShowTargetablesAdjacentToCells
void Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells (Rotatelab_Grid_GridManager_o* __this, System_Collections_Generic_IList_Vector3Int__o* positions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$ShowTargetablesAdjacentToCells
   void Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells (Rotatelab_Grid_GridManager_o*
   __this, System_Collections_Generic_IList_Vector3Int__o* positions, const MethodInfo* method); */

void Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells_1108600(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar13 = (char *)(_UNK_01118a54 + 0x111861c);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a58 + 0x1118630));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a5c + 0x111863c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a60 + 0x1118648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a64 + 0x1118654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a68 + 0x1118660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a6c + 0x111866c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a70 + 0x1118678));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a74 + 0x1118684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118a78 + 0x1118690));
    *pcVar13 = '\x01';
  }
  iStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  if (*(int *)(**(int **)(_UNK_01118a7c + 0x11186a8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_object___Get_240ea4c
            (&iStack_48,&iStack_34,**(undefined4 **)(_UNK_01118a80 + 0x11186d4));
  iStack_30 = iStack_48;
  piStack_38 = &iStack_30;
  iStack_2c = iStack_44;
  uStack_3c = 0;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *param_2;
  uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_01118a84 + 0x1118714)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
        goto LAB_0111875c;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_01118a84 + 0x1118714),0);
LAB_0111875c:
  iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      iVar6 = *param_2;
      uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_01118a88 + 0x1118788)) {
            puVar5 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
            goto LAB_011187d0;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_01118a88 + 0x1118788),0);
LAB_011187d0:
      (*(code *)*puVar5)(&iStack_48,param_2,iVar4,puVar5[1]);
      iVar3 = iStack_40;
      iVar2 = iStack_44;
      iVar6 = iStack_48;
      iVar7 = **(int **)(_UNK_01118a8c + 0x11187f4);
      if (*(int *)(iVar7 + 0x74) == 0) {
        FUN_00ec3934();
        iVar7 = **(int **)(_UNK_01118a90 + 0x111882c);
      }
      uVar10 = 0;
      iVar7 = **(int **)(iVar7 + 0x5c);
      piVar12 = (int *)(iVar7 + 0x10);
      while( true ) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar10) break;
        if (*(uint *)(iVar7 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar8 = Rotatelab_Grid_GridManager__ConvertGridPositionToIndex_11070b0
                          (param_1,*piVar12 + iVar6,piVar12[1] + iVar2,piVar12[2] + iVar3);
        if (-1 < (int)uVar8) {
          iVar14 = *(int *)(param_1 + 0x1c);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar15 = *(int **)(iVar14 + 0x10 + uVar8 * 0xc);
          if ((piVar15 != (int *)0x0) && ((char)piVar15[6] == '\0')) {
            uVar11 = (uint)*(byte *)(**(int **)(_UNK_01118a98 + 0x11188e0) + 0xb8);
            if ((*(byte *)(*piVar15 + 0xb8) < uVar11) ||
               (*(int *)(*(int *)(*piVar15 + 100) + uVar11 * 4 + -4) !=
                **(int **)(_UNK_01118a98 + 0x11188e0))) {
              if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar9 = System_Collections_Generic_HashSet_object___Add_2420ac8
                                (iStack_34,piVar15,**(undefined4 **)(_UNK_01118a9c + 0x1118924));
              if (iVar9 == 0) goto LAB_01118948;
            }
            Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974(piVar15,1,0);
          }
LAB_01118948:
          piVar15 = *(int **)(iVar14 + 0x10 + uVar8 * 0xc + 4);
          if (piVar15 != (int *)0x0) {
            uVar8 = (uint)*(byte *)(**(int **)(_UNK_01118aa0 + 0x1118968) + 0xb8);
            if ((uVar8 <= *(byte *)(*piVar15 + 0xb8)) &&
               (*(int *)(*(int *)(*piVar15 + 100) + uVar8 * 4 + -4) ==
                **(int **)(_UNK_01118aa0 + 0x1118968))) {
              Rotatelab_Scripts_WallController__SetVisibility_105e7b0(piVar15,1,0);
            }
          }
        }
        piVar12 = piVar12 + 3;
        uVar10 = uVar10 + 1;
      }
      bVar1 = 0 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar1);
  }
  Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
            (&iStack_30,**(undefined4 **)(_UNK_01118a94 + 0x11189c8));
  return;
}

