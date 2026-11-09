/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$.cctor
void Rotatelab_ChainOffer_ChainOfferManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$.cctor
   void Rotatelab_ChainOffer_ChainOfferManager___cctor (const MethodInfo* method); */

void Rotatelab_ChainOffer_ChainOfferManager___cctor_10e88c0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010f895c + 0x10f88d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8960 + 0x10f88e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8964 + 0x10f88f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8968 + 0x10f88fc));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f896c + 0x10f8910));
  Rotatelab_Save_SavedInt___ctor_10796b8(uVar3,**(undefined4 **)(_UNK_010f8970 + 0x10f892c),0,0);
  piVar4 = *(int **)(_UNK_010f8974 + 0x10f8940);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

