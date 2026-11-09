/* IL2CPP: Rotatelab.SeasonPassUnClaimedReward$$Init
void Rotatelab_SeasonPassUnClaimedReward__Init (Rotatelab_SeasonPassUnClaimedReward_o* __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonReward_o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SeasonPassUnClaimedReward$$Init
   void Rotatelab_SeasonPassUnClaimedReward__Init (Rotatelab_SeasonPassUnClaimedReward_o* __this,
   Rotatelab_SeasonPass_SeasonPassSo_SeasonReward_o* reward, const MethodInfo* method); */

void Rotatelab_SeasonPassUnClaimedReward__Init_fc43c0(int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  char *pcVar3;
  
  *(int *)(param_1 + 0x18) = param_2;
  thunk_FUN_00ec5080();
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (param_2 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar3 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
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
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10),0);
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00fd4458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x2b0))
            (piVar2,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*piVar2 + 0x2b4));
  return;
}

