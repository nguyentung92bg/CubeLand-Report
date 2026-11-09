/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateMesh
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateMesh (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o* triangles, float radius, int32_t resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateMesh
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateMesh
   (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o*
   triangles, float radius, int32_t resolution, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__CreateMesh_101f408
              (int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  double dVar8;
  double dVar9;
  double dStack_38;
  
  pcVar4 = (char *)(_UNK_0102f758 + 0x102f42c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f75c + 0x102f444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f760 + 0x102f450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f764 + 0x102f45c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f768 + 0x102f468));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102f76c + 0x102f480));
  UnityEngine_Mesh___ctor_35ce724(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Object__set_name_360832c(iVar1,**(undefined4 **)(_UNK_0102f770 + 0x102f4a8),0);
  UnityEngine_Object__set_hideFlags_3609e5c(iVar1,0x3d,0);
  fVar7 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  pcVar4 = (char *)(_UNK_0102f778 + 0x102f4f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102f77c + 0x102f510));
    *pcVar4 = '\x01';
  }
  fVar7 = fVar7 * param_3 + fVar7 * param_3;
  if (*(int *)(**(int **)(_UNK_0102f780 + 0x102f528) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar8 = (double)fVar7;
  dVar9 = (double)modf(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&dStack_38);
  if (0.0 <= fVar7) {
    if (dVar9 != 0.5) {
      dVar8 = (double)floor(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
      goto LAB_0102f5c4;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      dVar8 = (double)ceil(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20));
      goto LAB_0102f5c4;
    }
    dVar8 = -1.0;
  }
  uVar2 = FUN_00f88224(SUB84(dStack_38,0),(int)((ulonglong)dStack_38 >> 0x20));
  dVar8 = dStack_38 + dVar8;
  if ((uVar2 & 1) == 0) {
    dVar8 = dStack_38;
  }
LAB_0102f5c4:
  iVar5 = (int)(longlong)dVar8;
  piVar6 = *(int **)(_UNK_0102f784 + 0x102f5d4);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  if (dVar8 == _UNK_0102f750) {
    iVar5 = 1;
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_RoundedMeshGenerator__HCLaplacianSmooth_1020b04
            (param_1,param_2,iVar5,0,0x3f000000);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0xffff < *(int *)(param_1 + 0xc)) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Mesh__set_indexFormat_35ce7cc(iVar1,1,0);
  }
  if (iVar1 != 0) {
    UnityEngine_Mesh__SetVertices_35d0e6c(iVar1,param_1,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar1,param_2,0,0);
    UnityEngine_Mesh__RecalculateNormals_35d2a24(iVar1,0);
    uVar3 = UnityEngine_Mesh__get_normals_35d0b10(iVar1,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Scripts_RoundedMeshGenerator__BuildBoxProjectionUvs_1021efc(param_1,uVar3);
    if (iVar1 != 0) {
      UnityEngine_Mesh__set_uv_35d0ca0(iVar1,uVar3,0);
      UnityEngine_Mesh__RecalculateBounds_35d2954(iVar1,0);
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

