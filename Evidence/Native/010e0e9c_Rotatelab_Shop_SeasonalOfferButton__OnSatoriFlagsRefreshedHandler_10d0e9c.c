/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnSatoriFlagsRefreshedHandler
void Rotatelab_Shop_SeasonalOfferButton__OnSatoriFlagsRefreshedHandler (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnSatoriFlagsRefreshedHandler
   void Rotatelab_Shop_SeasonalOfferButton__OnSatoriFlagsRefreshedHandler
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__OnSatoriFlagsRefreshedHandler_10d0e9c(int *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  int *piVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010de858 + 0x10de738);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de85c + 0x10de74c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010de860 + 0x10de760);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if ((**(char **)(iVar1 + 0x5c) == '\0') ||
     (iVar1 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164)), iVar1 == 0
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
    pcVar2 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4,unaff_r5
                         ,unaff_r6,unaff_lr);
      *pcVar2 = '\x01';
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

