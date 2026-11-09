/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildExposedFaceMasks
System_Collections_Generic_Dictionary_Vector3Int__byte__o* Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildExposedFaceMasks
   System_Collections_Generic_Dictionary_Vector3Int__byte__o*
   Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks
   (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks_101e3f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar6 = (char *)(_UNK_0102e718 + 0x102e40c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e71c + 0x102e420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e720 + 0x102e42c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e724 + 0x102e438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e728 + 0x102e444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e72c + 0x102e450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e730 + 0x102e45c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e734 + 0x102e468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e738 + 0x102e474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e73c + 0x102e480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e740 + 0x102e48c));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102e744 + 0x102e4c8));
  System_Collections_Generic_Dictionary_Vector3Int__byte____ctor_20b47f8
            (iVar3,uVar7,**(undefined4 **)(_UNK_0102e748 + 0x102e4dc));
  System_Collections_Generic_HashSet_Vector3Int___GetEnumerator_242cd5c
            (&uStack_58,param_1,**(undefined4 **)(_UNK_0102e74c + 0x102e4fc));
  uStack_40 = uStack_58;
  uStack_3c = puStack_54;
  uStack_38 = uStack_50;
  iStack_34 = iStack_4c;
  uStack_30 = uStack_48;
  uStack_58 = 0;
  piVar8 = *(int **)(_UNK_0102e750 + 0x102e52c);
  puStack_54 = &uStack_40;
  do {
    iVar4 = System_Collections_Generic_HashSet_Enumerator_Vector3Int___MoveNext_21af904
                      (&uStack_40,**(undefined4 **)(_UNK_0102e754 + 0x102e534));
    iVar1 = iStack_34;
    if (iVar4 == 0) {
      System_Collections_Generic_HashSet_Enumerator_Vector3Int___Dispose_21af900
                (&uStack_40,**(undefined4 **)(_UNK_0102e758 + 0x102e694));
      return iVar3;
    }
    iVar9 = 0;
    uVar11 = 0;
    iVar4 = (int)uStack_30;
    uVar10 = 0;
    iVar2 = uStack_30._4_4_;
    while( true ) {
      iVar5 = *piVar8;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar8;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar5 + 0xc) <= (int)uVar11) break;
      iVar5 = *piVar8;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar8;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar5 = iVar5 + iVar9;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                        (param_1,*(int *)(iVar5 + 0x10) + iVar1,*(int *)(iVar5 + 0x14) + iVar4,
                         *(int *)(iVar5 + 0x18) + iVar2,**(undefined4 **)(_UNK_0102e75c + 0x102e618)
                        );
      iVar9 = iVar9 + 0xc;
      if (iVar5 == 0) {
        uVar10 = uVar10 | 1 << (uVar11 & 0x1f);
      }
      uVar11 = uVar11 + 1;
    }
    if ((uVar10 & 0xff) != 0) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Vector3Int__byte___Add_20b5290
                (iVar3,iVar1,iVar4,iVar2,uVar10 & 0xff,**(undefined4 **)(_UNK_0102e760 + 0x102e668))
      ;
    }
  } while( true );
}

