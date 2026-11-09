/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildSurface
void Rotatelab_Scripts_RoundedMeshGenerator__BuildSurface (System_Single_array* sdfGrid, Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o* triangles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildSurface
   void Rotatelab_Scripts_RoundedMeshGenerator__BuildSurface (System_Single_array* sdfGrid,
   Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid,
   System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o*
   triangles, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__BuildSurface_101e9b8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9,
               int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int extraout_r1;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar15 = (char *)(_UNK_0102f38c + 0x102e9e4);
  if (*pcVar15 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f390 + 0x102e9f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f394 + 0x102ea04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f398 + 0x102ea10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f39c + 0x102ea1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3a0 + 0x102ea28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3a4 + 0x102ea34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3a8 + 0x102ea40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3ac + 0x102ea4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3b0 + 0x102ea58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3b4 + 0x102ea64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f3b8 + 0x102ea70));
    *pcVar15 = '\x01';
  }
  uStack_3c = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102f3bc + 0x102ea88));
  System_Collections_Generic_Dictionary_long__int____ctor_2008130
            (iVar1,**(undefined4 **)(_UNK_0102f3c0 + 0x102eaa0));
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_0102f3c4 + 0x102eab8),8);
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_0102f3c8 + 0x102ead0),8);
  iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_0102f3cc + 0x102eae8),0xc);
  if (0 < param_6 + -1) {
    piVar17 = *(int **)(_UNK_0102f3d0 + 0x102eb2c);
    iStack_6c = 0;
    do {
      if (0 < param_7 + -1) {
        iStack_68 = 0;
        do {
          if (0 < param_8 + -1) {
            iStack_64 = 0;
            do {
              if (*(int *)(*piVar17 + 0x74) == 0) {
                FUN_00ec3934();
              }
              Rotatelab_Scripts_RoundedMeshGenerator__PopulateCubeValues_1023be0
                        (iVar2,param_1,iStack_6c,iStack_68,iStack_64,param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,param_9);
              uVar5 = Rotatelab_Scripts_RoundedMeshGenerator__GetCubeIndex_1023d74(iVar2);
              iVar16 = *(int *)(*(int *)(*piVar17 + 0x5c) + 0x18);
              if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(uint *)(iVar16 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              uVar9 = *(uint *)(iVar16 + uVar5 * 4 + 0x10);
              if (uVar9 != 0) {
                if (*(int *)(*piVar17 + 0x74) == 0) {
                  FUN_00ec3934();
                }
                Rotatelab_Scripts_RoundedMeshGenerator__PopulateCornerPositions_1023dd4
                          (iVar3,iStack_6c,iStack_68,iStack_64,param_2,param_3,param_4,param_5,
                           param_6,param_7,param_8,param_9);
                iVar16 = 4;
                do {
                  uVar20 = iVar16 - 4;
                  if ((uVar9 >> (uVar20 & 0xff) & 1) != 0) {
                    piVar17 = *(int **)(_UNK_0102f3d4 + 0x102eca8);
                    iVar6 = *piVar17;
                    if (*(int *)(iVar6 + 0x74) == 0) {
                      FUN_00ec3934();
                      iVar6 = *piVar17;
                    }
                    iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x10);
                    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    if (*(uint *)(iVar6 + 0xc) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f07924();
                    }
                    uVar10 = *(uint *)(iVar6 + iVar16 * 4);
                    iVar6 = *(int *)(*(int *)(**(int **)(_UNK_0102f3d8 + 0x102ecec) + 0x5c) + 0x14);
                    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    if (*(uint *)(iVar6 + 0xc) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f07924();
                    }
                    uVar7 = *(uint *)(iVar6 + iVar16 * 4);
                    uVar24 = Rotatelab_Scripts_RoundedMeshGenerator__EdgeKey_1023f84
                                       (iStack_6c,iStack_68,iStack_64,uVar20,param_7,param_8);
                    uVar21 = (undefined4)((ulonglong)uVar24 >> 0x20);
                    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    iVar6 = System_Collections_Generic_Dictionary_long__int___TryGetValue_200abf8
                                      (iVar1,**(undefined4 **)(_UNK_0102f3dc + 0x102ed8c),
                                       (int)uVar24,uVar21,&uStack_3c,
                                       **(undefined4 **)(_UNK_0102f3dc + 0x102ed8c));
                    if (iVar6 == 0) {
                      if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      uStack_3c = *(undefined4 *)(param_10 + 0xc);
                      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f07924();
                      }
                      iVar6 = iVar3 + uVar10 * 0xc;
                      uVar13 = *(undefined4 *)(iVar6 + 0x10);
                      uVar14 = *(undefined4 *)(iVar6 + 0x14);
                      uVar11 = *(undefined4 *)(iVar6 + 0x18);
                      if (*(uint *)(iVar3 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f07924();
                      }
                      iVar6 = iVar3 + uVar7 * 0xc;
                      uVar12 = *(undefined4 *)(iVar6 + 0x14);
                      uVar19 = *(undefined4 *)(iVar6 + 0x10);
                      uVar8 = *(undefined4 *)(iVar6 + 0x18);
                      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      if (*(uint *)(iVar2 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f07924();
                      }
                      uVar22 = *(undefined4 *)(iVar2 + uVar10 * 4 + 0x10);
                      if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f07924();
                      }
                      uVar23 = *(undefined4 *)(iVar2 + uVar7 * 4 + 0x10);
                      if (*(int *)(**(int **)(_UNK_0102f3e0 + 0x102edcc) + 0x74) == 0) {
                        FUN_00ec3934();
                      }
                      Rotatelab_Scripts_RoundedMeshGenerator__Interpolate_1024068
                                (&uStack_48,uVar13,uVar14,uVar11,uVar19,uVar12,uVar8,uVar22,uVar23,0
                                );
                      iVar6 = *(int *)(param_10 + 8);
                      uVar10 = *(uint *)(param_10 + 0xc);
                      iVar18 = **(int **)(_UNK_0102f3e4 + 0x102eef8);
                      *(int *)(param_10 + 0x10) = *(int *)(param_10 + 0x10) + 1;
                      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                        *(uint *)(param_10 + 0xc) = uVar10 + 1;
                        iVar6 = iVar6 + uVar10 * 0xc;
                        *(undefined4 *)(iVar6 + 0x10) = uStack_48;
                        *(undefined4 *)(iVar6 + 0x14) = uStack_44;
                        *(undefined4 *)(iVar6 + 0x18) = uStack_40;
                        iVar6 = param_10;
                      }
                      else {
                        System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                                  (param_10,uStack_48,uStack_44,uStack_40,
                                   *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38))
                        ;
                        iVar6 = extraout_r1;
                      }
                      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      System_Collections_Generic_Dictionary_long__int___Add_2008bd4
                                (iVar1,iVar6,(int)uVar24,uVar21,uStack_3c,
                                 **(undefined4 **)(_UNK_0102f3e8 + 0x102efa4));
                    }
                    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f07924();
                    }
                    *(undefined4 *)(iVar4 + iVar16 * 4) = uStack_3c;
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 != 0x10);
                uVar9 = 0;
                piVar17 = *(int **)(_UNK_0102f3ec + 0x102f004);
                while( true ) {
                  iVar16 = *piVar17;
                  if (*(int *)(iVar16 + 0x74) == 0) {
                    FUN_00ec3934();
                    iVar16 = *piVar17;
                  }
                  iVar16 = *(int *)(*(int *)(iVar16 + 0x5c) + 0x1c);
                  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (**(uint **)(iVar16 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = (*(uint **)(iVar16 + 8))[2];
                  if (uVar20 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  if (*(int *)(iVar16 + (uVar20 * uVar5 + uVar9) * 4 + 0x10) == -1) break;
                  iVar16 = *piVar17;
                  if (*(int *)(iVar16 + 0x74) == 0) {
                    FUN_00ec3934();
                    iVar16 = *piVar17;
                  }
                  iVar16 = *(int *)(*(int *)(iVar16 + 0x5c) + 0x1c);
                  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (**(uint **)(iVar16 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = (*(uint **)(iVar16 + 8))[2];
                  if (uVar20 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = *(uint *)(iVar16 + (uVar20 * uVar5 + uVar9) * 4 + 0x10);
                  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (*(uint *)(iVar4 + 0xc) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar21 = *(undefined4 *)(iVar4 + uVar20 * 4 + 0x10);
                  if (param_11 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  iVar16 = *(int *)(param_11 + 8);
                  uVar20 = *(uint *)(param_11 + 0xc);
                  piVar17 = *(int **)(_UNK_0102f3f0 + 0x102f11c);
                  *(int *)(param_11 + 0x10) = *(int *)(param_11 + 0x10) + 1;
                  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (uVar20 < *(uint *)(iVar16 + 0xc)) {
                    *(uint *)(param_11 + 0xc) = uVar20 + 1;
                    *(undefined4 *)(iVar16 + uVar20 * 4 + 0x10) = uVar21;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_261b948
                              (param_11,uVar21,
                               *(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
                  }
                  iVar16 = *(int *)(*(int *)(**(int **)(_UNK_0102f3f4 + 0x102f16c) + 0x5c) + 0x1c);
                  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (**(uint **)(iVar16 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = (*(uint **)(iVar16 + 8))[2];
                  if (uVar20 <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = *(uint *)(iVar16 + (uVar20 * uVar5 + uVar9) * 4 + 0x14);
                  if (*(uint *)(iVar4 + 0xc) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  iVar6 = *(int *)(param_11 + 8);
                  iVar16 = **(int **)(_UNK_0102f3f8 + 0x102f1dc);
                  uVar10 = *(uint *)(param_11 + 0xc);
                  uVar21 = *(undefined4 *)(iVar4 + uVar20 * 4 + 0x10);
                  *(int *)(param_11 + 0x10) = *(int *)(param_11 + 0x10) + 1;
                  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(param_11 + 0xc) = uVar10 + 1;
                    *(undefined4 *)(iVar6 + uVar10 * 4 + 0x10) = uVar21;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_261b948
                              (param_11,uVar21,
                               *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
                  }
                  iVar16 = *(int *)(*(int *)(**(int **)(_UNK_0102f3fc + 0x102f250) + 0x5c) + 0x1c);
                  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (**(uint **)(iVar16 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = (*(uint **)(iVar16 + 8))[2];
                  if (uVar20 <= uVar9 + 2) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  uVar20 = *(uint *)(iVar16 + (uVar20 * uVar5 + uVar9) * 4 + 0x18);
                  if (*(uint *)(iVar4 + 0xc) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  iVar16 = *(int *)(param_11 + 8);
                  uVar10 = *(uint *)(param_11 + 0xc);
                  iVar6 = **(int **)(_UNK_0102f400 + 0x102f2c4);
                  uVar21 = *(undefined4 *)(iVar4 + uVar20 * 4 + 0x10);
                  *(int *)(param_11 + 0x10) = *(int *)(param_11 + 0x10) + 1;
                  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (uVar10 < *(uint *)(iVar16 + 0xc)) {
                    *(uint *)(param_11 + 0xc) = uVar10 + 1;
                    *(undefined4 *)(iVar16 + uVar10 * 4 + 0x10) = uVar21;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_261b948
                              (param_11,uVar21,
                               *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                  }
                  uVar9 = uVar9 + 3;
                  piVar17 = *(int **)(_UNK_0102f404 + 0x102f334);
                }
              }
              iStack_64 = iStack_64 + 1;
            } while (iStack_64 != param_8 + -1);
          }
          iStack_68 = iStack_68 + 1;
        } while (iStack_68 != param_7 + -1);
      }
      iStack_6c = iStack_6c + 1;
    } while (iStack_6c != param_6 + -1);
  }
  return;
}

