/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$BuildPerimeter
void Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildPerimeter (System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample__o* samples, float innerU, float innerV, float r, int32_t cornerSegments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$BuildPerimeter
   void Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildPerimeter
   (System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample__o* samples, float
   innerU, float innerV, float r, int32_t cornerSegments, const MethodInfo* method); */

void Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildPerimeter_1025334
               (int param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  pcVar9 = (char *)(_UNK_0103567c + 0x103535c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035680 + 0x1035374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035684 + 0x1035380));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035688 + 0x103538c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103568c + 0x1035398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035690 + 0x10353a4));
    *pcVar9 = '\x01';
  }
  fVar2 = _UNK_01035678;
  fVar1 = _UNK_01035674;
  piVar8 = *(int **)(_UNK_01035694 + 0x10353d4);
  uVar10 = 0;
  fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  do {
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar8;
    }
    iVar4 = **(int **)(iVar4 + 0x5c);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(*(int *)(*piVar8 + 0x5c) + 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(*(int *)(*piVar8 + 0x5c) + 8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (-1 < param_5) {
      fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + uVar10 * 4 + 0x10),
                                          (byte)(in_fpscr >> 0x16) & 3);
      iVar4 = 0;
      fVar15 = *(float *)(iVar6 + uVar10 * 4 + 0x10);
      fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + uVar10 * 4 + 0x10),
                                          (byte)(in_fpscr >> 0x16) & 3);
      do {
        fVar14 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        sincosf(fVar15 + (fVar14 / fVar17) * fVar1,&fStack_7c,&fStack_80);
        fVar3 = fStack_7c;
        fVar14 = fStack_80;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar11 = *(uint *)(param_1 + 0xc);
        fVar16 = fVar13 * param_3 + fStack_7c * param_4;
        fVar18 = fVar12 * param_2 + fStack_80 * param_4;
        if ((int)uVar11 < 1) {
LAB_0103553c:
          iVar5 = *(int *)(param_1 + 8);
          iVar6 = **(int **)(_UNK_0103569c + 0x1035548);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar11 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(param_1 + 0xc) = uVar11 + 1;
            iVar5 = iVar5 + uVar11 * 0x10;
            *(float *)(iVar5 + 0x10) = fVar18;
            *(float *)(iVar5 + 0x14) = fVar16;
            *(float *)(iVar5 + 0x18) = fVar14;
            *(float *)(iVar5 + 0x1c) = fVar3;
          }
          else {
            System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___AddWithResize_2764f88
                      (param_1,fVar18,fVar16,fVar14,fVar3,
                       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          }
        }
        else {
          System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
                    (&fStack_78,param_1,uVar11 - 1,**(undefined4 **)(_UNK_01035698 + 0x103550c));
          in_fpscr = in_fpscr & 0xfffffff |
                     (uint)((fStack_74 - fVar16) * (fStack_74 - fVar16) +
                            (fStack_78 - fVar18) * (fStack_78 - fVar18) < fVar2) << 0x1f;
          if (!SUB41(in_fpscr >> 0x1f,0)) {
            uVar11 = *(uint *)(param_1 + 0xc);
            goto LAB_0103553c;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_5);
    }
    uVar10 = uVar10 + 1;
    piVar8 = *(int **)(_UNK_010356a0 + 0x10355dc);
    if (uVar10 == 4) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (1 < *(int *)(param_1 + 0xc)) {
        puVar7 = *(undefined4 **)(_UNK_010356a4 + 0x103560c);
        System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
                  (&fStack_78,param_1,0,*puVar7);
        uVar19 = CONCAT44(fStack_74,fStack_78);
        System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
                  (&fStack_78,param_1,*(int *)(param_1 + 0xc) + -1,*puVar7);
        uVar19 = FloatVectorSub(uVar19,CONCAT44(fStack_74,fStack_78),2,0x20);
        uVar19 = FloatVectorMult(uVar19,uVar19,2,0x20);
        if ((float)uVar19 + (float)((ulonglong)uVar19 >> 0x20) < fVar2) {
          System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___RemoveAt_2766bf4
                    (param_1,*(int *)(param_1 + 0xc) + -1,
                     **(undefined4 **)(_UNK_010356a8 + 0x1035658));
        }
      }
      return;
    }
  } while( true );
}

