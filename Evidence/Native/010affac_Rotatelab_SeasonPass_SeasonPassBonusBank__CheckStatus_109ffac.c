/* IL2CPP: Rotatelab.SeasonPass.SeasonPassBonusBank$$CheckStatus
void Rotatelab_SeasonPass_SeasonPassBonusBank__CheckStatus (Rotatelab_SeasonPass_SeasonPassBonusBank_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassBonusBank$$CheckStatus
   void Rotatelab_SeasonPass_SeasonPassBonusBank__CheckStatus
   (Rotatelab_SeasonPass_SeasonPassBonusBank_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassBonusBank__CheckStatus_109ffac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  pcVar7 = (char *)(_UNK_010b018c + 0x10affc0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0190 + 0x10affd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0194 + 0x10affe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0198 + 0x10affec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b019c + 0x10afff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b01a0 + 0x10b0004));
    *pcVar7 = '\x01';
  }
  puVar10 = *(undefined4 **)(_UNK_010b01a4 + 0x10b0018);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar2 + 0x30),0);
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar8,1,0);
    piVar9 = *(int **)(param_1 + 0x1c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc(iVar1);
    uVar4 = **(undefined4 **)(_UNK_010b01b0 + 0x10b00f0);
    puVar6 = *(undefined4 **)(_UNK_010b01b4 + 0x10b00fc);
  }
  else {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar8,0,0);
    piVar9 = *(int **)(param_1 + 0x1c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc(iVar1);
    uVar4 = **(undefined4 **)(_UNK_010b01a8 + 0x10b00a0);
    puVar6 = *(undefined4 **)(_UNK_010b01ac + 0x10b00ac);
  }
  uVar3 = System_String__Concat_2a0b574(uVar4,uVar3,*puVar6,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar9 + 0x2b0))(piVar9,uVar3,*(undefined4 *)(*piVar9 + 0x2b4));
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar1 + 0x30),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar5 ^ 1,0);
    *pcVar7 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar5 ^ 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

