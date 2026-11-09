/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$Equals
bool Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Equals (Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o __this, Il2CppObject* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$Equals
   bool Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Equals
   (Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o __this, Il2CppObject* obj, const
   MethodInfo* method); */

bool Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Equals_101d230(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0102d2ec + 0x102d248);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d2f0 + 0x102d25c));
    *pcVar3 = '\x01';
  }
  bVar2 = false;
  if ((((param_2 != (int *)0x0) && (*param_2 == **(int **)(_UNK_0102d2f4 + 0x102d27c))) &&
      (piVar1 = (int *)FUN_00ec3940(param_2), *param_1 == *piVar1)) &&
     (((param_1[1] == piVar1[1] && (param_1[2] == piVar1[2])) && (param_1[3] == piVar1[3])))) {
    bVar2 = param_1[4] == piVar1[4];
  }
  return bVar2;
}

