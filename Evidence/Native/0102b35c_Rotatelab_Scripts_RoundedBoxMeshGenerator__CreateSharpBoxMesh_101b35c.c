/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$CreateSharpBoxMesh
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedBoxMeshGenerator__CreateSharpBoxMesh (UnityEngine_Vector3_o halfExtents, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$CreateSharpBoxMesh
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedBoxMeshGenerator__CreateSharpBoxMesh
   (UnityEngine_Vector3_o halfExtents, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedBoxMeshGenerator__CreateSharpBoxMesh_101b35c
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  pcVar8 = (char *)(_UNK_0102b69c + 0x102b37c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6a0 + 0x102b390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6a4 + 0x102b39c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6a8 + 0x102b3a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6ac + 0x102b3b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6b0 + 0x102b3c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6b4 + 0x102b3cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6b8 + 0x102b3d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6bc + 0x102b3e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b6c0 + 0x102b3f0));
    *pcVar8 = '\x01';
  }
  puVar9 = *(undefined4 **)(_UNK_0102b6c4 + 0x102b404);
  uVar1 = thunk_FUN_00f00cdc(*puVar9);
  puVar10 = *(undefined4 **)(_UNK_0102b6c8 + 0x102b418);
  System_Collections_Generic_List_Vector3____ctor_26fc380(uVar1,0x18,*puVar10);
  uVar2 = thunk_FUN_00f00cdc(*puVar9);
  System_Collections_Generic_List_Vector3____ctor_26fc380(uVar2,0x18,*puVar10);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102b6cc + 0x102b444));
  System_Collections_Generic_List_Vector2____ctor_26f96d0
            (uVar3,0x18,**(undefined4 **)(_UNK_0102b6d0 + 0x102b454));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102b6d4 + 0x102b46c));
  System_Collections_Generic_List_int____ctor_261b130
            (uVar4,0x24,**(undefined4 **)(_UNK_0102b6d8 + 0x102b47c));
  uVar5 = 2;
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 1;
    iVar12 = 0;
    if (iVar6 != 2) {
      iVar12 = iVar7;
    }
    iVar11 = iVar6 + (uVar5 / 3) * -3 + 2;
    if (*(int *)(**(int **)(_UNK_0102b6dc + 0x102b4cc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendSharpFace_101c5c0
              (uVar1,uVar2,uVar3,uVar4,param_1,param_2,param_3,iVar6,iVar12,iVar11,0xffffffff);
    Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendSharpFace_101c5c0
              (uVar1,uVar2,uVar3,uVar4,param_1,param_2,param_3,iVar6,iVar12,iVar11,1);
    uVar5 = uVar5 + 1;
    iVar6 = iVar7;
  } while (iVar7 != 3);
  iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102b6e0 + 0x102b56c));
  UnityEngine_Mesh___ctor_35ce724(iVar6,0);
  if (iVar6 != 0) {
    UnityEngine_Object__set_name_360832c(iVar6,**(undefined4 **)(_UNK_0102b6e4 + 0x102b594),0);
    UnityEngine_Object__set_hideFlags_3609e5c(iVar6,0x3d,0);
    UnityEngine_Mesh__SetVertices_35d0e6c(iVar6,uVar1,0);
    UnityEngine_Mesh__SetNormals_35d1088(iVar6,uVar2,0);
    UnityEngine_Mesh__SetUVs_35d14e0(iVar6,0,uVar3,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar6,uVar4,0,0);
    UnityEngine_Mesh__RecalculateBounds_35d2954(iVar6,0);
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

