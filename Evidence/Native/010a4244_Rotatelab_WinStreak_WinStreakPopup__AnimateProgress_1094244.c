/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$AnimateProgress
PrimeTween_Tween_o Rotatelab_WinStreak_WinStreakPopup__AnimateProgress (Rotatelab_WinStreak_WinStreakPopup_o* __this, int32_t fromLevel, int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$AnimateProgress
   PrimeTween_Tween_o Rotatelab_WinStreak_WinStreakPopup__AnimateProgress
   (Rotatelab_WinStreak_WinStreakPopup_o* __this, int32_t fromLevel, int32_t toLevel, const
   MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup__AnimateProgress_1094244
               (undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_010a4464 + 0x10a4268);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4468 + 0x10a427c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a446c + 0x10a4288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4470 + 0x10a4294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4474 + 0x10a42a0));
    *pcVar12 = '\x01';
  }
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a4478 + 0x10a42b4));
  System_Object___ctor_2bb93bc(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar5 + 8) = param_2;
  thunk_FUN_00ec5080((int *)(iVar5 + 8),param_2);
  *(undefined4 *)(iVar5 + 0x14) = param_4;
  iVar13 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(iVar5 + 0x10) = param_3;
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_WinStreak_WinStreakPopup__get_Data_1093a68();
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                    (iVar6,*(undefined4 *)(iVar5 + 0x10));
  uVar11 = *(uint *)(iVar13 + 0xc) - 1;
  if ((int)uVar11 < (int)uVar7) {
    uVar7 = uVar11;
  }
  if (*(uint *)(iVar13 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar13 + uVar7 * 4 + 0x10);
  thunk_FUN_00ec5080();
  uVar8 = Rotatelab_WinStreak_WinStreakPopup__GetLevelHeight_1094490
                    (param_2,*(undefined4 *)(iVar5 + 0x10));
  uVar9 = Rotatelab_WinStreak_WinStreakPopup__GetLevelHeight_1094490
                    (param_2,*(undefined4 *)(iVar5 + 0x14));
  iVar13 = *(int *)(iVar5 + 0x10);
  iVar6 = *(int *)(iVar5 + 0x14);
  uVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a447c + 0x10a438c));
  System_Action_float____ctor_1f12930(uVar10,iVar5,**(undefined4 **)(_UNK_010a4480 + 0x10a43ac),0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,3,0);
  uVar4 = uStack_2c;
  uVar3 = uStack_30;
  uVar2 = uStack_34;
  uVar1 = uStack_38;
  if (*(int *)(**(int **)(_UNK_010a4484 + 0x10a43d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar14 = 0x3fa00000;
  if (iVar6 < iVar13) {
    uVar14 = 0x3f800000;
  }
  PrimeTween_Tween__Custom_2ce885c
            (&uStack_38,uVar8,uVar9,uVar14,uVar10,uVar1,uVar2,uVar3,uVar4,uStack_28,1,0,0,0,0,0);
  *param_1 = CONCAT44(uStack_34,uStack_38);
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return;
}

