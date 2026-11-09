/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$UpdateSize
void Rotatelab_Scripts_ShrinkingCoverController__UpdateSize (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$UpdateSize
   void Rotatelab_Scripts_ShrinkingCoverController__UpdateSize
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__UpdateSize_1050f00(int param_1)

{
  byte bVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint in_fpscr;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = *(float *)(*(int *)(param_1 + 0x38) + 0x14);
  iVar7 = *(int *)(param_1 + 0x38);
  fVar12 = fVar12 + fVar12;
  uVar11 = in_fpscr & 0xfffffff | (uint)(fVar12 < 1.0) << 0x1f | (uint)(fVar12 == 1.0) << 0x1e;
  uVar10 = uVar11 | (uint)NAN(fVar12) << 0x1c;
  bVar1 = (byte)(uVar11 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar10 >> 0x1c) & 1)) {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pfVar4 = (float *)(iVar7 + 0x18);
  }
  else {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pfVar4 = (float *)(iVar7 + 0x14);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = *(float *)(*(int *)(param_1 + 0x38) + 0x1c);
  fVar15 = *pfVar4 + *pfVar4;
  pcVar8 = (char *)(_UNK_01061224 + 0x1060f88);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061228 + 0x1060f9c));
    *pcVar8 = '\x01';
  }
  bVar2 = false;
  piVar9 = *(int **)(_UNK_0106122c + 0x1060fb8);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
    bVar2 = *pcVar8 == '\0';
  }
  fVar12 = fVar12 + fVar12;
  fVar5 = (float)FUN_01f4f1b4(fVar15 / 5.0);
  fVar13 = (float)VectorSignedToFloat((int)fVar5 + -1,(byte)(uVar10 >> 0x16) & 3);
  fVar6 = (float)fmodf(fVar15,0x40a00000);
  fVar3 = _UNK_0106121c;
  fVar15 = _UNK_01061218;
  uVar11 = uVar10 & 0xfffffff | (uint)(fVar5 == _UNK_01061218) << 0x1e;
  fVar5 = fVar13 * 10.0;
  if (SUB41(uVar11 >> 0x1e,0)) {
    fVar5 = _UNK_0106121c;
  }
  if (bVar2) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061230 + 0x1061040));
    *pcVar8 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar5 = fVar6 + fVar6 + fVar5;
  fVar6 = (float)FUN_01f4f1b4(fVar12 / 5.0);
  fVar14 = (float)VectorSignedToFloat((int)fVar6 + -1,(byte)(uVar11 >> 0x16) & 3);
  fVar13 = (float)fmodf(fVar12,0x40a00000);
  uVar11 = uVar11 & 0xfffffff | (uint)(fVar6 == fVar15) << 0x1e;
  fVar12 = fVar14 * 10.0;
  if (SUB41(uVar11 >> 0x1e,0)) {
    fVar12 = fVar3;
  }
  *(float *)(param_1 + 0x90) = fVar13 + fVar13 + fVar12;
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8(*(int *)(param_1 + 0x3c),0,fVar5,0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8
            (*(int *)(param_1 + 0x3c),1,*(undefined4 *)(param_1 + 0x90),0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8(*(int *)(param_1 + 0x40),0,fVar5,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8
            (*(int *)(param_1 + 0x40),1,*(undefined4 *)(param_1 + 0x90),0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8(*(int *)(param_1 + 0x44),0,fVar5,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_35ce5b8
            (*(int *)(param_1 + 0x44),1,*(undefined4 *)(param_1 + 0x90),0);
  fVar12 = *(float *)(param_1 + 0x90);
  uVar11 = uVar11 & 0xfffffff | (uint)(fVar12 == 0.0) << 0x1e | (uint)(0.0 <= fVar12) << 0x1d;
  bVar1 = (byte)(uVar11 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x30),
                                        (byte)(uVar11 >> 0x16) & 3);
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x30),
                                        (byte)(uVar11 >> 0x16) & 3);
    fVar15 = fVar15 * 0.5;
    *(float *)(param_1 + 0x7c) = fVar12 / fVar15;
  }
  *(float *)(param_1 + 0x78) = _UNK_01061220 / fVar15;
  return;
}

