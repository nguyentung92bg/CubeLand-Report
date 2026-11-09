/* IL2CPP: Rotatelab.Grid.GridCell$$RemoveObject
void Rotatelab_Grid_GridCell__RemoveObject (Rotatelab_Grid_GridCell_o __this, UnityEngine_Component_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridCell$$RemoveObject
   void Rotatelab_Grid_GridCell__RemoveObject (Rotatelab_Grid_GridCell_o __this,
   UnityEngine_Component_o* obj, const MethodInfo* method); */

void Rotatelab_Grid_GridCell__RemoveObject_1106284(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *param_1;
  bVar3 = iVar2 != param_2;
  if (bVar3) {
    param_1 = param_1 + 1;
    iVar2 = *param_1;
  }
  if (bVar3 && iVar2 != param_2) {
    return;
  }
  *param_1 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar1 = (uint *)(_UNK_00f30584 + ((uint)param_1 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar1);
    } while (!bVar3);
    *puVar1 = *puVar1 | 1 << (((uint)param_1 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

