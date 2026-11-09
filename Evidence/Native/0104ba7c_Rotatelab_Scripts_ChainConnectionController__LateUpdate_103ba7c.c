/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$LateUpdate
void Rotatelab_Scripts_ChainConnectionController__LateUpdate (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$LateUpdate
   void Rotatelab_Scripts_ChainConnectionController__LateUpdate
   (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ChainConnectionController__LateUpdate_103ba7c(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  int *piVar20;
  bool bVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__LookAt_36163c0(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c),0);
  bVar21 = *(char *)(param_1 + 0x40) != '\0';
  cVar1 = '\0';
  if (bVar21) {
    cVar1 = *(char *)(param_1 + 0x42);
  }
  if (!bVar21 || cVar1 == '\0') {
    return;
  }
  pcVar12 = (char *)(_UNK_0104c188 + 0x104bae8);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c18c + 0x104bafc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c190 + 0x104bb08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c194 + 0x104bb14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c198 + 0x104bb20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c19c + 0x104bb2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1a0 + 0x104bb38));
    *pcVar12 = '\x01';
  }
  piVar20 = *(int **)(_UNK_0104c1a4 + 0x104bb4c);
  uVar13 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(*piVar20 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar13,0,0);
  if (iVar5 == 0) {
    uVar13 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(*piVar20 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar13,0,0);
    if (iVar5 == 0) {
      if (*(char *)(param_1 + 0x41) == '\0') {
        if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&fStack_88,*(int *)(param_1 + 0x1c),0);
        fVar3 = fStack_80;
        fVar2 = fStack_84;
        fVar10 = fStack_88;
        if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&fStack_88,*(int *)(param_1 + 0x3c),0);
        fVar25 = fStack_80;
        fVar6 = fStack_84;
        fVar4 = fStack_88;
        pcVar12 = (char *)(_UNK_0104c1a8 + 0x104bf10);
        if (*pcVar12 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1ac + 0x104bf2c));
          *pcVar12 = '\x01';
        }
        piVar15 = *(int **)(_UNK_0104c1b0 + 0x104bf40);
        if (*(int *)(*piVar15 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar24 = *(float *)(param_1 + 0x20);
        pcVar12 = (char *)(_UNK_0104c1b4 + 0x104bf6c);
        if (*pcVar12 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1b8 + 0x104bf90));
          *pcVar12 = '\x01';
        }
        if (*(int *)(*piVar15 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar10 = (float)FUN_01f4f1b4(SQRT((fVar2 - fVar6) * (fVar2 - fVar6) +
                                          (fVar10 - fVar4) * (fVar10 - fVar4) +
                                          (fVar3 - fVar25) * (fVar3 - fVar25)) / fVar24);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 == _UNK_0104c184) << 0x1e;
        iVar5 = (int)fVar10;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          iVar5 = -0x80000000;
        }
        while( true ) {
          if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (iVar5 <= *(int *)(*(int *)(param_1 + 0x44) + 0xc)) break;
          uVar13 = *(undefined4 *)(param_1 + 0x10);
          uVar16 = *(undefined4 *)(param_1 + 0x1c);
          if (*(int *)(*piVar20 + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar13 = UnityEngine_Object__Instantiate_object__14d4dd0
                             (uVar13,uVar16,**(undefined4 **)(_UNK_0104c1bc + 0x104c01c));
          iVar7 = *(int *)(param_1 + 0x44);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar18 = *(int *)(iVar7 + 8);
          uVar17 = *(uint *)(iVar7 + 0xc);
          piVar20 = *(int **)(_UNK_0104c1c0 + 0x104c058);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar17 < *(uint *)(iVar18 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar17 + 1;
            puVar11 = (undefined4 *)(iVar18 + uVar17 * 4 + 0x10);
            *puVar11 = uVar13;
            thunk_FUN_00ec5080(puVar11,uVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar7,uVar13,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar20 + 0x10) + 0x60) + 0x38));
          }
          piVar20 = *(int **)(_UNK_0104c1c4 + 0x104c0b0);
        }
        puVar19 = *(undefined4 **)(_UNK_0104c1c8 + 0x104c0c0);
        puVar11 = *(undefined4 **)(_UNK_0104c1cc + 0x104c0c8);
        while( true ) {
          if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(param_1 + 0x44) + 0xc) <= iVar5) break;
          iVar7 = *(int *)(param_1 + 0x44);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar18 = *(int *)(iVar7 + 0xc) + -1;
          iVar7 = System_Collections_Generic_List_object___get_Item_267d814(iVar7,iVar18,*puVar19);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar13 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
          if (*(int *)(*piVar20 + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Object__Destroy_3609820(uVar13,0);
          if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___RemoveAt_267f3f8
                    (*(int *)(param_1 + 0x44),iVar18,*puVar11);
        }
      }
      fVar6 = (float)Rotatelab_Scripts_ChainConnectionController__ComputeSwingOffsetY_103c1e8
                               (param_1);
      fVar4 = _UNK_0104beb0;
      fVar3 = _UNK_0104beac;
      fVar2 = _UNK_0104bea8;
      fVar10 = _UNK_0104bea4;
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar17 = *(uint *)(*(int *)(param_1 + 0x44) + 0xc);
      if ((int)uVar17 < 2) {
        if (uVar17 != 1) {
          return;
        }
        fVar24 = 1.0;
        fVar25 = _UNK_0104bea8;
      }
      else {
        fVar24 = (float)VectorSignedToFloat(uVar17 - 1,(byte)(in_fpscr >> 0x16) & 3);
        fVar25 = (*(float *)(param_1 + 0x34) * _UNK_0104bea4) / fVar24;
      }
      uVar14 = 0;
      puVar11 = *(undefined4 **)(_UNK_0104c1d0 + 0x104bc2c);
      do {
        if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x44),uVar14,*puVar11);
        if (*(int *)(*piVar20 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar7 = UnityEngine_Object__op_Equality_36033f4(iVar5,0,0);
        if (iVar7 == 0) {
          fVar26 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = (fVar26 * fVar10) / fVar24;
          fVar8 = (float)FUN_01f4f240(fVar22);
          fVar9 = fVar2;
          if (1 < (int)uVar17) {
            fVar9 = fVar8;
          }
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar7 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localPosition_3613c6c
                    (iVar7,0,fVar6 * fVar9,
                     *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x20) * fVar26,0);
          fVar9 = (float)cosf(fVar22);
          fStack_70 = *(float *)(param_1 + 0x20);
          uStack_78 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          fStack_74 = fVar25 * fVar6 * fVar9;
          if (*(char *)(_UNK_0104c1d4 + 0x104bd28) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1d8 + 0x104bd54));
            *(undefined1 *)(_UNK_0104c1dc + 0x104bd64) = 1;
          }
          iVar7 = *(int *)(**(int **)(_UNK_0104c1e0 + 0x104bd84) + 0x5c);
          uStack_98 = *(undefined8 *)(iVar7 + 0x18);
          uStack_90 = *(undefined4 *)(iVar7 + 0x20);
          UnityEngine_Quaternion__Internal_LookRotation_35ee358(&fStack_88,&uStack_78,&uStack_98,0);
          fVar26 = fStack_7c;
          fVar22 = fStack_80;
          fVar8 = fStack_84;
          fVar9 = fStack_88;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar5 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
          fStack_74 = 0.0;
          fVar23 = (float)VectorSignedToFloat(uVar14 & 1,(byte)(in_fpscr >> 0x16) & 3);
          uStack_78 = 0;
          fStack_70 = fVar23 * fVar3 * fVar4;
          UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&fStack_88,&uStack_78,0);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localRotation_361507c
                    (iVar5,(fVar9 * fStack_7c + fVar26 * fStack_88 + fVar8 * fStack_80) -
                           fVar22 * fStack_84,
                     (fVar8 * fStack_7c + fVar26 * fStack_84 + fVar22 * fStack_88) -
                     fVar9 * fStack_80,
                     (fVar22 * fStack_7c + fVar26 * fStack_80 + fVar9 * fStack_84) -
                     fVar8 * fStack_88,
                     ((fVar26 * fStack_7c - fVar9 * fStack_88) - fVar8 * fStack_84) -
                     fVar22 * fStack_80,0);
          piVar20 = *(int **)(_UNK_0104c1e4 + 0x104be8c);
        }
        uVar14 = uVar14 + 1;
      } while (uVar17 != uVar14);
    }
  }
  return;
}

