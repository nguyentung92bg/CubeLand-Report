/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$Start
void Rotatelab_Shop_SeasonalOfferButton__Start (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$Start
   void Rotatelab_Shop_SeasonalOfferButton__Start (Rotatelab_Shop_SeasonalOfferButton_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__Start_10d0dd4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010e0e88 + 0x10e0dec);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0e8c + 0x10e0e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0e90 + 0x10e0e0c));
    *pcVar2 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__Start_10cc570(param_1);
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  piVar3 = *(int **)(_UNK_010e0e94 + 0x10e0e30);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar1,*(undefined4 *)(param_1 + 0x14),1,3,**(undefined4 **)(_UNK_010e0e98 + 0x10e0e74))
  ;
  return;
}

