/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$EstimateTriangleIndexCapacity
int32_t Rotatelab_Scripts_RoundedBoxMeshGenerator__EstimateTriangleIndexCapacity (int32_t xCount, int32_t yCount, int32_t zCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$EstimateTriangleIndexCapacity
   int32_t Rotatelab_Scripts_RoundedBoxMeshGenerator__EstimateTriangleIndexCapacity (int32_t xCount,
   int32_t yCount, int32_t zCount, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedBoxMeshGenerator__EstimateTriangleIndexCapacity_101b85c
              (int param_1,int param_2,int param_3)

{
  return ((param_3 + -1) * (param_2 + -1 + param_1 + -1) + (param_2 + -1) * (param_1 + -1)) * 0xc;
}

