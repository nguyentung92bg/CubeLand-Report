/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_hasBorder
bool Rotatelab_UI_SlicedFilledImage__get_hasBorder (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_hasBorder
   bool Rotatelab_UI_SlicedFilledImage__get_hasBorder (Rotatelab_UI_SlicedFilledImage_o* __this,
   const MethodInfo* method); */

undefined4 Rotatelab_UI_SlicedFilledImage__get_hasBorder_1120b20(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pcVar3 = (char *)(_UNK_01130bfc + 0x1130b38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130c00 + 0x1130b4c));
    *pcVar3 = '\x01';
  }
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (*(int *)(**(int **)(_UNK_01130c04 + 0x1130b6c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = 0;
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 != 0) {
    iVar2 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = 0;
    UnityEngine_Sprite__get_border_35a2d84(&fStack_20,iVar2,0);
    if (0.0 < fStack_1c * fStack_1c + fStack_20 * fStack_20 + fStack_18 * fStack_18 +
              fStack_14 * fStack_14) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

