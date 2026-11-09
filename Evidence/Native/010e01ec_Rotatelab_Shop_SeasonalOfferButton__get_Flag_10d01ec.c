/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_Flag
Rotatelab_Networking_SatoriSeasonalOfferFlag_o* Rotatelab_Shop_SeasonalOfferButton__get_Flag (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_Flag
   Rotatelab_Networking_SatoriSeasonalOfferFlag_o* Rotatelab_Shop_SeasonalOfferButton__get_Flag
   (const MethodInfo* method); */

undefined4 Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010e0240 + 0x10e01fc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0244 + 0x10e0210));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e0248 + 0x10e0224));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 100);
}

