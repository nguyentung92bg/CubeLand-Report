/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$BuildClusterOffsets
void Rotatelab_Scripts_MeteorShowerManager__BuildClusterOffsets (Rotatelab_Scripts_MeteorShowerManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$BuildClusterOffsets
   void Rotatelab_Scripts_MeteorShowerManager__BuildClusterOffsets
   (Rotatelab_Scripts_MeteorShowerManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_MeteorShowerManager__BuildClusterOffsets_1026e40(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  pcVar6 = (char *)(_UNK_010370b8 + 0x1036e58);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370bc + 0x1036e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370c0 + 0x1036e78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370c4 + 0x1036e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370c8 + 0x1036e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370cc + 0x1036e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370d0 + 0x1036ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370d4 + 0x1036eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010370d8 + 0x1036ec0));
    *pcVar6 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010370dc + 0x1036ed4));
  System_Collections_Generic_List_Vector3Int____ctor_26ff214
            (iVar3,0x156,**(undefined4 **)(_UNK_010370e0 + 0x1036eec));
  iVar11 = -3;
  do {
    iVar12 = -3;
    do {
      iVar7 = -3;
      do {
        if ((iVar12 != 0 || iVar11 != 0) || iVar7 != 0) {
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = *(int *)(iVar3 + 8);
          uVar10 = *(uint *)(iVar3 + 0xc);
          piVar4 = *(int **)(_UNK_010370e4 + 0x1036f38);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar10 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar10 + 1;
            iVar9 = iVar9 + uVar10 * 0xc;
            *(int *)(iVar9 + 0x10) = iVar11;
            *(int *)(iVar9 + 0x14) = iVar12;
            *(int *)(iVar9 + 0x18) = iVar7;
          }
          else {
            System_Collections_Generic_List_Vector3Int___AddWithResize_26ffa98
                      (iVar3,iVar11,iVar12,iVar7,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 4);
      iVar12 = iVar12 + 1;
    } while (iVar12 != 4);
    iVar11 = iVar11 + 1;
    if (iVar11 == 4) {
      piVar4 = *(int **)(_UNK_010370e8 + 0x1036fc4);
      iVar11 = *piVar4;
      if (*(int *)(iVar11 + 0x74) == 0) {
        FUN_00ec3934();
        iVar11 = *piVar4;
      }
      puVar5 = *(undefined4 **)(iVar11 + 0x5c);
      iVar12 = puVar5[1];
      if (iVar12 == 0) {
        if (*(int *)(iVar11 + 0x74) == 0) {
          FUN_00ec3934();
          puVar5 = *(undefined4 **)(*piVar4 + 0x5c);
        }
        uVar8 = *puVar5;
        iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010370ec + 0x103700c));
        System_Comparison_Vector3Int____ctor_1f27f84
                  (iVar12,uVar8,**(undefined4 **)(_UNK_010370f0 + 0x103702c),0);
        piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 4);
        *piVar4 = iVar12;
        thunk_FUN_00ec5080(piVar4,iVar12);
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector3Int___Sort_2701958
                (iVar3,iVar12,**(undefined4 **)(_UNK_010370f4 + 0x1037060));
      uVar8 = System_Collections_Generic_List_Vector3Int___ToArray_27019f4
                        (iVar3,**(undefined4 **)(_UNK_010370fc + 0x1037098));
      puVar5 = (undefined4 *)(param_1 + 0x18);
      *puVar5 = uVar8;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  } while( true );
}

