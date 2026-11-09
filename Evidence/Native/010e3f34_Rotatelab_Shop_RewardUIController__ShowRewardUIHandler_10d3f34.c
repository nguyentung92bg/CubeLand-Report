/* IL2CPP: Rotatelab.Shop.RewardUIController$$ShowRewardUIHandler
void Rotatelab_Shop_RewardUIController__ShowRewardUIHandler (Rotatelab_Shop_RewardUIController_o* __this, System_Collections_Generic_List_RewardBase__o* rewardBases, System_String_o* header, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardUIController$$ShowRewardUIHandler
   void Rotatelab_Shop_RewardUIController__ShowRewardUIHandler (Rotatelab_Shop_RewardUIController_o*
   __this, System_Collections_Generic_List_RewardBase__o* rewardBases, System_String_o* header,
   const MethodInfo* method); */

void Rotatelab_Shop_RewardUIController__ShowRewardUIHandler_10d3f34
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010e4054 + 0x10e3f54);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4058 + 0x10e3f68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e405c + 0x10e3f74));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = param_3;
  thunk_FUN_00ec5080(&uStack_20,param_3);
  uStack_1c = param_2;
  thunk_FUN_00ec5080((uint)&uStack_20 | 4,param_2);
  uVar2 = uStack_1c;
  uVar1 = uStack_20;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x14) == 0) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_RewardData___Enqueue_18fd704
              (iVar4,uStack_20,uStack_1c,**(undefined4 **)(_UNK_010e4060 + 0x10e4034));
    Rotatelab_Shop_RewardUIController__ShowReward_10d4068(param_1,uVar1,uVar2);
  }
  else {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (0 < *(int *)(iVar4 + 0x14)) {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Queue_RewardData___Enqueue_18fd704
                (*(int *)(param_1 + 0x28),uStack_20,uStack_1c,
                 **(undefined4 **)(_UNK_010e4064 + 0x10e4008));
    }
  }
  return;
}

