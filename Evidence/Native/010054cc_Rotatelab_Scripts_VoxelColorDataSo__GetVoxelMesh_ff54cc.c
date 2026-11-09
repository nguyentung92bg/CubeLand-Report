/* IL2CPP: Rotatelab.Scripts.VoxelColorDataSo$$GetVoxelMesh
UnityEngine_Mesh_o* Rotatelab_Scripts_VoxelColorDataSo__GetVoxelMesh (Rotatelab_Scripts_VoxelColorDataSo_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelColorDataSo$$GetVoxelMesh
   UnityEngine_Mesh_o* Rotatelab_Scripts_VoxelColorDataSo__GetVoxelMesh
   (Rotatelab_Scripts_VoxelColorDataSo_o* __this, int32_t colorType, const MethodInfo* method); */

int Rotatelab_Scripts_VoxelColorDataSo__GetVoxelMesh_ff54cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  
  pcVar7 = (char *)(_UNK_010056c8 + 0x10054e8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010056cc + 0x10054fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010056d0 + 0x1005508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010056d4 + 0x1005514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010056d8 + 0x1005520));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(param_1,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(_UNK_010056dc + 0x1005554);
  piVar6 = (int *)(iVar1 + 0x44);
  iVar8 = *piVar6;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = UnityEngine_Object__op_Equality_36033f4(iVar8,0,0);
  if (iVar8 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Mesh__get_vertexCount_35cf988(*(int *)(param_1 + 0x10),0);
    uVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_010056e0 + 0x10055b0),uVar2);
    uVar3 = UnityEngine_Mathf__GammaToLinearSpace_35e73ac(*(undefined4 *)(iVar1 + 0xc),0);
    uVar4 = UnityEngine_Mathf__GammaToLinearSpace_35e73ac(*(undefined4 *)(iVar1 + 0x10),0);
    uVar5 = UnityEngine_Mathf__GammaToLinearSpace_35e73ac(*(undefined4 *)(iVar1 + 0x14),0);
    uVar3 = FUN_01011a24(uVar3,uVar4,uVar5,*(undefined4 *)(iVar1 + 0x18),0);
    System_Array__Fill_Color32__163b5f4(uVar2,uVar3,**(undefined4 **)(_UNK_010056e4 + 0x100560c));
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__Instantiate_object__14d4b10
                      (uVar3,**(undefined4 **)(_UNK_010056e8 + 0x1005638));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Object__set_hideFlags_3609e5c(iVar1,0x3d,0);
    UnityEngine_Mesh__set_colors32_35d0dec(iVar1,uVar2,0);
    UnityEngine_Mesh__UploadMeshData_35d2b14(iVar1,1,0);
    *piVar6 = iVar1;
    thunk_FUN_00ec5080(piVar6,iVar1);
  }
  return *piVar6;
}

