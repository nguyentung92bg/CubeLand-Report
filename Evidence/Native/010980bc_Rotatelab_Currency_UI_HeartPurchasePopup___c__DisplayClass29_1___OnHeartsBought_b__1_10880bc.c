/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup.<>c__DisplayClass29_1$$<OnHeartsBought>b__1
void Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass29_1___OnHeartsBought_b__1 (Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass29_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup.<>c__DisplayClass29_1$$<OnHeartsBought>b__1
   void Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass29_1___OnHeartsBought_b__1
   (Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass29_1_o* __this, const MethodInfo*
   method); */

void Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass29_1___OnHeartsBought_b__1_10880bc
               (int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01098188 + 0x10980d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109818c + 0x10980e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098190 + 0x10980f0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01098194 + 0x1098104));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_108dbe8(iVar1,7,0x3f800000);
  if (*(int *)(**(int **)(_UNK_01098198 + 0x1098134) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Vibration_VibrationManager__VibrateRigid_107e8c8();
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 8),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),1,0,extraout_r3,unaff_r4,unaff_r5);
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
    (*UNRECOVERED_JUMPTABLE)(iVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

