/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ClipTrianglesAtPlane
void Rotatelab_Scripts_RoundedMeshGenerator__ClipTrianglesAtPlane (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o* triangles, int32_t seamAxis, float seamCoord, uint8_t plusSubmesh, uint8_t minusSubmesh, System_Collections_Generic_List_int__o* submesh0Tris, System_Collections_Generic_List_int__o* submesh1Tris, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ClipTrianglesAtPlane
   void Rotatelab_Scripts_RoundedMeshGenerator__ClipTrianglesAtPlane
   (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o*
   triangles, int32_t seamAxis, float seamCoord, uint8_t plusSubmesh, uint8_t minusSubmesh,
   System_Collections_Generic_List_int__o* submesh0Tris, System_Collections_Generic_List_int__o*
   submesh1Tris, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__ClipTrianglesAtPlane_102163c
               (int param_1,int param_2,int param_3,float param_4,int param_5,int param_6,
               int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  pcVar14 = (char *)(_UNK_01031e84 + 0x1031670);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031e88 + 0x1031684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031e8c + 0x1031690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031e90 + 0x103169c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031e94 + 0x10316a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031e98 + 0x10316b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031e9c + 0x10316c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031ea0 + 0x10316cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031ea4 + 0x10316d8));
    *pcVar14 = '\x01';
  }
  uStack_64 = 0;
  uStack_68 = 0;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01031ea8 + 0x10316f0));
  System_Collections_Generic_Dictionary_long__int____ctor_2008130
            (uVar4,**(undefined4 **)(_UNK_01031eac + 0x1031708));
  iVar18 = param_8;
  if (param_6 == 0) {
    iVar18 = param_7;
  }
  puVar15 = *(undefined4 **)(_UNK_01031eb0 + 0x103172c);
  uVar5 = FUN_00ec388c(*puVar15,4);
  if (param_5 == 0) {
    param_8 = param_7;
  }
  uVar6 = FUN_00ec388c(*puVar15,4);
  fVar3 = _UNK_01031b90;
  fVar2 = _UNK_01031b30;
  fVar1 = _UNK_01031b2c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_2 + 0xc);
  if (0 < iVar7) {
    iVar12 = 0;
    puVar17 = *(undefined4 **)(_UNK_01031eb4 + 0x1031790);
    puVar15 = *(undefined4 **)(_UNK_01031eb8 + 0x103179c);
    do {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = System_Collections_Generic_List_int___get_Item_261b65c(param_2,iVar12,*puVar17);
      uVar9 = System_Collections_Generic_List_int___get_Item_261b65c(param_2,iVar12 + 1,*puVar17);
      uVar10 = System_Collections_Generic_List_int___get_Item_261b65c(param_2,iVar12 + 2,*puVar17);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector3___get_Item_26fc8ac(&fStack_74,param_1,uVar8,*puVar15);
      fVar20 = fStack_74;
      if (((param_3 != 0) && (fVar20 = fStack_6c, param_3 != 2)) &&
         (fVar20 = fStack_70, param_3 != 1)) {
LAB_01031e38:
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01031ef0 + 0x1031e44));
        uVar4 = thunk_FUN_00f00cdc();
        uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01031ef4 + 0x1031e58));
        System_IndexOutOfRangeException___ctor_2b69538(uVar4,uVar5,0);
        uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01031ef8 + 0x1031e74));
        func_0x00ec3920(uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
      if (*(int *)(**(int **)(_UNK_01031ebc + 0x103187c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar20 = fVar20 - param_4;
      fVar21 = fVar20;
      if (fVar20 < fVar1) {
        fVar21 = fVar2;
      }
      if (fVar3 < fVar20) {
        fVar20 = fVar21;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector3___get_Item_26fc8ac(&fStack_74,param_1,uVar9,*puVar15);
      fVar21 = fStack_74;
      if (((param_3 != 0) && (fVar21 = fStack_6c, param_3 != 2)) &&
         (fVar21 = fStack_70, param_3 != 1)) goto LAB_01031e38;
      fVar21 = fVar21 - param_4;
      fVar22 = fVar21;
      if (fVar21 < fVar1) {
        fVar22 = fVar2;
      }
      if (fVar3 < fVar21) {
        fVar21 = fVar22;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector3___get_Item_26fc8ac(&fStack_74,param_1,uVar10,*puVar15)
      ;
      fVar22 = fStack_74;
      if (((param_3 != 0) && (fVar22 = fStack_6c, param_3 != 2)) &&
         (fVar22 = fStack_70, param_3 != 1)) goto LAB_01031e38;
      fVar22 = fVar22 - param_4;
      fVar19 = fVar22;
      if (fVar22 < fVar1) {
        fVar19 = fVar2;
      }
      if (fVar3 < fVar22) {
        fVar22 = fVar19;
      }
      if ((fVar20 < 0.0) || (fVar21 < 0.0 || fVar22 < 0.0)) {
        if (fVar20 <= 0.0) {
          fVar19 = fVar21;
          if (fVar21 <= 0.0) {
            fVar19 = fVar22;
          }
          if (fVar19 <= 0.0) {
            if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar16 = *(int *)(iVar18 + 8);
            uVar13 = *(uint *)(iVar18 + 0xc);
            piVar11 = *(int **)(_UNK_01031ed4 + 0x1031bc0);
            *(int *)(iVar18 + 0x10) = *(int *)(iVar18 + 0x10) + 1;
            if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar13 < *(uint *)(iVar16 + 0xc)) {
              *(uint *)(iVar18 + 0xc) = uVar13 + 1;
              *(undefined4 *)(iVar16 + uVar13 * 4 + 0x10) = uVar8;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (iVar18,uVar8,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
            }
            iVar16 = *(int *)(iVar18 + 8);
            uVar13 = *(uint *)(iVar18 + 0xc);
            piVar11 = *(int **)(_UNK_01031ed8 + 0x1031d44);
            *(int *)(iVar18 + 0x10) = *(int *)(iVar18 + 0x10) + 1;
            if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar13 < *(uint *)(iVar16 + 0xc)) {
              *(uint *)(iVar18 + 0xc) = uVar13 + 1;
              *(undefined4 *)(iVar16 + uVar13 * 4 + 0x10) = uVar9;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (iVar18,uVar9,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
            }
            iVar16 = *(int *)(iVar18 + 8);
            uVar13 = *(uint *)(iVar18 + 0xc);
            piVar11 = *(int **)(_UNK_01031edc + 0x1031db8);
            *(int *)(iVar18 + 0x10) = *(int *)(iVar18 + 0x10) + 1;
            if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar13 < *(uint *)(iVar16 + 0xc)) {
              *(uint *)(iVar18 + 0xc) = uVar13 + 1;
              *(undefined4 *)(iVar16 + uVar13 * 4 + 0x10) = uVar10;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (iVar18,uVar10,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
            }
            puVar15 = *(undefined4 **)(_UNK_01031ee0 + 0x1031e18);
            goto LAB_01031e18;
          }
        }
        uStack_68 = 0;
        uStack_64 = 0;
        if (*(int *)(**(int **)(_UNK_01031ee4 + 0x10319e0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Scripts_RoundedMeshGenerator__ClipEdge_10220e8
                  (param_1,uVar4,param_3,param_4,uVar8,fVar20,uVar9,fVar21,uVar5,&uStack_64,uVar6,
                   &uStack_68);
        Rotatelab_Scripts_RoundedMeshGenerator__ClipEdge_10220e8
                  (param_1,uVar4,param_3,param_4,uVar9,fVar21,uVar10,fVar22,uVar5,&uStack_64,uVar6,
                   &uStack_68);
        Rotatelab_Scripts_RoundedMeshGenerator__ClipEdge_10220e8
                  (param_1,uVar4,param_3,param_4,uVar10,fVar22,uVar8,fVar20,uVar5,&uStack_64,uVar6,
                   &uStack_68);
        Rotatelab_Scripts_RoundedMeshGenerator__FanTriangulate_1022308
                  (param_1,param_8,uVar5,uStack_64);
        Rotatelab_Scripts_RoundedMeshGenerator__FanTriangulate_1022308
                  (param_1,iVar18,uVar6,uStack_68);
        puVar17 = *(undefined4 **)(_UNK_01031ee8 + 0x1031b1c);
        puVar15 = *(undefined4 **)(_UNK_01031eec + 0x1031b24);
      }
      else {
        if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar16 = *(int *)(param_8 + 8);
        uVar13 = *(uint *)(param_8 + 0xc);
        piVar11 = *(int **)(_UNK_01031ec0 + 0x1031b60);
        *(int *)(param_8 + 0x10) = *(int *)(param_8 + 0x10) + 1;
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar13 < *(uint *)(iVar16 + 0xc)) {
          *(uint *)(param_8 + 0xc) = uVar13 + 1;
          *(undefined4 *)(iVar16 + uVar13 * 4 + 0x10) = uVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_8,uVar8,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
        }
        puVar17 = *(undefined4 **)(_UNK_01031ec4 + 0x1031c1c);
        iVar16 = *(int *)(param_8 + 8);
        uVar13 = *(uint *)(param_8 + 0xc);
        piVar11 = *(int **)(_UNK_01031ec8 + 0x1031c38);
        *(int *)(param_8 + 0x10) = *(int *)(param_8 + 0x10) + 1;
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar13 < *(uint *)(iVar16 + 0xc)) {
          *(uint *)(param_8 + 0xc) = uVar13 + 1;
          *(undefined4 *)(iVar16 + uVar13 * 4 + 0x10) = uVar9;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_8,uVar9,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
        }
        iVar16 = *(int *)(param_8 + 8);
        uVar13 = *(uint *)(param_8 + 0xc);
        piVar11 = *(int **)(_UNK_01031ecc + 0x1031ca0);
        *(int *)(param_8 + 0x10) = *(int *)(param_8 + 0x10) + 1;
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar13 < *(uint *)(iVar16 + 0xc)) {
          *(uint *)(param_8 + 0xc) = uVar13 + 1;
          *(undefined4 *)(iVar16 + uVar13 * 4 + 0x10) = uVar10;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_8,uVar10,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
        }
        puVar15 = *(undefined4 **)(_UNK_01031ed0 + 0x1031d00);
      }
LAB_01031e18:
      iVar12 = iVar12 + 3;
    } while (iVar12 < iVar7);
  }
  return;
}

