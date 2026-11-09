/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$Update
void Rotatelab_Grid_GridVisibilityController__Update (Rotatelab_Grid_GridVisibilityController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$Update
   void Rotatelab_Grid_GridVisibilityController__Update (Rotatelab_Grid_GridVisibilityController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Grid_GridVisibilityController__Update_1108efc(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float *pfVar17;
  char *pcVar18;
  float *pfVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint in_fpscr;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float afStack_228 [22];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  longlong lStack_e8;
  undefined4 uStack_e0;
  ulonglong uStack_dc;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [21];
  undefined4 uStack_70;
  
  pcVar18 = (char *)(_UNK_01118fd8 + 0x1118f10);
  if (*pcVar18 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118fdc + 0x1118f24));
    *pcVar18 = '\x01';
  }
  iVar11 = UnityEngine_Time__get_frameCount_35fd3d8(0);
  if (iVar11 < *(int *)(param_1 + 0x58)) {
    return;
  }
  iVar11 = UnityEngine_Time__get_frameCount_35fd3d8(0);
  puVar20 = *(undefined4 **)(_UNK_01118fe0 + 0x1118f5c);
  iVar12 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar20);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar12 + 0x11) == '\0') {
    iVar12 = 3;
  }
  else {
    iVar12 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar20);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar12,0);
    iVar12 = 1;
    if (iVar13 != 0) {
      iVar12 = 3;
    }
  }
  *(int *)(param_1 + 0x58) = iVar12 + iVar11;
  Rotatelab_Grid_GridVisibilityController__CompleteRunningJob_1108fe4
            (param_1,*(undefined4 *)(param_1 + 100));
  iVar11 = *(int *)(param_1 + 100);
  pcVar18 = (char *)(_UNK_01119a4c + 0x1119334);
  if (*pcVar18 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01119a50 + 0x1119348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01119a54 + 0x1119354));
    *pcVar18 = '\x01';
  }
  FUN_00f88e5c(&uStack_130,0x60);
  Rotatelab_Grid_GridVisibilityController__CalculateViewportRectOfGrid_1109a70
            (&fStack_d0,param_1,iVar11);
  fVar24 = fStack_c8;
  fVar2 = fStack_cc;
  fVar25 = fStack_d0;
  fStack_1a4 = afStack_c4[0];
  iVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01119a58 + 0x11193a8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  afStack_228[0] = 0.0;
  afStack_228[1] = 0.0;
  UnityEngine_Camera__ViewportToWorldPoint_35aea70(&fStack_d0,iVar11,fVar25,fVar2);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  afStack_228[0] = fStack_c8;
  afStack_228[1] = 0.0;
  UnityEngine_Transform__InverseTransformPoint_3616aa0(&fStack_d0,iVar12,fStack_d0,fStack_cc);
  fVar25 = fStack_d0;
  fStack_1a8 = fStack_cc;
  fStack_1ac = fStack_c8;
  iVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = UnityEngine_Component__get_transform_35fe190(iVar11,0);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_right_3615130(&fStack_d0,iVar13,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  afStack_228[0] = fStack_c8;
  afStack_228[1] = 0.0;
  UnityEngine_Transform__InverseTransformDirection_36166f8(&fStack_d0,iVar12,fStack_d0,fStack_cc);
  fVar8 = fStack_c8;
  fVar5 = fStack_cc;
  fVar2 = fStack_d0;
  iVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = UnityEngine_Component__get_transform_35fe190(iVar11,0);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_up_36151f0(&fStack_d0,iVar13,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  afStack_228[0] = fStack_c8;
  afStack_228[1] = 0.0;
  UnityEngine_Transform__InverseTransformDirection_36166f8(&fStack_d0,iVar12,fStack_d0,fStack_cc);
  fVar9 = fStack_c8;
  fVar6 = fStack_cc;
  fVar3 = fStack_d0;
  iVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = UnityEngine_Component__get_transform_35fe190(iVar11,0);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_forward_36152b0(&fStack_d0,iVar13,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  afStack_228[0] = fStack_c8;
  afStack_228[1] = 0.0;
  UnityEngine_Transform__InverseTransformDirection_36166f8(&fStack_d0,iVar12,fStack_d0,fStack_cc);
  fVar10 = fStack_c8;
  fVar7 = fStack_cc;
  fVar4 = fStack_d0;
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar14 = (float)UnityEngine_Camera__get_orthographicSize_35ac2b8(iVar11,0);
  iVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar12 != 0) {
    UnityEngine_Transform__get_lossyScale_3617374(&fStack_d0,iVar12,0);
    fVar31 = fStack_cc;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar15 = (float)UnityEngine_Camera__get_aspect_35ac860(iVar11,0);
    pcVar18 = (char *)(_UNK_01119a5c + 0x1119638);
    if (*pcVar18 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01119a60 + 0x111964c));
      *pcVar18 = '\x01';
    }
    fVar30 = _UNK_01119a3c;
    if (0.0 < ABS(fVar7)) {
      fVar30 = ABS(fVar7);
    }
    fVar27 = _UNK_01119a3c;
    if (0.0 < ABS(fVar10)) {
      fVar27 = ABS(fVar10);
    }
    fVar29 = _UNK_01119a3c;
    if (0.0 < ABS(fVar4)) {
      fVar29 = ABS(fVar4);
    }
    fVar23 = **(float **)(**(int **)(_UNK_01119a64 + 0x1119674) + 0x5c) * 8.0;
    fVar26 = fVar23;
    if (fVar23 < fVar27 * _UNK_01119a40) {
      fVar26 = fVar27 * _UNK_01119a40;
    }
    fVar27 = fVar23;
    if (fVar23 < fVar30 * _UNK_01119a40) {
      fVar27 = fVar30 * _UNK_01119a40;
    }
    if (fVar23 < fVar29 * _UNK_01119a40) {
      fVar23 = fVar29 * _UNK_01119a40;
    }
    fVar30 = 1.0 / fVar10;
    if (ABS(_UNK_01119a3c - fVar10) < fVar26) {
      fVar30 = _UNK_01119a44;
    }
    uVar22 = in_fpscr & 0xfffffff | (uint)(ABS(_UNK_01119a3c - fVar4) < fVar23) << 0x1f;
    fVar29 = 1.0 / fVar7;
    if (ABS(_UNK_01119a3c - fVar7) < fVar27) {
      fVar29 = _UNK_01119a44;
    }
    fVar27 = 1.0 / fVar4;
    if (SUB41(uVar22 >> 0x1f,0)) {
      fVar27 = _UNK_01119a44;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    uVar21 = iVar11 - 1;
    if (-1 < (int)uVar21) {
      iVar11 = iVar11 * 0xc;
      do {
        iVar12 = *(int *)(param_1 + 0x10);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar12 + 0xc) <= uVar21) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar16 = 1;
        if (*(int *)(iVar12 + iVar11 + 4) == 0) {
          iVar12 = *(int *)(param_1 + 0x10);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar12 + 0xc) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          uVar16 = 0;
          if (*(int *)(iVar12 + iVar11 + 8) != 0) {
            uVar16 = 1;
          }
        }
        iVar11 = iVar11 + -0xc;
        *(undefined4 *)(*(int *)(param_1 + 0x38) + uVar21 * 4) = uVar16;
        bVar1 = 0 < (int)uVar21;
        uVar21 = uVar21 - 1;
      } while (bVar1);
    }
    uStack_130 = *(undefined8 *)(param_1 + 0x38);
    uStack_128 = *(undefined4 *)(param_1 + 0x40);
    func_0x01133810(&fStack_d0,param_1 + 0x14,0);
    fVar23 = (float)VectorSignedToFloat(fStack_d0,(byte)(uVar22 >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(fStack_cc,(byte)(uVar22 >> 0x16) & 3);
    afStack_228[0] = 0.0;
    fVar28 = (float)VectorSignedToFloat(fStack_c8,(byte)(uVar22 >> 0x16) & 3);
    Unity_Mathematics_float3__op_Implicit_3277d28
              (&uStack_140,fVar23 + -0.5,fVar26 + -0.5,fVar28 + -0.5);
    uStack_118 = *(undefined8 *)(param_1 + 0x2c);
    uStack_11c = uStack_138;
    uStack_110 = *(undefined4 *)(param_1 + 0x34);
    uStack_124 = uStack_140;
    afStack_228[0] = 0.0;
    Unity_Mathematics_float3__op_Implicit_3277d28(&uStack_150,fVar4,fVar7,fVar10);
    uStack_104 = uStack_148;
    uStack_10c = uStack_150;
    afStack_228[0] = 0.0;
    Unity_Mathematics_float3__op_Implicit_3277d28(&uStack_160,fVar27,fVar29,fVar30);
    uStack_f8 = uStack_158;
    uStack_100 = uStack_160;
    afStack_228[0] = 0.0;
    Unity_Mathematics_float3__op_Implicit_3277d28(&uStack_170,fVar25,fStack_1a8,fStack_1ac);
    uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    lStack_e8 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
    uStack_dc = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_d4 = 0;
    uStack_ec = uStack_168;
    uStack_f4 = uStack_170;
    if (*(int *)(**(int **)(_UNK_01119a68 + 0x11198f0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar25 = _UNK_01119a48;
    afStack_228[0] = 0.0;
    fVar31 = (fVar14 + fVar14) / fVar31;
    fVar24 = (fVar24 * fVar31 * fVar15) / _UNK_01119a48;
    Unity_Mathematics_float3__op_Implicit_3277d28
              (&uStack_180,fVar2 * fVar24,fVar5 * fVar24,fVar8 * fVar24);
    uStack_e0 = uStack_178;
    lStack_e8 = uStack_180;
    afStack_228[0] = 0.0;
    fVar25 = (fStack_1a4 * fVar31) / fVar25;
    Unity_Mathematics_float3__op_Implicit_3277d28
              (&uStack_190,fVar3 * fVar25,fVar6 * fVar25,fVar9 * fVar25);
    uStack_d4 = uStack_188;
    uStack_dc = uStack_190;
    uVar16 = **(undefined4 **)(_UNK_01119a6c + 0x11199b0);
    thunk_FUN_00f95db8(&fStack_d0,&uStack_130,0x60);
    uStack_70 = 0x96;
    uStack_1cc = 10;
    iVar11 = 0x58;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1d0 = 0x57e4;
    pfVar17 = afStack_c4;
    pfVar19 = afStack_228;
    uStack_1b8 = uVar16;
    do {
      iVar11 = iVar11 + -4;
      *pfVar19 = *pfVar17;
      pfVar17 = pfVar17 + 1;
      pfVar19 = pfVar19 + 1;
    } while (iVar11 != 0);
    Unity_Jobs_IJobParallelForExtensions__Schedule_FindVisibleGridCellsJob__14a30bc
              (&uStack_1a0,fStack_d0,fStack_cc,fStack_c8);
    *(undefined4 *)(param_1 + 0x48) = uStack_1a0;
    *(undefined4 *)(param_1 + 0x4c) = uStack_19c;
    *(undefined4 *)(param_1 + 0x50) = uStack_198;
    *(undefined4 *)(param_1 + 0x54) = uStack_194;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

