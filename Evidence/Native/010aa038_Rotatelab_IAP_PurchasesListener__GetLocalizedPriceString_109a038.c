/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetLocalizedPriceString
System_String_o* Rotatelab_IAP_PurchasesListener__GetLocalizedPriceString (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetLocalizedPriceString
   System_String_o* Rotatelab_IAP_PurchasesListener__GetLocalizedPriceString
   (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, const MethodInfo*
   method); */

int Rotatelab_IAP_PurchasesListener__GetLocalizedPriceString_109a038
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010aa0b4 + 0x10aa050);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa0b8 + 0x10aa064));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_IAP_PurchasesListener__GetProduct_1099e40(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
  }
  iVar2 = **(int **)(_UNK_010aa0bc + 0x10aa0ac);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

