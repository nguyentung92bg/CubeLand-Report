/* IL2CPP: Rotatelab.Grid.GridManager$$FinalizeGrid
void Rotatelab_Grid_GridManager__FinalizeGrid (Rotatelab_Grid_GridManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$FinalizeGrid
   void Rotatelab_Grid_GridManager__FinalizeGrid (Rotatelab_Grid_GridManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Grid_GridManager__FinalizeGrid_11069d4(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar1 = (char *)(_UNK_01116b68 + 0x11169ec);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116b6c + 0x1116a00));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar2 = *(int *)(param_1 + 0x18);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_44 = 0;
  iStack_48 = 0;
  iStack_4c = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_DynamicGrid__BuildGrid_1105b98(iVar2,param_1 + 0x1c,&uStack_40);
  func_0x01133810(&iStack_58,&uStack_40,0);
  if (*(int *)(**(int **)(_UNK_01116b70 + 0x1116a8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Deconstruct_fc1894
            (-iStack_58,-iStack_54,-iStack_50,&uStack_44,&iStack_48,&iStack_4c,0);
  *(undefined4 *)(param_1 + 0x20) = uStack_44;
  *(int *)(param_1 + 0x24) = iStack_48;
  *(int *)(param_1 + 0x28) = iStack_4c;
  Rotatelab_Extensions__Deconstruct_fc1894
            (uStack_34,uStack_30,uStack_2c,&iStack_4c,&iStack_48,&uStack_44,0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x2c) = iStack_4c;
  *(int *)(param_1 + 0x30) = iStack_48;
  *(undefined4 *)(param_1 + 0x34) = uStack_44;
  *(int *)(param_1 + 0x38) = iStack_48 * iStack_4c;
  thunk_FUN_00ec5080((int *)(param_1 + 0x18),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridVisibilityController__Initialize_1106b74
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),uStack_40,uStack_3c,uStack_38,
             uStack_34,uStack_30,uStack_2c,*(undefined4 *)(param_1 + 0x14));
  return;
}

