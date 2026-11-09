/* IL2CPP: Rotatelab.Extensions$$SetOpacity
void Rotatelab_Extensions__SetOpacity (UnityEngine_Material_o* material, float opacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetOpacity
   void Rotatelab_Extensions__SetOpacity (UnityEngine_Material_o* material, float opacity, const
   MethodInfo* method); */

void Rotatelab_Extensions__SetOpacity_fc1e54(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_00fd1f10 + 0xfd1e74);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1f14 + 0xfd1e88));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__get_color_35c7ad4(&uStack_30,param_1,0);
  if (*(int *)(**(int **)(_UNK_00fd1f18 + 0xfd1eb8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__set_color_35c7c80(param_1,uStack_30,uStack_2c,uStack_28,param_2,0);
  return;
}

