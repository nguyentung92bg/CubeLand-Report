/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot$$.ctor
void Rotatelab_Shop_StarChallengeSO_RewardSlot___ctor (Rotatelab_Shop_StarChallengeSO_RewardSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot$$.ctor
   void Rotatelab_Shop_StarChallengeSO_RewardSlot___ctor
   (Rotatelab_Shop_StarChallengeSO_RewardSlot_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeSO_RewardSlot___ctor_10c4694(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010d4750 + 0x10d46a8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4754 + 0x10d46bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4758 + 0x10d46c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d475c + 0x10d46d4));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d4760 + 0x10d46e8));
  System_Object___ctor_2bb93bc(uVar1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d4764 + 0x10d4714));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_010d4768 + 0x10d4728));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  return param_1;
}

