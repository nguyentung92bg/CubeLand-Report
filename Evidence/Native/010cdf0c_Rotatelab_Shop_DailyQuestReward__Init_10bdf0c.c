/* IL2CPP: Rotatelab.Shop.DailyQuestReward$$Init
void Rotatelab_Shop_DailyQuestReward__Init (Rotatelab_Shop_DailyQuestReward_o* __this, Rotatelab_Shop_DailyQuestSo_DailyQuestSingleRewardData_o* rewardData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestReward$$Init
   void Rotatelab_Shop_DailyQuestReward__Init (Rotatelab_Shop_DailyQuestReward_o* __this,
   Rotatelab_Shop_DailyQuestSo_DailyQuestSingleRewardData_o* rewardData, const MethodInfo* method);
    */

void Rotatelab_Shop_DailyQuestReward__Init_10bdf0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uStack_24;
  
  pcVar3 = (char *)(_UNK_010ce118 + 0x10cdf28);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce11c + 0x10cdf3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce120 + 0x10cdf48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce124 + 0x10cdf54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce128 + 0x10cdf60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce12c + 0x10cdf6c));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  *(int *)(param_1 + 0x18) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x18),param_2);
  iVar1 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestSo_10b9214();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(iVar1 + 0x20);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_010ce130 + 0x10cdfbc);
  uVar6 = *(undefined4 *)(param_2 + 8);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar4 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ce134 + 0x10ce008));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar5,uVar4,**(undefined4 **)(_UNK_010ce138 + 0x10ce028),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar5;
    thunk_FUN_00ec5080(piVar8,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_010ce13c + 0x10ce050) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar7,uVar6,iVar5,**(undefined4 **)(_UNK_010ce140 + 0x10ce074));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x14),0)
  ;
  piVar8 = *(int **)(param_1 + 0x14);
  uStack_24 = FUN_00f88368(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  uStack_24 = uStack_24 & 0x7fffffff;
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar7 = System_Single__ToString_2b8501c(&uStack_24,0);
  uVar7 = System_String__Concat_2a0b574(uVar6,uVar7,*(undefined4 *)(iVar1 + 0x10),0);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0x2b4));
  return;
}

