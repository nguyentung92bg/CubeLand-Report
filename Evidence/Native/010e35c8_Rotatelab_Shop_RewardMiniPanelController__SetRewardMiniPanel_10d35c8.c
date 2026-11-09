/* IL2CPP: Rotatelab.Shop.RewardMiniPanelController$$SetRewardMiniPanel
void Rotatelab_Shop_RewardMiniPanelController__SetRewardMiniPanel (Rotatelab_Shop_RewardMiniPanelController_o* __this, System_Collections_Generic_List_RewardBase__o* rewardBases, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardMiniPanelController$$SetRewardMiniPanel
   void Rotatelab_Shop_RewardMiniPanelController__SetRewardMiniPanel
   (Rotatelab_Shop_RewardMiniPanelController_o* __this,
   System_Collections_Generic_List_RewardBase__o* rewardBases, const MethodInfo* method); */

void Rotatelab_Shop_RewardMiniPanelController__SetRewardMiniPanel_10d35c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_010e36f8 + 0x10e35e4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e36fc + 0x10e35f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3700 + 0x10e3604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3704 + 0x10e3610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3708 + 0x10e361c));
    *pcVar3 = '\x01';
  }
  iVar6 = 0;
  puVar8 = *(undefined4 **)(_UNK_010e370c + 0x10e3634);
  puVar7 = *(undefined4 **)(_UNK_010e3710 + 0x10e363c);
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 0xc) <= iVar6) {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_010e3714 + 0x10e365c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__Instantiate_object__14d4dd0(uVar4,uVar5,*puVar8);
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814(param_2,iVar6,*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814(param_2,iVar6,*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) break;
    Rotatelab_Shop_RewardInfo__SetUI_10d354c(iVar1,uVar4,*(undefined4 *)(iVar2 + 0xc));
    iVar6 = iVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

