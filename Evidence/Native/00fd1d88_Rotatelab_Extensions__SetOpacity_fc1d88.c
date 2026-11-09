/* IL2CPP: Rotatelab.Extensions$$SetOpacity
void Rotatelab_Extensions__SetOpacity (UnityEngine_UI_Graphic_o* graphic, float opacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetOpacity
   void Rotatelab_Extensions__SetOpacity (UnityEngine_UI_Graphic_o* graphic, float opacity, const
   MethodInfo* method); */

void Rotatelab_Extensions__SetOpacity_fc1d88(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_00fd1e48 + 0xfd1da8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1e4c + 0xfd1dbc));
    *pcVar1 = '\x01';
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*param_1 + 0x170))(&uStack_30,param_1,*(undefined4 *)(*param_1 + 0x174));
  if (*(int *)(**(int **)(_UNK_00fd1e50 + 0xfd1df8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  (**(code **)(*param_1 + 0x178))
            (param_1,uStack_30,uStack_2c,uStack_28,param_2,*(undefined4 *)(*param_1 + 0x17c));
  return;
}

