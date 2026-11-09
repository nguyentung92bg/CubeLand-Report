/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$Generate
UnityEngine_Mesh_o* Rotatelab_Scripts_SeamRibbonMeshGenerator__Generate (UnityEngine_Vector3_o localBoundsSize, int32_t seamAxis, float seamLocal, float stripHeight, int32_t cornerSegments, float radiusScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$Generate
   UnityEngine_Mesh_o* Rotatelab_Scripts_SeamRibbonMeshGenerator__Generate (UnityEngine_Vector3_o
   localBoundsSize, int32_t seamAxis, float seamLocal, float stripHeight, int32_t cornerSegments,
   float radiusScale, const MethodInfo* method); */

int Rotatelab_Scripts_SeamRibbonMeshGenerator__Generate_1024d70
              (float param_1,float param_2,float param_3,int param_4,float param_5,float param_6,
              int param_7,float param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fStack_64;
  double dStack_60;
  
  pcVar7 = (char *)(_UNK_010352d8 + 0x1034d98);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352dc + 0x1034db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352e0 + 0x1034dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352e4 + 0x1034dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352e8 + 0x1034dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352ec + 0x1034de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352f0 + 0x1034dec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352f4 + 0x1034df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010352f8 + 0x1034e04));
    *pcVar7 = '\x01';
  }
  fStack_64 = 0.0;
  iVar8 = (param_4 + 1) % 3;
  fVar13 = param_1;
  if ((((iVar8 != 0) && (fVar13 = param_3, iVar8 != 2)) && (fVar13 = param_2, iVar8 != 1)) ||
     (((iVar12 = (param_4 + 2) % 3, fVar14 = param_1, iVar12 != 0 && (fVar14 = param_3, iVar12 != 2)
       ) && (fVar14 = param_2, iVar12 != 1)))) {
LAB_01035280:
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01035328 + 0x103528c));
    uVar2 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0103532c + 0x10352a0));
    System_IndexOutOfRangeException___ctor_2b69538(uVar2,uVar4,0);
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01035330 + 0x10352bc));
    func_0x00ec3920(uVar2,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  fVar14 = fVar14 * 0.5;
  fVar13 = fVar13 * 0.5;
  fVar15 = fVar14;
  if (fVar13 < fVar14) {
    fVar15 = fVar13;
  }
  fVar15 = fVar15 * _UNK_0103527c;
  if (1.0 < fVar15) {
    fVar15 = 1.0;
  }
  if (((param_4 != 0) && (param_1 = param_3, param_4 != 2)) && (param_1 = param_2, param_4 != 1))
  goto LAB_01035280;
  fVar15 = fVar15 * param_8;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010352fc + 0x1034efc));
  System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample____ctor_2764700
            (iVar1,param_7 * 4 + 4,**(undefined4 **)(_UNK_01035300 + 0x1034f20));
  piVar11 = *(int **)(_UNK_01035304 + 0x1034f40);
  if (param_6 < param_1) {
    param_1 = param_6;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildPerimeter_1025334
            (iVar1,fVar13 - fVar15,fVar14 - fVar15,fVar15,param_7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) < 3) {
    return 0;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_SeamRibbonMeshGenerator__ComputeArcLengths_10256ac(iVar1,&fStack_64);
  fVar13 = fStack_64;
  pcVar7 = (char *)(_UNK_01035308 + 0x1034fbc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103530c + 0x1034fd0));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01035310 + 0x1034fec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar16 = (double)fVar13;
  dVar17 = (double)modf(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),&dStack_60);
  if (0.0 <= fVar13) {
    if (dVar17 != 0.5) {
      dVar16 = (double)floor(SUB84(dVar16 + 0.5,0),(int)((ulonglong)(dVar16 + 0.5) >> 0x20));
      goto LAB_01035094;
    }
    dVar16 = 1.0;
  }
  else {
    if (dVar17 != -0.5) {
      dVar16 = (double)ceil(SUB84(dVar16 + -0.5,0),(int)((ulonglong)(dVar16 + -0.5) >> 0x20));
      goto LAB_01035094;
    }
    dVar16 = -1.0;
  }
  uVar3 = FUN_00f88224(SUB84(dStack_60,0),(int)((ulonglong)dStack_60 >> 0x20));
  dVar16 = dStack_60 + dVar16;
  if ((uVar3 & 1) == 0) {
    dVar16 = dStack_60;
  }
LAB_01035094:
  iVar10 = *(int *)(iVar1 + 0xc) * 2 + 2;
  puVar9 = *(undefined4 **)(_UNK_01035314 + 0x10350ac);
  uVar4 = FUN_00ec388c(*puVar9,iVar10);
  uVar5 = FUN_00ec388c(*puVar9,iVar10);
  uVar6 = FUN_00ec388c(**(undefined4 **)(_UNK_01035318 + 0x10350d8),iVar10);
  iVar10 = (int)(longlong)dVar16;
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  if (dVar16 == _UNK_010352d0) {
    iVar10 = 1;
  }
  Rotatelab_Scripts_SeamRibbonMeshGenerator__WriteRibbonVertices_1025974
            (iVar1,uVar2,fVar13,iVar10,iVar8,iVar12,param_4,param_1 * 0.5 + param_5,
             param_5 - param_1 * 0.5,uVar4,uVar5,uVar6);
  uVar2 = Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildTriangleIndices_1025f78
                    (*(undefined4 *)(iVar1 + 0xc));
  iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103531c + 0x1035144));
  UnityEngine_Mesh___ctor_35ce724(iVar8,0);
  if (iVar8 != 0) {
    UnityEngine_Object__set_name_360832c(iVar8,**(undefined4 **)(_UNK_01035320 + 0x103516c),0);
    UnityEngine_Object__set_hideFlags_3609e5c(iVar8,0x3d,0);
    UnityEngine_Mesh__SetVertices_35d0f84(iVar8,uVar4,0);
    UnityEngine_Mesh__SetNormals_35d11a0(iVar8,uVar5,0);
    UnityEngine_Mesh__SetUVs_35d1834(iVar8,0,uVar6,0);
    UnityEngine_Mesh__SetTriangles_35d24cc(iVar8,uVar2,0,0);
    UnityEngine_Mesh__RecalculateBounds_35d2954(iVar8,0);
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

