/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnPurchaseSucceededHandler
void Rotatelab_Shop_SeasonalOfferButton__OnPurchaseSucceededHandler (Rotatelab_Shop_SeasonalOfferButton_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnPurchaseSucceededHandler
   void Rotatelab_Shop_SeasonalOfferButton__OnPurchaseSucceededHandler
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__OnPurchaseSucceededHandler_10d1744
               (int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  int *piVar5;
  
  (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_IsOfferIndexValid_10d024c(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(param_2 + 0x10);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar5 + 0xe0))(piVar5,*(undefined4 *)(*piVar5 + 0xe4));
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer_10d02d0(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Object__get_name_36081bc(*(int *)(iVar1 + 8),0);
  iVar1 = System_String__op_Inequality_2a09760(uVar2,uVar3,0);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = Rotatelab_Shop_SeasonalOfferButton__get_OfferYear_10d0900();
  Rotatelab_Shop_SeasonalOfferButton__set_OfferPurchasedYear_10d087c(uVar2,uVar2);
  pcVar4 = (char *)(_UNK_010de858 + 0x10de738);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de85c + 0x10de74c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010de860 + 0x10de760);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  if ((**(char **)(iVar1 + 0x5c) != '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164)), iVar1 != 0
     )) {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[5],0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
    iVar1 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined4 *)(*param_1 + 0x15c));
    *(bool *)(param_1 + 0x12) = 0 < iVar1;
                    /* WARNING: Could not recover jumptable at 0x010de814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,*(undefined4 *)(*param_1 + 0x174));
    return;
  }
  if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[5],0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar4 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

