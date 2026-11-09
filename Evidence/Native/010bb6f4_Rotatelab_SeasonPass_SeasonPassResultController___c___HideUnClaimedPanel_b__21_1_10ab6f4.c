/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController.<>c$$<HideUnClaimedPanel>b__21_1
void Rotatelab_SeasonPass_SeasonPassResultController___c___HideUnClaimedPanel_b__21_1 (Rotatelab_SeasonPass_SeasonPassResultController___c_o* __this, Rotatelab_SeasonPassUnClaimedReward_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fd43ec) */
/* WARNING: Removing unreachable block (ram,0x00fd43f4) */
/* WARNING: Removing unreachable block (ram,0x00fd43f8) */
/* WARNING: Removing unreachable block (ram,0x00fd4418) */
/* WARNING: Removing unreachable block (ram,0x00fd441c) */
/* WARNING: Removing unreachable block (ram,0x00fd443c) */
/* WARNING: Removing unreachable block (ram,0x00fd4440) */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController.<>c$$<HideUnClaimedPanel>b__21_1
   void Rotatelab_SeasonPass_SeasonPassResultController___c___HideUnClaimedPanel_b__21_1
   (Rotatelab_SeasonPass_SeasonPassResultController___c_o* __this,
   Rotatelab_SeasonPassUnClaimedReward_o* i, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController___c___HideUnClaimedPanel_b__21_1_10ab6f4
               (undefined4 param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_2 + 0x18),0,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  if (iVar1 != 0) {
    pcVar2 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
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

