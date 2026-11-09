/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$Generate
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__Generate (UnityEngine_Vector3Int_array* voxelGridPositions, float radius, int32_t resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$Generate
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__Generate
   (UnityEngine_Vector3Int_array* voxelGridPositions, float radius, int32_t resolution, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_RoundedMeshGenerator__Generate_1019d5c
          (undefined4 param_1,float param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar14 = (char *)(_UNK_0102a208 + 0x1029d84);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a20c + 0x1029d98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a210 + 0x1029da4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a214 + 0x1029db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a218 + 0x1029dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a21c + 0x1029dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a220 + 0x1029dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a224 + 0x1029de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102a228 + 0x1029dec));
    *pcVar14 = '\x01';
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (param_2 < 0.0) {
    param_2 = _UNK_0102a204;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  if (*(int *)(**(int **)(_UNK_0102a22c + 0x1029e10) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_Vector3Int___Get_240ece4
            (&uStack_90,&uStack_3c,**(undefined4 **)(_UNK_0102a230 + 0x1029e74));
  uVar9 = uStack_3c;
  piVar16 = *(int **)(_UNK_0102a234 + 0x1029e90);
  uStack_38 = uStack_90;
  puStack_6c = &uStack_38;
  uStack_34 = uStack_8c;
  uStack_70 = 0;
  if (*(int *)(*piVar16 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancy_101d328
            (param_1,uVar9,&uStack_48,&uStack_58);
  uVar9 = Rotatelab_Scripts_RoundedMeshGenerator__NormalizeOccupancy_101d460
                    (uStack_3c,uStack_48,uStack_44,uStack_40,&uStack_68);
  if (param_2 <= 0.0) {
    if (*(int *)(*piVar16 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar9 = Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMesh_101d718(uVar9);
    Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh_101dcec
              (uVar9,uStack_68,uStack_64,uStack_60);
  }
  else {
    pcVar14 = (char *)(_UNK_0102a23c + 0x1029f00);
    if (*pcVar14 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0102a240 + 0x1029f14));
      *pcVar14 = '\x01';
    }
    uVar8 = uStack_60;
    uVar7 = uStack_64;
    uVar6 = uStack_68;
    piVar18 = *(int **)(_UNK_0102a244 + 0x1029f28);
    puVar12 = *(undefined4 **)(*piVar18 + 0x5c);
    uVar13 = *puVar12;
    uVar15 = puVar12[1];
    uVar17 = puVar12[2];
    if (*(int *)(*piVar16 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_RoundedMeshGenerator__FillNarrowGaps_101de7c
              (uVar9,uVar13,uVar15,uVar17,uVar6,uVar7,uVar8);
    if (*pcVar14 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0102a248 + 0x1029fa0));
      *pcVar14 = '\x01';
    }
    uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_88 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puVar12 = *(undefined4 **)(*piVar18 + 0x5c);
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_7c = uStack_8c;
    uStack_78 = uStack_88;
    uStack_74 = uStack_84;
    Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid___ctor_10248c8
              (&uStack_90,*puVar12,puVar12[1],puVar12[2],uVar6,uVar7,uVar8,param_2,param_3,0);
    uVar5 = uStack_74;
    uVar4 = uStack_78;
    uVar3 = uStack_7c;
    uVar2 = uStack_80;
    uVar1 = uStack_84;
    uVar17 = uStack_88;
    uVar15 = uStack_8c;
    uVar13 = uStack_90;
    uVar10 = Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks_101e3f4(uVar9);
    uVar9 = Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceField_101e768
                      (uVar9,uVar10,uVar13,uVar15,uVar17,uVar1,uVar2,uVar3,uVar4,uVar5);
    uVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102a24c + 0x102a07c));
    System_Collections_Generic_List_Vector3____ctor_26fc30c
              (uVar10,**(undefined4 **)(_UNK_0102a250 + 0x102a090));
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102a254 + 0x102a0a4));
    System_Collections_Generic_List_int____ctor_261b0bc
              (uVar11,**(undefined4 **)(_UNK_0102a258 + 0x102a0b8));
    Rotatelab_Scripts_RoundedMeshGenerator__BuildSurface_101e9b8
              (uVar9,uVar13,uVar15,uVar17,uVar1,uVar2,uVar3,uVar4,uVar5,uVar10,uVar11);
    uVar9 = Rotatelab_Scripts_RoundedMeshGenerator__CreateMesh_101f408
                      (uVar10,uVar11,param_2,param_3);
    Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh_101dcec(uVar9,uVar6,uVar7,uVar8);
  }
  Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
            (&uStack_38,**(undefined4 **)(_UNK_0102a238 + 0x102a158));
  return uVar9;
}

