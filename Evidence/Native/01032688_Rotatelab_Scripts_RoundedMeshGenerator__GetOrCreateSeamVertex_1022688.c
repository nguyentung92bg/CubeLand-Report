/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$GetOrCreateSeamVertex
int32_t Rotatelab_Scripts_RoundedMeshGenerator__GetOrCreateSeamVertex (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_Dictionary_long__int__o* seamVertexCache, int32_t seamAxis, float seamCoord, int32_t ia, int32_t ib, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$GetOrCreateSeamVertex
   int32_t Rotatelab_Scripts_RoundedMeshGenerator__GetOrCreateSeamVertex
   (System_Collections_Generic_List_Vector3__o* vertices,
   System_Collections_Generic_Dictionary_long__int__o* seamVertexCache, int32_t seamAxis, float
   seamCoord, int32_t ia, int32_t ib, const MethodInfo* method); */

uint Rotatelab_Scripts_RoundedMeshGenerator__GetOrCreateSeamVertex_1022688
               (int param_1,int param_2,int param_3,float param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  uint uStack_44;
  
  pcVar10 = (char *)(_UNK_010329d0 + 0x10326b0);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010329d4 + 0x10326d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010329d8 + 0x10326dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010329dc + 0x10326e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010329e0 + 0x10326f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010329e4 + 0x1032700));
    *pcVar10 = '\x01';
  }
  iVar11 = param_6;
  if (param_5 < param_6) {
    iVar11 = param_5;
  }
  if (param_6 < param_5) {
    param_6 = param_5;
  }
  uStack_44 = 0;
  afStack_50[2] = 0.0;
  afStack_50[1] = 0.0;
  afStack_50[0] = 0.0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = System_Collections_Generic_Dictionary_long__int___TryGetValue_200abf8
                    (param_2,**(undefined4 **)(_UNK_010329e8 + 0x103274c),param_6,iVar11,&uStack_44,
                     **(undefined4 **)(_UNK_010329e8 + 0x103274c));
  if (iVar4 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar9 = *(undefined4 **)(_UNK_010329ec + 0x1032788);
    System_Collections_Generic_List_Vector3___get_Item_26fc8ac(&fStack_5c,param_1,iVar11,*puVar9);
    fVar3 = fStack_54;
    fVar2 = fStack_58;
    fVar1 = fStack_5c;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_Vector3___get_Item_26fc8ac(&fStack_5c,param_1,param_6,*puVar9);
    fVar12 = fVar3;
    fVar13 = fStack_54;
    if (((param_3 != 2) && (fVar12 = fVar2, fVar13 = fStack_58, param_3 != 1)) &&
       (fVar12 = fVar1, fVar13 = fStack_5c, param_3 != 0)) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010329f0 + 0x10327f8));
      uVar5 = thunk_FUN_00f00cdc();
      uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010329f4 + 0x103280c));
      System_IndexOutOfRangeException___ctor_2b69538(uVar5,uVar6,0);
      uVar6 = *(undefined4 *)(_UNK_010329f8 + 0x1032828);
LAB_010329bc:
      uVar6 = thunk_FUN_00f23fd0(uVar6);
      func_0x00ec3920(uVar5,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    fVar12 = (fVar12 - param_4) / ((fVar12 - param_4) - (fVar13 - param_4));
    afStack_50[1] = fVar2 + (fStack_58 - fVar2) * fVar12;
    afStack_50[2] = fVar1 + (fStack_5c - fVar1) * fVar12;
    afStack_50[0] = fVar3 + (fStack_54 - fVar3) * fVar12;
    if (param_3 == 0) {
      pfVar7 = afStack_50 + 2;
    }
    else if (param_3 == 2) {
      pfVar7 = afStack_50;
    }
    else {
      if (param_3 != 1) {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010329fc + 0x1032990));
        uVar5 = thunk_FUN_00f00cdc();
        uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01032a00 + 0x10329a4));
        System_IndexOutOfRangeException___ctor_2b69538(uVar5,uVar6,0);
        uVar6 = *(undefined4 *)(_UNK_01032a04 + 0x10329c0);
        goto LAB_010329bc;
      }
      pfVar7 = afStack_50 + 1;
    }
    *pfVar7 = param_4;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(param_1 + 8);
    uStack_44 = *(uint *)(param_1 + 0xc);
    iVar8 = **(int **)(_UNK_01032a08 + 0x10328cc);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uStack_44 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(param_1 + 0xc) = uStack_44 + 1;
      iVar4 = iVar4 + uStack_44 * 0xc;
      *(float *)(iVar4 + 0x10) = afStack_50[2];
      *(float *)(iVar4 + 0x14) = afStack_50[1];
      *(float *)(iVar4 + 0x18) = afStack_50[0];
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                (param_1,afStack_50[2],afStack_50[1],afStack_50[0],
                 *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_long__int___set_Item_2008ba0
              (param_2,**(undefined4 **)(_UNK_01032a0c + 0x1032960),param_6,iVar11,uStack_44,
               **(undefined4 **)(_UNK_01032a0c + 0x1032960));
  }
  return uStack_44;
}

