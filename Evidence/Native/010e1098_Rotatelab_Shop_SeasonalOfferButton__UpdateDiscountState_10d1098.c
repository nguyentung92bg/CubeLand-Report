/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$UpdateDiscountState
void Rotatelab_Shop_SeasonalOfferButton__UpdateDiscountState (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$UpdateDiscountState
   void Rotatelab_Shop_SeasonalOfferButton__UpdateDiscountState
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__UpdateDiscountState_10d1098(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  Rotatelab_Shop_IapOfferButton__UpdateDiscountState_10ce864();
  uVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 100) + 0xc) <= (int)uVar6) {
      if (*(char *)(param_1 + 0x48) == '\0') {
        return;
      }
      piVar4 = (int *)(param_1 + 0x70);
      if (*piVar4 == 0) {
        uVar3 = Rotatelab_Shop_SeasonalOfferButton__TickRoutine_10d1168(param_1);
        uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
          return;
        }
        return;
      }
      return;
    }
    iVar5 = *(int *)(param_1 + 100);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) break;
    iVar5 = *(int *)(iVar5 + uVar6 * 4 + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar5,*(char *)(param_1 + 0x48) != '\0',0);
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

