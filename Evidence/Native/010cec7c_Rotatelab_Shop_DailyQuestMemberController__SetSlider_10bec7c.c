/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$SetSlider
void Rotatelab_Shop_DailyQuestMemberController__SetSlider (Rotatelab_Shop_DailyQuestMemberController_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$SetSlider
   void Rotatelab_Shop_DailyQuestMemberController__SetSlider
   (Rotatelab_Shop_DailyQuestMemberController_o* __this, int32_t value, const MethodInfo* method);
    */

void Rotatelab_Shop_DailyQuestMemberController__SetSlider_10bec7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010cee1c + 0x10cec9c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cee20 + 0x10cecb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cee24 + 0x10cecbc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 0x1c);
  uStack_24 = 0;
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar5 + 0x238))(piVar5,fVar7,*(undefined4 *)(*piVar5 + 0x23c));
  piVar5 = *(int **)(param_1 + 0x18);
  piVar6 = *(int **)(param_1 + 0x1c);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_24 = (**(code **)(*piVar6 + 0x230))(piVar6,*(undefined4 *)(*piVar6 + 0x234));
  uVar1 = System_Single__ToString_2b8501c(&uStack_24,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_24 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc4);
  uVar2 = System_Single__ToString_2b8501c(&uStack_24,0);
  uVar1 = System_String__Concat_2a0b574(uVar1,**(undefined4 **)(_UNK_010cee28 + 0x10ced6c),uVar2,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar1,*(undefined4 *)(*piVar5 + 0x2b4));
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(float *)(*(int *)(param_1 + 0x1c) + 0xc4) <= fVar7) && (*(char *)(param_1 + 0x24) == '\0'))
  {
    piVar5 = *(int **)(_UNK_010cee2c + 0x10cedd8);
    *(undefined1 *)(param_1 + 0x25) = 1;
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar5;
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

