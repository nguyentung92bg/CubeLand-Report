/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$HCLaplacianSmooth
void Rotatelab_Scripts_RoundedMeshGenerator__HCLaplacianSmooth (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o* triangles, int32_t iterations, float alpha, float beta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$HCLaplacianSmooth
   void Rotatelab_Scripts_RoundedMeshGenerator__HCLaplacianSmooth
   (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o*
   triangles, int32_t iterations, float alpha, float beta, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__HCLaplacianSmooth_1020b04
               (int param_1,int param_2,int param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  float *pfVar14;
  int iVar15;
  undefined4 *puVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStack_8c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar9 = (char *)(_UNK_01031590 + 0x1030b30);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031594 + 0x1030b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01031598 + 0x1030b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103159c + 0x1030b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315a0 + 0x1030b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315a4 + 0x1030b74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315a8 + 0x1030b80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315ac + 0x1030b8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315b0 + 0x1030b98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315b4 + 0x1030ba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315b8 + 0x1030bb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315bc + 0x1030bbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315c0 + 0x1030bc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315c4 + 0x1030bd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010315c8 + 0x1030be0));
    *pcVar9 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  if (uVar10 != 0) {
    piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_010315cc + 0x1030c14),uVar10);
    if (0 < (int)uVar10) {
      uVar11 = 0;
      iVar15 = 0x10;
      puVar16 = *(undefined4 **)(_UNK_010315d0 + 0x1030c3c);
      puVar13 = *(undefined4 **)(_UNK_010315d4 + 0x1030c44);
      do {
        iVar2 = thunk_FUN_00f00cdc(*puVar16);
        System_Collections_Generic_HashSet_int____ctor_2417800(iVar2,*puVar13);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((iVar2 != 0) &&
           (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
          uVar4 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar4,0);
        }
        if ((uint)piVar1[3] <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar1[uVar11 + 4] = iVar2;
        thunk_FUN_00ec5080((int)piVar1 + iVar15,iVar2);
        uVar11 = uVar11 + 1;
        iVar15 = iVar15 + 4;
      } while (uVar10 != uVar11);
    }
    iVar15 = 0;
    while( true ) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_2 + 0xc) <= iVar15) break;
      puVar13 = *(undefined4 **)(_UNK_010315d8 + 0x1030d04);
      uVar11 = System_Collections_Generic_List_int___get_Item_261b65c(param_2,iVar15,*puVar13);
      uVar5 = System_Collections_Generic_List_int___get_Item_261b65c(param_2,iVar15 + 1,*puVar13);
      uVar6 = System_Collections_Generic_List_int___get_Item_261b65c(param_2,iVar15 + 2,*puVar13);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((uint)piVar1[3] <= uVar11) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = piVar1[uVar11 + 4];
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_int___Add_2418c64
                (iVar2,uVar5,**(undefined4 **)(_UNK_010315dc + 0x1030d78));
      if ((uint)piVar1[3] <= uVar11) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = piVar1[uVar11 + 4];
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_int___Add_2418c64
                (iVar2,uVar6,**(undefined4 **)(_UNK_010315e0 + 0x1030db0));
      if ((uint)piVar1[3] <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = piVar1[uVar5 + 4];
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_int___Add_2418c64
                (iVar2,uVar11,**(undefined4 **)(_UNK_010315e4 + 0x1030dec));
      if ((uint)piVar1[3] <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = piVar1[uVar5 + 4];
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_int___Add_2418c64
                (iVar2,uVar6,**(undefined4 **)(_UNK_010315e8 + 0x1030e24));
      if ((uint)piVar1[3] <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = piVar1[uVar6 + 4];
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_int___Add_2418c64
                (iVar2,uVar11,**(undefined4 **)(_UNK_010315ec + 0x1030e60));
      if ((uint)piVar1[3] <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = piVar1[uVar6 + 4];
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_int___Add_2418c64
                (iVar2,uVar5,**(undefined4 **)(_UNK_010315f0 + 0x1030ea0));
      iVar15 = iVar15 + 3;
    }
    iVar15 = FUN_00ec388c(**(undefined4 **)(_UNK_010315f4 + 0x1030ec0),uVar10);
    if ((int)uVar10 < 1) {
      iStack_8c = FUN_00ec388c(**(undefined4 **)(_UNK_010315f8 + 0x1031074),uVar10);
    }
    else {
      iVar3 = iVar15 + 0x10;
      iVar2 = 0;
      uVar11 = 0;
      do {
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((uint)piVar1[3] <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (piVar1[uVar11 + 4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_010315fc + 0x1030f1c),
                             *(undefined4 *)(piVar1[uVar11 + 4] + 0x10));
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar15 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar3 + uVar11 * 4) = uVar4;
        thunk_FUN_00ec5080(iVar3 + iVar2,uVar4);
        if ((uint)piVar1[3] <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (*(uint *)(iVar15 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (piVar1[uVar11 + 4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_HashSet_int___CopyTo_24193a8
                  (piVar1[uVar11 + 4],*(undefined4 *)(iVar3 + uVar11 * 4),
                   **(undefined4 **)(_UNK_01031600 + 0x1030f98));
        uVar11 = uVar11 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar10 != uVar11);
      iStack_8c = FUN_00ec388c(**(undefined4 **)(_UNK_01031604 + 0x1030fc4),uVar10);
      if (0 < (int)uVar10) {
        pfVar14 = (float *)(iStack_8c + 0x10);
        uVar11 = 0;
        do {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                    (&fStack_74,param_1,uVar11,**(undefined4 **)(_UNK_01031608 + 0x103100c));
          if (iStack_8c == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iStack_8c + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          uVar11 = uVar11 + 1;
          *pfVar14 = fStack_74;
          pfVar14[1] = fStack_70;
          pfVar14[2] = fStack_6c;
          pfVar14 = pfVar14 + 3;
        } while (uVar10 != uVar11);
      }
    }
    puVar13 = *(undefined4 **)(_UNK_0103160c + 0x103108c);
    iVar2 = FUN_00ec388c(*puVar13,uVar10);
    iVar3 = FUN_00ec388c(*puVar13,uVar10);
    if (0 < param_3) {
      iVar8 = 0;
      puVar13 = *(undefined4 **)(_UNK_01031610 + 0x10310c4);
      fVar19 = 1.0 - param_5;
      fVar20 = 1.0 - param_4;
      do {
        if (0 < (int)uVar10) {
          uVar11 = 0;
          do {
            if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar15 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            iVar12 = *(int *)(iVar15 + uVar11 * 4 + 0x10);
            if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar5 = *(uint *)(iVar12 + 0xc);
            if (uVar5 == 0) {
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                        (&fStack_74,param_1,uVar11,*puVar13);
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar12 = iVar2 + uVar11 * 0xc;
              *(float *)(iVar12 + 0x10) = fStack_74;
              *(float *)(iVar12 + 0x14) = fStack_70;
              *(float *)(iVar12 + 0x18) = fStack_6c;
              puVar13 = *(undefined4 **)(_UNK_01031614 + 0x1031294);
            }
            else {
              if (*(char *)(_UNK_01031618 + 0x1031124) == '\0') {
                FUN_00ec37c0(*(undefined4 *)(_UNK_0103161c + 0x1031138));
                uVar5 = *(uint *)(iVar12 + 0xc);
                *(undefined1 *)(_UNK_01031620 + 0x103114c) = 1;
              }
              pfVar14 = *(float **)(**(int **)(_UNK_01031624 + 0x103115c) + 0x5c);
              fVar21 = *pfVar14;
              fVar22 = pfVar14[1];
              fVar23 = pfVar14[2];
              if (0 < (int)uVar5) {
                uVar6 = 0;
                do {
                  if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                            (&fStack_74,param_1,*(undefined4 *)(iVar12 + 0x10 + uVar6 * 4),*puVar13)
                  ;
                  uVar6 = uVar6 + 1;
                  fVar21 = fStack_74 + fVar21;
                  fVar22 = fVar22 + fStack_70;
                  uVar5 = *(uint *)(iVar12 + 0xc);
                  fVar23 = fVar23 + fStack_6c;
                } while ((int)uVar6 < (int)uVar5);
              }
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              fVar17 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
              iVar12 = iVar2 + uVar11 * 0xc;
              *(float *)(iVar12 + 0x10) = fVar21 / fVar17;
              *(float *)(iVar12 + 0x14) = fVar22 / fVar17;
              *(float *)(iVar12 + 0x18) = fVar23 / fVar17;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar10);
          if (0 < (int)uVar10) {
            iVar12 = 0;
            uVar11 = 0;
            do {
              if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar7 = iVar2 + iVar12;
              fVar21 = *(float *)(iVar7 + 0x10);
              fVar22 = *(float *)(iVar7 + 0x14);
              fVar23 = *(float *)(iVar7 + 0x18);
              if (iStack_8c == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(uint *)(iStack_8c + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar7 = iStack_8c + iVar12;
              fVar24 = *(float *)(iVar7 + 0x10);
              fVar17 = *(float *)(iVar7 + 0x14);
              fVar18 = *(float *)(iVar7 + 0x18);
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              System_Collections_Generic_List_Vector3___get_Item_26fc8ac
                        (&fStack_74,param_1,uVar11,*puVar13);
              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(uint *)(iVar3 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar7 = iVar3 + iVar12;
              uVar11 = uVar11 + 1;
              iVar12 = iVar12 + 0xc;
              *(float *)(iVar7 + 0x18) = fVar23 - (fVar18 * param_4 + fVar20 * fStack_6c);
              *(float *)(iVar7 + 0x14) = fVar22 - (fVar17 * param_4 + fVar20 * fStack_70);
              *(float *)(iVar7 + 0x10) = fVar21 - (fVar24 * param_4 + fVar20 * fStack_74);
            } while (uVar10 != uVar11);
            if (0 < (int)uVar10) {
              uVar11 = 0;
              do {
                if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(uint *)(iVar15 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                iVar12 = *(int *)(iVar15 + uVar11 * 4 + 0x10);
                if (*(char *)(_UNK_01031628 + 0x10313d4) == '\0') {
                  FUN_00ec37c0(*(undefined4 *)(_UNK_0103162c + 0x10313e8));
                  *(undefined1 *)(_UNK_01031630 + 0x10313f8) = 1;
                }
                pfVar14 = *(float **)(**(int **)(_UNK_01031634 + 0x1031408) + 0x5c);
                fVar21 = *pfVar14;
                fVar22 = pfVar14[1];
                fVar23 = pfVar14[2];
                if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                uVar5 = *(uint *)(iVar12 + 0xc);
                if (uVar5 != 0) {
                  if (0 < (int)uVar5) {
                    uVar6 = 0;
                    do {
                      if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f07924();
                      }
                      uVar5 = *(uint *)(iVar12 + 0x10 + uVar6 * 4);
                      if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f07924();
                      }
                      uVar6 = uVar6 + 1;
                      iVar7 = iVar3 + uVar5 * 0xc;
                      fVar21 = *(float *)(iVar7 + 0x10) + fVar21;
                      fVar22 = *(float *)(iVar7 + 0x14) + fVar22;
                      uVar5 = *(uint *)(iVar12 + 0xc);
                      fVar23 = *(float *)(iVar7 + 0x18) + fVar23;
                    } while ((int)uVar6 < (int)uVar5);
                  }
                  fVar17 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
                  fVar23 = fVar23 / fVar17;
                  fVar22 = fVar22 / fVar17;
                  fVar21 = fVar21 / fVar17;
                  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                iVar12 = iVar2 + uVar11 * 0xc;
                if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(uint *)(iVar3 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                iVar7 = iVar3 + uVar11 * 0xc;
                if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                System_Collections_Generic_List_Vector3___set_Item_26fc90c
                          (param_1,uVar11,
                           *(float *)(iVar12 + 0x10) -
                           (*(float *)(iVar7 + 0x10) * param_5 + fVar19 * fVar21),
                           *(float *)(iVar12 + 0x14) -
                           (*(float *)(iVar7 + 0x14) * param_5 + fVar19 * fVar22),
                           *(float *)(iVar12 + 0x18) -
                           (*(float *)(iVar7 + 0x18) * param_5 + fVar19 * fVar23),
                           **(undefined4 **)(_UNK_01031638 + 0x103152c));
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar10);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != param_3);
    }
  }
  return;
}

