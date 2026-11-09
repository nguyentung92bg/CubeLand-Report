/* IL2CPP: Rotatelab.Extensions$$SetLocalScaleY
void Rotatelab_Extensions__SetLocalScaleY (UnityEngine_Transform_o* transform, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetLocalScaleY
   void Rotatelab_Extensions__SetLocalScaleY (UnityEngine_Transform_o* transform, float value, const
   MethodInfo* method); */

void Rotatelab_Extensions__SetLocalScaleY_fc2580(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 auStack_24 [2];
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_00fd2628 + 0xfd259c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd262c + 0xfd25b0));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(auStack_24,param_1,0);
  if (*(int *)(**(int **)(_UNK_00fd2630 + 0xfd25e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(param_1,auStack_24[0],param_2,uStack_1c,0);
  return;
}

