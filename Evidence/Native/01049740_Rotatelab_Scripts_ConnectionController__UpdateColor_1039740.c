/* IL2CPP: Rotatelab.Scripts.ConnectionController$$UpdateColor
void Rotatelab_Scripts_ConnectionController__UpdateColor (Rotatelab_Scripts_ConnectionController_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ConnectionController$$UpdateColor
   void Rotatelab_Scripts_ConnectionController__UpdateColor
   (Rotatelab_Scripts_ConnectionController_o* __this, UnityEngine_Color_o color, const MethodInfo*
   method); */

void Rotatelab_Scripts_ConnectionController__UpdateColor_1039740
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  pcVar2 = (char *)(_UNK_010497e4 + 0x1049760);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010497e8 + 0x1049778));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010497ec + 0x104978c);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (iVar4,**(undefined4 **)(iVar1 + 0x5c),param_2,param_3,param_4,param_5,0);
  return;
}

