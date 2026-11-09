/* IL2CPP: Rotatelab.Grid.GridManager$$ConvertGridPositionToIndex
int32_t Rotatelab_Grid_GridManager__ConvertGridPositionToIndex (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Vector3Int_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.GridManager$$ConvertGridPositionToIndex
   int32_t Rotatelab_Grid_GridManager__ConvertGridPositionToIndex (Rotatelab_Grid_GridManager_o*
   __this, UnityEngine_Vector3Int_o position, const MethodInfo* method); */

int Rotatelab_Grid_GridManager__ConvertGridPositionToIndex_11070b0
              (int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 0x20) + param_2;
  iVar1 = -1;
  if (param_2 < 0) {
    return -1;
  }
  if ((((param_2 < *(int *)(param_1 + 0x2c)) &&
       (param_3 = *(int *)(param_1 + 0x24) + param_3, -1 < param_3)) &&
      (param_3 < *(int *)(param_1 + 0x30))) &&
     ((param_4 = *(int *)(param_1 + 0x28) + param_4, -1 < param_4 &&
      (param_4 < *(int *)(param_1 + 0x34))))) {
    iVar1 = *(int *)(param_1 + 0x38) * param_4 + param_3 * *(int *)(param_1 + 0x2c) + param_2;
  }
  return iVar1;
}

