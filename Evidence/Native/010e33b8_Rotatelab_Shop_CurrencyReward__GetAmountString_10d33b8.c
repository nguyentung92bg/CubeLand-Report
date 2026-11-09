/* IL2CPP: Rotatelab.Shop.CurrencyReward$$GetAmountString
System_String_o* Rotatelab_Shop_CurrencyReward__GetAmountString (Rotatelab_Shop_CurrencyReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.CurrencyReward$$GetAmountString
   System_String_o* Rotatelab_Shop_CurrencyReward__GetAmountString (Rotatelab_Shop_CurrencyReward_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_CurrencyReward__GetAmountString_10d33b8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b7ba88 + 0x2b7ba04);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02b7ba8c + 0x2b7ba18),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_02b7ba90 + 0x2b7ba24));
    *pcVar2 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  System_ReadOnlySpan_char___op_Implicit_1a0c658
            (&uStack_18,0,**(undefined4 **)(_UNK_02b7ba94 + 0x2b7ba40));
  if (*(int *)(**(int **)(_UNK_02b7ba98 + 0x2b7ba54) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Number__FormatInt32_2b697e8(uVar1,uStack_18,uStack_14,0);
  return;
}

