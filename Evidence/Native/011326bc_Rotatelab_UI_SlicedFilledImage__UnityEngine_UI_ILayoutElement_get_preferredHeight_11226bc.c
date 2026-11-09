/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnityEngine.UI.ILayoutElement.get_preferredHeight
float Rotatelab_UI_SlicedFilledImage__UnityEngine_UI_ILayoutElement_get_preferredHeight (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnityEngine.UI.ILayoutElement.get_preferredHeight
   float Rotatelab_UI_SlicedFilledImage__UnityEngine_UI_ILayoutElement_get_preferredHeight
   (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method); */

float Rotatelab_UI_SlicedFilledImage__UnityEngine_UI_ILayoutElement_get_preferredHeight_11226bc
                (undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  char *pcVar4;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  pcVar4 = (char *)(_UNK_0113277c + 0x11326d8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01132780 + 0x11326ec));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (*(int *)(**(int **)(_UNK_01132784 + 0x113270c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,0,0);
  fVar3 = _UNK_01132778;
  if (iVar2 == 0) {
    uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    UnityEngine_Sprites_DataUtility__GetMinSize_3646274(auStack_20,uVar1,0);
    fVar3 = (float)Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(param_1);
    fVar3 = fStack_1c / fVar3;
  }
  return fVar3;
}

