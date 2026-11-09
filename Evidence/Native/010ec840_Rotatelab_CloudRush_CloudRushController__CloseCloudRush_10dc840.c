/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CloseCloudRush
void Rotatelab_CloudRush_CloudRushController__CloseCloudRush (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CloseCloudRush
   void Rotatelab_CloudRush_CloudRushController__CloseCloudRush
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__CloseCloudRush_10dc840(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  if (iVar1 == 1) {
    Rotatelab_CloudRush_CloudRushController__ResetCloudRush_10dcd48(param_1);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*(undefined4 *)(param_1 + 0x1c),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CloudRush_CloudRushManager__SetOfferButtonVisibility_10dc384(*(int *)(param_1 + 0x10),0)
  ;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar2 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4,unaff_r5
                        );
      *pcVar2 = '\x01';
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
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

