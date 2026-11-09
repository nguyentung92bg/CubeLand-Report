/* IL2CPP: Rotatelab.Scripts.BotClickHand.<MoveTo>d__10$$MoveNext
bool Rotatelab_Scripts_BotClickHand__MoveTo_d__10__MoveNext (Rotatelab_Scripts_BotClickHand__MoveTo_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BotClickHand.<MoveTo>d__10$$MoveNext
   bool Rotatelab_Scripts_BotClickHand__MoveTo_d__10__MoveNext
   (Rotatelab_Scripts_BotClickHand__MoveTo_d__10_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_BotClickHand__MoveTo_d__10__MoveNext_ff3e0c(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (*(int *)(param_1 + 8) == 1) {
    fVar8 = *(float *)(param_1 + 0x48);
    fVar10 = *(float *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 0x14),0)
    ;
    if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(iVar7 + 0x10),0);
    piVar6 = (int *)(param_1 + 0x20);
    *piVar6 = iVar3;
    thunk_FUN_00ec5080(piVar6,iVar3);
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_58,*piVar6,0);
    *(undefined4 *)(param_1 + 0x2c) = uStack_50;
    *(undefined8 *)(param_1 + 0x24) = uStack_58;
    iVar3 = _UNK_010041b4;
    fVar9 = *(float *)(param_1 + 0x14) + *(float *)(iVar7 + 0x24);
    fVar10 = *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x18) + *(float *)(iVar7 + 0x28);
    fVar11 = *(float *)(param_1 + 0x28);
    fVar13 = *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x38) = fVar13;
    *(float *)(param_1 + 0x30) = fVar9;
    cVar2 = *(char *)(iVar3 + 0x1003f04);
    *(float *)(param_1 + 0x34) = fVar8;
    if (cVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010041b8 + 0x1003f20));
      *(char *)(iVar3 + 0x1003f04) = '\x01';
    }
    fVar8 = fVar8 - fVar11;
    fVar9 = fVar9 - fVar10;
    if (*(int *)(**(int **)(_UNK_010041bc + 0x1003f40) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar11 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + (fVar13 - fVar13) * (fVar13 - fVar13));
    if (fVar11 < 30.0) goto LAB_01004168;
    fVar12 = *(float *)(iVar7 + 0x2c);
    fVar4 = (float)UnityEngine_Random__get_value_35f8bbc(0);
    fVar5 = (float)UnityEngine_Random__Range_35f8ac0(0x3f000000,0x3f800000,0);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    fVar10 = _UNK_010041b0;
    fVar13 = fVar11 * fVar12;
    if (fVar4 < 0.5) {
      fVar13 = -(fVar11 * fVar12);
    }
    fVar5 = fVar5 * fVar13;
    fVar13 = fVar5 * _UNK_010041b0;
    *(float *)(param_1 + 0x40) =
         (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x34)) * 0.5 + (fVar9 / fVar11) * fVar5;
    *(float *)(param_1 + 0x44) =
         (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x38)) * 0.5 + fVar13;
    *(float *)(param_1 + 0x3c) =
         (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x30)) * 0.5 - (fVar8 / fVar11) * fVar5;
    fVar8 = *(float *)(iVar7 + 0x1c);
    *(float *)(param_1 + 0x48) = fVar8;
  }
  if (fVar10 < fVar8) {
    fVar9 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    *(float *)(param_1 + 0x4c) = fVar10 + fVar9;
    fVar8 = 1.0;
    if (0.0 < *(float *)(param_1 + 0x48)) {
      fVar8 = (fVar10 + fVar9) / *(float *)(param_1 + 0x48);
      bVar1 = fVar8 < 0.0;
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      if (bVar1) {
        fVar8 = _UNK_010041b0;
      }
    }
    if (fVar8 < 0.0) {
      fVar8 = _UNK_010041b0;
    }
    fVar9 = fVar8 * fVar8 * 3.0 - fVar8 * fVar8 * (fVar8 + fVar8);
    fVar9 = fVar9 + (1.0 - fVar9) * _UNK_010041b0;
    fVar10 = 1.0 - fVar9;
    fVar8 = fVar10 * fVar10;
    fVar10 = fVar9 * (fVar10 + fVar10);
    fVar9 = fVar9 * fVar9;
    if (*(int *)(param_1 + 0x20) != 0) {
      UnityEngine_Transform__set_position_3614acc
                (*(int *)(param_1 + 0x20),
                 *(float *)(param_1 + 0x3c) * fVar10 + *(float *)(param_1 + 0x24) * fVar8 +
                 *(float *)(param_1 + 0x30) * fVar9,
                 *(float *)(param_1 + 0x40) * fVar10 + *(float *)(param_1 + 0x28) * fVar8 +
                 *(float *)(param_1 + 0x34) * fVar9,
                 *(float *)(param_1 + 0x44) * fVar10 + *(float *)(param_1 + 0x2c) * fVar8 +
                 *(float *)(param_1 + 0x38) * fVar9,0);
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
LAB_01004168:
  if (*(int *)(param_1 + 0x20) != 0) {
    UnityEngine_Transform__set_position_3614acc
              (*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

