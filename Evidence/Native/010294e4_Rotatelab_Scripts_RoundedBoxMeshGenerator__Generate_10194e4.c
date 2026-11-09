/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$Generate
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedBoxMeshGenerator__Generate (UnityEngine_Vector3_o size, float radius, int32_t segments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$Generate
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedBoxMeshGenerator__Generate (UnityEngine_Vector3_o
   size, float radius, int32_t segments, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedBoxMeshGenerator__Generate_10194e4
              (float param_1,float param_2,float param_3,float param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  pcVar18 = (char *)(_UNK_01029cd4 + 0x102950c);
  if (*pcVar18 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cd8 + 0x1029528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cdc + 0x1029534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029ce0 + 0x1029540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029ce4 + 0x102954c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029ce8 + 0x1029558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cec + 0x1029564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cf0 + 0x1029570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cf4 + 0x102957c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cf8 + 0x1029588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029cfc + 0x1029594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029d00 + 0x10295a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029d04 + 0x10295ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01029d08 + 0x10295b8));
    *pcVar18 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_64 = 0;
  uStack_60 = 0;
  fVar24 = param_2 * 0.5;
  fVar22 = param_3 * 0.5;
  uStack_50 = 0;
  fVar26 = param_1 * 0.5;
  fVar23 = fVar22;
  if (fVar24 < fVar22) {
    fVar23 = fVar24;
  }
  if (fVar26 < fVar23) {
    fVar23 = fVar26;
  }
  fVar21 = param_4;
  if (fVar23 < param_4) {
    fVar21 = fVar23;
  }
  if (param_4 < 0.0) {
    fVar21 = _UNK_0102970c;
  }
  if (param_5 < 2) {
    param_5 = 1;
  }
  Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey___ctor_101b310
            (&uStack_60,param_1,param_2,param_3,fVar21,param_5);
  piVar20 = *(int **)(_UNK_01029d0c + 0x102965c);
  iVar6 = *piVar20;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar20;
  }
  uVar5 = uStack_50;
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = uStack_5c;
  uVar1 = uStack_60;
  if (**(int **)(iVar6 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = System_Collections_Generic_Dictionary_RoundedBoxMeshGenerator_CacheKey__object___TryGetValue_20c9d78
                    (**(int **)(iVar6 + 0x5c),uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                     &iStack_64,**(undefined4 **)(_UNK_01029d10 + 0x10296ac));
  iVar6 = iStack_64;
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01029d14 + 0x10296d8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
    if (iVar6 != 0) {
      return iStack_64;
    }
  }
  if (fVar21 <= 0.0) {
    if (*(int *)(*piVar20 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = Rotatelab_Scripts_RoundedBoxMeshGenerator__CreateSharpBoxMesh_101b35c
                      (fVar26,fVar24,fVar22);
    iVar7 = **(int **)(*piVar20 + 0x5c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = **(undefined4 **)(_UNK_01029d18 + 0x1029b8c);
  }
  else {
    pcVar18 = (char *)(_UNK_01029d1c + 0x1029740);
    if (*pcVar18 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01029d20 + 0x1029754));
      *pcVar18 = '\x01';
    }
    iVar6 = *(int *)(**(int **)(_UNK_01029d24 + 0x1029774) + 0x5c);
    fVar27 = fVar26 - fVar21 * *(float *)(iVar6 + 0xc);
    fVar25 = fVar24 - fVar21 * *(float *)(iVar6 + 0x10);
    fVar23 = fVar22 - fVar21 * *(float *)(iVar6 + 0x14);
    if (*(int *)(*piVar20 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = Rotatelab_Scripts_RoundedBoxMeshGenerator__BuildAxis_101b6ec(fVar26,fVar27,param_5);
    iVar7 = Rotatelab_Scripts_RoundedBoxMeshGenerator__BuildAxis_101b6ec(fVar24,fVar25,param_5);
    iVar8 = Rotatelab_Scripts_RoundedBoxMeshGenerator__BuildAxis_101b6ec(fVar22,fVar23,param_5);
    iVar9 = FUN_00ec388c(**(undefined4 **)(_UNK_01029d28 + 0x10297fc),3);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar9 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)(iVar9 + 0x10) = iVar6;
    thunk_FUN_00ec5080((int *)(iVar9 + 0x10),iVar6);
    if (*(uint *)(iVar9 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)(iVar9 + 0x14) = iVar7;
    thunk_FUN_00ec5080((int *)(iVar9 + 0x14),iVar7);
    if (*(uint *)(iVar9 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)(iVar9 + 0x18) = iVar8;
    thunk_FUN_00ec5080((int *)(iVar9 + 0x18),iVar8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar15 = *(int *)(iVar6 + 0xc);
    iVar6 = *(int *)(iVar7 + 0xc);
    iVar8 = *(int *)(iVar8 + 0xc);
    puVar19 = *(undefined4 **)(_UNK_01029d2c + 0x10298c8);
    iVar7 = ((iVar6 + iVar15) * iVar8 + iVar6 * iVar15) * 2;
    uVar10 = thunk_FUN_00f00cdc(*puVar19);
    puVar17 = *(undefined4 **)(_UNK_01029d30 + 0x10298e4);
    System_Collections_Generic_List_Vector3____ctor_26fc380(uVar10,iVar7,*puVar17);
    uVar11 = thunk_FUN_00f00cdc(*puVar19);
    System_Collections_Generic_List_Vector3____ctor_26fc380(uVar11,iVar7,*puVar17);
    uVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01029d34 + 0x1029910));
    System_Collections_Generic_List_Vector2____ctor_26f96d0
              (uVar12,iVar7,**(undefined4 **)(_UNK_01029d38 + 0x1029920));
    uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01029d3c + 0x1029954));
    System_Collections_Generic_List_int____ctor_261b130
              (uVar13,((iVar8 + -1) * (iVar6 + -1 + iVar15 + -1) + (iVar6 + -1) * (iVar15 + -1)) *
                      0xc,**(undefined4 **)(_UNK_01029d40 + 0x1029968));
    uVar16 = 2;
    iVar6 = 0;
    do {
      iVar15 = iVar6 + 1;
      iVar8 = 0;
      if (iVar6 != 2) {
        iVar8 = iVar15;
      }
      iVar14 = iVar6 + (uVar16 / 3) * -3 + 2;
      if (*(int *)(**(int **)(_UNK_01029d44 + 0x10299b0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendFace_101b880
                (uVar10,uVar11,uVar12,uVar13,iVar9,fVar26,fVar24,fVar22,fVar27,fVar25,fVar23,fVar21,
                 iVar6,iVar8,iVar14,0xffffffff);
      Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendFace_101b880
                (uVar10,uVar11,uVar12,uVar13,iVar9,fVar26,fVar24,fVar22,fVar27,fVar25,fVar23,fVar21,
                 iVar6,iVar8,iVar14,1);
      uVar16 = uVar16 + 1;
      iVar6 = iVar15;
    } while (iVar15 != 3);
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01029d48 + 0x1029a80));
    UnityEngine_Mesh___ctor_35ce724(iVar6,0);
    piVar20 = *(int **)(_UNK_01029d4c + 0x1029aa0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Object__set_name_360832c(iVar6,**(undefined4 **)(_UNK_01029d54 + 0x1029ab0),0);
    UnityEngine_Object__set_hideFlags_3609e5c(iVar6,0x3d,0);
    if (0xffff < iVar7) {
      UnityEngine_Mesh__set_indexFormat_35ce7cc(iVar6,1,0);
    }
    UnityEngine_Mesh__SetVertices_35d0e6c(iVar6,uVar10,0);
    UnityEngine_Mesh__SetNormals_35d1088(iVar6,uVar11,0);
    UnityEngine_Mesh__SetUVs_35d14e0(iVar6,0,uVar12,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar6,uVar13,0,0);
    UnityEngine_Mesh__RecalculateBounds_35d2954(iVar6,0);
    iVar7 = *piVar20;
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      iVar7 = *piVar20;
    }
    iVar7 = **(int **)(iVar7 + 0x5c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = **(undefined4 **)(_UNK_01029d58 + 0x1029ca0);
  }
  System_Collections_Generic_Dictionary_RoundedBoxMeshGenerator_CacheKey__object___set_Item_20c78f0
            (iVar7,uVar1,uVar2,uVar3,uVar4,uVar5,iVar6,uVar10);
  return iVar6;
}

