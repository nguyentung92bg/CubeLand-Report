/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildOccupancyWithGroup
void Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancyWithGroup (UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels, System_Collections_Generic_HashSet_Vector3Int__o* occupancy, System_Collections_Generic_Dictionary_Vector3Int__byte__o* groupIds, UnityEngine_Vector3Int_o* min, UnityEngine_Vector3Int_o* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildOccupancyWithGroup
   void Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancyWithGroup
   (UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels,
   System_Collections_Generic_HashSet_Vector3Int__o* occupancy,
   System_Collections_Generic_Dictionary_Vector3Int__byte__o* groupIds, UnityEngine_Vector3Int_o*
   min, UnityEngine_Vector3Int_o* max, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancyWithGroup_101f788
               (int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  pcVar4 = (char *)(_UNK_0102f9ec + 0x102f7ac);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f9f0 + 0x102f7c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f9f4 + 0x102f7cc));
    *pcVar4 = '\x01';
  }
  piVar9 = (int *)(param_1 + 0x10);
  uVar6 = 0;
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar6) {
      uVar6 = 0;
      piVar9 = (int *)(param_2 + 0x10);
      while( true ) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar6) {
          return;
        }
        if (*(uint *)(param_2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar7 = *piVar9;
        iVar5 = piVar9[1];
        iVar8 = piVar9[2];
        if (param_3 == 0) break;
        iVar1 = System_Collections_Generic_HashSet_Vector3Int___Add_242d4ac
                          (param_3,iVar7,iVar5,iVar8,**(undefined4 **)(_UNK_0102fa00 + 0x102f940));
        if (iVar1 != 0) {
          if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_Dictionary_Vector3Int__byte___set_Item_20b525c
                    (param_4,iVar7,iVar5,iVar8,1,**(undefined4 **)(_UNK_0102fa04 + 0x102f97c));
          iVar1 = param_5[2];
          if (iVar8 <= param_5[2]) {
            iVar1 = iVar8;
          }
          iVar3 = param_5[1];
          if (iVar5 <= param_5[1]) {
            iVar3 = iVar5;
          }
          iVar2 = *param_5;
          if (iVar7 <= *param_5) {
            iVar2 = iVar7;
          }
          *param_5 = iVar2;
          param_5[1] = iVar3;
          param_5[2] = iVar1;
          if (iVar8 < param_6[2]) {
            iVar8 = param_6[2];
          }
          if (iVar5 < param_6[1]) {
            iVar5 = param_6[1];
          }
          if (iVar7 < *param_6) {
            iVar7 = *param_6;
          }
          param_6[1] = iVar5;
          param_6[2] = iVar8;
          *param_6 = iVar7;
        }
        piVar9 = piVar9 + 3;
        uVar6 = uVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(param_1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *piVar9;
    iVar7 = piVar9[1];
    iVar5 = piVar9[2];
    if (param_3 == 0) break;
    iVar1 = System_Collections_Generic_HashSet_Vector3Int___Add_242d4ac
                      (param_3,iVar8,iVar7,iVar5,**(undefined4 **)(_UNK_0102f9f8 + 0x102f834));
    if (iVar1 != 0) {
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Vector3Int__byte___set_Item_20b525c
                (param_4,iVar8,iVar7,iVar5,0,**(undefined4 **)(_UNK_0102f9fc + 0x102f870));
      iVar1 = param_5[2];
      if (iVar5 <= param_5[2]) {
        iVar1 = iVar5;
      }
      iVar3 = param_5[1];
      if (iVar7 <= param_5[1]) {
        iVar3 = iVar7;
      }
      iVar2 = *param_5;
      if (iVar8 <= *param_5) {
        iVar2 = iVar8;
      }
      *param_5 = iVar2;
      param_5[1] = iVar3;
      param_5[2] = iVar1;
      if (iVar5 < param_6[2]) {
        iVar5 = param_6[2];
      }
      param_6[2] = iVar5;
      if (iVar7 < param_6[1]) {
        iVar7 = param_6[1];
      }
      if (iVar8 < *param_6) {
        iVar8 = *param_6;
      }
      param_6[1] = iVar7;
      *param_6 = iVar8;
    }
    piVar9 = piVar9 + 3;
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

