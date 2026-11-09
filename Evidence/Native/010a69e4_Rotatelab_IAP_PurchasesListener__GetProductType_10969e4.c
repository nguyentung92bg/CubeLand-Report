/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetProductType
int32_t Rotatelab_IAP_PurchasesListener__GetProductType (System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetProductType
   int32_t Rotatelab_IAP_PurchasesListener__GetProductType (System_String_o* productId, const
   MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__GetProductType_10969e4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_010a6a3c + 0x10a69f8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6a40 + 0x10a6a0c));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_String__Contains_2a104b8(param_1,**(undefined4 **)(_UNK_010a6a44 + 0x10a6a30),0);
  return;
}

