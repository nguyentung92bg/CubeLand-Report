/* IL2CPP: Rotatelab.Grid.GridManager$$GetGridCell
Rotatelab_Grid_GridCell_o* Rotatelab_Grid_GridManager__GetGridCell (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Vector3Int_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$GetGridCell
   Rotatelab_Grid_GridCell_o* Rotatelab_Grid_GridManager__GetGridCell (Rotatelab_Grid_GridManager_o*
   __this, UnityEngine_Vector3Int_o position, const MethodInfo* method); */

int Rotatelab_Grid_GridManager__GetGridCell_1106d80
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = Rotatelab_Grid_GridManager__ConvertGridPositionToIndex_11070b0();
  if ((int)uVar1 < 0) {
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01116f38 + 0x1116de8));
    uVar2 = FUN_00ec388c(uVar2,4);
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01116f3c + 0x1116e0c));
    uVar3 = FUN_00ec393c(uVar3,&uStack_2c);
    FUN_00b87610(uVar2);
    FUN_00b8a6e0(uVar2,uVar3);
    func_0x00b8a71c(uVar2,0,uVar3);
    uStack_30 = *(undefined4 *)(param_1 + 0x2c);
    iVar4 = *(int *)(_UNK_01116f40 + 0x1116e4c);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_30);
    FUN_00b8a6e0(uVar2,uVar3);
    func_0x00b8a71c(uVar2,1,uVar3);
    uStack_34 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_34);
    FUN_00b8a6e0(uVar2,uVar3);
    func_0x00b8a71c(uVar2,2,uVar3);
    uStack_38 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_38);
    FUN_00b8a6e0(uVar2,uVar3);
    func_0x00b8a71c(uVar2,3,uVar3);
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01116f44 + 0x1116eec));
    uVar2 = System_String__Format_2a0c308(uVar3,uVar2,0);
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01116f48 + 0x1116f08));
    uVar3 = thunk_FUN_00f00cdc();
    System_ArgumentOutOfRangeException___ctor_2b12e90(uVar3,uVar2,0);
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01116f4c + 0x1116f28));
    func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return iVar4 + uVar1 * 0xc + 0x10;
}

