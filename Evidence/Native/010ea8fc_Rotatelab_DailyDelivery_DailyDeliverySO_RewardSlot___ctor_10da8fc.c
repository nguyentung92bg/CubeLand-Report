/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot$$.ctor
void Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot___ctor (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot$$.ctor
   void Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot___ctor
   (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* __this, const MethodInfo* method); */

int Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot___ctor_10da8fc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010ea9b8 + 0x10ea910);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea9bc + 0x10ea924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea9c0 + 0x10ea930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea9c4 + 0x10ea93c));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ea9c8 + 0x10ea950));
  System_Object___ctor_2bb93bc(uVar1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ea9cc + 0x10ea97c));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_010ea9d0 + 0x10ea990));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  return param_1;
}

