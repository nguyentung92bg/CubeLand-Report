/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_fillAmount
void Rotatelab_UI_SlicedFilledImage__set_fillAmount (Rotatelab_UI_SlicedFilledImage_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_fillAmount
   void Rotatelab_UI_SlicedFilledImage__set_fillAmount (Rotatelab_UI_SlicedFilledImage_o* __this,
   float value, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__set_fillAmount_11205d8(int *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01130678 + 0x11305f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113067c + 0x1130608));
    *pcVar3 = '\x01';
  }
  bVar1 = param_2 < 0.0;
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  if (bVar1) {
    param_2 = _UNK_01130674;
  }
  iVar2 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_float__168579c
                    (param_1 + 0x22,param_2,**(undefined4 **)(_UNK_01130680 + 0x1130624));
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01130668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
    return;
  }
  return;
}

