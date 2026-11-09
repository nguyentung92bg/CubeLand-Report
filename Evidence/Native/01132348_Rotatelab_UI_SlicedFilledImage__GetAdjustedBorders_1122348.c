/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$GetAdjustedBorders
UnityEngine_Vector4_o Rotatelab_UI_SlicedFilledImage__GetAdjustedBorders (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Vector4_o border, UnityEngine_Rect_o adjustedRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$GetAdjustedBorders
   UnityEngine_Vector4_o Rotatelab_UI_SlicedFilledImage__GetAdjustedBorders
   (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Vector4_o border, UnityEngine_Rect_o
   adjustedRect, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__GetAdjustedBorders_1122348
               (float *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
               float param_6,undefined4 param_7,undefined4 param_8,float param_9,float param_10)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  pcVar7 = (char *)(_UNK_011325a8 + 0x113236c);
  fStack_68 = param_6;
  fStack_64 = param_5;
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011325ac + 0x1132394));
    *pcVar7 = '\x01';
  }
  iVar4 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(param_2,0);
  if (iVar4 != 0) {
    UnityEngine_RectTransform__get_rect_3612fd0(auStack_78,iVar4,0);
    iVar4 = 2;
    piVar8 = *(int **)(_UNK_011325b0 + 0x1132400);
    bVar3 = true;
    do {
      bVar2 = bVar3;
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar9 = fStack_6c;
      if (bVar2) {
        fVar9 = fStack_70;
      }
      if (fVar9 != 0.0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          FUN_00ec3934();
        }
        if (bVar2) {
          param_3 = (param_9 / fStack_70) * param_3;
          puVar1 = &stack0xffffffdc;
          iVar4 = 2;
          fVar9 = param_9 / fStack_70;
        }
        else {
          param_4 = (param_10 / fStack_6c) * param_4;
          puVar1 = &stack0xffffffd8;
          iVar4 = 3;
          fVar9 = param_10 / fStack_6c;
        }
        *(float *)(puVar1 + -0x40) = fVar9 * *(float *)(puVar1 + -0x40);
      }
      fVar9 = param_4;
      if (bVar2) {
        fVar9 = param_3;
      }
      if (iVar4 == 2) {
        puVar1 = &stack0xffffffdc;
      }
      else {
        if (iVar4 != 3) {
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011325b4 + 0x1132568));
          uVar5 = thunk_FUN_00f00cdc();
          uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011325b8 + 0x113257c));
          System_IndexOutOfRangeException___ctor_2b69538(uVar5,uVar6,0);
          uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011325bc + 0x1132598));
          func_0x00ec3920(uVar5,uVar6);
                    /* WARNING: Subroutine does not return */
          FUN_00ec3760();
        }
        puVar1 = &stack0xffffffd8;
      }
      fVar10 = *(float *)(puVar1 + -0x40);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar9 = fVar9 + fVar10;
      fVar10 = param_10;
      if (bVar2) {
        fVar10 = param_9;
      }
      if ((fVar10 < fVar9) && (fVar9 != 0.0)) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          FUN_00ec3934();
        }
        if (bVar2) {
          fVar9 = param_9 / fVar9;
          puVar1 = &stack0xffffffdc;
          param_3 = fVar9 * param_3;
          fVar10 = fStack_64;
        }
        else {
          fVar9 = param_10 / fVar9;
          puVar1 = &stack0xffffffd8;
          param_4 = fVar9 * param_4;
          fVar10 = fStack_68;
        }
        *(float *)(puVar1 + -0x40) = fVar9 * fVar10;
      }
      iVar4 = 3;
      bVar3 = false;
    } while (bVar2);
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = fStack_64;
    param_1[3] = fStack_68;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

