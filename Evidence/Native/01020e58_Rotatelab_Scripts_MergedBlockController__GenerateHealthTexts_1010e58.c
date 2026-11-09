/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GenerateHealthTexts
TMPro_TextMeshPro_array* Rotatelab_Scripts_MergedBlockController__GenerateHealthTexts (Rotatelab_Scripts_MergedBlockController_o* __this, Rotatelab_HpTextData_array* data, UnityEngine_Vector3_o size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GenerateHealthTexts
   TMPro_TextMeshPro_array* Rotatelab_Scripts_MergedBlockController__GenerateHealthTexts
   (Rotatelab_Scripts_MergedBlockController_o* __this, Rotatelab_HpTextData_array* data,
   UnityEngine_Vector3_o size, const MethodInfo* method); */

int * Rotatelab_Scripts_MergedBlockController__GenerateHealthTexts_1010e58
                (int param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar11 = (char *)(_UNK_01021198 + 0x1020e84);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102119c + 0x1020e98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010211a0 + 0x1020ea4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010211a4 + 0x1020eb0));
    *pcVar11 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_010211a8 + 0x1020ed0),
                               *(undefined4 *)(param_2 + 0xc));
  fVar2 = _UNK_01021194;
  fVar1 = _UNK_01021190;
  uVar4 = *(uint *)(param_2 + 0xc);
  if (0 < (int)uVar4) {
    iVar8 = 0x10;
    fVar16 = param_4;
    if (param_3 < param_4) {
      fVar16 = param_3;
    }
    fVar17 = param_5;
    if (param_4 < param_5) {
      fVar17 = param_4;
    }
    iVar9 = 4;
    if (param_3 < param_5) {
      param_5 = param_3;
    }
    do {
      if (uVar4 <= iVar9 - 4U) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar10 = *(int *)(param_2 + iVar9 * 4);
      uVar12 = *(undefined4 *)(param_1 + 0x10);
      uVar13 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_010211ac + 0x1020f5c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar5 = UnityEngine_Object__Instantiate_object__14d4e4c
                        (uVar12,uVar13,0,**(undefined4 **)(_UNK_010211b0 + 0x1020f94));
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = TMPro_TMP_Text__get_rectTransform_34fc82c(iVar5,0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar12 = *(undefined4 *)(iVar10 + 8);
      uVar13 = *(undefined4 *)(iVar10 + 0xc);
      uVar14 = *(undefined4 *)(iVar10 + 0x10);
      Rotatelab_HpTextData__get_Rotation_1070db8(&uStack_78,iVar10,0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__SetPositionAndRotation_3615c58
                (iVar6,uVar12,uVar13,uVar14,uStack_78,uStack_74,uStack_70,uStack_6c,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = TMPro_TMP_Text__get_rectTransform_34fc82c(iVar5,0);
      if (*(char *)(_UNK_010211b4 + 0x1021054) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010211b8 + 0x1021068));
        *(undefined1 *)(_UNK_010211bc + 0x1021078) = 1;
      }
      iVar7 = *(int *)(**(int **)(_UNK_010211c0 + 0x1021090) + 0x5c);
      fVar15 = fVar17;
      if (ABS(*(float *)(iVar10 + 0x14)) <= fVar1) {
        fVar15 = fVar16;
        if (fVar1 < ABS(*(float *)(iVar10 + 0x18))) {
          fVar15 = param_5;
        }
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar15 = fVar15 * fVar2;
      UnityEngine_Transform__set_localScale_36155dc
                (iVar6,*(float *)(iVar7 + 0xc) * fVar15,*(float *)(iVar7 + 0x10) * fVar15,
                 *(float *)(iVar7 + 0x14) * fVar15,0);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar5 != 0) &&
         (iVar10 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar10 == 0)) {
        uVar12 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar12,0);
      }
      if ((uint)piVar3[3] <= iVar9 - 4U) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar3[iVar9] = iVar5;
      thunk_FUN_00ec5080((int)piVar3 + iVar8,iVar5);
      iVar10 = iVar9 + -3;
      iVar8 = iVar8 + 4;
      uVar4 = *(uint *)(param_2 + 0xc);
      iVar9 = iVar9 + 1;
    } while (iVar10 < (int)uVar4);
  }
  return piVar3;
}

