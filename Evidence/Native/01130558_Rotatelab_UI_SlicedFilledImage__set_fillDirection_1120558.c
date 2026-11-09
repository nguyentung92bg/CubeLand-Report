/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_fillDirection
void Rotatelab_UI_SlicedFilledImage__set_fillDirection (Rotatelab_UI_SlicedFilledImage_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_fillDirection
   void Rotatelab_UI_SlicedFilledImage__set_fillDirection (Rotatelab_UI_SlicedFilledImage_o* __this,
   int32_t value, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__set_fillDirection_1120558(int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_011305c4 + 0x1130570);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011305c8 + 0x1130584));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_Int32Enum__168572c
                    (param_1 + 0x21,param_2,**(undefined4 **)(_UNK_011305cc + 0x113059c));
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011305c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
  return;
}

