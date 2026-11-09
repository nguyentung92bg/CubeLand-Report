/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_activeSprite
UnityEngine_Sprite_o* Rotatelab_UI_SlicedFilledImage__get_activeSprite (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_activeSprite
   UnityEngine_Sprite_o* Rotatelab_UI_SlicedFilledImage__get_activeSprite
   (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_011308d4 + 0x1130874);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011308d8 + 0x1130888));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x94);
  if (*(int *)(**(int **)(_UNK_011308dc + 0x113089c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
  iVar2 = 0x80;
  if (iVar1 != 0) {
    iVar2 = 0x94;
  }
  return *(undefined4 *)(param_1 + iVar2);
}

