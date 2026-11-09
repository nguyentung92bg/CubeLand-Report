/* IL2CPP: Rotatelab.Grid.DynamicGrid$$BuildGrid
void Rotatelab_Grid_DynamicGrid__BuildGrid (Rotatelab_Grid_DynamicGrid_o* __this, Rotatelab_Grid_GridCell_array** grid, UnityEngine_BoundsInt_o* gridBounds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.DynamicGrid$$BuildGrid
   void Rotatelab_Grid_DynamicGrid__BuildGrid (Rotatelab_Grid_DynamicGrid_o* __this,
   Rotatelab_Grid_GridCell_array** grid, UnityEngine_BoundsInt_o* gridBounds, const MethodInfo*
   method); */

void Rotatelab_Grid_DynamicGrid__BuildGrid_1105b98(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01115f3c + 0x1115bb8);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f40 + 0x1115bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f44 + 0x1115bd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f48 + 0x1115be4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f4c + 0x1115bf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f50 + 0x1115bfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f54 + 0x1115c08));
    *pcVar10 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  pcVar10 = (char *)(_UNK_01115f58 + 0x1115c2c);
  uStack_48 = 0;
  iVar11 = *(int *)(param_1 + 0xc);
  iVar13 = *(int *)(param_1 + 0x10);
  iVar12 = *(int *)(param_1 + 0x14);
  iStack_38 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x20);
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_4c = 0;
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115f5c + 0x1115c7c));
    *pcVar10 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01115f60 + 0x1115c94) + 0x5c);
  iVar5 = *(int *)(iVar2 + 0xc);
  iVar7 = *(int *)(iVar2 + 0x10);
  iVar2 = *(int *)(iVar2 + 0x14);
  param_3[2] = iVar12;
  iVar7 = iVar7 + (iVar6 - iVar13);
  *param_3 = iVar11;
  param_3[1] = iVar13;
  iVar2 = iVar2 + (iVar8 - iVar12);
  iVar5 = iVar5 + (iVar4 - iVar11);
  param_3[5] = iVar2;
  piVar3 = *(int **)(_UNK_01115f64 + 0x1115cc8);
  param_3[4] = iVar7;
  param_3[3] = iVar5;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Deconstruct_fc1894(iVar5,iVar7,iVar2,&iStack_28,&iStack_2c,&uStack_30,0);
  iVar4 = iStack_28;
  iVar8 = iStack_2c * iStack_28;
  iVar6 = FUN_00ec388c(**(undefined4 **)(_UNK_01115f68 + 0x1115d30),uStack_30 * iVar8);
  *param_2 = iVar6;
  thunk_FUN_00ec5080();
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator_25b79d4
            (&uStack_60,*(int *)(param_1 + 8),**(undefined4 **)(_UNK_01115f6c + 0x1115d6c));
  uStack_48 = uStack_60;
  uStack_44 = puStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  iStack_38 = iStack_50;
  uStack_60 = 0;
  puStack_5c = &uStack_48;
  do {
    iVar11 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext_214a494
                       (&uStack_48,**(undefined4 **)(_UNK_01115f70 + 0x1115da0));
    iVar6 = iStack_38;
    uVar1 = uStack_3c;
    if (iVar11 == 0) {
      System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose_214a490
                (&uStack_48,**(undefined4 **)(_UNK_01115f78 + 0x1115ec0));
      Rotatelab_Grid_DynamicGrid__Clear_11058b0(param_1);
      return;
    }
    uStack_30 = 0;
    while( true ) {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar6 + 0xc) <= (int)uStack_30) break;
      if (*(uint *)(iVar6 + 0xc) <= uStack_30) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(param_1 + 0xc);
      iVar13 = *(int *)(param_1 + 0x10);
      iVar12 = *(int *)(param_1 + 0x14);
      iVar11 = iVar6 + uStack_30 * 0xc;
      iVar5 = *(int *)(iVar11 + 0x10);
      iVar2 = *(int *)(iVar11 + 0x14);
      iVar11 = *(int *)(iVar11 + 0x18);
      if (*(int *)(**(int **)(_UNK_01115f74 + 0x1115df4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__Deconstruct_fc1894
                (iVar5 - iVar7,iVar2 - iVar13,iVar11 - iVar12,&iStack_2c,&iStack_28,&iStack_4c,0);
      iVar11 = *param_2;
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = iStack_4c * iVar8 + iStack_28 * iVar4 + iStack_2c;
      if (*(uint *)(iVar11 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Grid_GridCell__AddObject_1105f80(iVar11 + uVar9 * 0xc + 0x10,uVar1);
      uStack_30 = uStack_30 + 1;
    }
  } while( true );
}

