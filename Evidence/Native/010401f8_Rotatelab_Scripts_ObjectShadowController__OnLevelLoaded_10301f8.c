/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnLevelLoaded
void Rotatelab_Scripts_ObjectShadowController__OnLevelLoaded (Rotatelab_Scripts_ObjectShadowController_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnLevelLoaded
   void Rotatelab_Scripts_ObjectShadowController__OnLevelLoaded
   (Rotatelab_Scripts_ObjectShadowController_o* __this, Rotatelab_SoLevelData_o* levelData, const
   MethodInfo* method); */

void Rotatelab_Scripts_ObjectShadowController__OnLevelLoaded_10301f8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
             *(undefined4 *)(param_2 + 0x48),0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar3 = (char *)(_UNK_010402f0 + 0x1040274);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010402f4 + 0x1040288));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_010402f8 + 0x10402a0) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(float *)(iVar2 + 0xc) * 3.0,*(float *)(iVar2 + 0x10) * 3.0,
             *(float *)(iVar2 + 0x14) * 3.0,0);
  return;
}

