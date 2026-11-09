/* IL2CPP: Rotatelab.SeasonPassTutorialController.<>c__DisplayClass9_0$$<CheckStep>b__0
void Rotatelab_SeasonPassTutorialController___c__DisplayClass9_0___CheckStep_b__0 (Rotatelab_SeasonPassTutorialController___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController.<>c__DisplayClass9_0$$<CheckStep>b__0
   void Rotatelab_SeasonPassTutorialController___c__DisplayClass9_0___CheckStep_b__0
   (Rotatelab_SeasonPassTutorialController___c__DisplayClass9_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_SeasonPassTutorialController___c__DisplayClass9_0___CheckStep_b__0_fc6494
               (int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(_UNK_00fd6540 + 0xfd64a8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd6544 + 0xfd64bc));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar2,*(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_00fd6548 + 0xfd64f8))
  ;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar1 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar1 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4,unaff_r5);
    *pcVar1 = '\x01';
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

