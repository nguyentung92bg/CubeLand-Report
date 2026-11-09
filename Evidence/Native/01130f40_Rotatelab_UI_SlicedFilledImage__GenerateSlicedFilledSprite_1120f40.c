/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$GenerateSlicedFilledSprite
void Rotatelab_UI_SlicedFilledImage__GenerateSlicedFilledSprite (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$GenerateSlicedFilledSprite
   void Rotatelab_UI_SlicedFilledImage__GenerateSlicedFilledSprite
   (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo*
   method); */

void Rotatelab_UI_SlicedFilledImage__GenerateSlicedFilledSprite_1120f40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  int *piVar29;
  int iVar30;
  uint in_fpscr;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar20 = (char *)(_UNK_01131d3c + 0x1130f64);
  if (*pcVar20 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d40 + 0x1130f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d44 + 0x1130f84));
    *pcVar20 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_VertexHelper__Clear_39c6b18(param_2,0);
  uVar24 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x88) < _UNK_01130fbc) << 0x1f;
  if (SUB41(uVar24 >> 0x1f,0)) {
    return;
  }
  UnityEngine_UI_Graphic__GetPixelAdjustedRect_371e26c(&fStack_78,param_1,0);
  fVar8 = fStack_6c;
  fVar3 = fStack_70;
  fVar1 = fStack_74;
  fVar34 = fStack_78;
  uVar13 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  UnityEngine_Sprites_DataUtility__GetOuterUV_36461e4(&fStack_78,uVar13,0);
  fVar9 = fStack_6c;
  fVar4 = fStack_70;
  fVar37 = fStack_74;
  fVar35 = fStack_78;
  uVar13 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  UnityEngine_Sprites_DataUtility__GetPadding_364622c(&fStack_78,uVar13,0);
  fVar10 = fStack_6c;
  fVar5 = fStack_70;
  fVar31 = fStack_74;
  fVar33 = fStack_78;
  iVar14 = Rotatelab_UI_SlicedFilledImage__get_hasBorder_1120b20(param_1);
  iVar15 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar14 != 0) {
    UnityEngine_Sprites_DataUtility__GetInnerUV_364619c(&fStack_78,iVar15,0);
    fVar11 = fStack_6c;
    fVar6 = fStack_70;
    fVar32 = fStack_74;
    fVar38 = fStack_78;
    iVar14 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_border_35a2d84(&fStack_78,iVar14,0);
    fVar12 = fStack_6c;
    fVar7 = fStack_70;
    fVar2 = fStack_74;
    fVar17 = fStack_78;
    fVar16 = (float)Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(param_1);
    Rotatelab_UI_SlicedFilledImage__GetAdjustedBorders_1122348
              (&fStack_78,param_1,fVar17 / fVar16,fVar2 / fVar16,fVar7 / fVar16,fVar12 / fVar16,
               fVar34,fVar1,fVar3,fVar8);
    fVar17 = (float)Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(param_1);
    piVar29 = *(int **)(_UNK_01131d5c + 0x1131134);
    iVar14 = *piVar29;
    if (*(int *)(iVar14 + 0x74) == 0) {
      FUN_00ec3934();
      iVar14 = *piVar29;
    }
    iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x10) = fVar33 / fVar17;
    *(float *)(iVar14 + 0x14) = fVar31 / fVar17;
    piVar27 = *(int **)(_UNK_01131d60 + 0x1131190);
    iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
    if (*(int *)(*piVar27 + 0x74) == 0) {
      FUN_00ec3934();
    }
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x28) = fVar3 - fVar5 / fVar17;
    *(float *)(iVar14 + 0x2c) = fVar8 - fVar10 / fVar17;
    iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar15 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
    *(float *)(iVar14 + 0x18) = fStack_78;
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar15 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
    *(float *)(iVar15 + 0x1c) = fStack_74;
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar15 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
    *(float *)(iVar14 + 0x20) = fVar3 - fStack_70;
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar15 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar15 + 0x24) = fVar8 - fStack_6c;
    iVar14 = 0;
    uVar24 = 0;
    do {
      iVar15 = *piVar29;
      if (*(int *)(iVar15 + 0x74) == 0) {
        FUN_00ec3934();
        iVar15 = *piVar29;
      }
      iVar15 = *(int *)(*(int *)(iVar15 + 0x5c) + 8);
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar15 + 0xc) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar33 = *(float *)(iVar15 + iVar14 + 0x10);
      if (*(int *)(*piVar27 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar30 = *(int *)(*(int *)(**(int **)(_UNK_01131d64 + 0x1131308) + 0x5c) + 8);
      *(float *)(iVar15 + iVar14 + 0x10) = fVar34 + fVar33;
      if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar30 + 0xc) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar30 = iVar30 + iVar14;
      uVar24 = uVar24 + 1;
      iVar14 = iVar14 + 8;
      *(float *)(iVar30 + 0x14) = fVar1 + *(float *)(iVar30 + 0x14);
      piVar29 = *(int **)(_UNK_01131d68 + 0x1131358);
    } while (uVar24 != 4);
    iVar14 = *piVar29;
    if (*(int *)(iVar14 + 0x74) == 0) {
      FUN_00ec3934();
      iVar14 = *piVar29;
    }
    iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 0xc);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x10) = fVar35;
    *(float *)(iVar14 + 0x14) = fVar37;
    iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x18) = fVar38;
    *(float *)(iVar14 + 0x1c) = fVar32;
    iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x20) = fVar6;
    *(float *)(iVar14 + 0x24) = fVar11;
    iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x28) = fVar4;
    *(float *)(iVar14 + 0x2c) = fVar9;
    iVar14 = *piVar29;
    if (*(uint *)(param_1 + 0x84) < 2) {
      if (*(int *)(iVar14 + 0x74) == 0) {
        FUN_00ec3934();
        iVar14 = *piVar29;
      }
      iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar34 = *(float *)(iVar14 + 0x10);
      iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar14 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar35 = *(float *)(iVar14 + 0x28);
      iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar33 = *(float *)(iVar14 + 0x10);
    }
    else {
      if (*(int *)(iVar14 + 0x74) == 0) {
        FUN_00ec3934();
        iVar14 = *piVar29;
      }
      iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar34 = *(float *)(iVar14 + 0x14);
      iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar14 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar35 = *(float *)(iVar14 + 0x2c);
      iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar33 = *(float *)(iVar14 + 0x14);
    }
    fVar1 = _UNK_01131888;
    if (fVar35 - fVar33 <= 0.0) {
      fVar35 = 1.0;
    }
    else {
      fVar35 = 1.0 / (fVar35 - fVar33);
    }
    uVar24 = 0;
    do {
      uVar19 = uVar24 + 1;
      uVar18 = 0;
      do {
        if ((uVar18 == 1 && uVar24 == 1) && (uVar28 = 2, *(char *)(param_1 + 0x8c) == '\0'))
        goto LAB_01131b2c;
        uVar28 = uVar18 + 1;
        fVar33 = fVar1;
        fVar37 = fVar1;
        switch(*(undefined4 *)(param_1 + 0x84)) {
        case 0:
          iVar14 = *piVar29;
          if (*(int *)(iVar14 + 0x74) == 0) {
            FUN_00ec3934();
            iVar14 = *piVar29;
          }
          iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar33 = *(float *)(iVar14 + uVar24 * 8 + 0x10);
          iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar31 = *(float *)(iVar14 + uVar19 * 8 + 0x10);
          break;
        case 1:
          iVar14 = *piVar29;
          if (*(int *)(iVar14 + 0x74) == 0) {
            FUN_00ec3934();
            iVar14 = *piVar29;
          }
          iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar33 = *(float *)(iVar14 + uVar19 * 8 + 0x10);
          iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar31 = *(float *)(iVar14 + uVar24 * 8 + 0x10);
          goto code_r0x01131914;
        case 2:
          iVar14 = *piVar29;
          if (*(int *)(iVar14 + 0x74) == 0) {
            FUN_00ec3934();
            iVar14 = *piVar29;
          }
          iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar33 = *(float *)(iVar14 + uVar18 * 8 + 0x14);
          iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar28) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar31 = *(float *)(iVar14 + uVar28 * 8 + 0x14);
          break;
        case 3:
          iVar14 = *piVar29;
          if (*(int *)(iVar14 + 0x74) == 0) {
            FUN_00ec3934();
            iVar14 = *piVar29;
          }
          iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar28) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar33 = *(float *)(iVar14 + uVar28 * 8 + 0x14);
          iVar14 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar31 = *(float *)(iVar14 + uVar18 * 8 + 0x14);
code_r0x01131914:
          fVar37 = 1.0 - fVar35 * (fVar33 - fVar34);
          fVar33 = 1.0 - fVar35 * (fVar31 - fVar34);
        default:
          goto LAB_01131920;
        }
        fVar37 = fVar35 * (fVar33 - fVar34);
        fVar33 = fVar35 * (fVar31 - fVar34);
LAB_01131920:
        if (fVar37 < *(float *)(param_1 + 0x88)) {
          iVar14 = *piVar29;
          if (*(int *)(iVar14 + 0x74) == 0) {
            FUN_00ec3934();
            iVar14 = *piVar29;
          }
          iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar15 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar15 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar30 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar30 + 0xc) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar21 = *(int *)(*(int *)(*piVar29 + 0x5c) + 8);
          if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar21 + 0xc) <= uVar28) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar22 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
          if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar22 + 0xc) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar23 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
          if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar23 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar25 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
          if (iVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar25 + 0xc) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar26 = *(int *)(*(int *)(*piVar29 + 0x5c) + 0xc);
          if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar26 + 0xc) <= uVar28) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite_1121ea4
                    (param_1,param_2,*(undefined4 *)(iVar14 + uVar24 * 8 + 0x10),
                     *(undefined4 *)(iVar15 + uVar18 * 8 + 0x14),
                     *(undefined4 *)(iVar30 + uVar19 * 8 + 0x10),
                     *(undefined4 *)(iVar21 + uVar28 * 8 + 0x14),
                     *(undefined4 *)(iVar22 + uVar24 * 8 + 0x10),
                     *(undefined4 *)(iVar23 + uVar18 * 8 + 0x14),
                     *(undefined4 *)(iVar25 + uVar19 * 8 + 0x10),
                     *(undefined4 *)(iVar26 + uVar28 * 8 + 0x14),
                     (*(float *)(param_1 + 0x88) - fVar37) / (fVar33 - fVar37));
          piVar29 = *(int **)(_UNK_01131d6c + 0x1131b30);
        }
LAB_01131b2c:
        uVar18 = uVar28;
      } while (uVar28 != 3);
      uVar24 = uVar19;
      if (uVar19 == 3) {
        return;
      }
    } while( true );
  }
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Sprite__get_rect_35a2c6c(&fStack_78,iVar15,0);
  if (*(int *)(**(int **)(_UNK_01131d48 + 0x1131508) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar20 = (char *)(_UNK_01131d4c + 0x113152c);
  if (*pcVar20 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d50 + 0x1131540));
    *pcVar20 = '\x01';
  }
  piVar29 = *(int **)(_UNK_01131d54 + 0x1131558);
  if (*(int *)(*piVar29 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar36 = (double)fStack_70;
  dVar39 = (double)modf(SUB84(dVar36,0),(int)((ulonglong)dVar36 >> 0x20),&fStack_78);
  if (NAN(fStack_70)) {
    uVar24 = uVar24 & 0xfffffff | (uint)(dVar39 == -0.5) << 0x1e;
    if (SUB41(uVar24 >> 0x1e,0)) {
      dVar36 = -1.0;
LAB_01131668:
      dVar39 = (double)CONCAT44(fStack_74,fStack_78);
      uVar18 = FUN_00f88224(fStack_78,fStack_74);
      dVar36 = dVar39 + dVar36;
      if ((uVar18 & 1) == 0) {
        dVar36 = dVar39;
      }
    }
    else {
      dVar36 = (double)ceil(SUB84(dVar36 + -0.5,0),(int)((ulonglong)(dVar36 + -0.5) >> 0x20));
    }
  }
  else {
    uVar24 = uVar24 & 0xfffffff | (uint)(dVar39 == 0.5) << 0x1e;
    if (SUB41(uVar24 >> 0x1e,0)) {
      dVar36 = 1.0;
      goto LAB_01131668;
    }
    dVar36 = (double)floor(SUB84(dVar36 + 0.5,0),(int)((ulonglong)(dVar36 + 0.5) >> 0x20));
  }
  if (*pcVar20 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d58 + 0x1131b80));
    *pcVar20 = '\x01';
  }
  if (*(int *)(*piVar29 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar38 = (float)VectorSignedToFloat((int)(longlong)dVar36,(byte)(uVar24 >> 0x16) & 3);
  dVar39 = (double)fStack_6c;
  dVar40 = (double)modf(SUB84(dVar39,0),(int)((ulonglong)dVar39 >> 0x20),&fStack_78);
  if (NAN(fStack_6c)) {
    uVar24 = uVar24 & 0xfffffff | (uint)(dVar40 == -0.5) << 0x1e;
    if (!SUB41(uVar24 >> 0x1e,0)) {
      dVar39 = (double)ceil(SUB84(dVar39 + -0.5,0),(int)((ulonglong)(dVar39 + -0.5) >> 0x20));
      goto LAB_01131c8c;
    }
    dVar39 = -1.0;
  }
  else {
    uVar24 = uVar24 & 0xfffffff | (uint)(dVar40 == 0.5) << 0x1e;
    if (!SUB41(uVar24 >> 0x1e,0)) {
      dVar39 = (double)floor(SUB84(dVar39 + 0.5,0),(int)((ulonglong)(dVar39 + 0.5) >> 0x20));
      goto LAB_01131c8c;
    }
    dVar39 = 1.0;
  }
  uVar18 = FUN_00f88224(fStack_78,fStack_74);
  dVar39 = (double)CONCAT44(fStack_74,fStack_78) + dVar39;
  if ((uVar18 & 1) == 0) {
    dVar39 = (double)CONCAT44(fStack_74,fStack_78);
  }
LAB_01131c8c:
  uVar24 = uVar24 & 0xfffffff | (uint)(dVar39 == _UNK_01131d30) << 0x1e;
  fVar32 = (float)VectorSignedToFloat((int)(longlong)dVar39,(byte)(uVar24 >> 0x16) & 3);
  if (dVar36 == _UNK_01131d30) {
    fVar38 = _UNK_01131d38;
  }
  if (SUB41(uVar24 >> 0x1e,0)) {
    fVar32 = _UNK_01131d38;
  }
  Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite_1121ea4
            (param_1,param_2,fVar34 + fVar3 * (fVar33 / fVar38),fVar1 + fVar8 * (fVar31 / fVar32),
             fVar34 + fVar3 * ((fVar38 - fVar5) / fVar38),
             fVar1 + fVar8 * ((fVar32 - fVar10) / fVar32),fVar35,fVar37,fVar4,fVar9,
             *(undefined4 *)(param_1 + 0x88));
  return;
}

