/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$Finalized
void Rotatelab_SeasonPass_SeasonPassManager__Finalized (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$Finalized
   void Rotatelab_SeasonPass_SeasonPassManager__Finalized (Rotatelab_SeasonPass_SeasonPassManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__Finalized_10a8d0c(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar1;
  char *pcVar2;
  
  Rotatelab_SeasonPass_SeasonPassManager__UpdateAllCheckpoints_10a8d3c();
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4);
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

