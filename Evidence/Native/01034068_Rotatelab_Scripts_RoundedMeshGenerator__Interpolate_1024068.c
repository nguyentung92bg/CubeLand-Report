/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$Interpolate
UnityEngine_Vector3_o Rotatelab_Scripts_RoundedMeshGenerator__Interpolate (UnityEngine_Vector3_o p1, UnityEngine_Vector3_o p2, float v1, float v2, float iso, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$Interpolate
   UnityEngine_Vector3_o Rotatelab_Scripts_RoundedMeshGenerator__Interpolate (UnityEngine_Vector3_o
   p1, UnityEngine_Vector3_o p2, float v1, float v2, float iso, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__Interpolate_1024068
               (float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6
               ,float param_7,float param_8,float param_9,float param_10)

{
  bool bVar1;
  float fVar2;
  
  if (_UNK_01034148 <= ABS(param_10 - param_8)) {
    if (ABS(param_10 - param_9) < _UNK_01034148) {
      *param_1 = param_5;
      param_1[1] = param_6;
      param_1[2] = param_7;
      return;
    }
    if (_UNK_01034148 <= ABS(param_8 - param_9)) {
      fVar2 = (param_10 - param_8) / (param_9 - param_8);
      bVar1 = fVar2 < 0.0;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      if (bVar1) {
        fVar2 = _UNK_0103414c;
      }
      param_1[2] = param_4 + (param_7 - param_4) * fVar2;
      param_1[1] = param_3 + (param_6 - param_3) * fVar2;
      *param_1 = param_2 + (param_5 - param_2) * fVar2;
      return;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

