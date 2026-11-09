/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot.<get_AuthoredRewards>d__10$$System.Collections.IEnumerable.GetEnumerator
System_Collections_IEnumerator_o* Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10__System_Collections_IEnumerable_GetEnumerator (Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Shop.StarChallengeSO.RewardSlot.<get_AuthoredRewards>d__10$$System.Collections.IEnumerable.GetEnumerator
   System_Collections_IEnumerator_o*
   Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10__System_Collections_IEnumerable_GetEnumerator
   (Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10_o* __this, const
   MethodInfo* method); */

int Rotatelab_Shop_StarChallengeSO_RewardSlot__get_AuthoredRewards_d__10__System_Collections_IEnumerable_GetEnumerator_10c4bf0
              (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_010d4be4 + 0x10d4b50);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4be8 + 0x10d4b64));
    *pcVar3 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar4 = *(int *)(param_1 + 0x10),
     iVar1 = System_Environment__get_CurrentManagedThreadId_2bbd104(0), iVar4 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d4bec + 0x10d4ba8));
    System_Object___ctor_2bb93bc(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = System_Environment__get_CurrentManagedThreadId_2bbd104(0);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_00ec5080();
  }
  return iVar1;
}

