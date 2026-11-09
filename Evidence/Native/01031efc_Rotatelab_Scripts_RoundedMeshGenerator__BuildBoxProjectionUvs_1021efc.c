/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildBoxProjectionUvs
UnityEngine_Vector2_array* Rotatelab_Scripts_RoundedMeshGenerator__BuildBoxProjectionUvs (System_Collections_Generic_List_Vector3__o* vertices, UnityEngine_Vector3_array* normals, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildBoxProjectionUvs
   UnityEngine_Vector2_array* Rotatelab_Scripts_RoundedMeshGenerator__BuildBoxProjectionUvs
   (System_Collections_Generic_List_Vector3__o* vertices, UnityEngine_Vector3_array* normals, const
   MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__BuildBoxProjectionUvs_1021efc(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar2 = (char *)(_UNK_01032090 + 0x1031f20);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032094 + 0x1031f34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032098 + 0x1031f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103209c + 0x1031f4c));
    *pcVar2 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_010320a0 + 0x1031f6c),*(undefined4 *)(param_1 + 0xc));
  if (0 < *(int *)(param_1 + 0xc)) {
    pfVar3 = (float *)(param_2 + 0x10);
    puVar4 = (undefined4 *)(iVar1 + 0x10);
    uVar5 = 0;
    puVar6 = *(undefined4 **)(_UNK_010320a4 + 0x1031fa0);
    do {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(param_2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar8 = *pfVar3;
      fVar10 = pfVar3[1];
      fVar12 = pfVar3[2];
      System_Collections_Generic_List_Vector3___get_Item_26fc8ac(&uStack_4c,param_1,uVar5,*puVar6);
      fVar10 = ABS(fVar10);
      fVar8 = ABS(fVar8);
      fVar12 = ABS(fVar12);
      bVar7 = NAN(fVar8) || NAN(fVar10);
      if (fVar8 >= fVar10) {
        bVar7 = NAN(fVar8) || NAN(fVar12);
      }
      uVar11 = uStack_48;
      if ((fVar8 < fVar10 || fVar8 < fVar12) == bVar7) {
        uVar9 = uStack_44;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      else {
        bVar7 = NAN(fVar10) || NAN(fVar8);
        if (fVar10 >= fVar8) {
          bVar7 = NAN(fVar10) || NAN(fVar12);
        }
        uVar9 = uStack_4c;
        if ((fVar10 < fVar8 || fVar10 < fVar12) == bVar7) {
          uVar11 = uStack_44;
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
        }
        else if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *puVar4 = uVar9;
      pfVar3 = pfVar3 + 3;
      puVar4[1] = uVar11;
      puVar4 = puVar4 + 2;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0xc));
  }
  return iVar1;
}

