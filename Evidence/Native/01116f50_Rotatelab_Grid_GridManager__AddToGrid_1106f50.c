/* IL2CPP: Rotatelab.Grid.GridManager$$AddToGrid
void Rotatelab_Grid_GridManager__AddToGrid (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Component_o* obj, UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$AddToGrid
   void Rotatelab_Grid_GridManager__AddToGrid (Rotatelab_Grid_GridManager_o* __this,
   UnityEngine_Component_o* obj, UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
    */

void Rotatelab_Grid_GridManager__AddToGrid_1106f50(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puVar14;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)(param_3 + 0x10);
    uVar12 = 0;
    while( true ) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(param_3 + 0xc) <= (int)uVar12) break;
      if (*(uint *)(param_3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar4 = *puVar1;
      puVar13 = puVar1 + 1;
      puVar14 = puVar1 + 2;
      puVar1 = puVar1 + 3;
      uVar4 = Rotatelab_Grid_GridManager__GetGridCell_1106d80(param_1,uVar4,*puVar13,*puVar14);
      Rotatelab_Grid_GridCell__AddObject_1105f80(uVar4,param_2);
      uVar12 = uVar12 + 1;
    }
    return;
  }
  pcVar8 = (char *)(_UNK_01115b84 + 0x1115a10);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b88 + 0x1115a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b8c + 0x1115a30));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(iVar2 + 8);
  uStack_2c = 0;
  uStack_30 = 0;
  System_ValueTuple_object__object____ctor_1d537e8
            (&uStack_30,param_2,param_3,**(undefined4 **)(_UNK_01115b90 + 0x1115a4c));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = *(int *)(iVar9 + 8);
  uVar12 = *(uint *)(iVar9 + 0xc);
  piVar3 = *(int **)(_UNK_01115b94 + 0x1115a98);
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar9 + 0xc) = uVar12 + 1;
    iVar11 = iVar11 + uVar12 * 8;
    puVar1 = (undefined4 *)(iVar11 + 0x10);
    *puVar1 = uStack_30;
    *(undefined4 *)(iVar11 + 0x14) = uStack_2c;
    thunk_FUN_00ec5080(puVar1,0);
  }
  else {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
              (iVar9,uStack_30,uStack_2c,
               *(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
  }
  piVar3 = (int *)(param_3 + 0x10);
  uVar12 = 0;
  while( true ) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_3 + 0xc) <= (int)uVar12) break;
    if (*(uint *)(param_3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar12 = uVar12 + 1;
    iVar9 = *piVar3;
    iVar11 = piVar3[1];
    iVar5 = piVar3[2];
    piVar3 = piVar3 + 3;
    iVar10 = *(int *)(iVar2 + 0x1c);
    if (*(int *)(iVar2 + 0x1c) <= iVar11) {
      iVar10 = iVar11;
    }
    iVar7 = *(int *)(iVar2 + 0x20);
    if (*(int *)(iVar2 + 0x20) <= iVar5) {
      iVar7 = iVar5;
    }
    if (*(int *)(iVar2 + 0x14) < iVar5) {
      iVar5 = *(int *)(iVar2 + 0x14);
    }
    if (*(int *)(iVar2 + 0x10) < iVar11) {
      iVar11 = *(int *)(iVar2 + 0x10);
    }
    iVar6 = *(int *)(iVar2 + 0xc);
    if (iVar9 <= *(int *)(iVar2 + 0xc)) {
      iVar6 = iVar9;
    }
    if (iVar9 < *(int *)(iVar2 + 0x18)) {
      iVar9 = *(int *)(iVar2 + 0x18);
    }
    *(int *)(iVar2 + 0xc) = iVar6;
    *(int *)(iVar2 + 0x10) = iVar11;
    *(int *)(iVar2 + 0x14) = iVar5;
    *(int *)(iVar2 + 0x18) = iVar9;
    *(int *)(iVar2 + 0x1c) = iVar10;
    *(int *)(iVar2 + 0x20) = iVar7;
  }
  return;
}

