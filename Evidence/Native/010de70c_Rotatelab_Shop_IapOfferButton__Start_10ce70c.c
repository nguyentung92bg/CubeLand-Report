/* IL2CPP: Rotatelab.Shop.IapOfferButton$$Start
void Rotatelab_Shop_IapOfferButton__Start (Rotatelab_Shop_IapOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.IapOfferButton$$Start
   void Rotatelab_Shop_IapOfferButton__Start (Rotatelab_Shop_IapOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_IapOfferButton__Start_10ce70c(int *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar2;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int *piVar4;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  Rotatelab_Shop_BaseOfferButton__Start_10cc570();
  pcVar3 = (char *)(_UNK_010de858 + 0x10de738);
  uVar2 = extraout_r3;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de85c + 0x10de74c));
    *pcVar3 = '\x01';
    uVar2 = extraout_r3_00;
  }
  piVar4 = *(int **)(_UNK_010de860 + 0x10de760);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
    uVar2 = extraout_r3_01;
  }
  if ((**(char **)(iVar1 + 0x5c) == '\0') ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x160),
     iVar1 = (*UNRECOVERED_JUMPTABLE)
                       (param_1,*(undefined4 *)(*param_1 + 0x164),UNRECOVERED_JUMPTABLE,uVar2,
                        unaff_r4), iVar1 == 0)) {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[5],0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar3 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3_02,unaff_r4,
                         unaff_r5,unaff_r6,unaff_lr);
      *pcVar3 = '\x01';
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

