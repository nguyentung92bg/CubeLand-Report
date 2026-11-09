/* IL2CPP: Rotatelab.SagaMap.SagaMapController.<<NextLevelAnimation>g__NextLevelAnim|13_0>d$$MoveNext
bool Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_d__MoveNext (Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_d_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.SagaMap.SagaMapController.<<NextLevelAnimation>g__NextLevelAnim|13_0>d$$MoveNext
   bool Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_d__MoveNext
   (Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_d_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_d__MoveNext_10829fc
          (int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar5 = (char *)(_UNK_01092c6c + 0x1092a18);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092c70 + 0x1092a2c));
    *pcVar5 = '\x01';
  }
  fVar11 = _UNK_01092c64;
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar4 == 2) {
    fVar11 = *(float *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (1.0 <= fVar11) {
      return 0;
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 0) {
        return 0;
      }
      piVar1 = *(int **)(_UNK_01092c74 + 0x1092a68);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3faccccd);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      thunk_FUN_00ec5080();
      uVar2 = 1;
      goto LAB_01092c50;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  fVar3 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar7 = fVar11 + fVar3;
  if (1.0 < fVar11 + fVar3) {
    fVar7 = 1.0;
  }
  *(float *)(param_1 + 0x24) = fVar7;
  fVar11 = _UNK_01092c64;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar3 = fVar7;
  if (1.0 < fVar7) {
    fVar3 = 1.0;
  }
  if (fVar7 < 0.0) {
    fVar3 = _UNK_01092c64;
  }
  if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610
            (*(int *)(iVar6 + 0x18),
             *(float *)(param_1 + 0x14) +
             (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x14)) * fVar3,
             *(float *)(param_1 + 0x18) +
             (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x18)) * fVar3,0);
  if (*(int *)(iVar6 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(iVar6 + 0x14) + 0x18);
  pcVar5 = (char *)(_UNK_01092c78 + 0x1092b8c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092c7c + 0x1092ba0));
    *pcVar5 = '\x01';
  }
  fVar3 = *(float *)(param_1 + 0x24);
  iVar6 = *(int *)(**(int **)(_UNK_01092c80 + 0x1092bb8) + 0x5c);
  fVar8 = *(float *)(iVar6 + 0xc);
  fVar9 = *(float *)(iVar6 + 0x10);
  fVar10 = *(float *)(iVar6 + 0x14);
  fVar7 = fVar3;
  if (1.0 < fVar3) {
    fVar7 = 1.0;
  }
  if (fVar3 < 0.0) {
    fVar7 = fVar11;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar4,fVar8 + (fVar8 * _UNK_01092c68 - fVar8) * fVar7,
             fVar9 + (fVar9 * _UNK_01092c68 - fVar9) * fVar7,
             fVar10 + (fVar10 * _UNK_01092c68 - fVar10) * fVar7,0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
  uVar2 = 2;
LAB_01092c50:
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 1;
}

