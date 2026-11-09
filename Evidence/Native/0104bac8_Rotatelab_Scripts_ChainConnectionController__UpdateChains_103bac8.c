/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$UpdateChains
void Rotatelab_Scripts_ChainConnectionController__UpdateChains (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$UpdateChains
   void Rotatelab_Scripts_ChainConnectionController__UpdateChains
   (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ChainConnectionController__UpdateChains_103bac8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int *piVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  
  pcVar11 = (char *)(_UNK_0104c188 + 0x104bae8);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c18c + 0x104bafc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c190 + 0x104bb08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c194 + 0x104bb14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c198 + 0x104bb20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c19c + 0x104bb2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1a0 + 0x104bb38));
    *pcVar11 = '\x01';
  }
  piVar19 = *(int **)(_UNK_0104c1a4 + 0x104bb4c);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(*piVar19 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Equality_36033f4(uVar12,0,0);
  if (iVar4 == 0) {
    uVar12 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(*piVar19 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Equality_36033f4(uVar12,0,0);
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x41) == '\0') {
        if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&fStack_88,*(int *)(param_1 + 0x1c),0);
        fVar2 = fStack_80;
        fVar1 = fStack_84;
        fVar9 = fStack_88;
        if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&fStack_88,*(int *)(param_1 + 0x3c),0);
        fVar23 = fStack_80;
        fVar5 = fStack_84;
        fVar3 = fStack_88;
        pcVar11 = (char *)(_UNK_0104c1a8 + 0x104bf10);
        if (*pcVar11 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1ac + 0x104bf2c));
          *pcVar11 = '\x01';
        }
        piVar14 = *(int **)(_UNK_0104c1b0 + 0x104bf40);
        if (*(int *)(*piVar14 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar22 = *(float *)(param_1 + 0x20);
        pcVar11 = (char *)(_UNK_0104c1b4 + 0x104bf6c);
        if (*pcVar11 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1b8 + 0x104bf90));
          *pcVar11 = '\x01';
        }
        if (*(int *)(*piVar14 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar9 = (float)FUN_01f4f1b4(SQRT((fVar1 - fVar5) * (fVar1 - fVar5) +
                                         (fVar9 - fVar3) * (fVar9 - fVar3) +
                                         (fVar2 - fVar23) * (fVar2 - fVar23)) / fVar22);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 == _UNK_0104c184) << 0x1e;
        iVar4 = (int)fVar9;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          iVar4 = -0x80000000;
        }
        while( true ) {
          if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (iVar4 <= *(int *)(*(int *)(param_1 + 0x44) + 0xc)) break;
          uVar12 = *(undefined4 *)(param_1 + 0x10);
          uVar15 = *(undefined4 *)(param_1 + 0x1c);
          if (*(int *)(*piVar19 + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar12 = UnityEngine_Object__Instantiate_object__14d4dd0
                             (uVar12,uVar15,**(undefined4 **)(_UNK_0104c1bc + 0x104c01c));
          iVar6 = *(int *)(param_1 + 0x44);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar17 = *(int *)(iVar6 + 8);
          uVar16 = *(uint *)(iVar6 + 0xc);
          piVar19 = *(int **)(_UNK_0104c1c0 + 0x104c058);
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar16 < *(uint *)(iVar17 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar16 + 1;
            puVar10 = (undefined4 *)(iVar17 + uVar16 * 4 + 0x10);
            *puVar10 = uVar12;
            thunk_FUN_00ec5080(puVar10,uVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar6,uVar12,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
          }
          piVar19 = *(int **)(_UNK_0104c1c4 + 0x104c0b0);
        }
        puVar18 = *(undefined4 **)(_UNK_0104c1c8 + 0x104c0c0);
        puVar10 = *(undefined4 **)(_UNK_0104c1cc + 0x104c0c8);
        while( true ) {
          if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(param_1 + 0x44) + 0xc) <= iVar4) break;
          iVar6 = *(int *)(param_1 + 0x44);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar17 = *(int *)(iVar6 + 0xc) + -1;
          iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar17,*puVar18);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar12 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
          if (*(int *)(*piVar19 + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Object__Destroy_3609820(uVar12,0);
          if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___RemoveAt_267f3f8
                    (*(int *)(param_1 + 0x44),iVar17,*puVar10);
        }
      }
      fVar5 = (float)Rotatelab_Scripts_ChainConnectionController__ComputeSwingOffsetY_103c1e8
                               (param_1);
      fVar3 = _UNK_0104beb0;
      fVar2 = _UNK_0104beac;
      fVar1 = _UNK_0104bea8;
      fVar9 = _UNK_0104bea4;
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar16 = *(uint *)(*(int *)(param_1 + 0x44) + 0xc);
      if ((int)uVar16 < 2) {
        if (uVar16 != 1) {
          return;
        }
        fVar22 = 1.0;
        fVar23 = _UNK_0104bea8;
      }
      else {
        fVar22 = (float)VectorSignedToFloat(uVar16 - 1,(byte)(in_fpscr >> 0x16) & 3);
        fVar23 = (*(float *)(param_1 + 0x34) * _UNK_0104bea4) / fVar22;
      }
      uVar13 = 0;
      puVar10 = *(undefined4 **)(_UNK_0104c1d0 + 0x104bc2c);
      do {
        if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x44),uVar13,*puVar10);
        if (*(int *)(*piVar19 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Equality_36033f4(iVar4,0,0);
        if (iVar6 == 0) {
          fVar24 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
          fVar20 = (fVar24 * fVar9) / fVar22;
          fVar7 = (float)FUN_01f4f240(fVar20);
          fVar8 = fVar1;
          if (1 < (int)uVar16) {
            fVar8 = fVar7;
          }
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = UnityEngine_Component__get_transform_35fe190(iVar4,0);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localPosition_3613c6c
                    (iVar6,0,fVar5 * fVar8,
                     *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x20) * fVar24,0);
          fVar8 = (float)cosf(fVar20);
          fStack_70 = *(float *)(param_1 + 0x20);
          uStack_78 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          fStack_74 = fVar23 * fVar5 * fVar8;
          if (*(char *)(_UNK_0104c1d4 + 0x104bd28) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0104c1d8 + 0x104bd54));
            *(undefined1 *)(_UNK_0104c1dc + 0x104bd64) = 1;
          }
          iVar6 = *(int *)(**(int **)(_UNK_0104c1e0 + 0x104bd84) + 0x5c);
          uStack_98 = *(undefined8 *)(iVar6 + 0x18);
          uStack_90 = *(undefined4 *)(iVar6 + 0x20);
          UnityEngine_Quaternion__Internal_LookRotation_35ee358(&fStack_88,&uStack_78,&uStack_98,0);
          fVar24 = fStack_7c;
          fVar20 = fStack_80;
          fVar7 = fStack_84;
          fVar8 = fStack_88;
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = UnityEngine_Component__get_transform_35fe190(iVar4,0);
          fStack_74 = 0.0;
          fVar21 = (float)VectorSignedToFloat(uVar13 & 1,(byte)(in_fpscr >> 0x16) & 3);
          uStack_78 = 0;
          fStack_70 = fVar21 * fVar2 * fVar3;
          UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&fStack_88,&uStack_78,0);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localRotation_361507c
                    (iVar4,(fVar8 * fStack_7c + fVar24 * fStack_88 + fVar7 * fStack_80) -
                           fVar20 * fStack_84,
                     (fVar7 * fStack_7c + fVar24 * fStack_84 + fVar20 * fStack_88) -
                     fVar8 * fStack_80,
                     (fVar20 * fStack_7c + fVar24 * fStack_80 + fVar8 * fStack_84) -
                     fVar7 * fStack_88,
                     ((fVar24 * fStack_7c - fVar8 * fStack_88) - fVar7 * fStack_84) -
                     fVar20 * fStack_80,0);
          piVar19 = *(int **)(_UNK_0104c1e4 + 0x104be8c);
        }
        uVar13 = uVar13 + 1;
      } while (uVar16 != uVar13);
    }
  }
  return;
}

