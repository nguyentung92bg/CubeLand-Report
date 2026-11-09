/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$IncreaseCollectedKey
void Rotatelab_SeasonPass_SeasonPassController__IncreaseCollectedKey (Rotatelab_SeasonPass_SeasonPassController_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$IncreaseCollectedKey
   void Rotatelab_SeasonPass_SeasonPassController__IncreaseCollectedKey
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, int32_t amount, const MethodInfo* method);
    */

void Rotatelab_SeasonPass_SeasonPassController__IncreaseCollectedKey_10a2cfc
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_010b2e48 + 0x10b2d14);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2e4c + 0x10b2d28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2e50 + 0x10b2d34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2e54 + 0x10b2d40));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable_10a3248(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_010b2e58 + 0x10b2d78);
  iVar1 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 0x34),*puVar8);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0xc) <= iVar1) {
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 0x40),*puVar8);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) <= iVar1) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(iVar1,*puVar8);
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820
            (iVar1,iVar6 + param_2,**(undefined4 **)(_UNK_010b2e5c + 0x10b2e34));
  iStack_1c = 0;
  iStack_1c = Rotatelab_SeasonPass_SeasonPassController__GetUnclaimedRewardCount_10a557c(param_1);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iStack_1c < 1) {
    pcVar7 = (char *)(_UNK_010b44f4 + 0x10b444c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b44f8 + 0x10b4460));
      *pcVar7 = '\x01';
    }
    puVar8 = *(undefined4 **)(**(int **)(_UNK_010b44fc + 0x10b4474) + 0x5c);
    puVar3 = puVar8 + 2;
    puVar4 = puVar8 + 1;
  }
  else {
    pcVar7 = (char *)(_UNK_010b4500 + 0x10b4404);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4504 + 0x10b4418));
      *pcVar7 = '\x01';
    }
    iVar6 = *(int *)(**(int **)(_UNK_010b4508 + 0x10b442c) + 0x5c);
    puVar3 = (undefined4 *)(iVar6 + 0x14);
    puVar4 = (undefined4 *)(iVar6 + 0x10);
    puVar8 = (undefined4 *)(iVar6 + 0xc);
  }
  if (iVar1 != 0) {
    UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar8,*puVar4,*puVar3,0);
    piVar5 = *(int **)(param_1 + 0x1c);
    uVar2 = System_Int32__ToString_2b6b9ec(&iStack_1c,0);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x2b4));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

