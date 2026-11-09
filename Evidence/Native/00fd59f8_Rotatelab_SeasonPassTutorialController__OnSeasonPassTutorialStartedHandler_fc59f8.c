/* IL2CPP: Rotatelab.SeasonPassTutorialController$$OnSeasonPassTutorialStartedHandler
void Rotatelab_SeasonPassTutorialController__OnSeasonPassTutorialStartedHandler (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$OnSeasonPassTutorialStartedHandler
   void Rotatelab_SeasonPassTutorialController__OnSeasonPassTutorialStartedHandler
   (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPassTutorialController__OnSeasonPassTutorialStartedHandler_fc59f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_00fd5b98 + 0xfd5a0c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5b9c + 0xfd5a20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5ba0 + 0xfd5a2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5ba4 + 0xfd5a38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5ba8 + 0xfd5a44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5bac + 0xfd5a50));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_00fd5bb0 + 0xfd5a64);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,0,**(undefined4 **)(_UNK_00fd5bb4 + 0xfd5aa0));
  puVar2 = *(undefined4 **)(_UNK_00fd5bb8 + 0xfd5ab4);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc(iVar1,0);
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2b4));
  piVar5 = *(int **)(param_1 + 0x1c);
  uVar3 = System_String__Concat_29fee38(uVar3,**(undefined4 **)(_UNK_00fd5bbc + 0xfd5b18),0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2b4));
  Rotatelab_SeasonPassTutorialController__CheckStep_fc5bc4(param_1);
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x24),**(undefined4 **)(_UNK_00fd5bc0 + 0xfd5b5c));
  if (iVar1 != 0) {
    return;
  }
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00fd5b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x188))(piVar5,1,*(undefined4 *)(*piVar5 + 0x18c));
  return;
}

