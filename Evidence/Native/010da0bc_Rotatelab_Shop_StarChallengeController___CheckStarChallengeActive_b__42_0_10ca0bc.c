/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<CheckStarChallengeActive>b__42_0
void Rotatelab_Shop_StarChallengeController___CheckStarChallengeActive_b__42_0 (Rotatelab_Shop_StarChallengeController_o* __this, UnityEngine_UI_Image_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<CheckStarChallengeActive>b__42_0
   void Rotatelab_Shop_StarChallengeController___CheckStarChallengeActive_b__42_0
   (Rotatelab_Shop_StarChallengeController_o* __this, UnityEngine_UI_Image_o* i, const MethodInfo*
   method); */

void Rotatelab_Shop_StarChallengeController___CheckStarChallengeActive_b__42_0_10ca0bc
               (int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  bool bVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar3 = *(char *)(param_1 + 0x60) != '\0';
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),bVar3,0,extraout_r3,unaff_r4,
                       unaff_r5);
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
    (*UNRECOVERED_JUMPTABLE)(iVar1,bVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

