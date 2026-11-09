/* IL2CPP: Rotatelab.Scripts.ObjectManager$$SetObjectScaleMultiplier
void Rotatelab_Scripts_ObjectManager__SetObjectScaleMultiplier (Rotatelab_Scripts_ObjectManager_o* __this, float multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$SetObjectScaleMultiplier
   void Rotatelab_Scripts_ObjectManager__SetObjectScaleMultiplier
   (Rotatelab_Scripts_ObjectManager_o* __this, float multiplier, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__SetObjectScaleMultiplier_102d8a4(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x50);
  pcVar3 = (char *)(_UNK_0103d94c + 0x103d8c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d950 + 0x103d8dc));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_0103d954 + 0x103d8f8) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  param_2 = *(float *)(param_1 + 0x54) * param_2;
  UnityEngine_Transform__set_localScale_36155dc
            (iVar2,*(float *)(iVar1 + 0xc) * param_2,*(float *)(iVar1 + 0x10) * param_2,
             *(float *)(iVar1 + 0x14) * param_2,0);
  return;
}

