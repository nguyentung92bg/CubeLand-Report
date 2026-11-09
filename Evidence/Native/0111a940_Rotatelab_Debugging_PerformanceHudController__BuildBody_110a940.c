/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$BuildBody
void Rotatelab_Debugging_PerformanceHudController__BuildBody (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$BuildBody
   void Rotatelab_Debugging_PerformanceHudController__BuildBody
   (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_PerformanceHudController__BuildBody_110a940(int param_1)

{
  byte bVar1;
  int iVar2;
  uint extraout_r1;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pcVar3 = (char *)(_UNK_0111ab5c + 0x111a958);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab60 + 0x111a96c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab64 + 0x111a978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab68 + 0x111a984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab6c + 0x111a990));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_0111ab70 + 0x111a9a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  fVar10 = _UNK_0111ab54;
  if ((iVar2 != 0) || (iVar2 = *(int *)(param_1 + 0x34), iVar2 == 0)) {
    return;
  }
  fVar12 = _UNK_0111ab54;
  fVar13 = _UNK_0111ab54;
  fVar11 = _UNK_0111ab50;
  if (0 < iVar2) {
    iVar6 = 0;
    uVar5 = *(uint *)(param_1 + 0x30);
    do {
      iVar7 = *(int *)(param_1 + 0x24);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = *(int *)(param_1 + 0x34);
      fVar8 = *(float *)(iVar7 + uVar5 * 4 + 0x10);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar11) << 0x1f;
      fVar13 = fVar13 + fVar8;
      if (fVar12 < fVar8) {
        fVar12 = fVar8;
      }
      if (SUB41(in_fpscr >> 0x1f,0)) {
        fVar11 = fVar8;
      }
      FUN_00f88884(uVar5 + 1,*(undefined4 *)(param_1 + 0x20));
      iVar6 = iVar6 + 1;
      uVar5 = extraout_r1;
    } while (iVar6 < iVar2);
  }
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar12 < 0.0) << 0x1f | (uint)(fVar12 == 0.0) << 0x1e;
  bVar1 = (byte)(uVar5 >> 0x18);
  fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(uVar5 >> 0x16) & 3);
  fVar8 = fVar10;
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(fVar12)) {
    fVar8 = _UNK_0111ab58 / fVar12;
  }
  fVar12 = fVar10;
  if (0.0 < fVar11) {
    fVar12 = _UNK_0111ab58 / fVar11;
  }
  if (0.0 < fVar13 / fVar9) {
    fVar10 = _UNK_0111ab58 / (fVar13 / fVar9);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    System_Text_StringBuilder__Clear_2a15afc(*(int *)(param_1 + 0x38),0);
    Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
              (*(undefined4 *)(param_1 + 0x38),**(undefined4 **)(_UNK_0111ab74 + 0x111aaf0),fVar10);
    Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
              (*(undefined4 *)(param_1 + 0x38),**(undefined4 **)(_UNK_0111ab78 + 0x111ab04),fVar8);
    Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
              (*(undefined4 *)(param_1 + 0x38),**(undefined4 **)(_UNK_0111ab7c + 0x111ab1c),fVar12);
    iVar6 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar6 != 0) {
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = System_Text_StringBuilder__get_Length_2a1570c(iVar2,0,0);
      }
      TMPro_TMP_Text__SetText_3500518(iVar6,iVar2,0,uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

