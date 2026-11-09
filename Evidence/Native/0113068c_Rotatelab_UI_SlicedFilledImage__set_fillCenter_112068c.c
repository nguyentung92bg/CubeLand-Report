/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_fillCenter
void Rotatelab_UI_SlicedFilledImage__set_fillCenter (Rotatelab_UI_SlicedFilledImage_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_fillCenter
   void Rotatelab_UI_SlicedFilledImage__set_fillCenter (Rotatelab_UI_SlicedFilledImage_o* __this,
   bool value, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__set_fillCenter_112068c(int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_011306f8 + 0x11306a4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011306fc + 0x11306b8));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_bool__16856b4
                    (param_1 + 0x23,param_2,**(undefined4 **)(_UNK_01130700 + 0x11306d0));
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011306f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
  return;
}

