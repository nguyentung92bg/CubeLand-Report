/* IL2CPP: Rotatelab.Grid.GridManager$$AddToGrid
void Rotatelab_Grid_GridManager__AddToGrid (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Component_o* obj, UnityEngine_Vector3Int_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$AddToGrid
   void Rotatelab_Grid_GridManager__AddToGrid (Rotatelab_Grid_GridManager_o* __this,
   UnityEngine_Component_o* obj, UnityEngine_Vector3Int_o position, const MethodInfo* method); */

void Rotatelab_Grid_GridManager__AddToGrid_1106d28
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    Rotatelab_Grid_DynamicGrid__AddToGrid_1105950
              (*(int *)(param_1 + 0x18),param_2,param_3,param_4,param_5);
    return;
  }
  piVar3 = (int *)Rotatelab_Grid_GridManager__GetGridCell_1106d80(param_1,param_3,param_4,param_5);
  pcVar5 = (char *)(_UNK_0111600c + 0x1115f98);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116010 + 0x1115fac));
    *pcVar5 = '\x01';
  }
  if (param_2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01116014 + 0x1115fc8) + 0xb8);
    if ((uVar4 <= *(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01116014 + 0x1115fc8)
       )) {
      *piVar3 = (int)param_2;
      goto thunk_FUN_00ec5080;
    }
  }
  piVar3 = piVar3 + 1;
  *piVar3 = (int)param_2;
thunk_FUN_00ec5080:
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

