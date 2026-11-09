/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateTwoColorMesh
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateTwoColorMesh (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o* triangles, int32_t seamAxis, float seamCoord, uint8_t plusSubmesh, uint8_t minusSubmesh, float radius, int32_t resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateTwoColorMesh
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateTwoColorMesh
   (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_int__o*
   triangles, int32_t seamAxis, float seamCoord, uint8_t plusSubmesh, uint8_t minusSubmesh, float
   radius, int32_t resolution, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__CreateTwoColorMesh_1020478
              (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,float param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  double dVar11;
  double dVar12;
  double dStack_40;
  
  pcVar3 = (char *)(_UNK_01030948 + 0x10304a4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103094c + 0x10304b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030950 + 0x10304c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030954 + 0x10304d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030958 + 0x10304dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103095c + 0x10304e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030960 + 0x10304f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030964 + 0x1030500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030968 + 0x103050c));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103096c + 0x1030528));
  UnityEngine_Mesh___ctor_35ce724(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Object__set_name_360832c(iVar1,**(undefined4 **)(_UNK_01030970 + 0x1030550),0);
  UnityEngine_Object__set_hideFlags_3609e5c(iVar1,0x3d,0);
  fVar10 = (float)VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x16) & 3);
  pcVar3 = (char *)(_UNK_01030978 + 0x10305a0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103097c + 0x10305b8));
    *pcVar3 = '\x01';
  }
  fVar10 = fVar10 * param_7 + fVar10 * param_7;
  if (*(int *)(**(int **)(_UNK_01030980 + 0x10305d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar11 = (double)fVar10;
  dVar12 = (double)modf(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),&dStack_40);
  if (0.0 <= fVar10) {
    if (dVar12 != 0.5) {
      dVar11 = (double)floor(SUB84(dVar11 + 0.5,0),(int)((ulonglong)(dVar11 + 0.5) >> 0x20));
      goto LAB_0103066c;
    }
    dVar11 = 1.0;
  }
  else {
    if (dVar12 != -0.5) {
      dVar11 = (double)ceil(SUB84(dVar11 + -0.5,0),(int)((ulonglong)(dVar11 + -0.5) >> 0x20));
      goto LAB_0103066c;
    }
    dVar11 = -1.0;
  }
  uVar2 = FUN_00f88224(SUB84(dStack_40,0),(int)((ulonglong)dStack_40 >> 0x20));
  dVar11 = dStack_40 + dVar11;
  if ((uVar2 & 1) == 0) {
    dVar11 = dStack_40;
  }
LAB_0103066c:
  iVar4 = (int)(longlong)dVar11;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (dVar11 == _UNK_01030940) {
    iVar4 = 1;
  }
  if (*(int *)(**(int **)(_UNK_01030984 + 0x103067c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_RoundedMeshGenerator__HCLaplacianSmooth_1020b04
            (param_1,param_2,iVar4,0,0x3f000000);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_01030988 + 0x10306e4);
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  iVar4 = thunk_FUN_00f00cdc(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0103098c + 0x1030700);
  System_Collections_Generic_List_int____ctor_261b130(iVar4,uVar8,*puVar6);
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  uVar8 = thunk_FUN_00f00cdc(*puVar5);
  System_Collections_Generic_List_int____ctor_261b130(uVar8,uVar7,*puVar6);
  if (param_3 < 0) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_int___AddRange_261bb58
              (iVar4,param_2,**(undefined4 **)(_UNK_01030990 + 0x10307a4));
    piVar9 = *(int **)(_UNK_01030994 + 0x10307b8);
  }
  else {
    piVar9 = *(int **)(_UNK_01030998 + 0x1030748);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_RoundedMeshGenerator__ClipTrianglesAtPlane_102163c
              (param_1,param_2,param_3,param_4,param_5,param_6,iVar4,uVar8);
  }
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
    UnityEngine_Mesh__set_subMeshCount_35cfb60(iVar1,2,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar1,iVar4,0,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar1,uVar8,1,0);
    UnityEngine_Mesh__RecalculateNormals_35d2a24(iVar1,0);
    uVar8 = UnityEngine_Mesh__get_normals_35d0b10(iVar1,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = Rotatelab_Scripts_RoundedMeshGenerator__BuildBoxProjectionUvs_1021efc(param_1,uVar8);
    if (iVar1 != 0) {
      UnityEngine_Mesh__set_uv_35d0ca0(iVar1,uVar8,0);
      UnityEngine_Mesh__RecalculateBounds_35d2954(iVar1,0);
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

