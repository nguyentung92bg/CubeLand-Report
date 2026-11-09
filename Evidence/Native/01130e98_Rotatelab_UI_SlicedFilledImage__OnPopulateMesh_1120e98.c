/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$OnPopulateMesh
void Rotatelab_UI_SlicedFilledImage__OnPopulateMesh (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$OnPopulateMesh
   void Rotatelab_UI_SlicedFilledImage__OnPopulateMesh (Rotatelab_UI_SlicedFilledImage_o* __this,
   UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__OnPopulateMesh_1120e98(int *param_1,int param_2)

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
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  int iVar29;
  uint in_fpscr;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 in_stack_ffffffb0;
  undefined8 in_stack_ffffffb8;
  
  pcVar25 = (char *)(_UNK_01130f30 + 0x1130eb0);
  if (*pcVar25 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130f34 + 0x1130ec4));
    *pcVar25 = '\x01';
  }
  uVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (*(int *)(**(int **)(_UNK_01130f38 + 0x1130ee4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar13 = UnityEngine_Object__op_Equality_36033f4(uVar12,0,0);
  if (iVar13 != 0) {
    pcVar25 = (char *)(_UNK_0372e260 + 0x372e030);
    if (*pcVar25 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0372e264 + 0x372e044),param_2,0);
      *pcVar25 = '\x01';
    }
    UnityEngine_UI_Graphic__GetPixelAdjustedRect_371e26c(&stack0xffffffb0,param_1);
    fVar34 = (float)in_stack_ffffffb0;
    fVar32 = (float)((ulonglong)in_stack_ffffffb0 >> 0x20);
    fVar36 = (float)((ulonglong)in_stack_ffffffb8 >> 0x20);
    if (*(int *)(**(int **)(_UNK_0372e268 + 0x372e064) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    (**(code **)(*param_1 + 0x170))(&stack0xffffffb0,param_1,*(undefined4 *)(*param_1 + 0x174));
    thunk_FUN_01011a24(fVar34,fVar32,(float)in_stack_ffffffb8,fVar36);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_VertexHelper__Clear_39c6b18(param_2,0);
    fVar36 = fVar32 + fVar36;
    UnityEngine_UI_VertexHelper__AddVert_39cab2c(param_2,fVar34,fVar32,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar33 = fVar34 + (float)in_stack_ffffffb8;
    UnityEngine_UI_VertexHelper__AddVert_39cab2c(param_2,fVar34,fVar36,0);
    if (param_2 != 0) {
      UnityEngine_UI_VertexHelper__AddVert_39cab2c(param_2,fVar33,fVar36,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_VertexHelper__AddVert_39cab2c(param_2,fVar33,fVar32,0);
      UnityEngine_UI_VertexHelper__AddTriangle_39cad84(param_2,0,1,2);
      UnityEngine_UI_VertexHelper__AddTriangle_39cad84(param_2,2,3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar25 = (char *)(_UNK_01131d3c + 0x1130f64);
  if (*pcVar25 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d40 + 0x1130f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d44 + 0x1130f84));
    *pcVar25 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_VertexHelper__Clear_39c6b18(param_2,0);
  uVar22 = in_fpscr & 0xfffffff | (uint)((float)param_1[0x22] < _UNK_01130fbc) << 0x1f;
  if (SUB41(uVar22 >> 0x1f,0)) {
    return;
  }
  UnityEngine_UI_Graphic__GetPixelAdjustedRect_371e26c(&fStack_78,param_1,0);
  fVar7 = fStack_6c;
  fVar2 = fStack_70;
  fVar33 = fStack_74;
  fVar36 = fStack_78;
  uVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  UnityEngine_Sprites_DataUtility__GetOuterUV_36461e4(&fStack_78,uVar12,0);
  fVar8 = fStack_6c;
  fVar3 = fStack_70;
  fVar37 = fStack_74;
  fVar34 = fStack_78;
  uVar12 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  UnityEngine_Sprites_DataUtility__GetPadding_364622c(&fStack_78,uVar12,0);
  fVar9 = fStack_6c;
  fVar4 = fStack_70;
  fVar30 = fStack_74;
  fVar32 = fStack_78;
  iVar13 = Rotatelab_UI_SlicedFilledImage__get_hasBorder_1120b20(param_1);
  iVar14 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar13 != 0) {
    UnityEngine_Sprites_DataUtility__GetInnerUV_364619c(&fStack_78,iVar14,0);
    fVar10 = fStack_6c;
    fVar5 = fStack_70;
    fVar31 = fStack_74;
    fVar38 = fStack_78;
    iVar13 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_border_35a2d84(&fStack_78,iVar13,0);
    fVar11 = fStack_6c;
    fVar6 = fStack_70;
    fVar1 = fStack_74;
    fVar16 = fStack_78;
    fVar15 = (float)Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(param_1);
    Rotatelab_UI_SlicedFilledImage__GetAdjustedBorders_1122348
              (&fStack_78,param_1,fVar16 / fVar15,fVar1 / fVar15,fVar6 / fVar15,fVar11 / fVar15,
               fVar36,fVar33,fVar2,fVar7);
    fVar16 = (float)Rotatelab_UI_SlicedFilledImage__get_pixelsPerUnit_112072c(param_1);
    piVar28 = *(int **)(_UNK_01131d5c + 0x1131134);
    iVar13 = *piVar28;
    if (*(int *)(iVar13 + 0x74) == 0) {
      FUN_00ec3934();
      iVar13 = *piVar28;
    }
    iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar13 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar13 + 0x10) = fVar32 / fVar16;
    *(float *)(iVar13 + 0x14) = fVar30 / fVar16;
    piVar26 = *(int **)(_UNK_01131d60 + 0x1131190);
    iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
    if (*(int *)(*piVar26 + 0x74) == 0) {
      FUN_00ec3934();
    }
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar13 + 0x28) = fVar2 - fVar4 / fVar16;
    *(float *)(iVar13 + 0x2c) = fVar7 - fVar9 / fVar16;
    iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar14 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
    *(float *)(iVar13 + 0x18) = fStack_78;
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
    *(float *)(iVar14 + 0x1c) = fStack_74;
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar14 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
    *(float *)(iVar13 + 0x20) = fVar2 - fStack_70;
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar14 + 0x24) = fVar7 - fStack_6c;
    iVar13 = 0;
    uVar22 = 0;
    do {
      iVar14 = *piVar28;
      if (*(int *)(iVar14 + 0x74) == 0) {
        FUN_00ec3934();
        iVar14 = *piVar28;
      }
      iVar14 = *(int *)(*(int *)(iVar14 + 0x5c) + 8);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar14 + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar32 = *(float *)(iVar14 + iVar13 + 0x10);
      if (*(int *)(*piVar26 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar29 = *(int *)(*(int *)(**(int **)(_UNK_01131d64 + 0x1131308) + 0x5c) + 8);
      *(float *)(iVar14 + iVar13 + 0x10) = fVar36 + fVar32;
      if (iVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar29 + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar29 = iVar29 + iVar13;
      uVar22 = uVar22 + 1;
      iVar13 = iVar13 + 8;
      *(float *)(iVar29 + 0x14) = fVar33 + *(float *)(iVar29 + 0x14);
      piVar28 = *(int **)(_UNK_01131d68 + 0x1131358);
    } while (uVar22 != 4);
    iVar13 = *piVar28;
    if (*(int *)(iVar13 + 0x74) == 0) {
      FUN_00ec3934();
      iVar13 = *piVar28;
    }
    iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 0xc);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar13 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar13 + 0x10) = fVar34;
    *(float *)(iVar13 + 0x14) = fVar37;
    iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar13 + 0x18) = fVar38;
    *(float *)(iVar13 + 0x1c) = fVar31;
    iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar13 + 0x20) = fVar5;
    *(float *)(iVar13 + 0x24) = fVar10;
    iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar13 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar13 + 0x28) = fVar3;
    *(float *)(iVar13 + 0x2c) = fVar8;
    iVar13 = *piVar28;
    if ((uint)param_1[0x21] < 2) {
      if (*(int *)(iVar13 + 0x74) == 0) {
        FUN_00ec3934();
        iVar13 = *piVar28;
      }
      iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar13 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar36 = *(float *)(iVar13 + 0x10);
      iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar13 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar34 = *(float *)(iVar13 + 0x28);
      iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar13 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar32 = *(float *)(iVar13 + 0x10);
    }
    else {
      if (*(int *)(iVar13 + 0x74) == 0) {
        FUN_00ec3934();
        iVar13 = *piVar28;
      }
      iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar13 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar36 = *(float *)(iVar13 + 0x14);
      iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar13 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar34 = *(float *)(iVar13 + 0x2c);
      iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar13 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar32 = *(float *)(iVar13 + 0x14);
    }
    fVar33 = _UNK_01131888;
    if (fVar34 - fVar32 <= 0.0) {
      fVar34 = 1.0;
    }
    else {
      fVar34 = 1.0 / (fVar34 - fVar32);
    }
    uVar22 = 0;
    do {
      uVar18 = uVar22 + 1;
      uVar17 = 0;
      do {
        if ((uVar17 == 1 && uVar22 == 1) && (uVar27 = 2, (char)param_1[0x23] == '\0'))
        goto LAB_01131b2c;
        uVar27 = uVar17 + 1;
        fVar32 = fVar33;
        fVar37 = fVar33;
        switch(param_1[0x21]) {
        case 0:
          iVar13 = *piVar28;
          if (*(int *)(iVar13 + 0x74) == 0) {
            FUN_00ec3934();
            iVar13 = *piVar28;
          }
          iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar32 = *(float *)(iVar13 + uVar22 * 8 + 0x10);
          iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar30 = *(float *)(iVar13 + uVar18 * 8 + 0x10);
          break;
        case 1:
          iVar13 = *piVar28;
          if (*(int *)(iVar13 + 0x74) == 0) {
            FUN_00ec3934();
            iVar13 = *piVar28;
          }
          iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar32 = *(float *)(iVar13 + uVar18 * 8 + 0x10);
          iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar30 = *(float *)(iVar13 + uVar22 * 8 + 0x10);
          goto code_r0x01131914;
        case 2:
          iVar13 = *piVar28;
          if (*(int *)(iVar13 + 0x74) == 0) {
            FUN_00ec3934();
            iVar13 = *piVar28;
          }
          iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar32 = *(float *)(iVar13 + uVar17 * 8 + 0x14);
          iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar30 = *(float *)(iVar13 + uVar27 * 8 + 0x14);
          break;
        case 3:
          iVar13 = *piVar28;
          if (*(int *)(iVar13 + 0x74) == 0) {
            FUN_00ec3934();
            iVar13 = *piVar28;
          }
          iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar32 = *(float *)(iVar13 + uVar27 * 8 + 0x14);
          iVar13 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar30 = *(float *)(iVar13 + uVar17 * 8 + 0x14);
code_r0x01131914:
          fVar37 = 1.0 - fVar34 * (fVar32 - fVar36);
          fVar32 = 1.0 - fVar34 * (fVar30 - fVar36);
        default:
          goto LAB_01131920;
        }
        fVar37 = fVar34 * (fVar32 - fVar36);
        fVar32 = fVar34 * (fVar30 - fVar36);
LAB_01131920:
        if (fVar37 < (float)param_1[0x22]) {
          iVar13 = *piVar28;
          if (*(int *)(iVar13 + 0x74) == 0) {
            FUN_00ec3934();
            iVar13 = *piVar28;
          }
          iVar13 = *(int *)(*(int *)(iVar13 + 0x5c) + 8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar13 + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar14 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar14 + 0xc) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar29 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar29 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar29 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar19 = *(int *)(*(int *)(*piVar28 + 0x5c) + 8);
          if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar19 + 0xc) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar20 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
          if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar20 + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar21 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
          if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar21 + 0xc) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar23 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
          if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar23 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar24 = *(int *)(*(int *)(*piVar28 + 0x5c) + 0xc);
          if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar24 + 0xc) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite_1121ea4
                    (param_1,param_2,*(undefined4 *)(iVar13 + uVar22 * 8 + 0x10),
                     *(undefined4 *)(iVar14 + uVar17 * 8 + 0x14),
                     *(undefined4 *)(iVar29 + uVar18 * 8 + 0x10),
                     *(undefined4 *)(iVar19 + uVar27 * 8 + 0x14),
                     *(undefined4 *)(iVar20 + uVar22 * 8 + 0x10),
                     *(undefined4 *)(iVar21 + uVar17 * 8 + 0x14),
                     *(undefined4 *)(iVar23 + uVar18 * 8 + 0x10),
                     *(undefined4 *)(iVar24 + uVar27 * 8 + 0x14),
                     ((float)param_1[0x22] - fVar37) / (fVar32 - fVar37));
          piVar28 = *(int **)(_UNK_01131d6c + 0x1131b30);
        }
LAB_01131b2c:
        uVar17 = uVar27;
      } while (uVar27 != 3);
      uVar22 = uVar18;
      if (uVar18 == 3) {
        return;
      }
    } while( true );
  }
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Sprite__get_rect_35a2c6c(&fStack_78,iVar14,0);
  if (*(int *)(**(int **)(_UNK_01131d48 + 0x1131508) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar25 = (char *)(_UNK_01131d4c + 0x113152c);
  if (*pcVar25 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d50 + 0x1131540));
    *pcVar25 = '\x01';
  }
  piVar28 = *(int **)(_UNK_01131d54 + 0x1131558);
  if (*(int *)(*piVar28 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar35 = (double)fStack_70;
  dVar39 = (double)modf(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20),&fStack_78);
  if (NAN(fStack_70)) {
    uVar22 = uVar22 & 0xfffffff | (uint)(dVar39 == -0.5) << 0x1e;
    if (SUB41(uVar22 >> 0x1e,0)) {
      dVar35 = -1.0;
LAB_01131668:
      dVar39 = (double)CONCAT44(fStack_74,fStack_78);
      uVar17 = FUN_00f88224(fStack_78,fStack_74);
      dVar35 = dVar39 + dVar35;
      if ((uVar17 & 1) == 0) {
        dVar35 = dVar39;
      }
    }
    else {
      dVar35 = (double)ceil(SUB84(dVar35 + -0.5,0),(int)((ulonglong)(dVar35 + -0.5) >> 0x20));
    }
  }
  else {
    uVar22 = uVar22 & 0xfffffff | (uint)(dVar39 == 0.5) << 0x1e;
    if (SUB41(uVar22 >> 0x1e,0)) {
      dVar35 = 1.0;
      goto LAB_01131668;
    }
    dVar35 = (double)floor(SUB84(dVar35 + 0.5,0),(int)((ulonglong)(dVar35 + 0.5) >> 0x20));
  }
  if (*pcVar25 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131d58 + 0x1131b80));
    *pcVar25 = '\x01';
  }
  if (*(int *)(*piVar28 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar38 = (float)VectorSignedToFloat((int)(longlong)dVar35,(byte)(uVar22 >> 0x16) & 3);
  dVar39 = (double)fStack_6c;
  dVar40 = (double)modf(SUB84(dVar39,0),(int)((ulonglong)dVar39 >> 0x20),&fStack_78);
  if (NAN(fStack_6c)) {
    uVar22 = uVar22 & 0xfffffff | (uint)(dVar40 == -0.5) << 0x1e;
    if (!SUB41(uVar22 >> 0x1e,0)) {
      dVar39 = (double)ceil(SUB84(dVar39 + -0.5,0),(int)((ulonglong)(dVar39 + -0.5) >> 0x20));
      goto LAB_01131c8c;
    }
    dVar39 = -1.0;
  }
  else {
    uVar22 = uVar22 & 0xfffffff | (uint)(dVar40 == 0.5) << 0x1e;
    if (!SUB41(uVar22 >> 0x1e,0)) {
      dVar39 = (double)floor(SUB84(dVar39 + 0.5,0),(int)((ulonglong)(dVar39 + 0.5) >> 0x20));
      goto LAB_01131c8c;
    }
    dVar39 = 1.0;
  }
  uVar17 = FUN_00f88224(fStack_78,fStack_74);
  dVar39 = (double)CONCAT44(fStack_74,fStack_78) + dVar39;
  if ((uVar17 & 1) == 0) {
    dVar39 = (double)CONCAT44(fStack_74,fStack_78);
  }
LAB_01131c8c:
  uVar22 = uVar22 & 0xfffffff | (uint)(dVar39 == _UNK_01131d30) << 0x1e;
  fVar31 = (float)VectorSignedToFloat((int)(longlong)dVar39,(byte)(uVar22 >> 0x16) & 3);
  if (dVar35 == _UNK_01131d30) {
    fVar38 = _UNK_01131d38;
  }
  if (SUB41(uVar22 >> 0x1e,0)) {
    fVar31 = _UNK_01131d38;
  }
  Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite_1121ea4
            (param_1,param_2,fVar36 + fVar2 * (fVar32 / fVar38),fVar33 + fVar7 * (fVar30 / fVar31),
             fVar36 + fVar2 * ((fVar38 - fVar4) / fVar38),
             fVar33 + fVar7 * ((fVar31 - fVar9) / fVar31),fVar34,fVar37,fVar3,fVar8,param_1[0x22]);
  return;
}

