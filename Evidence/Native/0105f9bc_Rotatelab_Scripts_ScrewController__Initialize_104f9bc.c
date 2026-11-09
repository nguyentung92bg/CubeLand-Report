/* IL2CPP: Rotatelab.Scripts.ScrewController$$Initialize
void Rotatelab_Scripts_ScrewController__Initialize (Rotatelab_Scripts_ScrewController_o* __this, Rotatelab_Scripts_PlaypenController_o* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010058fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScrewController$$Initialize
   void Rotatelab_Scripts_ScrewController__Initialize (Rotatelab_Scripts_ScrewController_o* __this,
   Rotatelab_Scripts_PlaypenController_o* owner, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__Initialize_104f9bc(int *param_1,int param_2)

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
  
  pcVar10 = (char *)(_UNK_0105fa5c + 0x105f9d4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fa60 + 0x105f9e8));
    *pcVar10 = '\x01';
  }
  param_1[0x13] = param_2;
  thunk_FUN_00ec5080(param_1 + 0x13,param_2);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105fa64 + 0x105fa10));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Grid_GridManager__GetCellsEncapsulatedByRenderer_1107118(iVar2,param_1[0xf],0);
  param_1[0x14] = iVar2;
  thunk_FUN_00ec5080();
  pcVar10 = (char *)(_UNK_01005950 + 0x10058d4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01005954 + 0x10058e8),1,0);
    *pcVar10 = '\x01';
  }
  *(undefined2 *)(param_1 + 6) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01005958 + 0x100590c));
  iVar1 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x18);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)(iVar1 + 0x10);
      uVar13 = 0;
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar13) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar6 = *puVar3;
        puVar14 = puVar3 + 1;
        puVar15 = puVar3 + 2;
        puVar3 = puVar3 + 3;
        uVar6 = Rotatelab_Grid_GridManager__GetGridCell_1106d80(iVar2,uVar6,*puVar14,*puVar15);
        Rotatelab_Grid_GridCell__AddObject_1105f80(uVar6,param_1);
        uVar13 = uVar13 + 1;
      }
      return;
    }
    pcVar10 = (char *)(_UNK_01115b84 + 0x1115a10);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01115b88 + 0x1115a24));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01115b8c + 0x1115a30));
      *pcVar10 = '\x01';
    }
    iVar2 = *(int *)(iVar4 + 8);
    uStack_2c = 0;
    uStack_30 = 0;
    System_ValueTuple_object__object____ctor_1d537e8
              (&uStack_30,param_1,iVar1,**(undefined4 **)(_UNK_01115b90 + 0x1115a4c));
    if (iVar2 != 0) {
      iVar12 = *(int *)(iVar2 + 8);
      uVar13 = *(uint *)(iVar2 + 0xc);
      piVar5 = *(int **)(_UNK_01115b94 + 0x1115a98);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar13 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar13 + 1;
        iVar12 = iVar12 + uVar13 * 8;
        puVar3 = (undefined4 *)(iVar12 + 0x10);
        *puVar3 = uStack_30;
        *(undefined4 *)(iVar12 + 0x14) = uStack_2c;
        thunk_FUN_00ec5080(puVar3,0);
      }
      else {
        System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
                  (iVar2,uStack_30,uStack_2c,
                   *(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
      }
      piVar5 = (int *)(iVar1 + 0x10);
      uVar13 = 0;
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar13) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar13 = uVar13 + 1;
        iVar2 = *piVar5;
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
        if (iVar2 <= *(int *)(iVar4 + 0xc)) {
          iVar8 = iVar2;
        }
        if (iVar2 < *(int *)(iVar4 + 0x18)) {
          iVar2 = *(int *)(iVar4 + 0x18);
        }
        *(int *)(iVar4 + 0xc) = iVar8;
        *(int *)(iVar4 + 0x10) = iVar12;
        *(int *)(iVar4 + 0x14) = iVar7;
        *(int *)(iVar4 + 0x18) = iVar2;
        *(int *)(iVar4 + 0x1c) = iVar11;
        *(int *)(iVar4 + 0x20) = iVar9;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

