/* IL2CPP: Rotatelab.Scripts.ObjectManager$$CalculateOrbitRadius
float Rotatelab_Scripts_ObjectManager__CalculateOrbitRadius (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$CalculateOrbitRadius
   float Rotatelab_Scripts_ObjectManager__CalculateOrbitRadius (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_ObjectManager__CalculateOrbitRadius_102c6ac(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  longlong lStack_6c;
  float fStack_64;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar3 = (char *)(_UNK_0103ca24 + 0x103c6c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ca28 + 0x103c6dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ca2c + 0x103c6e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ca30 + 0x103c6f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ca34 + 0x103c700));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ca38 + 0x103c70c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ca3c + 0x103c718));
    *pcVar3 = '\x01';
  }
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  if (*(int *)(**(int **)(_UNK_0103ca40 + 0x103c730) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_object___Get_257b7b0
            (&uStack_78,&iStack_54,**(undefined4 **)(_UNK_0103ca44 + 0x103c75c));
  uStack_50 = uStack_78;
  puStack_58 = &uStack_50;
  uStack_4c = uStack_74;
  uStack_5c = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Component__GetComponentsInChildren_object__143ff6c
            (*(int *)(param_1 + 0x50),iStack_54,**(undefined4 **)(_UNK_0103ca48 + 0x103c79c));
  if (iStack_54 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = _UNK_0103ca20;
  if (*(int *)(iStack_54 + 0xc) != 0) {
    if (iStack_54 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = *(undefined4 **)(_UNK_0103ca4c + 0x103c7e0);
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814(iStack_54,0,*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__get_bounds_35c42b4(&uStack_78,iVar1,0);
    uVar12 = CONCAT44(uStack_74,uStack_78);
    iVar1 = 1;
    lVar9 = lStack_6c;
    fVar11 = fStack_70;
    fVar6 = fStack_64;
    while( true ) {
      if (iStack_54 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iStack_54 + 0xc) <= iVar1) break;
      if (iStack_54 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814(iStack_54,iVar1,*puVar4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Renderer__get_bounds_35c42b4(&uStack_78,iVar2,0);
      iVar1 = iVar1 + 1;
      uVar13 = FloatVectorSub(uVar12,lVar9,2,0x20);
      uVar15 = FloatVectorAdd(lVar9,uVar12,2);
      fVar7 = fStack_70 - fStack_64;
      fVar5 = fStack_70 + fStack_64;
      uVar14 = FloatVectorSub(CONCAT44(uStack_74,uStack_78),lStack_6c,2,0x20);
      uVar12 = FloatVectorAdd(CONCAT44(uStack_74,uStack_78),lStack_6c,2);
      uVar16 = FloatVectorCompareGreaterThan(uVar14,uVar13,2);
      uVar17 = FloatVectorCompareGreaterThan(uVar15,uVar14,2);
      uVar13 = VectorBitwiseInsertIfFalse(uVar13,uVar14,uVar16);
      uVar14 = VectorBitwiseInsertIfTrue(uVar14,uVar15,uVar17);
      uVar14 = FloatVectorSub(uVar14,uVar13,2,0x20);
      uVar15 = FloatVectorMult(uVar14,0x3f0000003f000000,2,0x20);
      uVar14 = FloatVectorAdd(uVar13,uVar15,2);
      uVar13 = FloatVectorSub(uVar14,uVar15,2,0x20);
      uVar14 = FloatVectorAdd(uVar15,uVar14,2);
      fVar8 = fVar7;
      if (fVar11 - fVar6 < fVar7) {
        fVar8 = fVar11 - fVar6;
      }
      uVar15 = FloatVectorCompareGreaterThan(uVar12,uVar13,2);
      uVar16 = FloatVectorCompareGreaterThan(uVar14,uVar12,2);
      uVar13 = VectorBitwiseInsertIfFalse(uVar13,uVar12,uVar15);
      uVar12 = VectorBitwiseInsertIfTrue(uVar12,uVar14,uVar16);
      uVar12 = FloatVectorSub(uVar12,uVar13,2,0x20);
      lVar9 = FloatVectorMult(uVar12,0x3f0000003f000000,2,0x20);
      uVar12 = FloatVectorAdd(uVar13,lVar9,2);
      if (fVar7 < fVar6 + fVar11) {
        fVar7 = fVar6 + fVar11;
      }
      fVar7 = (fVar7 - fVar8) * 0.5;
      fVar6 = (fVar8 + fVar7) - fVar7;
      fVar7 = fVar7 + fVar8 + fVar7;
      fVar11 = fVar5;
      if (fVar6 < fVar5) {
        fVar11 = fVar6;
      }
      if (fVar5 < fVar7) {
        fVar5 = fVar7;
      }
      fVar6 = (fVar5 - fVar11) * 0.5;
      fVar11 = fVar11 + fVar6;
    }
    if (fVar6 < (float)lVar9) {
      fVar6 = (float)lVar9;
    }
    if ((float)((ulonglong)lVar9 >> 0x20) < fVar6) {
      lVar9 = (ulonglong)(uint)fVar6 << 0x20;
    }
    uVar10 = (int)((ulonglong)lVar9 >> 0x20);
  }
  Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
            (&uStack_50,**(undefined4 **)(_UNK_0103ca50 + 0x103c994));
  return uVar10;
}

