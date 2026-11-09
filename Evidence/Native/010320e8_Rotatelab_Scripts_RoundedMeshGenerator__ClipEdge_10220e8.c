/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ClipEdge
void Rotatelab_Scripts_RoundedMeshGenerator__ClipEdge (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_Dictionary_long__int__o* seamVertexCache, int32_t seamAxis, float seamCoord, int32_t ia, float da, int32_t ib, float db, System_Int32_array* plusPoly, int32_t* plusCount, System_Int32_array* minusPoly, int32_t* minusCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ClipEdge
   void Rotatelab_Scripts_RoundedMeshGenerator__ClipEdge
   (System_Collections_Generic_List_Vector3__o* vertices,
   System_Collections_Generic_Dictionary_long__int__o* seamVertexCache, int32_t seamAxis, float
   seamCoord, int32_t ia, float da, int32_t ib, float db, System_Int32_array* plusPoly, int32_t*
   plusCount, System_Int32_array* minusPoly, int32_t* minusCount, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__ClipEdge_10220e8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,float param_6,undefined4 param_7,float param_8,int param_9,
               uint *param_10,int param_11,uint *param_12)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(_UNK_010322fc + 0x1032118);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032300 + 0x103212c));
    *pcVar2 = '\x01';
  }
  if (0.0 <= param_6) {
    uVar3 = *param_10;
    *param_10 = uVar3 + 1;
    if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(param_9 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(param_9 + uVar3 * 4 + 0x10) = param_5;
  }
  if (param_6 <= 0.0) {
    uVar3 = *param_12;
    *param_12 = uVar3 + 1;
    if (param_11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(param_11 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(param_11 + uVar3 * 4 + 0x10) = param_5;
  }
  if (((0.0 < param_6) && (param_8 < 0.0)) || ((param_6 < 0.0 && (0.0 < param_8)))) {
    if (*(int *)(**(int **)(_UNK_01032304 + 0x1032248) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_Scripts_RoundedMeshGenerator__GetOrCreateSeamVertex_1022688
                      (param_1,param_2,param_3,param_4,param_5,param_7);
    uVar3 = *param_10;
    *param_10 = uVar3 + 1;
    if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(param_9 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(param_9 + uVar3 * 4 + 0x10) = uVar1;
    uVar3 = *param_12;
    *param_12 = uVar3 + 1;
    if (param_11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(param_11 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(param_11 + uVar3 * 4 + 0x10) = uVar1;
  }
  return;
}

