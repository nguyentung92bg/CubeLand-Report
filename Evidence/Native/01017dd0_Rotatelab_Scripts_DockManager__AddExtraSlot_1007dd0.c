/* IL2CPP: Rotatelab.Scripts.DockManager$$AddExtraSlot
void Rotatelab_Scripts_DockManager__AddExtraSlot (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$AddExtraSlot
   void Rotatelab_Scripts_DockManager__AddExtraSlot (Rotatelab_Scripts_DockManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__AddExtraSlot_1007dd0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float *pfStack_98;
  int *piStack_94;
  int iStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  int iStack_54;
  
  pcVar5 = (char *)(_UNK_0101858c + 0x1017df0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018590 + 0x1017e04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018594 + 0x1017e10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018598 + 0x1017e1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101859c + 0x1017e28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010185a0 + 0x1017e34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010185a4 + 0x1017e40));
    *pcVar5 = '\x01';
  }
  fStack_64 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_60 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar11 = (int *)(param_1 + 0x44);
  iStack_54 = *piVar11;
  fStack_68 = 0.0;
  *(undefined1 *)(param_1 + 0x65) = 1;
  if (iStack_54 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Array__Resize_object__138a144
            (&iStack_54,*(int *)(iStack_54 + 0xc) + 1,**(undefined4 **)(_UNK_010185a8 + 0x1017e88));
  *(int *)(param_1 + 0x44) = iStack_54;
  thunk_FUN_00ec5080(piVar11);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_010185ac + 0x1017eb4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar17 = UnityEngine_Object__Instantiate_object__14d4e4c
                     (uVar9,uVar6,0,**(undefined4 **)(_UNK_010185b0 + 0x1017edc));
  iVar8 = (int)uVar17;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterDockController__Init_10057a8(iVar8,(int)((ulonglong)uVar17 >> 0x20),1,0);
  piVar10 = (int *)*piVar11;
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar8 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar10 + 0x20)), iVar3 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  iVar3 = piVar10[3];
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar10[iVar3 + 3] = iVar8;
  thunk_FUN_00ec5080(piVar10 + iVar3 + 3,iVar8);
  iVar3 = *(int *)(param_1 + 0x50);
  iStack_90 = param_1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar3 + 8);
  uVar12 = *(uint *)(iVar3 + 0xc);
  piVar10 = *(int **)(_UNK_010185b4 + 0x1017f9c);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar12 + 1;
    piVar10 = (int *)(iVar7 + uVar12 * 4 + 0x10);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,iVar8,*(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
  }
  uVar12 = 0;
  piStack_94 = piVar11;
  while( true ) {
    piVar11 = piStack_94;
    if (*piStack_94 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piStack_94 + 0xc) <= (int)uVar12) {
      fStack_c8 = 0.0;
      PrimeTween_Sequence__Create_2cef1e0(&fStack_80,1,0,1,0,0);
      fVar2 = _UNK_01018588;
      fVar1 = _UNK_01018584;
      iVar8 = 4;
      fStack_68 = fStack_80;
      fStack_64 = fStack_7c;
      fStack_60 = fStack_78;
      uStack_5c = uStack_74;
      pfStack_98 = &fStack_78;
      do {
        if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar12 = iVar8 - 4;
        if (*(int *)(*piVar11 + 0xc) <= (int)uVar12) {
          return;
        }
        iVar3 = *piVar11;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar3 = *(int *)(iVar3 + iVar8 * 4);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_localPosition_3613b6c(&fStack_80,iVar3,0);
        fStack_88 = fStack_80;
        fStack_84 = fStack_7c;
        fStack_8c = fStack_78;
        if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *piVar11;
        if ((int)uVar12 < *(int *)(*piVar11 + 0xc) + -1) {
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar3 = *(int *)(iVar3 + iVar8 * 4);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localPosition_3613c6c
                    (iVar3,fStack_88 + *(float *)(iStack_90 + 0x1c) * 0.5,fStack_84 + fVar1,
                     fStack_8c + fVar1,0);
          iVar3 = *piVar11;
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar3 = *(int *)(iVar3 + iVar8 * 4);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar6 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
          if (*(int *)(**(int **)(_UNK_010185bc + 0x1018328) + 0x74) == 0) {
            FUN_00ec3934();
          }
          fStack_c8 = 0.0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          fStack_c4 = 0.0;
          fStack_c0 = 0.0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 1;
          PrimeTween_Tween__LocalPosition_2ce550c
                    (&fStack_80,uVar6,fStack_88,fStack_84,fStack_8c,0x3e800000);
          fVar14 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
          fStack_c8 = *pfStack_98;
          fStack_c4 = pfStack_98[1];
          fStack_c0 = 0.0;
          PrimeTween_Sequence__Insert_2cef8b0
                    (&fStack_80,&fStack_68,fVar14 * fVar2 + 0.5,&fStack_c8,fStack_80,fStack_7c);
        }
        else {
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar3 = *(int *)(iVar3 + iVar8 * 4);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localPosition_3613c6c
                    (iVar3,fStack_88 + 3.0,fStack_84 + fVar1,fStack_8c + fVar1,0);
          iVar3 = *piVar11;
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar3 = *(int *)(iVar3 + iVar8 * 4);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
          PrimeTween_Easing__Bounce_2ce2fa4(&fStack_80,0x3e4ccccd,0);
          uVar9 = uStack_70;
          uVar6 = uStack_74;
          fVar13 = fStack_78;
          fVar16 = fStack_7c;
          fVar14 = fStack_80;
          if (*(int *)(**(int **)(_UNK_010185c0 + 0x10184b0) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          fStack_c8 = fVar14;
          uStack_b8 = uVar9;
          fStack_c0 = fVar13;
          fStack_c4 = fVar16;
          uStack_bc = uVar6;
          uStack_b4 = 1;
          PrimeTween_Tween__LocalPosition_2ce550c
                    (&fStack_80,uVar4,fStack_88,fStack_84,fStack_8c,0x3f200000);
          fVar14 = (float)VectorSignedToFloat(iVar8 + -5,(byte)(in_fpscr >> 0x16) & 3);
          fStack_c8 = *pfStack_98;
          fStack_c4 = pfStack_98[1];
          fStack_c0 = 0.0;
          PrimeTween_Sequence__Insert_2cef8b0
                    (&fStack_80,&fStack_68,fVar14 * fVar2 + 0.5,&fStack_c8,fStack_80,fStack_7c);
          piVar11 = piStack_94;
        }
        iVar8 = iVar8 + 1;
      } while( true );
    }
    iVar8 = *piStack_94;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *(int *)(iVar8 + uVar12 * 4 + 0x10);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = UnityEngine_Component__get_transform_35fe190(iVar8,0);
    if (*(int *)(iStack_90 + 0x18) == 0) break;
    UnityEngine_Transform__get_localPosition_3613b6c(&fStack_80,*(int *)(iStack_90 + 0x18),0);
    fVar14 = fStack_78;
    fVar2 = fStack_7c;
    fVar1 = fStack_80;
    iVar3 = *piStack_94;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar16 = *(float *)(iStack_90 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010185b8 + 0x10180b0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar15 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0xc) + -1,(byte)(in_fpscr >> 0x16) & 3);
    Rotatelab_Extensions__WithX_fc17b4
              (&fStack_80,fVar1,fVar2,fVar14,fVar16 * fVar13 * -0.5 + fVar16 * fVar15,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localPosition_3613c6c(iVar8,fStack_80,fStack_7c,fStack_78,0);
    uVar12 = uVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

