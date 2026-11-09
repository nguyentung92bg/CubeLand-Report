/* IL2CPP: Rotatelab.Grid.GridManager$$RemoveFromGrid
void Rotatelab_Grid_GridManager__RemoveFromGrid (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Component_o* obj, UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.GridManager$$RemoveFromGrid
   void Rotatelab_Grid_GridManager__RemoveFromGrid (Rotatelab_Grid_GridManager_o* __this,
   UnityEngine_Component_o* obj, UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
    */

void Rotatelab_Grid_GridManager__RemoveFromGrid_1107024(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar4 = (undefined4 *)(param_3 + 0x10);
  uVar3 = 0;
  while( true ) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_3 + 0xc) <= (int)uVar3) break;
    if (*(uint *)(param_3 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1 = (int *)Rotatelab_Grid_GridManager__GetGridCell_1106d80
                              (param_1,*puVar4,puVar4[1],puVar4[2]);
    iVar2 = *piVar1;
    bVar5 = iVar2 != param_2;
    if (bVar5) {
      piVar1 = piVar1 + 1;
      iVar2 = *piVar1;
    }
    if (!bVar5 || iVar2 == param_2) {
      *piVar1 = 0;
      thunk_FUN_00ec5080(piVar1,0);
    }
    puVar4 = puVar4 + 3;
    uVar3 = uVar3 + 1;
  }
  return;
}

