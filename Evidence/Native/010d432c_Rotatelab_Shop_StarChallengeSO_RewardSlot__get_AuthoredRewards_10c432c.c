/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot$$get_AuthoredRewards
System_Collections_Generic_IEnumerable_StarChallengeSO_SingleReward__o* Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards (Rotatelab_Shop_StarChallengeSO_RewardSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot$$get_AuthoredRewards
   System_Collections_Generic_IEnumerable_StarChallengeSO_SingleReward__o*
   Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards
   (Rotatelab_Shop_StarChallengeSO_RewardSlot_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_10c432c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010d43a4 + 0x10d4340);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d43a8 + 0x10d4354));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d43ac + 0x10d4368));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_2bbd104(0);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  return iVar1;
}

