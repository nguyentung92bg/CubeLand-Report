/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$OnInitialized
void Rotatelab_Scripts_BaseTargetableController__OnInitialized (Rotatelab_Scripts_BaseTargetableController_o* __this, bool addToGrid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$OnInitialized
   void Rotatelab_Scripts_BaseTargetableController__OnInitialized
   (Rotatelab_Scripts_BaseTargetableController_o* __this, bool addToGrid, const MethodInfo* method);
    */

void Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puVar15;
  
  pcVar10 = (char *)(_UNK_01005950 + 0x10058d4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01005954 + 0x10058e8));
    *pcVar10 = '\x01';
  }
  *(undefined2 *)(param_1 + 6) = 0;
  if (param_2 == 0) {
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01005958 + 0x100590c));
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0x18);
  if (iVar4 != 0) {
    pcVar10 = (char *)(_UNK_01115b84 + 0x1115a10);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01115b88 + 0x1115a24));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01115b8c + 0x1115a30));
      *pcVar10 = '\x01';
    }
    iVar1 = *(int *)(iVar4 + 8);
    uStack_2c = 0;
    uStack_30 = 0;
    System_ValueTuple_object__object____ctor_1d537e8
              (&uStack_30,param_1,iVar2,**(undefined4 **)(_UNK_01115b90 + 0x1115a4c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = *(int *)(iVar1 + 8);
    uVar13 = *(uint *)(iVar1 + 0xc);
    piVar5 = *(int **)(_UNK_01115b94 + 0x1115a98);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar13 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar13 + 1;
      iVar12 = iVar12 + uVar13 * 8;
      puVar3 = (undefined4 *)(iVar12 + 0x10);
      *puVar3 = uStack_30;
      *(undefined4 *)(iVar12 + 0x14) = uStack_2c;
      thunk_FUN_00ec5080(puVar3,0);
    }
    else {
      System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
                (iVar1,uStack_30,uStack_2c,
                 *(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
    }
    piVar5 = (int *)(iVar2 + 0x10);
    uVar13 = 0;
    while( true ) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar13) break;
      if (*(uint *)(iVar2 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar13 = uVar13 + 1;
      iVar1 = *piVar5;
      iVar12 = piVar5[1];
      iVar7 = piVar5[2];
      piVar5 = piVar5 + 3;
      iVar11 = *(int *)(iVar4 + 0x1c);
      if (*(int *)(iVar4 + 0x1c) <= iVar12) {
        iVar11 = iVar12;
      }
      iVar9 = *(int *)(iVar4 + 0x20);
      if (*(int *)(iVar4 + 0x20) <= iVar7) {
        iVar9 = iVar7;
      }
      if (*(int *)(iVar4 + 0x14) < iVar7) {
        iVar7 = *(int *)(iVar4 + 0x14);
      }
      if (*(int *)(iVar4 + 0x10) < iVar12) {
        iVar12 = *(int *)(iVar4 + 0x10);
      }
      iVar8 = *(int *)(iVar4 + 0xc);
      if (iVar1 <= *(int *)(iVar4 + 0xc)) {
        iVar8 = iVar1;
      }
      if (iVar1 < *(int *)(iVar4 + 0x18)) {
        iVar1 = *(int *)(iVar4 + 0x18);
      }
      *(int *)(iVar4 + 0xc) = iVar8;
      *(int *)(iVar4 + 0x10) = iVar12;
      *(int *)(iVar4 + 0x14) = iVar7;
      *(int *)(iVar4 + 0x18) = iVar1;
      *(int *)(iVar4 + 0x1c) = iVar11;
      *(int *)(iVar4 + 0x20) = iVar9;
    }
    return;
  }
  puVar3 = (undefined4 *)(iVar2 + 0x10);
  uVar13 = 0;
  while( true ) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar13) break;
    if (*(uint *)(iVar2 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar6 = *puVar3;
    puVar14 = puVar3 + 1;
    puVar15 = puVar3 + 2;
    puVar3 = puVar3 + 3;
    uVar6 = Rotatelab_Grid_GridManager__GetGridCell_1106d80(iVar1,uVar6,*puVar14,*puVar15);
    Rotatelab_Grid_GridCell__AddObject_1105f80(uVar6,param_1);
    uVar13 = uVar13 + 1;
  }
  return;
}

