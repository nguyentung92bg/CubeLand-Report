/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$GenerateTwoColor
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__GenerateTwoColor (UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels, float radius, int32_t resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0102a7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$GenerateTwoColor
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__GenerateTwoColor
   (UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels, float
   radius, int32_t resolution, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_RoundedMeshGenerator__GenerateTwoColor_101a260
          (int param_1,int param_2,float param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 *puVar28;
  float fVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 *puStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 *puStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar18 = (char *)(_UNK_0102ae90 + 0x102a288);
  if (*pcVar18 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102ae94 + 0x102a2a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102ae98 + 0x102a2ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102ae9c + 0x102a2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aea0 + 0x102a2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aea4 + 0x102a2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aea8 + 0x102a2dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aeac + 0x102a2e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aeb0 + 0x102a2f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aeb4 + 0x102a300));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aeb8 + 0x102a30c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aebc + 0x102a318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aec0 + 0x102a324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aec4 + 0x102a330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aec8 + 0x102a33c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aecc + 0x102a348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aed0 + 0x102a354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aed4 + 0x102a360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aed8 + 0x102a36c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aedc + 0x102a378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aee0 + 0x102a384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aee4 + 0x102a390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102aee8 + 0x102a39c));
    *pcVar18 = '\x01';
  }
  fStack_a4 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_a0 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_9c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_70 = 0.0;
  uStack_60 = 0;
  fStack_88 = 0.0;
  uStack_78 = 0;
  uStack_a8 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iStack_3c = 0;
  iStack_44 = 0;
  iStack_48 = 0;
  if (param_3 < 0.0) {
    param_3 = _UNK_0102a790;
  }
  if (param_4 < 2) {
    param_4 = 1;
  }
  iStack_40 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_74 = 0;
  iStack_8c = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  fStack_84 = fStack_a4;
  fStack_80 = fStack_a0;
  uStack_7c = iStack_9c;
  fStack_6c = fStack_a4;
  fStack_68 = fStack_a0;
  uStack_64 = iStack_9c;
  if (*(int *)(**(int **)(_UNK_0102aeec + 0x102a3c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_Vector3Int___Get_240ece4
            (&uStack_d0,&iStack_3c,**(undefined4 **)(_UNK_0102aef0 + 0x102a460));
  uStack_38 = uStack_d0;
  puStack_ac = &uStack_38;
  uStack_34 = puStack_cc;
  iStack_b0 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar28 = *(undefined4 **)(_UNK_0102aef4 + 0x102a4b0);
  iVar11 = thunk_FUN_00f00cdc(*puVar28);
  puVar24 = *(undefined4 **)(_UNK_0102aef8 + 0x102a4d8);
  System_Collections_Generic_Dictionary_Vector3Int__byte____ctor_20b47f8
            (iVar11,*(int *)(param_2 + 0xc) + *(int *)(param_1 + 0xc),*puVar24);
  iVar12 = iStack_3c;
  iStack_40 = 0x7fffffff;
  iStack_44 = 0x7fffffff;
  iStack_48 = 0x7fffffff;
  uStack_50 = 0x80000000;
  uStack_54 = 0x80000000;
  uStack_58 = 0x80000000;
  if (*(int *)(**(int **)(_UNK_0102aefc + 0x102a4f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_RoundedMeshGenerator__BuildOccupancyWithGroup_101f788
            (param_1,param_2,iVar12,iVar11,&iStack_48,&uStack_58);
  if (iStack_3c != 0) {
    uVar19 = *(undefined4 *)(iStack_3c + 0x10);
    iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102af00 + 0x102a560));
    System_Collections_Generic_HashSet_Vector3Int____ctor_242bffc
              (iVar12,uVar19,**(undefined4 **)(_UNK_0102af04 + 0x102a574));
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar19 = System_Collections_Generic_Dictionary_Vector3Int__byte___get_Count_20b4eec
                       (iVar11,**(undefined4 **)(_UNK_0102af08 + 0x102a598));
    iVar13 = thunk_FUN_00f00cdc(*puVar28);
    System_Collections_Generic_Dictionary_Vector3Int__byte____ctor_20b47f8(iVar13,uVar19,*puVar24);
    pcVar18 = (char *)(_UNK_0102af0c + 0x102a5c8);
    if (*pcVar18 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0102af10 + 0x102a5dc));
      *pcVar18 = '\x01';
    }
    piVar14 = *(int **)(**(int **)(_UNK_0102af14 + 0x102a5f4) + 0x5c);
    iVar25 = piVar14[1];
    iVar21 = piVar14[2];
    iStack_d4 = *piVar14;
    if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_HashSet_Vector3Int___GetEnumerator_242cd5c
              (&uStack_d0,iStack_3c,**(undefined4 **)(_UNK_0102af18 + 0x102a624));
    iVar10 = iStack_40;
    iVar9 = iStack_44;
    iVar2 = iStack_48;
    uStack_98._0_4_ = iStack_c0;
    uStack_98._4_4_ = puStack_bc;
    uStack_a8 = uStack_d0;
    fStack_a4 = (float)puStack_cc;
    fStack_a0 = (float)uStack_c8;
    iStack_9c = iStack_c4;
    uStack_d0 = 0;
    puStack_cc = &uStack_a8;
    while (iVar15 = System_Collections_Generic_HashSet_Enumerator_Vector3Int___MoveNext_21af904
                              (&uStack_a8,**(undefined4 **)(_UNK_0102af28 + 0x102a684)),
          puVar24 = uStack_98._4_4_, iVar4 = (int)uStack_98, iVar3 = iStack_9c, iVar15 != 0) {
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar15 = (int)uStack_98._4_4_ - iVar10;
      iVar32 = (int)uStack_98 - iVar9;
      iVar30 = iStack_9c - iVar2;
      System_Collections_Generic_HashSet_Vector3Int___Add_242d4ac
                (iVar12,iVar30,iVar32,iVar15,**(undefined4 **)(_UNK_0102af1c + 0x102a6dc));
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar19 = System_Collections_Generic_Dictionary_Vector3Int__byte___get_Item_20b51b4
                         (iVar11,iVar3,iVar4,puVar24,**(undefined4 **)(_UNK_0102af20 + 0x102a710));
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Vector3Int__byte___set_Item_20b525c
                (iVar13,iVar30,iVar32,iVar15,uVar19,**(undefined4 **)(_UNK_0102af24 + 0x102a748));
      if (iVar21 <= iVar15) {
        iVar21 = iVar15;
      }
      if (iVar25 <= iVar32) {
        iVar25 = iVar32;
      }
      if (iStack_d4 <= iVar30) {
        iStack_d4 = iVar30;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_Vector3Int___Dispose_21af900
              (&uStack_a8,**(undefined4 **)(_UNK_0102af2c + 0x102a7a4));
    if (param_3 <= 0.0) {
      if (*(int *)(**(int **)(_UNK_0102af30 + 0x102ab5c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar19 = Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMeshTwoColor_101fa08
                         (iVar12,iVar13);
      Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh_101dcec
                (uVar19,iStack_d4,iVar25,iVar21);
    }
    else {
      if (*(char *)(_UNK_0102af34 + 0x102a7d4) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0102af38 + 0x102a7e8));
        *(undefined1 *)(_UNK_0102af3c + 0x102a7f8) = 1;
      }
      puVar24 = *(undefined4 **)(**(int **)(_UNK_0102af40 + 0x102a804) + 0x5c);
      uVar19 = *puVar24;
      uVar22 = puVar24[1];
      uVar26 = puVar24[2];
      if (*(int *)(**(int **)(_UNK_0102af44 + 0x102a810) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_RoundedMeshGenerator__FillNarrowGaps_101de7c
                (iVar12,uVar19,uVar22,uVar26,iStack_d4,iVar25,iVar21);
      Rotatelab_Scripts_RoundedMeshGenerator__ComputeNormalizedGroupBounds_10200d0
                (param_1,param_2,iStack_48,iStack_44,iStack_40,&fStack_70,&fStack_88);
      uVar31 = uStack_5c;
      uVar27 = uStack_60;
      uVar20 = uStack_64;
      fVar8 = fStack_68;
      fVar7 = fStack_6c;
      fVar29 = fStack_70;
      uVar26 = uStack_74;
      uVar22 = uStack_78;
      uVar19 = uStack_7c;
      fVar6 = fStack_80;
      fVar5 = fStack_84;
      fVar23 = fStack_88;
      if (*(int *)(**(int **)(_UNK_0102af48 + 0x102a88c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      bVar1 = false;
      iVar11 = Rotatelab_Scripts_SeamRibbonMeshGenerator__TryDetectSeam_1024bc8
                         (fVar29,fVar7,fVar8,uVar20,uVar27,uVar31,fVar23,fVar5,fVar6,uVar19,uVar22,
                          uVar26,&iStack_8c,&uStack_90,0);
      bVar17 = true;
      if (iVar11 != 0) {
        if (((iStack_8c != 0) && (fVar23 = fVar5, fVar29 = fVar7, iStack_8c != 1)) &&
           (fVar23 = fVar6, fVar29 = fVar8, iStack_8c != 2)) {
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102af4c + 0x102ad24));
          uVar19 = thunk_FUN_00f00cdc();
          uVar22 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102af50 + 0x102ad38));
          System_IndexOutOfRangeException___ctor_2b69538(uVar19,uVar22,0);
          uVar22 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102af54 + 0x102ad54));
          func_0x00ec3920(uVar19,uVar22);
                    /* WARNING: Subroutine does not return */
          FUN_00ec3760();
        }
        bVar17 = fVar23 < fVar29;
        bVar1 = fVar29 <= fVar23;
      }
      if (*(char *)(_UNK_0102af58 + 0x102a9a8) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0102af5c + 0x102a9c0));
        *(undefined1 *)(_UNK_0102af60 + 0x102a9d0) = 1;
      }
      puStack_cc = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_c8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_c4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar24 = *(undefined4 **)(**(int **)(_UNK_0102af64 + 0x102a9ec) + 0x5c);
      uStack_d0 = 0;
      iStack_c0 = 0;
      puStack_bc = puStack_cc;
      uStack_b8 = uStack_c8;
      iStack_b4 = iStack_c4;
      Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid___ctor_10248c8
                (&uStack_d0,*puVar24,puVar24[1],puVar24[2],iStack_d4,iVar25,iVar21,param_3,param_4,0
                );
      iVar2 = iStack_b4;
      uVar26 = uStack_b8;
      puVar28 = puStack_bc;
      iVar13 = iStack_c0;
      iVar11 = iStack_c4;
      uVar22 = uStack_c8;
      puVar24 = puStack_cc;
      uVar19 = uStack_d0;
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar12 + 0x10) == (iVar25 + 1) * (iVar21 + 1) * (iStack_d4 + 1)) {
        pcVar18 = (char *)(_UNK_0102af68 + 0x102aa9c);
        if (*pcVar18 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0102af6c + 0x102aab0));
          *pcVar18 = '\x01';
        }
        puVar16 = *(undefined4 **)(**(int **)(_UNK_0102af70 + 0x102aac4) + 0x5c);
        uVar27 = puVar16[2];
        uVar20 = *puVar16;
        uVar31 = puVar16[1];
        if (*(int *)(**(int **)(_UNK_0102af74 + 0x102aad0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar20 = Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceFieldBox_10201a8
                           (uVar20,uVar31,uVar27,iStack_d4,iVar25,iVar21,uVar19,puVar24,uVar22,
                            iVar11,iVar13,puVar28,uVar26,iVar2);
      }
      else {
        if (*(int *)(**(int **)(_UNK_0102af78 + 0x102ab9c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar20 = Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks_101e3f4(iVar12);
        uVar20 = Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceField_101e768
                           (iVar12,uVar20,uVar19,puVar24,uVar22,iVar11,iVar13,puVar28,uVar26,iVar2);
      }
      uVar27 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102af7c + 0x102ac08));
      System_Collections_Generic_List_Vector3____ctor_26fc30c
                (uVar27,**(undefined4 **)(_UNK_0102af80 + 0x102ac1c));
      uVar31 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102af84 + 0x102ac30));
      System_Collections_Generic_List_int____ctor_261b0bc
                (uVar31,**(undefined4 **)(_UNK_0102af88 + 0x102ac44));
      if (*(int *)(**(int **)(_UNK_0102af8c + 0x102ac58) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_RoundedMeshGenerator__BuildSurface_101e9b8
                (uVar20,uVar19,puVar24,uVar22,iVar11,iVar13,puVar28,uVar26,iVar2,uVar27,uVar31);
      uVar19 = Rotatelab_Scripts_RoundedMeshGenerator__CreateTwoColorMesh_1020478
                         (uVar27,uVar31,iStack_8c,uStack_90,bVar1,bVar17,param_3,param_4);
      Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh_101dcec
                (uVar19,iStack_d4,iVar25,iVar21);
    }
    Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
              (puStack_ac,**(undefined4 **)(_UNK_0102af90 + 0x102acec));
    if (iStack_b0 != 0) {
      FUN_00ec3a6c();
    }
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

