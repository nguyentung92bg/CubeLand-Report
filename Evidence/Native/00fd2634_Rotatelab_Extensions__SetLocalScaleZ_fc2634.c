/* IL2CPP: Rotatelab.Extensions$$SetLocalScaleZ
void Rotatelab_Extensions__SetLocalScaleZ (UnityEngine_Transform_o* transform, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetLocalScaleZ
   void Rotatelab_Extensions__SetLocalScaleZ (UnityEngine_Transform_o* transform, float value, const
   MethodInfo* method); */

void Rotatelab_Extensions__SetLocalScaleZ_fc2634(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_00fd26d8 + 0xfd2650);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd26dc + 0xfd2664));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&uStack_24,param_1,0);
  if (*(int *)(**(int **)(_UNK_00fd26e0 + 0xfd2694) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(param_1,uStack_24,uStack_20,param_2,0);
  return;
}

