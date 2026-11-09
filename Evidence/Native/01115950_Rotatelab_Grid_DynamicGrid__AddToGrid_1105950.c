/* IL2CPP: Rotatelab.Grid.DynamicGrid$$AddToGrid
void Rotatelab_Grid_DynamicGrid__AddToGrid (Rotatelab_Grid_DynamicGrid_o* __this, UnityEngine_Component_o* obj, UnityEngine_Vector3Int_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.DynamicGrid$$AddToGrid
   void Rotatelab_Grid_DynamicGrid__AddToGrid (Rotatelab_Grid_DynamicGrid_o* __this,
   UnityEngine_Component_o* obj, UnityEngine_Vector3Int_o position, const MethodInfo* method); */

void Rotatelab_Grid_DynamicGrid__AddToGrid_1105950
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_011159e4 + 0x111596c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011159e8 + 0x1115988));
    *pcVar6 = '\x01';
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_011159ec + 0x11159a0),1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = param_5;
  pcVar6 = (char *)(_UNK_01115b84 + 0x1115a10);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b88 + 0x1115a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b8c + 0x1115a30));
    *pcVar6 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 8);
  uStack_2c = 0;
  uStack_30 = 0;
  System_ValueTuple_object__object____ctor_1d537e8
            (&uStack_30,param_2,iVar1,**(undefined4 **)(_UNK_01115b90 + 0x1115a4c));
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(iVar8 + 8);
  uVar11 = *(uint *)(iVar8 + 0xc);
  piVar3 = *(int **)(_UNK_01115b94 + 0x1115a98);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar11 < *(uint *)(iVar10 + 0xc)) {
    *(uint *)(iVar8 + 0xc) = uVar11 + 1;
    iVar10 = iVar10 + uVar11 * 8;
    puVar2 = (undefined4 *)(iVar10 + 0x10);
    *puVar2 = uStack_30;
    *(undefined4 *)(iVar10 + 0x14) = uStack_2c;
    thunk_FUN_00ec5080(puVar2,0);
  }
  else {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
              (iVar8,uStack_30,uStack_2c,
               *(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
  }
  piVar3 = (int *)(iVar1 + 0x10);
  uVar11 = 0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar11) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar11 = uVar11 + 1;
    iVar8 = *piVar3;
    iVar10 = piVar3[1];
    iVar4 = piVar3[2];
    piVar3 = piVar3 + 3;
    iVar9 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x1c) <= iVar10) {
      iVar9 = iVar10;
    }
    iVar7 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) <= iVar4) {
      iVar7 = iVar4;
    }
    if (*(int *)(param_1 + 0x14) < iVar4) {
      iVar4 = *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x10) < iVar10) {
      iVar10 = *(int *)(param_1 + 0x10);
    }
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar8 <= *(int *)(param_1 + 0xc)) {
      iVar5 = iVar8;
    }
    if (iVar8 < *(int *)(param_1 + 0x18)) {
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0xc) = iVar5;
    *(int *)(param_1 + 0x10) = iVar10;
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x18) = iVar8;
    *(int *)(param_1 + 0x1c) = iVar9;
    *(int *)(param_1 + 0x20) = iVar7;
  }
  return;
}

