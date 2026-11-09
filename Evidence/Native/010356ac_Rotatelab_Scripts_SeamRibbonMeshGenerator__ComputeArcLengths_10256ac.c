/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$ComputeArcLengths
System_Single_array* Rotatelab_Scripts_SeamRibbonMeshGenerator__ComputeArcLengths (System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample__o* samples, float* totalPerimeter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$ComputeArcLengths
   System_Single_array* Rotatelab_Scripts_SeamRibbonMeshGenerator__ComputeArcLengths
   (System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample__o* samples, float*
   totalPerimeter, const MethodInfo* method); */

int Rotatelab_Scripts_SeamRibbonMeshGenerator__ComputeArcLengths_10256ac(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  float fVar11;
  undefined8 uVar12;
  float fStack_60;
  float fStack_5c;
  
  pcVar6 = (char *)(_UNK_01035940 + 0x10356d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035944 + 0x10356e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035948 + 0x10356f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103594c + 0x10356fc));
    *pcVar6 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  iVar5 = FUN_00ec388c(**(undefined4 **)(_UNK_01035950 + 0x103571c),uVar10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (1 < (int)uVar10) {
    iVar8 = iVar5 + 0x10;
    uVar7 = 1;
    puVar9 = *(undefined4 **)(_UNK_01035954 + 0x1035778);
    fVar11 = _UNK_0103593c;
    do {
      if (*(uint *)(iVar5 + 0xc) <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
                (&fStack_60,param_1,uVar7,*puVar9);
      fVar3 = fStack_5c;
      fVar1 = fStack_60;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
                (&fStack_60,param_1,uVar7 - 1,*puVar9);
      fVar4 = fStack_5c;
      fVar2 = fStack_60;
      pcVar6 = (char *)(_UNK_01035958 + 0x10357e8);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0103595c + 0x10357fc));
        *pcVar6 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_01035960 + 0x1035810) + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar7 = uVar7 + 1;
      fVar11 = fVar11 + SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2));
      *(float *)(iVar8 + 4) = fVar11;
      iVar8 = iVar8 + 4;
    } while (uVar10 != uVar7);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  puVar9 = *(undefined4 **)(_UNK_01035964 + 0x1035884);
  System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
            (&fStack_60,param_1,0,*puVar9);
  uVar12 = CONCAT44(fStack_5c,fStack_60);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = uVar10 - 1;
  System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
            (&fStack_60,param_1,uVar10,*puVar9);
  pcVar6 = (char *)(_UNK_01035968 + 0x10358c0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103596c + 0x10358d4));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01035970 + 0x10358e8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar12 = FloatVectorSub(uVar12,CONCAT44(fStack_5c,fStack_60),2,0x20);
  uVar12 = FloatVectorMult(uVar12,uVar12,2,0x20);
  *param_2 = SQRT((float)uVar12 + (float)((ulonglong)uVar12 >> 0x20)) +
             *(float *)(iVar5 + uVar10 * 4 + 0x10);
  return iVar5;
}

