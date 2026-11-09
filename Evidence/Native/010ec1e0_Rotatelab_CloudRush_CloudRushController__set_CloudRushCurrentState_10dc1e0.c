/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$set_CloudRushCurrentState
void Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState (Rotatelab_CloudRush_CloudRushController_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$set_CloudRushCurrentState
   void Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState
   (Rotatelab_CloudRush_CloudRushController_o* __this, int32_t value, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState_10dc1e0
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_010ec35c + 0x10ec1fc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec360 + 0x10ec210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec364 + 0x10ec21c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec368 + 0x10ec228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec36c + 0x10ec234));
    *pcVar4 = '\x01';
  }
  Rotatelab_Save_SaveManager__SetInt_1078f38(**(undefined4 **)(_UNK_010ec370 + 0x10ec250),param_2,0)
  ;
  if (param_2 == 3) {
    piVar3 = *(int **)(_UNK_010ec380 + 0x10ec304);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    if (param_2 == 2) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar4 = (char *)(iRam036120c4 + 0x3612050);
      if (*pcVar4 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
        *pcVar4 = '\x01';
      }
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
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
      thunk_FUN_00f078d4();
    }
    if (param_2 != 1) {
      return;
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushIsEntryRewardReady_10dc034();
    if (iVar1 != 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010ec374 + 0x10ec284));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
                        (iVar1,5,0xffffffc4,0xffffffff,0,0,0);
      Rotatelab_CloudRush_CloudRushController__set_CloudRushIsEntryRewardReady_10dc088(uVar2,0);
    }
    piVar3 = *(int **)(_UNK_010ec378 + 0x10ec2d0);
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_18);
  if (iVar1 != 0) {
    Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
              (iVar1,extraout_r1,uStack_18,uStack_14,**(undefined4 **)(_UNK_010ec37c + 0x10ec348));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

