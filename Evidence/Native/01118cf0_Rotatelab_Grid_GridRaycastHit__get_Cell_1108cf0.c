/* IL2CPP: Rotatelab.Grid.GridRaycastHit$$get_Cell
Rotatelab_Grid_GridCell_o Rotatelab_Grid_GridRaycastHit__get_Cell (Rotatelab_Grid_GridRaycastHit_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridRaycastHit$$get_Cell
   Rotatelab_Grid_GridCell_o Rotatelab_Grid_GridRaycastHit__get_Cell
   (Rotatelab_Grid_GridRaycastHit_o __this, const MethodInfo* method); */

void Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (char *)(_UNK_01118d7c + 0x1118d0c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118d80 + 0x1118d20));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01118d84 + 0x1118d34));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = (undefined8 *)
           Rotatelab_Grid_GridManager__GetGridCell_1106d80(iVar1,*param_2,param_2[1],param_2[2]);
  uVar4 = *puVar2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_1 = uVar4;
  return;
}

