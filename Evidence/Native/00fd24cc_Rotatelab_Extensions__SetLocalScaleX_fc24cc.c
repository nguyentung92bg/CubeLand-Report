/* IL2CPP: Rotatelab.Extensions$$SetLocalScaleX
void Rotatelab_Extensions__SetLocalScaleX (UnityEngine_Transform_o* transform, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetLocalScaleX
   void Rotatelab_Extensions__SetLocalScaleX (UnityEngine_Transform_o* transform, float value, const
   MethodInfo* method); */

void Rotatelab_Extensions__SetLocalScaleX_fc24cc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_00fd2574 + 0xfd24e8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2578 + 0xfd24fc));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(auStack_24,param_1,0);
  if (*(int *)(**(int **)(_UNK_00fd257c + 0xfd252c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(param_1,param_2,uStack_20,uStack_1c,0);
  return;
}

