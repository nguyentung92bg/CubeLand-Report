/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$FillNarrowGaps
void Rotatelab_Scripts_RoundedMeshGenerator__FillNarrowGaps (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, UnityEngine_Vector3Int_o min, UnityEngine_Vector3Int_o max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$FillNarrowGaps
   void Rotatelab_Scripts_RoundedMeshGenerator__FillNarrowGaps
   (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, UnityEngine_Vector3Int_o min,
   UnityEngine_Vector3Int_o max, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__FillNarrowGaps_101de7c
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0102e394 + 0x102de98);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e398 + 0x102deac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e39c + 0x102deb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e3a0 + 0x102dec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e3a4 + 0x102ded0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e3a8 + 0x102dedc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e3ac + 0x102dee8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e3b0 + 0x102def4));
    *pcVar6 = '\x01';
  }
  do {
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102e3b4 + 0x102df0c));
    System_Collections_Generic_List_Vector3Int____ctor_26ff1a0
              (iVar2,**(undefined4 **)(_UNK_0102e3b8 + 0x102df20));
    iVar5 = param_2;
    while (iVar1 = iVar5, iVar1 <= param_5) {
      iVar5 = iVar1 + 1;
      if (param_3 <= param_6) {
        iVar9 = param_3;
        do {
          if (param_4 <= param_7) {
            iVar7 = param_4;
            do {
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                (param_1,iVar1,iVar9,iVar7,
                                 **(undefined4 **)(_UNK_0102e3c4 + 0x102dfac));
              if (iVar3 == 0) {
                iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                  (param_1,iVar1 + -1,iVar9,iVar7,
                                   **(undefined4 **)(_UNK_0102e3c8 + 0x102dfd4));
                if ((iVar3 == 0) ||
                   (iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                      (param_1,iVar5,iVar9,iVar7,
                                       **(undefined4 **)(_UNK_0102e3cc + 0x102e068)), iVar3 == 0)) {
                  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                    (param_1,iVar1,iVar9 + -1,iVar7,
                                     **(undefined4 **)(_UNK_0102e3d4 + 0x102e09c));
                  if (iVar3 != 0) {
                    iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                      (param_1,iVar1,iVar9 + 1,iVar7,
                                       **(undefined4 **)(_UNK_0102e3d8 + 0x102e104));
                    if (iVar3 != 0) goto LAB_0102e198;
                    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                  }
                  iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                    (param_1,iVar1,iVar9,iVar7 + -1,
                                     **(undefined4 **)(_UNK_0102e3dc + 0x102e14c));
                  if (iVar3 != 0) {
                    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    iVar3 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                      (param_1,iVar1,iVar9,iVar7 + 1,
                                       **(undefined4 **)(_UNK_0102e3e0 + 0x102e184));
                    if (iVar3 != 0) goto LAB_0102e198;
                  }
                }
                else {
LAB_0102e198:
                  iVar3 = -1;
                  iVar13 = 0;
                  do {
                    iVar12 = -1;
                    do {
                      iVar10 = -1;
                      do {
                        if ((iVar12 != 0 || iVar3 != 0) || iVar10 != 0) {
                          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                            thunk_FUN_00f078d4();
                          }
                          iVar4 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                            (param_1,iVar3 + iVar1,iVar12 + iVar9,iVar7 + iVar10,
                                             **(undefined4 **)(_UNK_0102e3e4 + 0x102e1ec));
                          iVar13 = iVar13 + iVar4;
                        }
                        iVar10 = iVar10 + 1;
                      } while (iVar10 != 2);
                      iVar12 = iVar12 + 1;
                    } while (iVar12 != 2);
                    iVar3 = iVar3 + 1;
                  } while (iVar3 != 2);
                  if (8 < iVar13) {
                    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    iVar3 = *(int *)(iVar2 + 8);
                    uVar11 = *(uint *)(iVar2 + 0xc);
                    iVar13 = **(int **)(_UNK_0102e3e8 + 0x102e268);
                    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    if (uVar11 < *(uint *)(iVar3 + 0xc)) {
                      *(uint *)(iVar2 + 0xc) = uVar11 + 1;
                      iVar3 = iVar3 + uVar11 * 0xc;
                      *(int *)(iVar3 + 0x10) = iVar1;
                      *(int *)(iVar3 + 0x14) = iVar9;
                      *(int *)(iVar3 + 0x18) = iVar7;
                    }
                    else {
                      System_Collections_Generic_List_Vector3Int___AddWithResize_26ffa98
                                (iVar2,iVar1,iVar9,iVar7,
                                 *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
                    }
                  }
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 <= param_7);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= param_6);
      }
    }
    iVar5 = 0;
    bVar8 = false;
    while( true ) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0xc) <= iVar5) break;
      System_Collections_Generic_List_Vector3Int___get_Item_26ff740
                (&uStack_30,iVar2,iVar5,**(undefined4 **)(_UNK_0102e3ec + 0x102e338));
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_Vector3Int___Add_242d4ac
                (param_1,uStack_30,uStack_2c,uStack_28,**(undefined4 **)(_UNK_0102e3f0 + 0x102e36c))
      ;
      iVar5 = iVar5 + 1;
      bVar8 = true;
    }
    if (!bVar8) {
      return;
    }
  } while( true );
}

