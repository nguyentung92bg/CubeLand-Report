/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$FanTriangulate
void Rotatelab_Scripts_RoundedMeshGenerator__FanTriangulate (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o* target, System_Int32_array* poly, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$FanTriangulate
   void Rotatelab_Scripts_RoundedMeshGenerator__FanTriangulate
   (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o*
   target, System_Int32_array* poly, int32_t count, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__FanTriangulate_1022308
               (int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar13 = (char *)(_UNK_0103266c + 0x1032334);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032670 + 0x1032348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032674 + 0x1032354));
    *pcVar13 = '\x01';
  }
  fVar1 = _UNK_01032668;
  if (2 < param_4) {
    uVar18 = 0;
    do {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(uint *)(param_3 + 0xc);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar14 = *(int *)(param_3 + 0x10);
      uVar19 = uVar18 + 1;
      if (uVar9 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar15 = param_3 + uVar18 * 4;
      iVar12 = *(int *)(iVar15 + 0x14);
      if (uVar9 <= uVar18 + 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar15 = *(int *)(iVar15 + 0x18);
      puVar16 = *(undefined4 **)(_UNK_01032678 + 0x10323e4);
      if ((iVar14 != iVar15) && (iVar14 != iVar12 && iVar12 != iVar15)) {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                  (&fStack_74,param_1,iVar12,*puVar16);
        fVar22 = fStack_6c;
        fVar4 = fStack_70;
        fVar20 = fStack_74;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                  (&fStack_74,param_1,iVar14,*puVar16);
        fVar7 = fStack_6c;
        fVar5 = fStack_70;
        fVar2 = fStack_74;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                  (&fStack_74,param_1,iVar15,*puVar16);
        fVar8 = fStack_6c;
        fVar6 = fStack_70;
        fVar3 = fStack_74;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                  (&fStack_74,param_1,iVar14,*puVar16);
        fVar21 = (fVar22 - fVar7) * (fVar3 - fStack_74) - (fVar20 - fVar2) * (fVar8 - fStack_6c);
        fVar22 = (fVar4 - fVar5) * (fVar8 - fStack_6c) - (fVar22 - fVar7) * (fVar6 - fStack_70);
        fVar20 = (fVar20 - fVar2) * (fVar6 - fStack_70) - (fVar4 - fVar5) * (fVar3 - fStack_74);
        if (fVar1 <= fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar17 = *(int *)(param_2 + 8);
          uVar18 = *(uint *)(param_2 + 0xc);
          iVar10 = *(int *)(param_2 + 0x10) + 1;
          piVar11 = *(int **)(_UNK_0103267c + 0x1032534);
          *(int *)(param_2 + 0x10) = iVar10;
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4(iVar10,param_2);
          }
          if (uVar18 < *(uint *)(iVar17 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar18 + 1;
            *(int *)(iVar17 + uVar18 * 4 + 0x10) = iVar14;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_2,iVar14,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_2 + 8);
          uVar18 = *(uint *)(param_2 + 0xc);
          piVar11 = *(int **)(_UNK_01032680 + 0x1032598);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar18 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar18 + 1;
            *(int *)(iVar14 + uVar18 * 4 + 0x10) = iVar12;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_2,iVar12,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_2 + 8);
          uVar18 = *(uint *)(param_2 + 0xc);
          piVar11 = *(int **)(_UNK_01032684 + 0x1032608);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar18 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar18 + 1;
            *(int *)(iVar14 + uVar18 * 4 + 0x10) = iVar15;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_2,iVar15,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      uVar18 = uVar19;
    } while (param_4 - 2U != uVar19);
  }
  return;
}

