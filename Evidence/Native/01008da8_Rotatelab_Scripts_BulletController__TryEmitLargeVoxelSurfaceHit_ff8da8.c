/* IL2CPP: Rotatelab.Scripts.BulletController$$TryEmitLargeVoxelSurfaceHit
void Rotatelab_Scripts_BulletController__TryEmitLargeVoxelSurfaceHit (Rotatelab_Scripts_BulletController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletController$$TryEmitLargeVoxelSurfaceHit
   void Rotatelab_Scripts_BulletController__TryEmitLargeVoxelSurfaceHit
   (Rotatelab_Scripts_BulletController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BulletController__TryEmitLargeVoxelSurfaceHit_ff8da8(int param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  undefined8 uStack_78;
  float fStack_70;
  
  pcVar10 = (char *)(_UNK_0100940c + 0x1008dc8);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009410 + 0x1008ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009414 + 0x1008de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009418 + 0x1008df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100941c + 0x1008e00));
    *pcVar10 = '\x01';
  }
  uStack_78 = 0;
  fStack_70 = 0.0;
  afStack_84[2] = 0.0;
  afStack_84[1] = 0.0;
  afStack_84[0] = 0.0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar11 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(**(int **)(_UNK_01009420 + 0x1008e3c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Equality_36033f4(uVar11,0,0);
    if (iVar6 == 0) {
      iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01009424 + 0x1008e74));
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = *(int *)(iVar6 + 0x50);
      iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&fStack_90,iVar6,0);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__InverseTransformPoint_3616aa0
                (&fStack_90,iVar13,fStack_90,fStack_8c,fStack_88,0);
      fVar27 = fStack_88;
      fVar25 = fStack_8c;
      fVar24 = fStack_90;
      func_0x01011de0(&fStack_90,fStack_90,fStack_8c,fStack_88,0);
      fVar20 = *(float *)(param_1 + 0x44);
      fVar22 = *(float *)(param_1 + 0x48);
      fVar23 = *(float *)(param_1 + 0x4c);
      uStack_78._0_4_ = fStack_90;
      uStack_78._4_4_ = fStack_8c;
      puVar7 = *(undefined4 **)(_UNK_01009428 + 0x1008f30);
      *(float *)(param_1 + 0x44) = fVar24;
      *(float *)(param_1 + 0x48) = fVar25;
      uVar11 = *puVar7;
      *(float *)(param_1 + 0x4c) = fVar27;
      fStack_70 = fStack_88;
      iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar11);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = Rotatelab_Grid_GridManager__GetGridCellContent_object__1492b18
                        (iVar6,(float)uStack_78,uStack_78._4_4_,fStack_70,
                         **(undefined4 **)(_UNK_0100942c + 0x1008f78));
      if (iVar6 == *(int *)(param_1 + 0x38)) {
        pcVar10 = (char *)(_UNK_01009430 + 0x1008fac);
        fVar27 = fVar27 - fVar23;
        *(undefined1 *)(param_1 + 0x40) = 1;
        fVar25 = fVar25 - fVar22;
        fVar24 = fVar24 - fVar20;
        if (*pcVar10 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01009434 + 0x1008fd0));
          *pcVar10 = '\x01';
        }
        fVar5 = _UNK_010093c4;
        fVar4 = _UNK_010093c0;
        fVar29 = 0.5;
        piVar15 = *(int **)(_UNK_01009438 + 0x1008ff8);
        iVar6 = 0;
        fVar30 = 0.5;
        fVar21 = 0.5;
        puVar7 = *(undefined4 **)(*piVar15 + 0x5c);
        afStack_84[2] = (float)*puVar7;
        afStack_84[1] = (float)puVar7[1];
        afStack_84[0] = (float)puVar7[2];
        pcVar12 = (char *)(_UNK_0100943c + 0x100903c);
        if (0.0 < fVar24) {
          fVar30 = -0.5;
        }
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar27 < 0.0) << 0x1f | (uint)(fVar27 == 0.0) << 0x1e;
        uVar16 = uVar2 | (uint)NAN(fVar27) << 0x1c;
        piVar14 = *(int **)(_UNK_01009440 + 0x100904c);
        if (0.0 < fVar25) {
          fVar21 = -0.5;
        }
        bVar3 = (byte)(uVar2 >> 0x18);
        fVar26 = _UNK_010093c0;
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar16 >> 0x1c) & 1)) {
          fVar29 = -0.5;
        }
        do {
          fVar28 = fVar24;
          if (((iVar6 != 0) && (fVar28 = fVar27, iVar6 != 2)) && (fVar28 = fVar25, iVar6 != 1)) {
LAB_01009374:
            thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01009444 + 0x1009380));
            uVar9 = thunk_FUN_00f00cdc();
            uVar11 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01009448 + 0x1009394));
            System_IndexOutOfRangeException___ctor_2b69538(uVar9,uVar11,0);
            uVar11 = *(undefined4 *)(_UNK_0100944c + 0x10093b0);
LAB_010093ac:
            uVar11 = thunk_FUN_00f23fd0(uVar11);
            func_0x00ec3920(uVar9,uVar11);
                    /* WARNING: Subroutine does not return */
            FUN_00ec3760();
          }
          if (*pcVar12 == '\0') {
            FUN_00ec37c0(piVar14);
            *pcVar12 = '\x01';
          }
          fVar19 = fVar4;
          if (0.0 < ABS(fVar28)) {
            fVar19 = ABS(fVar28);
          }
          fVar17 = **(float **)(*piVar14 + 0x5c) * 8.0;
          if (fVar17 < fVar19 * fVar5) {
            fVar17 = fVar19 * fVar5;
          }
          uVar16 = uVar16 & 0xfffffff | (uint)(ABS(fVar4 - fVar28) < fVar17) << 0x1f;
          if (!SUB41(uVar16 >> 0x1f,0)) {
            fVar28 = fVar30;
            fVar19 = fVar20;
            fVar17 = fVar24;
            if (((iVar6 != 0) && (fVar28 = fVar21, fVar19 = fVar22, fVar17 = fVar25, iVar6 != 1)) &&
               (fVar28 = fVar29, fVar19 = fVar23, fVar17 = fVar27, iVar6 != 2)) goto LAB_01009374;
            uVar11 = func_0x010120c4(&uStack_78,iVar6,0);
            fVar18 = (float)VectorSignedToFloat(uVar11,(byte)(uVar16 >> 0x16) & 3);
            fVar17 = ((fVar28 + fVar18) - fVar19) / fVar17;
            uVar16 = uVar16 & 0xfffffff | (uint)(fVar17 == fVar26) << 0x1e |
                     (uint)(fVar26 <= fVar17) << 0x1d;
            bVar3 = (byte)(uVar16 >> 0x18);
            if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
              if (*pcVar10 == '\0') {
                FUN_00ec37c0(piVar15);
                *pcVar10 = '\x01';
              }
              puVar7 = *(undefined4 **)(*piVar15 + 0x5c);
              afStack_84[2] = (float)*puVar7;
              afStack_84[1] = (float)puVar7[1];
              afStack_84[0] = (float)puVar7[2];
              if (iVar6 == 0) {
                pfVar8 = afStack_84 + 2;
              }
              else if (iVar6 == 2) {
                pfVar8 = afStack_84;
              }
              else {
                if (iVar6 != 1) {
                  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01009450 + 0x10093d4));
                  uVar9 = thunk_FUN_00f00cdc();
                  uVar11 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01009454 + 0x10093e8));
                  System_IndexOutOfRangeException___ctor_2b69538(uVar9,uVar11,0);
                  uVar11 = *(undefined4 *)(&UNK_01009404 + _UNK_01009458);
                  goto LAB_010093ac;
                }
                pfVar8 = afStack_84 + 1;
              }
              *pfVar8 = fVar28 + fVar28;
              fVar26 = fVar17;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
        bVar1 = fVar26 < 0.0;
        if (1.0 < fVar26) {
          fVar26 = 1.0;
        }
        if (bVar1) {
          fVar26 = _UNK_01009404;
        }
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__TransformPoint_3616968
                  (&fStack_90,iVar13,fVar20 + fVar24 * fVar26,fVar22 + fVar25 * fVar26,
                   fVar23 + fVar27 * fVar26,0);
        fVar27 = fStack_88;
        fVar25 = fStack_8c;
        fVar24 = fStack_90;
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__TransformDirection_36162e4
                  (&fStack_90,iVar13,afStack_84[2],afStack_84[1],afStack_84[0],0);
        pcVar10 = (char *)(_UNK_0100945c + 0x1009274);
        if (*pcVar10 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01009460 + 0x1009290));
          *pcVar10 = '\x01';
        }
        pcVar10 = (char *)(_UNK_01009464 + 0x10092a4);
        if (*pcVar10 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01009468 + 0x10092b8));
          *pcVar10 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_0100946c + 0x10092cc) + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar20 = SQRT(fStack_8c * fStack_8c + fStack_90 * fStack_90 + fStack_88 * fStack_88);
        if (fVar20 <= _UNK_01009408) {
          pfVar8 = *(float **)(*piVar15 + 0x5c);
          fStack_90 = *pfVar8;
          fStack_8c = pfVar8[1];
          fStack_88 = pfVar8[2];
        }
        else {
          fStack_88 = fStack_88 / fVar20;
          fStack_8c = fStack_8c / fVar20;
          fStack_90 = fStack_90 / fVar20;
        }
        if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_LargeVoxelController__EmitHitParticle_10147a4
                  (*(int *)(param_1 + 0x3c),fVar24,fVar25,fVar27,fStack_90,fStack_8c,fStack_88,0);
      }
    }
  }
  return;
}

