/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$Equals
bool Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Equals (Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o __this, Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$Equals
   bool Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Equals
   (Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o __this,
   Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o other, const MethodInfo* method); */

bool Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Equals_101d1d8
               (int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == param_2) {
    iVar1 = param_1[1];
    bVar2 = iVar1 == param_3;
    if (bVar2) {
      iVar1 = param_1[2];
    }
    if (bVar2 && iVar1 == param_4) {
      if (param_1[3] == param_5) {
        return param_1[4] == param_6;
      }
      return false;
    }
  }
  return false;
}

