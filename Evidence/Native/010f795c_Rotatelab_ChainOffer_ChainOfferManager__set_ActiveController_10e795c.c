/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$set_ActiveController
void Rotatelab_ChainOffer_ChainOfferManager__set_ActiveController (Rotatelab_ChainOffer_ChainOfferManager_o* __this, Rotatelab_ChainOffer_BaseChainOfferController_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$set_ActiveController
   void Rotatelab_ChainOffer_ChainOfferManager__set_ActiveController
   (Rotatelab_ChainOffer_ChainOfferManager_o* __this,
   Rotatelab_ChainOffer_BaseChainOfferController_o* value, const MethodInfo* method); */

void Rotatelab_ChainOffer_ChainOfferManager__set_ActiveController_10e795c
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x20);
  *puVar3 = param_2;
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

