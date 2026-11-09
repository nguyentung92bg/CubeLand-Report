/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildOccupancy
void Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancy (UnityEngine_Vector3Int_array* voxelGridPositions, System_Collections_Generic_HashSet_Vector3Int__o* occupancy, UnityEngine_Vector3Int_o* min, UnityEngine_Vector3Int_o* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildOccupancy
   void Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancy (UnityEngine_Vector3Int_array*
   voxelGridPositions, System_Collections_Generic_HashSet_Vector3Int__o* occupancy,
   UnityEngine_Vector3Int_o* min, UnityEngine_Vector3Int_o* max, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancy_101d328
               (int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  pcVar4 = (char *)(_UNK_0102d454 + 0x102d34c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d458 + 0x102d360));
    *pcVar4 = '\x01';
  }
  piVar6 = (int *)(param_1 + 0x10);
  *param_3 = 0x7fffffff;
  uVar9 = 0;
  param_3[1] = 0x7fffffff;
  param_3[2] = 0x7fffffff;
  *param_4 = -0x80000000;
  param_4[1] = -0x80000000;
  param_4[2] = -0x80000000;
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar9) {
      return;
    }
    if (*(uint *)(param_1 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar7 = piVar6[2];
    iVar5 = *piVar6;
    iVar8 = piVar6[1];
    if (param_2 == 0) break;
    iVar1 = System_Collections_Generic_HashSet_Vector3Int___Add_242d4ac
                      (param_2,iVar5,iVar8,iVar7,**(undefined4 **)(_UNK_0102d45c + 0x102d3e8));
    if (iVar1 != 0) {
      iVar1 = param_3[2];
      if (iVar7 <= param_3[2]) {
        iVar1 = iVar7;
      }
      iVar3 = param_3[1];
      if (iVar8 <= param_3[1]) {
        iVar3 = iVar8;
      }
      iVar2 = *param_3;
      if (iVar5 <= *param_3) {
        iVar2 = iVar5;
      }
      *param_3 = iVar2;
      param_3[1] = iVar3;
      param_3[2] = iVar1;
      if (iVar7 < param_4[2]) {
        iVar7 = param_4[2];
      }
      param_4[2] = iVar7;
      if (iVar8 < param_4[1]) {
        iVar8 = param_4[1];
      }
      if (iVar5 < *param_4) {
        iVar5 = *param_4;
      }
      *param_4 = iVar5;
      param_4[1] = iVar8;
    }
    piVar6 = piVar6 + 3;
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

