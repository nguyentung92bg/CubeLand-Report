/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$get_Config
Rotatelab_Networking_SatoriSuperHardOfferConfigFlag_o* Rotatelab_Shop_SuperHardOffer__get_Config (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$get_Config
   Rotatelab_Networking_SatoriSuperHardOfferConfigFlag_o* Rotatelab_Shop_SuperHardOffer__get_Config
   (const MethodInfo* method); */

undefined4 Rotatelab_Shop_SuperHardOffer__get_Config_10d2554(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010e25a8 + 0x10e2564);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e25ac + 0x10e2578));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e25b0 + 0x10e258c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x7c);
}

