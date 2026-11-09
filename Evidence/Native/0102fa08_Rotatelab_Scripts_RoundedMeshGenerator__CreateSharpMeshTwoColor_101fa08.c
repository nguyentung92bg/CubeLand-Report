/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateSharpMeshTwoColor
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMeshTwoColor (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, System_Collections_Generic_Dictionary_Vector3Int__byte__o* groupIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateSharpMeshTwoColor
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMeshTwoColor
   (System_Collections_Generic_HashSet_Vector3Int__o* occupancy,
   System_Collections_Generic_Dictionary_Vector3Int__byte__o* groupIds, const MethodInfo* method);
    */

int Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMeshTwoColor_101fa08
              (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_49;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar12 = (char *)(_UNK_0103003c + 0x102fa24);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030040 + 0x102fa38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030044 + 0x102fa44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030048 + 0x102fa50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103004c + 0x102fa5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030050 + 0x102fa68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030054 + 0x102fa74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030058 + 0x102fa80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103005c + 0x102fa8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030060 + 0x102fa98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030064 + 0x102faa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030068 + 0x102fab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103006c + 0x102fabc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030070 + 0x102fac8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030074 + 0x102fad4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030078 + 0x102fae0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103007c + 0x102faec));
    *pcVar12 = '\x01';
  }
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = (ulonglong)uStack_44 << 0x20;
  uStack_30 = CONCAT44(uStack_3c,uStack_40);
  cStack_49 = '\0';
  if (*(int *)(**(int **)(_UNK_01030080 + 0x102fb0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks_101e3f4(param_1);
  iVar6 = Rotatelab_Scripts_RoundedMeshGenerator__CountExposedFaces_1022a10();
  puVar11 = *(undefined4 **)(_UNK_01030084 + 0x102fb48);
  iVar7 = thunk_FUN_00f00cdc(*puVar11);
  puVar13 = *(undefined4 **)(_UNK_01030088 + 0x102fb60);
  System_Collections_Generic_List_Vector3____ctor_26fc380(iVar7,iVar6 << 2,*puVar13);
  iVar8 = thunk_FUN_00f00cdc(*puVar11);
  System_Collections_Generic_List_Vector3____ctor_26fc380(iVar8,iVar6 << 2,*puVar13);
  puVar11 = *(undefined4 **)(_UNK_0103008c + 0x102fb90);
  uVar9 = thunk_FUN_00f00cdc(*puVar11);
  puVar13 = *(undefined4 **)(_UNK_01030090 + 0x102fba8);
  System_Collections_Generic_List_int____ctor_261b130(uVar9,iVar6 * 6,*puVar13);
  uVar10 = thunk_FUN_00f00cdc(*puVar11);
  System_Collections_Generic_List_int____ctor_261b130(uVar10,iVar6 * 6,*puVar13);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Vector3Int__byte___GetEnumerator_20b57b8
            (&uStack_70,iVar5,**(undefined4 **)(_UNK_01030094 + 0x102fbe8));
  uStack_48 = uStack_70;
  uStack_44 = (uint)puStack_6c;
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  uStack_38 = uStack_60;
  uStack_30 = uStack_58;
  uStack_70 = 0;
  puStack_6c = &uStack_48;
  while( true ) {
    iVar5 = System_Collections_Generic_Dictionary_Enumerator_Vector3Int__byte___MoveNext_21f34d0
                      (&uStack_48,**(undefined4 **)(_UNK_01030098 + 0x102fc20));
    uVar1 = uStack_3c;
    if (iVar5 == 0) break;
    bVar4 = (byte)uStack_30;
    uVar2 = (undefined4)uStack_38;
    uVar3 = uStack_38._4_4_;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_Vector3Int__byte___TryGetValue_20b74f0
              (param_2,uStack_3c,(undefined4)uStack_38,uStack_38._4_4_,&cStack_49,
               **(undefined4 **)(_UNK_0103009c + 0x102fc58));
    iVar5 = 4;
    uVar15 = uVar10;
    if (cStack_49 == '\0') {
      uVar15 = uVar9;
    }
    while( true ) {
      iVar6 = **(int **)(_UNK_010300ac + 0x102fca4);
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = **(int **)(_UNK_010300b0 + 0x102fcc0);
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar16 = iVar5 - 4;
      if (*(int *)(iVar6 + 0xc) <= (int)uVar16) break;
      if ((bVar4 >> (uVar16 & 0x1f) & 1) != 0) {
        iVar6 = **(int **)(_UNK_010300a0 + 0x102fd00);
        if (*(int *)(iVar6 + 0x74) == 0) {
          FUN_00ec3934();
          iVar6 = **(int **)(_UNK_010300a4 + 0x102fd1c);
        }
        iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar14 = *(int *)(*(int *)(**(int **)(_UNK_010300a8 + 0x102fd4c) + 0x5c) + 0xc);
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar14 + 0xc) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        Rotatelab_Scripts_RoundedMeshGenerator__AppendSharpFace_1022be8
                  (iVar7,iVar8,uVar15,uVar1,uVar2,uVar3,*(undefined4 *)(iVar6 + iVar5 * 4),
                   *(undefined4 *)(iVar14 + iVar5 * 4));
      }
      iVar5 = iVar5 + 1;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_Vector3Int__byte___Dispose_21f362c
            (&uStack_48,**(undefined4 **)(_UNK_010300b4 + 0x102fdac));
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010300bc + 0x102fdc0));
  UnityEngine_Mesh___ctor_35ce724(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Object__set_name_360832c(iVar5,**(undefined4 **)(_UNK_010300c0 + 0x102fde8),0);
  UnityEngine_Object__set_hideFlags_3609e5c(iVar5,0x3d,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar7 + 0xc);
  if (0xffff < iVar6) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Mesh__set_indexFormat_35ce7cc(iVar5,1,0);
  }
  if (iVar5 != 0) {
    UnityEngine_Mesh__SetVertices_35d0e6c(iVar5,iVar7,0);
    UnityEngine_Mesh__SetNormals_35d1088(iVar5,iVar8,0);
    UnityEngine_Mesh__set_subMeshCount_35cfb60(iVar5,2,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar5,uVar9,0,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar5,uVar10,1,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = System_Collections_Generic_List_Vector3___ToArray_26feb60
                      (iVar8,**(undefined4 **)(_UNK_010300c8 + 0x102ff44));
    if (*(int *)(**(int **)(_UNK_010300cc + 0x102ff5c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar9 = Rotatelab_Scripts_RoundedMeshGenerator__BuildBoxProjectionUvs_1021efc(iVar7,uVar9);
    if (iVar5 != 0) {
      UnityEngine_Mesh__set_uv_35d0ca0(iVar5,uVar9,0);
      UnityEngine_Mesh__RecalculateBounds_35d2954(iVar5,0);
      return iVar5;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4(iVar6,iVar7);
}

