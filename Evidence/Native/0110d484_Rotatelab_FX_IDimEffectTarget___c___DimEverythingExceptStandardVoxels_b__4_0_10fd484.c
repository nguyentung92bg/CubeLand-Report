/* IL2CPP: Rotatelab.FX.IDimEffectTarget.<>c$$<DimEverythingExceptStandardVoxels>b__4_0
bool Rotatelab_FX_IDimEffectTarget___c___DimEverythingExceptStandardVoxels_b__4_0 (Rotatelab_FX_IDimEffectTarget___c_o* __this, UnityEngine_Component_o* component, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.IDimEffectTarget.<>c$$<DimEverythingExceptStandardVoxels>b__4_0
   bool Rotatelab_FX_IDimEffectTarget___c___DimEverythingExceptStandardVoxels_b__4_0
   (Rotatelab_FX_IDimEffectTarget___c_o* __this, UnityEngine_Component_o* component, const
   MethodInfo* method); */

bool Rotatelab_FX_IDimEffectTarget___c___DimEverythingExceptStandardVoxels_b__4_0_10fd484
               (undefined4 param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0110d508 + 0x110d498);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d50c + 0x110d4ac));
    *pcVar3 = '\x01';
  }
  bVar1 = true;
  if (param_2 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_0110d510 + 0x110d4cc) + 0xb8);
    if (uVar2 <= *(byte *)(*param_2 + 0xb8)) {
      if (*(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) !=
          **(int **)(_UNK_0110d510 + 0x110d4cc)) {
        return true;
      }
      bVar1 = param_2[5] == 0x15;
    }
  }
  return bVar1;
}

