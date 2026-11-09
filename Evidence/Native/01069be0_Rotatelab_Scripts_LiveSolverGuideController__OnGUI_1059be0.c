/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnGUI
void Rotatelab_Scripts_LiveSolverGuideController__OnGUI (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnGUI
   void Rotatelab_Scripts_LiveSolverGuideController__OnGUI
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnGUI_1059be0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  pcVar10 = (char *)(_UNK_0106a19c + 0x1069c00);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1a0 + 0x1069c14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1a4 + 0x1069c20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1a8 + 0x1069c2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1ac + 0x1069c38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1b0 + 0x1069c44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1b4 + 0x1069c50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1b8 + 0x1069c5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1bc + 0x1069c68));
    *pcVar10 = '\x01';
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  iVar1 = UnityEngine_Event__get_current_3652c28(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Event__get_type_3651da0(iVar1,0);
  if (iVar1 != 7) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    fStack_48 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    fStack_48 = fStack_48 - *(float *)(param_1 + 0x50);
    iVar1 = *(int *)(_UNK_0106a1c0 + 0x1069cd8);
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x3c),&fStack_48);
    uStack_4c = *(undefined4 *)(param_1 + 0x54);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_4c);
    uVar2 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_0106a1c4 + 0x1069d10),uVar2,uVar3,0);
    if ((int)*(float *)(param_1 + 0x58) < 0) {
      uVar3 = **(undefined4 **)(_UNK_0106a1c8 + 0x1069d84);
    }
    else {
      fStack_48 = *(float *)(param_1 + 0x58);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&fStack_48);
      uStack_4c = *(undefined4 *)(param_1 + 0x5c);
      uVar4 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_4c);
      uVar3 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_0106a1cc + 0x1069d64),uVar3,uVar4,0);
    }
    uVar2 = System_String__Concat_29fee38(uVar2,uVar3,0);
  }
  iVar1 = System_String__IsNullOrEmpty_2a0a844(uVar2,0);
  if (iVar1 != 0) {
    return;
  }
  piVar13 = (int *)(param_1 + 0x68);
  iVar1 = *piVar13;
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0106a1d0 + 0x1069dc4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_GUI__get_skin_3654ac8(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = UnityEngine_GUISkin__get_label_3655130(iVar1,0);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106a1d4 + 0x1069e08));
    UnityEngine_GUIStyle___ctor_3668b88(iVar1,uVar3,0);
    uVar3 = UnityEngine_Resources__GetBuiltinResource_object__159c310
                      (**(undefined4 **)(_UNK_0106a1dc + 0x1069e34),
                       **(undefined4 **)(_UNK_0106a1d8 + 0x1069e28));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GUIStyle__set_font_3666560(iVar1,uVar3,0);
    *piVar13 = iVar1;
    thunk_FUN_00ec5080(piVar13,iVar1);
    iVar1 = *piVar13;
  }
  uVar3 = UnityEngine_Screen__get_height_35bd0c4(0);
  fVar17 = _UNK_0106a198;
  fVar15 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  pcVar10 = (char *)(_UNK_0106a1e0 + 0x1069e8c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a1e4 + 0x1069ea0));
    *pcVar10 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0106a1e8 + 0x1069eb8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar16 = (double)(fVar15 * fVar17);
  dVar18 = (double)modf(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),&fStack_48);
  if (NAN(fVar15 * fVar17)) {
    uVar14 = in_fpscr & 0xfffffff | (uint)(dVar18 == -0.5) << 0x1e;
    if (SUB41(uVar14 >> 0x1e,0)) {
      dVar16 = -1.0;
LAB_01069f1c:
      dVar18 = (double)CONCAT44(uStack_44,fStack_48);
      uVar5 = FUN_00f88224(fStack_48,uStack_44);
      dVar16 = dVar18 + dVar16;
      if ((uVar5 & 1) == 0) {
        dVar16 = dVar18;
      }
    }
    else {
      dVar16 = (double)ceil(SUB84(dVar16 + -0.5,0),(int)((ulonglong)(dVar16 + -0.5) >> 0x20));
    }
  }
  else {
    uVar14 = in_fpscr & 0xfffffff | (uint)(dVar18 == 0.5) << 0x1e;
    if (SUB41(uVar14 >> 0x1e,0)) {
      dVar16 = 1.0;
      goto LAB_01069f1c;
    }
    dVar16 = (double)floor(SUB84(dVar16 + 0.5,0),(int)((ulonglong)(dVar16 + 0.5) >> 0x20));
  }
  uVar3 = (undefined4)(longlong)dVar16;
  uVar14 = uVar14 & 0xfffffff | (uint)(dVar16 == _UNK_0106a190) << 0x1e;
  if (SUB41(uVar14 >> 0x1e,0)) {
    uVar3 = 0x80000000;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GUIStyle__set_fontSize_36672c8(iVar1,uVar3,0);
  uVar3 = UnityEngine_Screen__get_width_35bd080(0);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_GUIStyle__get_fontSize_36671bc(*piVar13,0);
  if (*(int *)(**(int **)(_UNK_0106a1ec + 0x1069fc0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar17 = (float)VectorSignedToFloat(uVar3,(byte)(uVar14 >> 0x16) & 3);
  fVar15 = (float)VectorSignedToFloat(uVar4,(byte)(uVar14 >> 0x16) & 3);
  iVar1 = UnityEngine_GUIStyle__get_normal_3665758(*piVar13,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GUIStyleState__set_textColor_36657a0(iVar1,0,0,0,0x3f800000,0);
  iVar1 = *piVar13;
  if (*(int *)(**(int **)(_UNK_0106a1f0 + 0x106a044) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_GUI__Label_36551fc(0x41700000,0x41700000,fVar17 + -28.0,fVar15 + fVar15,uVar2,iVar1,0)
  ;
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GUIStyle__get_normal_3665758(*piVar13,0);
  if (*(int *)(param_1 + 0x34) == 0) {
    if (*(char *)(param_1 + 100) != '\0') {
      uVar12 = 0x3e800000;
      uVar11 = 0x3e99999a;
      uVar3 = 0x3f800000;
      uVar4 = 0x3f800000;
      goto LAB_0106a0f8;
    }
    if (*(int *)(param_1 + 0x44) < 1) goto LAB_0106a0b4;
    puVar6 = (undefined4 *)(param_1 + 0x2c);
    puVar7 = (undefined4 *)(param_1 + 0x28);
    puVar8 = (undefined4 *)(param_1 + 0x24);
    puVar9 = (undefined4 *)(param_1 + 0x20);
  }
  else {
LAB_0106a0b4:
    puVar6 = (undefined4 *)(param_1 + 0x1c);
    puVar7 = (undefined4 *)(param_1 + 0x18);
    puVar8 = (undefined4 *)(param_1 + 0x14);
    puVar9 = (undefined4 *)(param_1 + 0x10);
  }
  uVar3 = *puVar6;
  uVar12 = *puVar7;
  uVar11 = *puVar8;
  uVar4 = *puVar9;
LAB_0106a0f8:
  if (iVar1 != 0) {
    UnityEngine_GUIStyleState__set_textColor_36657a0(iVar1,uVar4,uVar11,uVar12,uVar3,0);
    iVar1 = *piVar13;
    if (*(int *)(**(int **)(_UNK_0106a1f4 + 0x106a12c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_GUI__Label_36551fc
              (0x41600000,0x41600000,fVar17 + -28.0,fVar15 + fVar15,uVar2,iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

