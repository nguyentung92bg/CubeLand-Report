/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_pixelsPerUnit
float Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_pixelsPerUnit
   float Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit (Rotatelab_UI_SlicedFilledImage_o*
   __this, const MethodInfo* method); */

float Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01130854 + 0x1130744);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130858 + 0x1130758));
    *pcVar5 = '\x01';
  }
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  piVar6 = *(int **)(_UNK_0113085c + 0x1130778);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Implicit_3607ff4(uVar1,0);
  fVar3 = _UNK_01130850;
  if (iVar2 != 0) {
    iVar2 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = (float)UnityEngine_Sprite__get_pixelsPerUnit_35a3564(iVar2,0);
  }
  uVar1 = UnityEngine_UI_Graphic__get_canvas_371b214(param_1,0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Implicit_3607ff4(uVar1,0);
  fVar4 = _UNK_01130850;
  if (iVar2 != 0) {
    iVar2 = UnityEngine_UI_Graphic__get_canvas_371b214(param_1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar4 = (float)UnityEngine_Canvas__get_referencePixelsPerUnit_39a7afc(iVar2,0);
  }
  return (fVar3 * *(float *)(param_1 + 0x90)) / fVar4;
}

