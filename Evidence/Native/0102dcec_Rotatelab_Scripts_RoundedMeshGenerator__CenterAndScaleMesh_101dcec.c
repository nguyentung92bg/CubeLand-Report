/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CenterAndScaleMesh
void Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh (UnityEngine_Mesh_o* mesh, UnityEngine_Vector3Int_o max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CenterAndScaleMesh
   void Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh (UnityEngine_Mesh_o* mesh,
   UnityEngine_Vector3Int_o max, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__CenterAndScaleMesh_101dcec
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar5 = (char *)(_UNK_0102de70 + 0x102dd0c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102de74 + 0x102dd24));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0102de78 + 0x102dd38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Mesh__get_vertexCount_35cf988(param_1,0);
    if (iVar1 != 0) {
      fVar9 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = 0;
      iVar1 = UnityEngine_Mesh__get_vertices_35d0a48(param_1,0);
      pfVar8 = (float *)(iVar1 + 0x10);
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar7) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar7 = uVar7 + 1;
        *pfVar8 = *pfVar8 - fVar9 * 0.5;
        pfVar8[1] = pfVar8[1] - fVar10 * 0.5;
        pfVar8[2] = pfVar8[2] - fVar11 * 0.5;
        pfVar8 = pfVar8 + 3;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Mesh__set_vertices_35d0aa0(param_1,iVar1,0);
      pcVar5 = (char *)(_UNK_035e2a10 + 0x35e2974);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035e2a14 + 0x35e2988));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035e2a18 + 0x35e2994));
        *pcVar5 = '\x01';
      }
      iVar1 = UnityEngine_Mesh__get_canAccess_35cf89c(param_1);
      if (iVar1 != 0) {
        pcVar5 = (char *)(_UNK_035e0124 + 0x35e00a8);
        if (*pcVar5 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035e0128 + 0x35e00bc));
          *pcVar5 = '\x01';
        }
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(param_1,0);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035e012c + 0x35e00f4);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035e0130 + 0x35e0104);
          *(code **)(_UNK_035e0134 + 0x35e0114) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035e0120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar1,0);
        return;
      }
      uVar3 = UnityEngine_Object__get_name_36081bc(param_1,0);
      uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_035e2a1c + 0x35e29dc),uVar3,0);
      if (*(int *)(**(int **)(_UNK_035e2a20 + 0x35e29f0) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar5 = (char *)(_UNK_035c24ac + 0x35c23a0);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b0 + 0x35c23b4),0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b4 + 0x35c23c0));
        *pcVar5 = '\x01';
      }
      piVar6 = *(int **)(_UNK_035c24b8 + 0x35c23d4);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar5 = (char *)(_UNK_035c24bc + 0x35c23f0);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24c0 + 0x35c2404));
        *pcVar5 = '\x01';
      }
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar1 = *piVar6;
      }
      piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar6;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_035c24c4 + 0x35c2448)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
            goto LAB_035c2490;
          }
          uVar7 = uVar7 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c24c4 + 0x35c2448),3);
LAB_035c2490:
                    /* WARNING: Could not recover jumptable at 0x035c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(piVar6,0,uVar3,puVar2[1]);
      return;
    }
  }
  return;
}

