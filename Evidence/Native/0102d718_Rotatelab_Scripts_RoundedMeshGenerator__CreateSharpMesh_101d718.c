/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateSharpMesh
UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMesh (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CreateSharpMesh
   UnityEngine_Mesh_o* Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMesh
   (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__CreateSharpMesh_101d718(undefined4 param_1)

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
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar10 = (char *)(_UNK_0102dc60 + 0x102d730);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc64 + 0x102d744));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc68 + 0x102d750));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc6c + 0x102d75c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc70 + 0x102d768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc74 + 0x102d774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc78 + 0x102d780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc7c + 0x102d78c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc80 + 0x102d798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc84 + 0x102d7a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc88 + 0x102d7b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc8c + 0x102d7bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc90 + 0x102d7c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc94 + 0x102d7d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc98 + 0x102d7e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102dc9c + 0x102d7ec));
    *pcVar10 = '\x01';
  }
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = (ulonglong)uStack_44 << 0x20;
  uStack_30 = CONCAT44(uStack_3c,uStack_40);
  if (*(int *)(**(int **)(_UNK_0102dca0 + 0x102d808) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = Rotatelab_Scripts_RoundedMeshGenerator__BuildExposedFaceMasks_101e3f4(param_1);
  iVar6 = Rotatelab_Scripts_RoundedMeshGenerator__CountExposedFaces_1022a10();
  puVar11 = *(undefined4 **)(_UNK_0102dca4 + 0x102d840);
  iVar7 = thunk_FUN_00f00cdc(*puVar11);
  puVar12 = *(undefined4 **)(_UNK_0102dca8 + 0x102d858);
  System_Collections_Generic_List_Vector3____ctor_26fc380(iVar7,iVar6 << 2,*puVar12);
  iVar8 = thunk_FUN_00f00cdc(*puVar11);
  System_Collections_Generic_List_Vector3____ctor_26fc380(iVar8,iVar6 << 2,*puVar12);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102dcac + 0x102d888));
  System_Collections_Generic_List_int____ctor_261b130
            (uVar9,iVar6 * 6,**(undefined4 **)(_UNK_0102dcb0 + 0x102d898));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Vector3Int__byte___GetEnumerator_20b57b8
            (&uStack_68,iVar5,**(undefined4 **)(_UNK_0102dcb4 + 0x102d8c4));
  uStack_48 = uStack_68;
  uStack_44 = (uint)puStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  uStack_68 = 0;
  puStack_64 = &uStack_48;
  while (iVar5 = System_Collections_Generic_Dictionary_Enumerator_Vector3Int__byte___MoveNext_21f34d0
                           (&uStack_48,**(undefined4 **)(_UNK_0102dcb8 + 0x102d8fc)),
        uVar1 = uStack_3c, iVar5 != 0) {
    bVar4 = (byte)uStack_30;
    iVar5 = 4;
    uVar2 = (undefined4)uStack_38;
    uVar3 = uStack_38._4_4_;
    while( true ) {
      iVar6 = **(int **)(_UNK_0102dcc8 + 0x102d928);
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = **(int **)(_UNK_0102dccc + 0x102d944);
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar14 = iVar5 - 4;
      if (*(int *)(iVar6 + 0xc) <= (int)uVar14) break;
      if ((bVar4 >> (uVar14 & 0x1f) & 1) != 0) {
        iVar6 = **(int **)(_UNK_0102dcbc + 0x102d984);
        if (*(int *)(iVar6 + 0x74) == 0) {
          FUN_00ec3934();
          iVar6 = **(int **)(_UNK_0102dcc0 + 0x102d9a0);
        }
        iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar13 = *(int *)(*(int *)(**(int **)(_UNK_0102dcc4 + 0x102d9d0) + 0x5c) + 0xc);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar13 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        Rotatelab_Scripts_RoundedMeshGenerator__AppendSharpFace_1022be8
                  (iVar7,iVar8,uVar9,uVar1,uVar2,uVar3,*(undefined4 *)(iVar6 + iVar5 * 4),
                   *(undefined4 *)(iVar13 + iVar5 * 4));
      }
      iVar5 = iVar5 + 1;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_Vector3Int__byte___Dispose_21f362c
            (&uStack_48,**(undefined4 **)(_UNK_0102dcd0 + 0x102da30));
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102dcd8 + 0x102da4c));
  UnityEngine_Mesh___ctor_35ce724(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Object__set_name_360832c(iVar5,**(undefined4 **)(_UNK_0102dcdc + 0x102da74),0);
  UnityEngine_Object__set_hideFlags_3609e5c(iVar5,0x3d,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0xffff < *(int *)(iVar7 + 0xc)) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Mesh__set_indexFormat_35ce7cc(iVar5,1,0);
  }
  if (iVar5 != 0) {
    UnityEngine_Mesh__SetVertices_35d0e6c(iVar5,iVar7,0);
    UnityEngine_Mesh__SetNormals_35d1088(iVar5,iVar8,0);
    UnityEngine_Mesh__SetTriangles_35d2628(iVar5,uVar9,0,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = System_Collections_Generic_List_Vector3___ToArray_26feb60
                      (iVar8,**(undefined4 **)(_UNK_0102dce4 + 0x102db68));
    if (*(int *)(**(int **)(_UNK_0102dce8 + 0x102db80) + 0x74) == 0) {
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
  thunk_FUN_00f078d4();
}

