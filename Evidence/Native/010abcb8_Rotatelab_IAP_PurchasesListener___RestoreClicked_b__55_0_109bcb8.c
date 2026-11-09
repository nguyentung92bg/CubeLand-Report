/* IL2CPP: Rotatelab.IAP.PurchasesListener$$<RestoreClicked>b__55_0
void Rotatelab_IAP_PurchasesListener___RestoreClicked_b__55_0 (Rotatelab_IAP_PurchasesListener_o* __this, bool result, System_String_o* error, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$<RestoreClicked>b__55_0
   void Rotatelab_IAP_PurchasesListener___RestoreClicked_b__55_0 (Rotatelab_IAP_PurchasesListener_o*
   __this, bool result, System_String_o* error, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener___RestoreClicked_b__55_0_109bcb8
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar3;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_010abdb4 + 0x10abcd4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abdb8 + 0x10abce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abdbc + 0x10abcf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abdc0 + 0x10abd00));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    uVar1 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010abdcc + 0x10abd58),param_3,0);
    if (*(int *)(**(int **)(_UNK_010abdd0 + 0x10abd6c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b238c(uVar1,0);
  }
  else {
    if (*(int *)(**(int **)(_UNK_010abdc4 + 0x10abd1c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1c44(**(undefined4 **)(_UNK_010abdc8 + 0x10abd3c),0);
  }
  Rotatelab_IAP_PurchasesListener__CheckRestoredPurchases_109b4b4(param_1);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    *pcVar3 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

