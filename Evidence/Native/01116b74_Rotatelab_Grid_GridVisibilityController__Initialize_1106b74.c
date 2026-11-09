/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$Initialize
void Rotatelab_Grid_GridVisibilityController__Initialize (Rotatelab_Grid_GridVisibilityController_o* __this, Rotatelab_Grid_GridCell_array* grid, UnityEngine_BoundsInt_o gridBounds, System_Collections_Generic_List_BaseTargetableController__o* visibleTargetables, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$Initialize
   void Rotatelab_Grid_GridVisibilityController__Initialize
   (Rotatelab_Grid_GridVisibilityController_o* __this, Rotatelab_Grid_GridCell_array* grid,
   UnityEngine_BoundsInt_o gridBounds, System_Collections_Generic_List_BaseTargetableController__o*
   visibleTargetables, const MethodInfo* method); */

void Rotatelab_Grid_GridVisibilityController__Initialize_1106b74
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01116d04 + 0x1116b94);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116d08 + 0x1116bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116d0c + 0x1116bc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116d10 + 0x1116bd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116d14 + 0x1116bdc));
    *pcVar3 = '\x01';
  }
  *(int *)(param_1 + 0x10) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x10),param_2);
  *(undefined4 *)(param_1 + 0x5c) = param_9;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_8;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x5c),param_9);
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x34) = param_8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  Unity_Collections_NativeArray_int____ctor_2814a60
            (&uStack_30,*(undefined4 *)(param_2 + 0xc),4,1,
             **(undefined4 **)(_UNK_01116d18 + 0x1116c50));
  piVar5 = *(int **)(_UNK_01116d1c + 0x1116c7c);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x40) = uStack_28;
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_2c,uStack_30);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01116d20 + 0x1116cb0));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_01116d24 + 0x1116cd0),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar2;
  thunk_FUN_00ec5080();
  return;
}

