/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$Update
void Rotatelab_Debugging_PerformanceHudController__Update (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$Update
   void Rotatelab_Debugging_PerformanceHudController__Update
   (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_PerformanceHudController__Update_110a798(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= *(uint *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *(int *)(param_1 + 0x28);
    uVar9 = *(uint *)(param_1 + 0x2c);
    *(float *)(iVar5 + *(uint *)(param_1 + 0x2c) * 4 + 0x10) = fVar2 * _UNK_0111a93c;
    uVar3 = UnityEngine_Time__get_unscaledTime_3610a3c(0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar3;
    iVar8 = *(int *)(param_1 + 0x34);
    FUN_00f88884(iVar5 + 1,iVar6);
    *(undefined4 *)(param_1 + 0x2c) = extraout_r1;
    if (iVar8 < iVar6) {
      *(int *)(param_1 + 0x34) = iVar8 + 1;
    }
    else {
      FUN_00f88884(*(int *)(param_1 + 0x30) + 1,iVar6);
      *(undefined4 *)(param_1 + 0x30) = extraout_r1_00;
    }
    fVar2 = (float)UnityEngine_Time__get_unscaledTime_3610a3c(0);
    if (0 < *(int *)(param_1 + 0x34)) {
      fVar11 = *(float *)(param_1 + 0x18);
      uVar9 = *(uint *)(param_1 + 0x30);
      do {
        iVar5 = *(int *)(param_1 + 0x28);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(*(float *)(iVar5 + uVar9 * 4 + 0x10) < fVar2 - fVar11) << 0x1f;
        if (!SUB41(in_fpscr >> 0x1f,0)) break;
        iVar5 = *(int *)(param_1 + 0x34) + -1;
        *(int *)(param_1 + 0x34) = iVar5;
        FUN_00f88884(*(int *)(param_1 + 0x30) + 1,*(undefined4 *)(param_1 + 0x20));
        *(uint *)(param_1 + 0x30) = extraout_r1_01;
        uVar9 = extraout_r1_01;
      } while (0 < iVar5);
    }
    fVar11 = *(float *)(param_1 + 0x3c);
    fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
    fVar11 = fVar11 + fVar2;
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar11 < *(float *)(param_1 + 0x1c)) << 0x1f;
    uVar10 = uVar9 | (uint)(NAN(fVar11) || NAN(*(float *)(param_1 + 0x1c))) << 0x1c;
    *(float *)(param_1 + 0x3c) = fVar11;
    if ((byte)(uVar9 >> 0x1f) == ((byte)(uVar10 >> 0x1c) & 1)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      pcVar7 = (char *)(_UNK_0111ab5c + 0x111a958);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab60 + 0x111a96c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab64 + 0x111a978));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab68 + 0x111a984));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111ab6c + 0x111a990));
        *pcVar7 = '\x01';
      }
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_0111ab70 + 0x111a9a4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
      fVar2 = _UNK_0111ab54;
      if ((iVar5 != 0) || (iVar5 = *(int *)(param_1 + 0x34), iVar5 == 0)) {
        return;
      }
      fVar11 = _UNK_0111ab54;
      fVar15 = _UNK_0111ab54;
      fVar14 = _UNK_0111ab50;
      if (0 < iVar5) {
        iVar8 = 0;
        uVar9 = *(uint *)(param_1 + 0x30);
        do {
          iVar6 = *(int *)(param_1 + 0x24);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar6 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar5 = *(int *)(param_1 + 0x34);
          fVar12 = *(float *)(iVar6 + uVar9 * 4 + 0x10);
          uVar10 = uVar10 & 0xfffffff | (uint)(fVar12 < fVar14) << 0x1f;
          fVar15 = fVar15 + fVar12;
          if (fVar11 < fVar12) {
            fVar11 = fVar12;
          }
          if (SUB41(uVar10 >> 0x1f,0)) {
            fVar14 = fVar12;
          }
          FUN_00f88884(uVar9 + 1,*(undefined4 *)(param_1 + 0x20));
          iVar8 = iVar8 + 1;
          uVar9 = extraout_r1_02;
        } while (iVar8 < iVar5);
      }
      uVar9 = uVar10 & 0xfffffff | (uint)(fVar11 < 0.0) << 0x1f | (uint)(fVar11 == 0.0) << 0x1e;
      bVar1 = (byte)(uVar9 >> 0x18);
      fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar9 >> 0x16) & 3);
      fVar12 = fVar2;
      if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(fVar11)) {
        fVar12 = _UNK_0111ab58 / fVar11;
      }
      fVar11 = fVar2;
      if (0.0 < fVar14) {
        fVar11 = _UNK_0111ab58 / fVar14;
      }
      if (0.0 < fVar15 / fVar13) {
        fVar2 = _UNK_0111ab58 / (fVar15 / fVar13);
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        System_Text_StringBuilder__Clear_2a15afc(*(int *)(param_1 + 0x38),0);
        Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
                  (*(undefined4 *)(param_1 + 0x38),**(undefined4 **)(_UNK_0111ab74 + 0x111aaf0),
                   fVar2);
        Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
                  (*(undefined4 *)(param_1 + 0x38),**(undefined4 **)(_UNK_0111ab78 + 0x111ab04),
                   fVar12);
        Rotatelab_Debugging_PerformanceHudController__AppendFps_110ab80
                  (*(undefined4 *)(param_1 + 0x38),**(undefined4 **)(_UNK_0111ab7c + 0x111ab1c),
                   fVar11);
        iVar8 = *(int *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x38);
        if (iVar8 != 0) {
          uVar3 = unaff_r4;
          uVar16 = unaff_r5;
          if (iVar5 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = System_Text_StringBuilder__get_Length_2a1570c(iVar5,0,0);
          }
          TMPro_TMP_Text__SetText_3500518
                    (iVar8,iVar5,0,uVar4,unaff_r4,unaff_r5,uVar3,uVar16,unaff_r11,unaff_lr);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return;
}

