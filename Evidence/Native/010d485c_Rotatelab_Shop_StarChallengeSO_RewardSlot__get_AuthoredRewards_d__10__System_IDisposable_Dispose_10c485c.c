/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot.<get_AuthoredRewards>d__10$$System.IDisposable.Dispose
void Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10__System_IDisposable_Dispose (Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Shop.StarChallengeSO.RewardSlot.<get_AuthoredRewards>d__10$$System.IDisposable.Dispose
   void 
   Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10__System_IDisposable_Dispose
   (Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10_o* __this, const
   MethodInfo* method); */

undefined8
Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10__System_IDisposable_Dispose_10c485c
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2 || iVar1 == -3) {
    pcVar3 = (char *)(_UNK_010d4adc + 0x10d4aa0);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d4ae0 + 0x10d4ab4));
      *pcVar3 = '\x01';
    }
    uVar2 = **(undefined4 **)(_UNK_010d4ae4 + 0x10d4ac8);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return CONCAT44(uVar2,param_1 + 0x18);
  }
  return CONCAT44(iVar1,param_1);
}

