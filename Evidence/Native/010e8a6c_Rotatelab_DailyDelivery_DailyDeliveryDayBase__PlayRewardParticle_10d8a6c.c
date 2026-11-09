/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$PlayRewardParticle
void Rotatelab_DailyDelivery_DailyDeliveryDayBase__PlayRewardParticle (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, System_Collections_Generic_List_DailyDeliveryRewardParticle__o* rewardParticles, Rotatelab_DailyDelivery_DailyDeliverySO_SingleReward_o* reward, int32_t cellIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$PlayRewardParticle
   void Rotatelab_DailyDelivery_DailyDeliveryDayBase__PlayRewardParticle
   (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this,
   System_Collections_Generic_List_DailyDeliveryRewardParticle__o* rewardParticles,
   Rotatelab_DailyDelivery_DailyDeliverySO_SingleReward_o* reward, int32_t cellIndex, const
   MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryDayBase__PlayRewardParticle_10d8a6c
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010e8c28 + 0x10e8a8c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8c2c + 0x10e8aa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8c30 + 0x10e8ab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8c34 + 0x10e8abc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8c38 + 0x10e8ac8));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (param_2,0,**(undefined4 **)(_UNK_010e8c3c + 0x10e8aec));
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x28),param_4,**(undefined4 **)(_UNK_010e8c40 + 0x10e8b18));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_2c,iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_DailyDelivery_DailyDeliveryRewardParticle__Play_10d8c50
            (iVar1,param_3,uStack_2c,uStack_28,uStack_24);
  if (param_2 != 0) {
    System_Collections_Generic_List_object___RemoveAt_267f3f8
              (param_2,0,**(undefined4 **)(_UNK_010e8c44 + 0x10e8b88));
    iVar2 = *(int *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    piVar3 = *(int **)(_UNK_010e8c4c + 0x10e8bd4);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar5 < *(uint *)(iVar2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      piVar3 = (int *)(iVar2 + uVar5 * 4 + 0x10);
      *piVar3 = iVar1;
      thunk_FUN_00ec5080(piVar3,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (param_2,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

