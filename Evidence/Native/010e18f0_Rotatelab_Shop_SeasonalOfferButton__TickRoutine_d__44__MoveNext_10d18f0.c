/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton.<TickRoutine>d__44$$MoveNext
bool Rotatelab_Shop_SeasonalOfferButton__TickRoutine_d__44__MoveNext (Rotatelab_Shop_SeasonalOfferButton__TickRoutine_d__44_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton.<TickRoutine>d__44$$MoveNext
   bool Rotatelab_Shop_SeasonalOfferButton__TickRoutine_d__44__MoveNext
   (Rotatelab_Shop_SeasonalOfferButton__TickRoutine_d__44_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Shop_SeasonalOfferButton__TickRoutine_d__44__MoveNext_10d18f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_010e19d0 + 0x10e1904);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e19d4 + 0x10e1918));
    *pcVar2 = '\x01';
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 8) < 2) {
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Shop_SeasonalOfferButton__UpdateOfferDuration_10d11fc(iVar3);
    if (iVar1 == 0) {
      uVar4 = 0;
      *(undefined4 *)(iVar3 + 0x70) = 0;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x70),0);
    }
    else {
      if (*(int *)(**(int **)(_UNK_010e19d8 + 0x10e1978) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar4 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar4);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar4;
}

