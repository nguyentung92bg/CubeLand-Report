/* IL2CPP: Rotatelab.Extensions$$SetOpacity
void Rotatelab_Extensions__SetOpacity (UnityEngine_SpriteRenderer_o* spriteRenderer, float opacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetOpacity
   void Rotatelab_Extensions__SetOpacity (UnityEngine_SpriteRenderer_o* spriteRenderer, float
   opacity, const MethodInfo* method); */

void Rotatelab_Extensions__SetOpacity_fc1cc0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_00fd1d7c + 0xfd1ce0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1d80 + 0xfd1cf4));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SpriteRenderer__get_color_35a19f4(&uStack_30,param_1,0);
  if (*(int *)(**(int **)(_UNK_00fd1d84 + 0xfd1d24) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SpriteRenderer__set_color_35a1b0c(param_1,uStack_30,uStack_2c,uStack_28,param_2,0);
  return;
}

