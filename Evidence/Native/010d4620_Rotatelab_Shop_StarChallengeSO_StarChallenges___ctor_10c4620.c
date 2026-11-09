/* IL2CPP: Rotatelab.Shop.StarChallengeSO.StarChallenges$$.ctor
void Rotatelab_Shop_StarChallengeSO_StarChallenges___ctor (Rotatelab_Shop_StarChallengeSO_StarChallenges_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO.StarChallenges$$.ctor
   void Rotatelab_Shop_StarChallengeSO_StarChallenges___ctor
   (Rotatelab_Shop_StarChallengeSO_StarChallenges_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeSO_StarChallenges___ctor_10c4620(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010d4688 + 0x10d4634);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d468c + 0x10d4648));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d4690 + 0x10d465c));
  Rotatelab_Shop_StarChallengeSO_RewardSlot___ctor_10c4694();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
  return param_1;
}

