/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$SaveClaimedRewardData
void Rotatelab_SeasonPass_SeasonPassController__SaveClaimedRewardData (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$SaveClaimedRewardData
   void Rotatelab_SeasonPass_SeasonPassController__SaveClaimedRewardData
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__SaveClaimedRewardData_10a4514(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_010b470c + 0x10b452c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4710 + 0x10b4540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4714 + 0x10b454c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4718 + 0x10b4558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b471c + 0x10b4564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4720 + 0x10b4570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4724 + 0x10b457c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4728 + 0x10b4588));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar11 = *(int *)(_UNK_010b472c + 0x10b45a0);
  uVar10 = **(undefined4 **)(*(int *)(iVar11 + 0x48) + 0x5c);
  puVar8 = *(undefined4 **)(_UNK_010b4730 + 0x10b45b4);
  puVar9 = *(undefined4 **)(_UNK_010b4734 + 0x10b45bc);
  while( true ) {
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x4c) + 0xc) <= iVar7) {
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8
                (*(int *)(param_1 + 0x44),uVar10,**(undefined4 **)(_UNK_010b4744 + 0x10b46fc));
      return;
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x4c),iVar7,**(undefined4 **)(_UNK_010b4738 + 0x10b45f4));
    if (iVar2 == 0) break;
    cVar1 = *(char *)(iVar2 + 8);
    if (*(int *)(**(int **)(_UNK_010b473c + 0x10b4618) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_28 = System_Convert__ToInt32_2b155a8(cVar1 != '\0',0);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar11 + 0x24),&uStack_28);
    uStack_2c = System_Convert__ToInt32_2b155a8(*(undefined1 *)(iVar2 + 9),0);
    uVar4 = FUN_00ec393c(*(undefined4 *)(iVar11 + 0x24),&uStack_2c);
    uVar3 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010b4740 + 0x10b4690),uVar3,uVar4,0);
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = puVar9;
    if (iVar7 == *(int *)(*(int *)(param_1 + 0x4c) + 0xc) + -1) {
      puVar5 = puVar8;
    }
    uVar10 = System_String__Concat_2a0b574(uVar10,uVar3,*puVar5,0);
    iVar7 = iVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

