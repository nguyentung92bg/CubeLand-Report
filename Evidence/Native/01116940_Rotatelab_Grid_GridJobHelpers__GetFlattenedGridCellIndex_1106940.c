/* IL2CPP: Rotatelab.Grid.GridJobHelpers$$GetFlattenedGridCellIndex
int32_t Rotatelab_Grid_GridJobHelpers__GetFlattenedGridCellIndex (Unity_Mathematics_int3_o* cell, Unity_Mathematics_int3_o* gridSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.GridJobHelpers$$GetFlattenedGridCellIndex
   int32_t Rotatelab_Grid_GridJobHelpers__GetFlattenedGridCellIndex (Unity_Mathematics_int3_o* cell,
   Unity_Mathematics_int3_o* gridSize, const MethodInfo* method); */

int Rotatelab_Grid_GridJobHelpers__GetFlattenedGridCellIndex_1106940(int *param_1,int *param_2)

{
  return (param_2[1] * param_1[2] + param_1[1]) * *param_2 + *param_1;
}

