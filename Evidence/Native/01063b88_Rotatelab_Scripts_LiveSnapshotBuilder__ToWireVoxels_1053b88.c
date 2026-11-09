/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ToWireVoxels
System_Collections_Generic_List_int____o* Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels (UnityEngine_Vector3Int_array* positions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ToWireVoxels
   System_Collections_Generic_List_int____o* Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels
   (UnityEngine_Vector3Int_array* positions, const MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  
  pcVar5 = (char *)(_UNK_01063d04 + 0x1063ba0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063d08 + 0x1063bb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063d0c + 0x1063bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063d10 + 0x1063bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063d14 + 0x1063bd8));
    *pcVar5 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01063d18 + 0x1063bf8));
  System_Collections_Generic_List_object____ctor_267d2e8
            (iVar1,*(undefined4 *)(param_1 + 0xc),**(undefined4 **)(_UNK_01063d1c + 0x1063c10));
  uVar2 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar2) {
    puVar7 = (undefined4 *)(param_1 + 0x10);
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar8 = *puVar7;
      uVar9 = puVar7[1];
      uVar11 = puVar7[2];
      if (*(int *)(**(int **)(_UNK_01063d20 + 0x1063c44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar8 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053a30(uVar8,uVar9,uVar11);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar1 + 8);
      uVar2 = *(uint *)(iVar1 + 0xc);
      piVar4 = *(int **)(_UNK_01063d24 + 0x1063c98);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar2 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar2 + 1;
        puVar3 = (undefined4 *)(iVar10 + uVar2 * 4 + 0x10);
        *puVar3 = uVar8;
        thunk_FUN_00ec5080(puVar3,uVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,uVar8,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
      }
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 3;
    } while ((int)uVar6 < (int)uVar2);
  }
  return iVar1;
}

