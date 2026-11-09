/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$OnReturnToPreGameHandler
void Rotatelab_Shop_DailyQuestMemberController__OnReturnToPreGameHandler (Rotatelab_Shop_DailyQuestMemberController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$OnReturnToPreGameHandler
   void Rotatelab_Shop_DailyQuestMemberController__OnReturnToPreGameHandler
   (Rotatelab_Shop_DailyQuestMemberController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestMemberController__OnReturnToPreGameHandler_10bfbe4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_010cfbd8 + 0x10cfb5c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfbdc + 0x10cfb70));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(param_1 + 0x1c);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = (**(code **)(*piVar7 + 0x230))(piVar7,*(undefined4 *)(*piVar7 + 0x234));
  if (*(int *)(**(int **)(_UNK_010cfbe0 + 0x10cfbac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = System_Convert__ToInt32_2b1dc64(uVar4,0);
  cVar1 = *(char *)(param_1 + 0x24);
  bVar10 = cVar1 == '\0';
  if (bVar10) {
    cVar1 = *(char *)(param_1 + 0x25);
  }
  if (!bVar10 || cVar1 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuest_10bc9e0
                    (*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(param_1 + 0x30);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - iVar5;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests_10bc1a8(iVar9);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  pcVar6 = (char *)(_UNK_010cee1c + 0x10cec9c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cee20 + 0x10cecb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cee24 + 0x10cecbc));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(param_1 + 0x1c);
  uStack_24 = 0;
  if (piVar7 != (int *)0x0) {
    fVar11 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(*piVar7 + 0x238))(piVar7,fVar11,*(undefined4 *)(*piVar7 + 0x23c));
    piVar7 = *(int **)(param_1 + 0x18);
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = (**(code **)(*piVar8 + 0x230))(piVar8,*(undefined4 *)(*piVar8 + 0x234));
    uVar4 = System_Single__ToString_2b8501c(&uStack_24,0);
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc4);
    uVar2 = System_Single__ToString_2b8501c(&uStack_24,0);
    uVar4 = System_String__Concat_2a0b574
                      (uVar4,**(undefined4 **)(_UNK_010cee28 + 0x10ced6c),uVar2,0);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar4,*(undefined4 *)(*piVar7 + 0x2b4));
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(float *)(*(int *)(param_1 + 0x1c) + 0xc4) <= fVar11) &&
         (*(char *)(param_1 + 0x24) == '\0')) {
        piVar7 = *(int **)(_UNK_010cee2c + 0x10cedd8);
        *(undefined1 *)(param_1 + 0x25) = 1;
        iVar5 = *piVar7;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar7;
        }
        iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x168);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar5,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

