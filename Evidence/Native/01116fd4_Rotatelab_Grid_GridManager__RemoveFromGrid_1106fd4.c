/* IL2CPP: Rotatelab.Grid.GridManager$$RemoveFromGrid
void Rotatelab_Grid_GridManager__RemoveFromGrid (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Component_o* obj, UnityEngine_Vector3Int_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$RemoveFromGrid
   void Rotatelab_Grid_GridManager__RemoveFromGrid (Rotatelab_Grid_GridManager_o* __this,
   UnityEngine_Component_o* obj, UnityEngine_Vector3Int_o position, const MethodInfo* method); */

void Rotatelab_Grid_GridManager__RemoveFromGrid_1106fd4
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = (int *)Rotatelab_Grid_GridManager__GetGridCell_1106d80(param_1,param_3,param_4,param_5);
  iVar3 = *piVar2;
  bVar4 = iVar3 != param_2;
  if (bVar4) {
    piVar2 = piVar2 + 1;
    iVar3 = *piVar2;
  }
  if (bVar4 && iVar3 != param_2) {
    return;
  }
  *piVar2 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar1 = (uint *)(_UNK_00f30584 + ((uint)piVar2 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar4 = (bool)hasExclusiveAccess(puVar1);
    } while (!bVar4);
    *puVar1 = *puVar1 | 1 << (((uint)piVar2 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

