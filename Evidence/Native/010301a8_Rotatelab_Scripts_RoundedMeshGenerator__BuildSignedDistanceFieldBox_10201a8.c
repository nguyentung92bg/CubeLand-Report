/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildSignedDistanceFieldBox
System_Single_array* Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceFieldBox (UnityEngine_Vector3Int_o boxMin, UnityEngine_Vector3Int_o boxMax, Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildSignedDistanceFieldBox
   System_Single_array* Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceFieldBox
   (UnityEngine_Vector3Int_o boxMin, UnityEngine_Vector3Int_o boxMax,
   Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__BuildSignedDistanceFieldBox_10201a8
              (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
              undefined4 param_10,int param_11,int param_12,int param_13,undefined4 param_14)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong in_d16;
  undefined8 uVar19;
  ulonglong in_d17;
  undefined8 uVar20;
  undefined8 uVar21;
  float fStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  
  pcVar5 = (char *)(_UNK_01030464 + 0x10301d0);
  uStack_6c = param_14;
  uStack_88 = param_7;
  uStack_7c = param_10;
  uStack_80 = param_9;
  iStack_70 = param_13;
  iStack_74 = param_12;
  iStack_78 = param_11;
  uStack_84 = param_8;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01030468 + 0x1030224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103046c + 0x1030230));
    *pcVar5 = '\x01';
  }
  iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_01030470 + 0x103024c),param_12 * param_11 * param_13);
  fVar1 = _UNK_01030460;
  if (0 < param_11) {
    fVar15 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    iVar8 = 0;
    uVar20 = FixedToFP(in_d17 & 0xffff0000ffff0000 | (ulonglong)param_2 & 0xffff,0,0,0,0x20);
    uVar19 = FixedToFP(in_d16 & 0xffff0000ffff0000 | (ulonglong)param_5 & 0xffff,0,0,0,0x20);
    uVar20 = FloatVectorAdd(uVar20,_UNK_01030450,2);
    piVar9 = *(int **)(_UNK_01030474 + 0x10302c8);
    uVar19 = FloatVectorAdd(uVar19,_UNK_01030458,2);
    uVar21 = FloatVectorAdd(uVar19,uVar20,2);
    uVar21 = FloatVectorMult(uVar21,0x3f0000003f000000,2,0x20);
    uVar19 = FloatVectorSub(CONCAT44((int)((ulonglong)uVar20 >> 0x20),(int)uVar19),
                            CONCAT44((int)((ulonglong)uVar19 >> 0x20),(int)uVar20),2,0x20);
    uVar19 = FloatVectorMult(uVar19,0x3f0000003f000000,2,0x20);
    do {
      if (0 < param_12) {
        iVar6 = 0;
        do {
          if (0 < param_13) {
            iVar10 = 0;
            do {
              Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid__GetPoint_1024b84
                        (&fStack_94,&uStack_88,iVar8,iVar6,iVar10,0);
              iVar3 = iStack_70;
              iVar2 = iStack_74;
              uVar20 = FloatVectorSub(uStack_90,uVar21,2,0x20);
              uVar20 = FloatVectorAbsolute(uVar20,4);
              uVar20 = FloatVectorSub(uVar20,uVar19,2,0x20);
              fVar12 = (float)uVar20;
              fVar11 = ABS(fStack_94 - (fVar15 + -0.5 + fVar14 + 0.5) * 0.5) -
                       ((fVar14 + 0.5) - (fVar15 + -0.5)) * 0.5;
              fVar16 = fVar1;
              if (0.0 < fVar12) {
                fVar16 = fVar12;
              }
              fVar13 = (float)((ulonglong)uVar20 >> 0x20);
              fVar17 = fVar1;
              if (0.0 < fVar11) {
                fVar17 = fVar11;
              }
              fVar18 = fVar1;
              if (0.0 < fVar13) {
                fVar18 = fVar13;
              }
              if (fVar13 < fVar12) {
                uVar20 = CONCAT44(fVar12,fVar12);
              }
              fVar12 = (float)((ulonglong)uVar20 >> 0x20);
              if (fVar12 < fVar11) {
                fVar12 = fVar11;
              }
              fVar11 = fVar1;
              if (fVar12 < 0.0) {
                fVar11 = fVar12;
              }
              if (*(int *)(*piVar9 + 0x74) == 0) {
                FUN_00ec3934();
              }
              if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              uVar7 = iVar3 * (iVar8 * iVar2 + iVar6) + iVar10;
              if (*(uint *)(iVar4 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar10 = iVar10 + 1;
              *(float *)(iVar4 + uVar7 * 4 + 0x10) =
                   SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18) + fVar11;
              param_12 = iStack_74;
              param_13 = iStack_70;
            } while (iVar10 < iStack_70);
          }
          iVar6 = iVar6 + 1;
          param_11 = iStack_78;
        } while (iVar6 < param_12);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_11);
  }
  return iVar4;
}

