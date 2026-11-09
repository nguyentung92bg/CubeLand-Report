/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildSignedDistanceField
System_Single_array* Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceField (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, System_Collections_Generic_Dictionary_Vector3Int__byte__o* exposedFaceMasks, Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildSignedDistanceField
   System_Single_array* Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceField
   (System_Collections_Generic_HashSet_Vector3Int__o* occupancy,
   System_Collections_Generic_Dictionary_Vector3Int__byte__o* exposedFaceMasks,
   Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceField_101e768
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,
              undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  pcVar10 = (char *)(_UNK_0102e99c + 0x102e790);
  uStack_34 = param_10;
  iStack_38 = param_9;
  iStack_3c = param_8;
  iStack_40 = param_7;
  uStack_44 = param_6;
  uStack_48 = param_5;
  uStack_50 = param_3;
  uStack_4c = param_4;
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e9a0 + 0x102e7d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e9a4 + 0x102e7e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102e9a8 + 0x102e7f0));
    *pcVar10 = '\x01';
  }
  iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_0102e9ac + 0x102e80c),param_8 * param_7 * param_9);
  if (0 < param_7) {
    iVar11 = 0;
    do {
      if (0 < param_8) {
        iVar9 = 0;
        do {
          if (0 < param_9) {
            iVar7 = 0;
            do {
              Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid__GetPoint_1024b84
                        (&uStack_5c,&uStack_50,iVar11,iVar9,iVar7,0);
              uVar3 = uStack_54;
              uVar2 = uStack_58;
              uVar1 = uStack_5c;
              if (*(int *)(**(int **)(_UNK_0102e9b0 + 0x102e87c) + 0x74) == 0) {
                FUN_00ec3934();
              }
              Rotatelab_Scripts_RoundedMeshGenerator__ToContainingVoxel_1023570
                        (&uStack_5c,uVar1,uVar2,uVar3);
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar5 = System_Collections_Generic_HashSet_Vector3Int___Contains_242c710
                                (param_1,uStack_5c,uStack_58,uStack_54,
                                 **(undefined4 **)(_UNK_0102e9b4 + 0x102e8d4));
              fVar6 = (float)Rotatelab_Scripts_RoundedMeshGenerator__FindNearestFaceDistance_10236e0
                                       (uVar1,uVar2,uVar3,param_2,uStack_34);
              if (iVar5 != 0) {
                fVar6 = -fVar6;
              }
              if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              uVar8 = iStack_38 * (iVar11 * iStack_3c + iVar9) + iVar7;
              if (*(uint *)(iVar4 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar7 = iVar7 + 1;
              *(float *)(iVar4 + uVar8 * 4 + 0x10) = fVar6;
              param_8 = iStack_3c;
              param_9 = iStack_38;
            } while (iVar7 < iStack_38);
          }
          iVar9 = iVar9 + 1;
          param_7 = iStack_40;
        } while (iVar9 < param_8);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_7);
  }
  return iVar4;
}

