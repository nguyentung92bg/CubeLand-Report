/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$Raycast
bool Rotatelab_Grid_GridVisibilityController__Raycast (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Ray_o ray, Rotatelab_Grid_GridRaycastHit_o* hit, bool calculateHitPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$Raycast
   bool Rotatelab_Grid_GridVisibilityController__Raycast (Rotatelab_Grid_GridVisibilityController_o*
   __this, UnityEngine_Ray_o ray, Rotatelab_Grid_GridRaycastHit_o* hit, bool calculateHitPoint,
   const MethodInfo* method); */

undefined4
Rotatelab_Grid_GridVisibilityController__Raycast_1107af8
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,float *param_8,int param_9)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  bool bVar15;
  uint in_fpscr;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  longlong lStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  uint uStack_90;
  undefined8 uStack_8c;
  uint uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  pcVar5 = (char *)(_UNK_011182e8 + 0x1117b20);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011182ec + 0x1117b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011182f0 + 0x1117b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011182f4 + 0x1117b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011182f8 + 0x1117b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011182fc + 0x1117b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118300 + 0x1117b74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118304 + 0x1117b80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118308 + 0x1117b8c));
    *pcVar5 = '\x01';
  }
  uStack_7c = 0;
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  FUN_00f88e5c(&uStack_c8,0x48);
  fStack_e4 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_e0 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  fStack_dc = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_cc = 0.0;
  fStack_d4 = 0.0;
  fStack_e8 = 0.0;
  fStack_d8 = 0.0;
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformPoint_3616aa0(&fStack_70,iVar4,param_2,param_3,param_4,0);
  fVar19 = fStack_68;
  fVar22 = fStack_6c;
  fVar24 = fStack_70;
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformDirection_36166f8
            (&fStack_70,iVar4,param_5,param_6,param_7,0);
  fVar23 = fStack_68;
  fVar21 = fStack_6c;
  fVar18 = fStack_70;
  pcVar5 = (char *)(_UNK_0111830c + 0x1117c64);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118310 + 0x1117c80));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01118314 + 0x1117c94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar17 = SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar23 * fVar23);
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar17 < _UNK_01117cd4) << 0x1f |
          (uint)(fVar17 == _UNK_01117cd4) << 0x1e;
  uVar16 = uVar8 | (uint)(NAN(fVar17) || NAN(_UNK_01117cd4)) << 0x1c;
  bVar1 = (byte)(uVar8 >> 0x18);
  fVar20 = _UNK_01117cd8;
  fVar25 = _UNK_01117cd8;
  fVar26 = _UNK_01117cd8;
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar16 >> 0x1c) & 1)) {
    fVar20 = fVar23 / fVar17;
    fVar25 = fVar21 / fVar17;
    fVar26 = fVar18 / fVar17;
  }
  uVar10 = 0;
  Unity_Collections_NativeArray_int4____ctor_2857fbc
            (&piStack_80,1,3,0,**(undefined4 **)(_UNK_01118318 + 0x1117d04));
  uStack_a8 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_90 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *piStack_80 = -1;
  piStack_80[1] = -1;
  piStack_80[2] = -1;
  piStack_80[3] = -1;
  lStack_bc = (ulonglong)uStack_a8 << 0x20;
  uStack_b0 = (ulonglong)uStack_90;
  _fStack_a4 = CONCAT44(uStack_90,uStack_b4);
  uStack_c0 = *(undefined4 *)(param_1 + 0x40);
  uStack_c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_8c = CONCAT44(uStack_b4,uStack_a8);
  fStack_9c = 0.0;
  uStack_98 = CONCAT44(uStack_b4,uStack_a8);
  uStack_84 = uStack_90;
  func_0x01133810(&fStack_70,param_1 + 0x14,0);
  fVar18 = (float)VectorSignedToFloat(fStack_70,(byte)(uVar16 >> 0x16) & 3);
  fVar21 = (float)VectorSignedToFloat(fStack_6c,(byte)(uVar16 >> 0x16) & 3);
  fVar23 = (float)VectorSignedToFloat(fStack_68,(byte)(uVar16 >> 0x16) & 3);
  Unity_Mathematics_float3__op_Implicit_3277d28
            (&fStack_70,fVar18 + -0.5,fVar21 + -0.5,fVar23 + -0.5,0);
  uStack_98 = *(undefined8 *)(param_1 + 0x2c);
  uStack_90 = *(undefined4 *)(param_1 + 0x34);
  fStack_a4 = fStack_70;
  fStack_a0 = fStack_6c;
  fStack_9c = fStack_68;
  Unity_Mathematics_float3__op_Implicit_3277d28(&uStack_f8,fVar24,fVar22,fVar19,0);
  uStack_a8 = uStack_f0;
  uStack_b0 = uStack_f8;
  Unity_Mathematics_float3__op_Implicit_3277d28(&uStack_108,fVar26,fVar25,fVar20,0);
  lStack_bc = CONCAT44(uStack_7c,piStack_80);
  uStack_8c = uStack_108;
  uVar2 = uStack_8c;
  uStack_84 = uStack_100;
  uStack_b4 = uStack_78;
  uStack_8c._0_4_ = (undefined4)uStack_108;
  uVar6 = (undefined4)uStack_8c;
  uStack_8c._4_4_ = (undefined4)((ulonglong)uStack_108 >> 0x20);
  uVar3 = uStack_8c._4_4_;
  uStack_8c = uVar2;
  Unity_Jobs_IJobExtensions__Run_RaycastJob__149ccd4
            ((undefined4)uStack_c8,uStack_c8._4_4_,uStack_c0,piStack_80,uStack_7c,uStack_78,
             (undefined4)uStack_b0,uStack_b0._4_4_,uStack_a8,fStack_a4,fStack_a0,fStack_9c,
             (undefined4)uStack_98,uStack_98._4_4_,uStack_90,uVar6,uVar3,uStack_100,
             **(undefined4 **)(_UNK_0111831c + 0x1117e44));
  iVar12 = *piStack_80;
  iVar14 = piStack_80[1];
  iVar4 = piStack_80[2];
  uVar8 = piStack_80[3];
  Unity_Collections_NativeArray_int4___Dispose_285838c
            (&piStack_80,**(undefined4 **)(_UNK_01118320 + 0x1117ef0));
  uVar6 = 0;
  if (-1 < (int)uVar8) {
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar7 = iVar7 + uVar8 * 0xc;
    uVar6 = *(undefined4 *)(iVar7 + 0x10);
    uVar10 = *(undefined4 *)(iVar7 + 0x14);
  }
  piVar9 = *(int **)(_UNK_01118324 + 0x1117f44);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
  if (iVar7 == 0) {
LAB_01117fa4:
    func_0x01133810(&fStack_70,param_1 + 0x14,0);
    fVar23 = 0.0;
    fVar11 = (float)((int)fStack_68 + iVar4);
    fVar17 = (float)((int)fStack_6c + iVar14);
    fVar13 = (float)((int)fStack_70 + iVar12);
    fStack_6c = 0.0;
    fStack_70 = 0.0;
    fVar21 = 0.0;
    fVar18 = 0.0;
    fStack_68 = 0.0;
    if (param_9 != 0) {
      fVar21 = (float)VectorSignedToFloat(fVar11,(byte)(uVar16 >> 0x16) & 3);
      pcVar5 = (char *)(_UNK_01118328 + 0x1118000);
      fVar18 = (float)VectorSignedToFloat(fVar17,(byte)(uVar16 >> 0x16) & 3);
      fVar23 = (float)VectorSignedToFloat(fVar13,(byte)(uVar16 >> 0x16) & 3);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111832c + 0x1118024));
        *pcVar5 = '\x01';
      }
      iVar4 = *(int *)(**(int **)(_UNK_01118330 + 0x1118048) + 0x5c);
      fStack_d8 = *(float *)(iVar4 + 0x10) * 0.5;
      fStack_d4 = *(float *)(iVar4 + 0x14) * 0.5;
      fStack_dc = *(float *)(iVar4 + 0xc) * 0.5;
      fStack_e8 = fVar23;
      fStack_e4 = fVar18;
      fStack_e0 = fVar21;
      fStack_70 = fVar24;
      fStack_6c = fVar22;
      fStack_68 = fVar19;
      fStack_64 = fVar26;
      fStack_60 = fVar25;
      fStack_5c = fVar20;
      iVar4 = UnityEngine_Bounds__IntersectRayAABB_35b6e50(&fStack_70,&fStack_e8,&fStack_cc,0);
      if (iVar4 == 0) {
        fStack_70 = fVar13;
        fStack_6c = fVar17;
        fStack_68 = fVar11;
        uVar6 = FUN_00ec393c(**(undefined4 **)(_UNK_01118334 + 0x111813c),&fStack_70);
        uVar6 = System_String__Format_2a0c264
                          (**(undefined4 **)(_UNK_01118338 + 0x111816c),
                           **(undefined4 **)(_UNK_0111833c + 0x1118178),uVar6,0);
        if (*(int *)(**(int **)(_UNK_01118340 + 0x111818c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogWarning_35b0090(uVar6,0);
        goto LAB_011181a8;
      }
      fVar24 = fVar24 + fVar26 * fStack_cc;
      fVar22 = fVar22 + fVar25 * fStack_cc;
      fVar19 = fVar19 + fVar20 * fStack_cc;
      fVar23 = fVar24 - fVar23;
      fVar18 = fVar22 - fVar18;
      fVar21 = fVar19 - fVar21;
      fVar20 = ABS(fVar23);
      fVar25 = ABS(fVar18);
      fVar26 = ABS(fVar21);
      bVar15 = NAN(fVar20) || NAN(fVar25);
      if (fVar20 >= fVar25) {
        bVar15 = NAN(fVar20) || NAN(fVar26);
      }
      if ((fVar20 < fVar25 || fVar20 < fVar26) == bVar15) {
        uStack_11c = 0x3f800000;
        if (fVar23 < 0.0) {
          uStack_11c = 0xbf800000;
        }
        uStack_118 = 0;
        uStack_110 = 0;
      }
      else {
        if (fVar26 <= fVar25) {
          uStack_110 = 0x3f800000;
          if (fVar18 < 0.0) {
            uStack_110 = 0xbf800000;
          }
          uStack_118 = 0;
        }
        else {
          uStack_118 = 0x3f800000;
          if (fVar21 < 0.0) {
            uStack_118 = 0xbf800000;
          }
          uStack_110 = 0;
        }
        uStack_11c = 0;
      }
      iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__TransformPoint_3616968(&fStack_70,iVar4,fVar24,fVar22,fVar19,0);
      fVar23 = fStack_68;
      fVar21 = fStack_6c;
      fVar18 = fStack_70;
      iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__TransformDirection_36162e4
                (&fStack_70,iVar4,uStack_11c,uStack_110,uStack_118,0);
    }
    param_8[5] = fVar23;
    uVar6 = 1;
    param_8[8] = fStack_68;
    *param_8 = fVar13;
    param_8[1] = fVar17;
    param_8[2] = fVar11;
    param_8[3] = fVar18;
    param_8[4] = fVar21;
    param_8[6] = fStack_70;
    param_8[7] = fStack_6c;
  }
  else {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar10,0,0);
    if (iVar7 == 0) goto LAB_01117fa4;
LAB_011181a8:
    uVar6 = 0;
    *param_8 = 0.0;
    param_8[1] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_8[2] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_8[3] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_8[4] = 0.0;
    param_8[5] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_8[6] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_8[7] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_8[8] = 0.0;
  }
  return uVar6;
}

