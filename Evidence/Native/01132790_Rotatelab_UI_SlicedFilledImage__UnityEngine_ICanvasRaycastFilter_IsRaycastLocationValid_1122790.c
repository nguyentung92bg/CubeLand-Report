/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnityEngine.ICanvasRaycastFilter.IsRaycastLocationValid
bool Rotatelab_UI_SlicedFilledImage__UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UnityEngine.ICanvasRaycastFilter.IsRaycastLocationValid
   bool Rotatelab_UI_SlicedFilledImage__UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid
   (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Vector2_o screenPoint,
   UnityEngine_Camera_o* eventCamera, const MethodInfo* method); */

bool Rotatelab_UI_SlicedFilledImage__UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid_1122790
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float *pfVar14;
  char *pcVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  int *piVar19;
  uint in_fpscr;
  uint uVar20;
  byte bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar15 = (char *)(_UNK_01132ee8 + 0x11327b8);
  if (*pcVar15 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01132eec + 0x11327d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01132ef0 + 0x11327dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01132ef4 + 0x11327e8));
    *pcVar15 = '\x01';
  }
  fVar22 = *(float *)(param_1 + 0x98);
  fStack_6c = 0.0;
  fStack_70 = 0.0;
  uStack_74 = 0;
  if (fVar22 <= 0.0) {
    return true;
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar22 < 1.0) << 0x1f | (uint)(fVar22 == 1.0) << 0x1e;
  uVar20 = uVar1 | (uint)NAN(fVar22) << 0x1c;
  bVar21 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar21 >> 6 & 1) && bVar21 >> 7 == ((byte)(uVar20 >> 0x1c) & 1)) {
    return false;
  }
  uVar11 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (*(int *)(**(int **)(_UNK_01132ef8 + 0x1132838) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar12 = UnityEngine_Object__op_Equality_36033f4(uVar11,0,0);
  if (iVar12 != 0) {
    return true;
  }
  uVar11 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(param_1,0);
  if (*(int *)(**(int **)(_UNK_01132efc + 0x1132884) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar12 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_39a69c8
                     (uVar11,param_2,param_3,param_4,&fStack_70,0);
  if (iVar12 == 0) {
    return false;
  }
  UnityEngine_UI_Graphic__GetPixelAdjustedRect_371e26c(&fStack_88,param_1,0);
  fVar6 = fStack_70;
  fVar27 = fStack_7c;
  fVar26 = fStack_80;
  fVar24 = fStack_84;
  fVar22 = fStack_88;
  iVar12 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(param_1,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_pivot_3613920(&fStack_88,iVar12,0);
  fVar3 = fStack_88;
  piVar19 = *(int **)(_UNK_01132f00 + 0x1132914);
  if (*(int *)(*piVar19 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar4 = fStack_6c;
  fStack_70 = fVar6 + fVar26 * fVar3;
  iVar12 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(param_1,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_pivot_3613920(&fStack_88,iVar12,0);
  fStack_6c = fVar4 + fVar27 * fStack_84;
  iVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar17 = false;
  UnityEngine_Sprite__get_rect_35a2c6c(&fStack_88,iVar12,0);
  fVar3 = fStack_7c;
  fVar6 = fStack_80;
  iVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Sprite__get_border_35a2d84(&fStack_88,iVar12,0);
  fVar9 = fStack_7c;
  fVar7 = fStack_80;
  fVar5 = fStack_84;
  fVar4 = fStack_88;
  fVar13 = (float)Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(param_1);
  Rotatelab_UI_SlicedFilledImage__GetAdjustedBorders_1122348
            (&fStack_88,param_1,fVar4 / fVar13,fVar5 / fVar13,fVar7 / fVar13,fVar9 / fVar13,fVar22,
             fVar24,fVar26,fVar27);
  fVar10 = fStack_7c;
  fVar8 = fStack_80;
  fVar13 = fStack_84;
  fVar24 = fStack_88;
  fVar22 = _UNK_01132dc8;
  bVar18 = true;
  do {
    bVar2 = bVar18;
    fVar28 = fVar13;
    if (bVar2) {
      fVar28 = fVar24;
    }
    pfVar16 = (float *)((uint)&fStack_70 | 4);
    pfVar14 = pfVar16;
    if (bVar2) {
      pfVar14 = &fStack_70;
    }
    fVar29 = *pfVar14;
    uVar20 = uVar20 & 0xfffffff | (uint)(fVar29 == fVar28) << 0x1e |
             (uint)(fVar28 <= fVar29) << 0x1d;
    bVar21 = (byte)(uVar20 >> 0x18);
    if ((bool)(bVar21 >> 5 & 1) && !(bool)(bVar21 >> 6)) {
      if (*(int *)(*piVar19 + 0x74) == 0) {
        FUN_00ec3934();
        pfVar14 = pfVar16;
        if (bVar2) {
          pfVar14 = &fStack_70;
        }
        fVar29 = *pfVar14;
      }
      fVar25 = fVar27;
      if (bVar2) {
        fVar25 = fVar26;
      }
      fVar23 = fVar8;
      if (bVar17) {
        fVar23 = fVar10;
      }
      uVar20 = uVar20 & 0xfffffff | (uint)(fVar25 - fVar29 == fVar23) << 0x1e |
               (uint)(fVar23 <= fVar25 - fVar29) << 0x1d;
      bVar21 = (byte)(uVar20 >> 0x18);
      if (!(bool)(bVar21 >> 5 & 1) || (bool)(bVar21 >> 6)) {
        if (*(int *)(*piVar19 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar28 = fVar27 - fVar3;
        if (bVar2) {
          pfVar16 = &fStack_70;
          fVar28 = fVar26 - fVar6;
        }
        *pfVar16 = fVar29 - fVar28;
      }
      else {
        if (*(int *)(*piVar19 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar29 = fVar10;
        if (bVar2) {
          fVar29 = fVar8;
        }
        uVar20 = uVar20 & 0xfffffff;
        fVar23 = fVar22;
        if (fVar28 != fVar25 - fVar29) {
          pfVar14 = pfVar16;
          if (bVar2) {
            pfVar14 = &fStack_70;
          }
          fVar23 = (*pfVar14 - fVar28) / ((fVar25 - fVar29) - fVar28);
          uVar20 = uVar20 | (uint)(fVar23 < 0.0) << 0x1f;
          if (1.0 < fVar23) {
            fVar23 = 1.0;
          }
          if (SUB41(uVar20 >> 0x1f,0)) {
            fVar23 = fVar22;
          }
        }
        uVar20 = uVar20 & 0xfffffff | (uint)(fVar23 < 0.0) << 0x1f;
        if (SUB41(uVar20 >> 0x1f,0)) {
          fVar23 = fVar22;
        }
        fVar29 = fVar5;
        fVar28 = (fVar3 - fVar9) - fVar5;
        if (bVar2) {
          fVar29 = fVar4;
          pfVar16 = &fStack_70;
          fVar28 = (fVar6 - fVar7) - fVar4;
        }
        *pfVar16 = fVar29 + fVar28 * fVar23;
      }
    }
    bVar17 = true;
    bVar18 = false;
  } while (bVar2);
  iVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Sprite__get_textureRect_35a3a4c(&fStack_88,iVar12,0);
  fVar22 = fStack_70;
  fVar24 = fStack_7c;
  if (*(int *)(*piVar19 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar27 = fStack_6c;
  fVar26 = _UNK_01132ee4;
  fVar22 = fVar22 / fStack_80;
  uVar20 = uVar20 & 0xfffffff | (uint)(fVar22 < 0.0) << 0x1f;
  if (1.0 < fVar22) {
    fVar22 = 1.0;
  }
  if (SUB41(uVar20 >> 0x1f,0)) {
    fVar22 = _UNK_01132ee4;
  }
  iVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar27 = fVar27 / fVar24;
  piVar19 = (int *)UnityEngine_Sprite__get_texture_35a2e9c(iVar12,0);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = (**(code **)(*piVar19 + 0xe8))(piVar19,*(undefined4 *)(*piVar19 + 0xec));
  uVar20 = uVar20 & 0xfffffff | (uint)(fVar27 < 0.0) << 0x1f;
  if (1.0 < fVar27) {
    fVar27 = 1.0;
  }
  if (SUB41(uVar20 >> 0x1f,0)) {
    fVar27 = fVar26;
  }
  iVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar26 = (float)VectorSignedToFloat(uVar11,(byte)(uVar20 >> 0x16) & 3);
  piVar19 = (int *)UnityEngine_Sprite__get_texture_35a2e9c(iVar12,0);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar26 = (fStack_88 + ((fStack_88 + fStack_80) - fStack_88) * fVar22) / fVar26;
  uVar11 = (**(code **)(*piVar19 + 0xf8))(piVar19,*(undefined4 *)(*piVar19 + 0xfc));
  fVar22 = (float)VectorSignedToFloat(uVar11,(byte)(uVar20 >> 0x16) & 3);
  fVar22 = (fStack_84 + ((fStack_84 + fVar24) - fStack_84) * fVar27) / fVar22;
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 0:
    fVar24 = *(float *)(param_1 + 0x88);
    bVar17 = NAN(fVar26) || NAN(fVar24);
    bVar21 = (byte)(((uint)(fVar26 < fVar24) << 0x1f) >> 0x18) |
             (byte)(((uint)(fVar26 == fVar24) << 0x1e) >> 0x18);
    break;
  case 1:
    fVar24 = fVar26;
    goto code_r0x01132d40;
  case 2:
    fVar24 = *(float *)(param_1 + 0x88);
    bVar17 = NAN(fVar22) || NAN(fVar24);
    bVar21 = (byte)(((uint)(fVar22 < fVar24) << 0x1f) >> 0x18) |
             (byte)(((uint)(fVar22 == fVar24) << 0x1e) >> 0x18);
    break;
  case 3:
    fVar24 = fVar22;
code_r0x01132d40:
    fVar24 = 1.0 - fVar24;
    fVar27 = *(float *)(param_1 + 0x88);
    bVar17 = NAN(fVar24) || NAN(fVar27);
    bVar21 = (byte)(((uint)(fVar24 < fVar27) << 0x1f) >> 0x18) |
             (byte)(((uint)(fVar24 == fVar27) << 0x1e) >> 0x18);
    break;
  default:
    goto LAB_01132d54;
  }
  bVar18 = false;
  if ((bool)(bVar21 >> 6 & 1) || (bool)(bVar21 >> 7) != bVar17) {
LAB_01132d54:
    iVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = UnityEngine_Sprite__get_texture_35a2e9c(iVar12,0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Texture2D__GetPixelBilinear_35dae78(&fStack_88,iVar12,fVar26,fVar22,0);
    bVar18 = *(float *)(param_1 + 0x98) <= fStack_7c;
  }
  return bVar18;
}

