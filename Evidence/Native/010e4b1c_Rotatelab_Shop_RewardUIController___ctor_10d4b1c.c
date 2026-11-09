/* IL2CPP: Rotatelab.Shop.RewardUIController$$.ctor
void Rotatelab_Shop_RewardUIController___ctor (Rotatelab_Shop_RewardUIController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardUIController$$.ctor
   void Rotatelab_Shop_RewardUIController___ctor (Rotatelab_Shop_RewardUIController_o* __this, const
   MethodInfo* method); */

int Rotatelab_Shop_RewardUIController___ctor_10d4b1c(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010e4ba0 + 0x10e4b30);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ba4 + 0x10e4b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ba8 + 0x10e4b50));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e4bac + 0x10e4b64));
  System_Collections_Generic_Queue_RewardData____ctor_18fd128
            (uVar1,**(undefined4 **)(_UNK_010e4bb0 + 0x10e4b78));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

