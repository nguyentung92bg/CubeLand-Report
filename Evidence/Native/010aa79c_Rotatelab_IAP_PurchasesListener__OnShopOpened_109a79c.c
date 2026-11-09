/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnShopOpened
void Rotatelab_IAP_PurchasesListener__OnShopOpened (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnShopOpened
   void Rotatelab_IAP_PurchasesListener__OnShopOpened (Rotatelab_IAP_PurchasesListener_o* __this,
   const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnShopOpened_109a79c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010aa7f0 + 0x10aa7b0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa7f4 + 0x10aa7c4));
    *pcVar4 = '\x01';
  }
  Rotatelab_IAP_PurchasesListener__FetchProducts_109a758(param_1);
  puVar3 = (undefined4 *)(param_1 + 0x34);
  *puVar3 = **(undefined4 **)(_UNK_010aa7f8 + 0x10aa7e0);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

