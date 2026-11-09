/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$IncreaseCurrentValueBy
void Rotatelab_Shop_DailyQuestMemberController__IncreaseCurrentValueBy (Rotatelab_Shop_DailyQuestMemberController_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$IncreaseCurrentValueBy
   void Rotatelab_Shop_DailyQuestMemberController__IncreaseCurrentValueBy
   (Rotatelab_Shop_DailyQuestMemberController_o* __this, int32_t value, const MethodInfo* method);
    */

void Rotatelab_Shop_DailyQuestMemberController__IncreaseCurrentValueBy_10bf488
               (int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uStack_24;
  
  cVar1 = *(char *)(param_1 + 0x24);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x25);
  }
  if (!bVar9 || cVar1 != '\0') {
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
  iVar8 = *(int *)(param_1 + 0x30);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + param_2;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests_10bc1a8(iVar8);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  pcVar5 = (char *)(_UNK_010cee1c + 0x10cec9c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cee20 + 0x10cecb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cee24 + 0x10cecbc));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  uStack_24 = 0;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar6 + 0x238))(piVar6,fVar10,*(undefined4 *)(*piVar6 + 0x23c));
  piVar6 = *(int **)(param_1 + 0x18);
  piVar7 = *(int **)(param_1 + 0x1c);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_24 = (**(code **)(*piVar7 + 0x230))(piVar7,*(undefined4 *)(*piVar7 + 0x234));
  uVar4 = System_Single__ToString_2b8501c(&uStack_24,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uStack_24 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc4);
    uVar2 = System_Single__ToString_2b8501c(&uStack_24,0);
    uVar4 = System_String__Concat_2a0b574
                      (uVar4,**(undefined4 **)(_UNK_010cee28 + 0x10ced6c),uVar2,0);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar4,*(undefined4 *)(*piVar6 + 0x2b4));
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(float *)(*(int *)(param_1 + 0x1c) + 0xc4) <= fVar10) &&
         (*(char *)(param_1 + 0x24) == '\0')) {
        piVar6 = *(int **)(_UNK_010cee2c + 0x10cedd8);
        *(undefined1 *)(param_1 + 0x25) = 1;
        iVar3 = *piVar6;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar6;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x168);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

