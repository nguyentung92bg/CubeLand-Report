/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$ResetSeasonPass
void Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$ResetSeasonPass
   void Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass_10a4e14(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar2 = (char *)(_UNK_010b505c + 0x10b4e28);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5060 + 0x10b4e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5064 + 0x10b4e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5068 + 0x10b4e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b506c + 0x10b4e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5070 + 0x10b4e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5074 + 0x10b4e78));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_010b5078 + 0x10b4ea4);
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x34),1,*puVar4);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x38),0,*puVar4);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x3c),0,*puVar4);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x40),0,*puVar4);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(*(int *)(iVar1 + 0x30),0,0);
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010b507c + 0x10b4f50),0);
  piVar7 = *(int **)(_UNK_010b5080 + 0x10b4f60);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar4[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar4;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b5084 + 0x10b4fac));
    System_Action_object____ctor_1f11414(iVar5,uVar6,**(undefined4 **)(_UNK_010b5088 + 0x10b4fcc),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar3,iVar5,**(undefined4 **)(_UNK_010b508c + 0x10b5004));
  Rotatelab_SeasonPass_SeasonPassController__SaveClaimedRewardData_10a4514(param_1);
  Rotatelab_SeasonPass_SeasonPassController__CheckAvailable_10a30f8(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassManager__ResetNeeds_10a5090(*(int *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassManager__SetButtonVisibility_10a5180(*(int *)(param_1 + 0x10),0);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}

