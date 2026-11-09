/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$Initialize
void Rotatelab_Scripts_IceWrapperController__Initialize (Rotatelab_Scripts_IceWrapperController_o* __this, Rotatelab_IceWrapperData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$Initialize
   void Rotatelab_Scripts_IceWrapperController__Initialize
   (Rotatelab_Scripts_IceWrapperController_o* __this, Rotatelab_IceWrapperData_o* data, const
   MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__Initialize_10106e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puVar15;
  
  pcVar9 = (char *)(_UNK_01020960 + 0x1020700);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020964 + 0x1020714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020968 + 0x1020720));
    *pcVar9 = '\x01';
  }
  *(int *)(param_1 + 0x10) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x10),param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10),0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar9 = (char *)(_UNK_0102096c + 0x10207a4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020970 + 0x10207b8));
    *pcVar9 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01020974 + 0x10207d4) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(float *)(iVar2 + 0xc) * _UNK_0102095c,*(float *)(iVar2 + 0x10) * _UNK_0102095c,
             *(float *)(iVar2 + 0x14) * _UNK_0102095c,0);
  puVar3 = *(undefined4 **)(_UNK_01020978 + 0x102082c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  uVar4 = thunk_FUN_00f00cdc(*puVar3);
  UnityEngine_MaterialPropertyBlock___ctor_35c3c50(uVar4,0);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x34),uVar4);
  uStack_28 = *(undefined4 *)(param_2 + 8);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_MergedBlockController__GenerateMesh_1010980
            (*(int *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x28),uStack_28,uStack_2c,
             *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
             *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),0x3f000000);
  Rotatelab_Scripts_IceWrapperController__CreateHitParticle_1010b50(param_1);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Scripts_MergedBlockController__GenerateHealthTexts_1010e58
                    (*(int *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x24),
                     *(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x14),
                     *(float *)(param_2 + 0x18) + *(float *)(param_2 + 0x18),
                     *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x1c));
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  thunk_FUN_00ec5080();
  Rotatelab_Scripts_IceWrapperController__UpdateHealthTexts_10111c4(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0102097c + 0x1020918));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 0x18);
  if (iVar5 == 0) {
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
      uVar4 = *puVar3;
      puVar14 = puVar3 + 1;
      puVar15 = puVar3 + 2;
      puVar3 = puVar3 + 3;
      uVar4 = Rotatelab_Grid_GridManager__GetGridCell_1106d80(iVar1,uVar4,*puVar14,*puVar15);
      Rotatelab_Grid_GridCell__AddObject_1105f80(uVar4,param_1);
      uVar13 = uVar13 + 1;
    }
    return;
  }
  pcVar9 = (char *)(_UNK_01115b84 + 0x1115a10);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b88 + 0x1115a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115b8c + 0x1115a30));
    *pcVar9 = '\x01';
  }
  iVar1 = *(int *)(iVar5 + 8);
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
  piVar6 = *(int **)(_UNK_01115b94 + 0x1115a98);
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
               *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
  }
  piVar6 = (int *)(iVar2 + 0x10);
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
    iVar1 = *piVar6;
    iVar12 = piVar6[1];
    iVar7 = piVar6[2];
    piVar6 = piVar6 + 3;
    iVar11 = *(int *)(iVar5 + 0x1c);
    if (*(int *)(iVar5 + 0x1c) <= iVar12) {
      iVar11 = iVar12;
    }
    iVar10 = *(int *)(iVar5 + 0x20);
    if (*(int *)(iVar5 + 0x20) <= iVar7) {
      iVar10 = iVar7;
    }
    if (*(int *)(iVar5 + 0x14) < iVar7) {
      iVar7 = *(int *)(iVar5 + 0x14);
    }
    if (*(int *)(iVar5 + 0x10) < iVar12) {
      iVar12 = *(int *)(iVar5 + 0x10);
    }
    iVar8 = *(int *)(iVar5 + 0xc);
    if (iVar1 <= *(int *)(iVar5 + 0xc)) {
      iVar8 = iVar1;
    }
    if (iVar1 < *(int *)(iVar5 + 0x18)) {
      iVar1 = *(int *)(iVar5 + 0x18);
    }
    *(int *)(iVar5 + 0xc) = iVar8;
    *(int *)(iVar5 + 0x10) = iVar12;
    *(int *)(iVar5 + 0x14) = iVar7;
    *(int *)(iVar5 + 0x18) = iVar1;
    *(int *)(iVar5 + 0x1c) = iVar11;
    *(int *)(iVar5 + 0x20) = iVar10;
  }
  return;
}

