/* IL2CPP: Rotatelab.Grid.DynamicGrid$$AddToGrid
void Rotatelab_Grid_DynamicGrid__AddToGrid (Rotatelab_Grid_DynamicGrid_o* __this, UnityEngine_Component_o* obj, UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.DynamicGrid$$AddToGrid
   void Rotatelab_Grid_DynamicGrid__AddToGrid (Rotatelab_Grid_DynamicGrid_o* __this,
   UnityEngine_Component_o* obj, UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
    */

void Rotatelab_Grid_DynamicGrid__AddToGrid_11059f0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01115b84 + 0x1115a10);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b88 + 0x1115a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b8c + 0x1115a30));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  uStack_2c = 0;
  uStack_30 = 0;
  System_ValueTuple_object__object____ctor_1d537e8
            (&uStack_30,param_2,param_3,**(undefined4 **)(_UNK_01115b90 + 0x1115a4c));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar7 + 8);
  uVar10 = *(uint *)(iVar7 + 0xc);
  piVar2 = *(int **)(_UNK_01115b94 + 0x1115a98);
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar10 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar7 + 0xc) = uVar10 + 1;
    iVar9 = iVar9 + uVar10 * 8;
    puVar1 = (undefined4 *)(iVar9 + 0x10);
    *puVar1 = uStack_30;
    *(undefined4 *)(iVar9 + 0x14) = uStack_2c;
    thunk_FUN_00ec5080(puVar1,0);
  }
  else {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
              (iVar7,uStack_30,uStack_2c,
               *(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  piVar2 = (int *)(param_3 + 0x10);
  uVar10 = 0;
  while( true ) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_3 + 0xc) <= (int)uVar10) break;
    if (*(uint *)(param_3 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar10 = uVar10 + 1;
    iVar7 = *piVar2;
    iVar9 = piVar2[1];
    iVar3 = piVar2[2];
    piVar2 = piVar2 + 3;
    iVar8 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x1c) <= iVar9) {
      iVar8 = iVar9;
    }
    iVar5 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) <= iVar3) {
      iVar5 = iVar3;
    }
    if (*(int *)(param_1 + 0x14) < iVar3) {
      iVar3 = *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x10) < iVar9) {
      iVar9 = *(int *)(param_1 + 0x10);
    }
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar7 <= *(int *)(param_1 + 0xc)) {
      iVar4 = iVar7;
    }
    if (iVar7 < *(int *)(param_1 + 0x18)) {
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0xc) = iVar4;
    *(int *)(param_1 + 0x10) = iVar9;
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)(param_1 + 0x18) = iVar7;
    *(int *)(param_1 + 0x1c) = iVar8;
    *(int *)(param_1 + 0x20) = iVar5;
  }
  return;
}

