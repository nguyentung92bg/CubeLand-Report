/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckClaimedRewards
void Rotatelab_SeasonPass_SeasonPassController__CheckClaimedRewards (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckClaimedRewards
   void Rotatelab_SeasonPass_SeasonPassController__CheckClaimedRewards
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__CheckClaimedRewards_10a330c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  int iStack_2c;
  int iStack_28;
  
  pcVar12 = (char *)(_UNK_010b34c8 + 0x10b3324);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b34cc + 0x10b3338));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b34d0 + 0x10b3344));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b34d4 + 0x10b3350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b34d8 + 0x10b335c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b34dc + 0x10b3368));
    *pcVar12 = '\x01';
  }
  iVar11 = *(int *)(param_1 + 0x4c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(iVar11 + 0xc);
  *(undefined4 *)(iVar11 + 0xc) = 0;
  *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
  if (0 < iVar10) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar11 + 8),0,iVar10,0);
  }
  iVar11 = UnityEngine_PlayerPrefs__HasKey_35f74c0(**(undefined4 **)(_UNK_010b34e0 + 0x10b33b8),0);
  if (iVar11 == 0) {
    iVar11 = 0;
    piVar9 = *(int **)(_UNK_010b34e4 + 0x10b33e4);
    while( true ) {
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar10 + 0xc) <= iVar11) break;
      iVar7 = *(int *)(param_1 + 0x4c);
      iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b34e8 + 0x10b3418));
      System_Object___ctor_2bb93bc(iVar10,0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined2 *)(iVar10 + 8) = 0;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = *(int *)(iVar7 + 8);
      uVar18 = *(uint *)(iVar7 + 0xc);
      iVar15 = *piVar9;
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar18 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar7 + 0xc) = uVar18 + 1;
        piVar3 = (int *)(iVar13 + uVar18 * 4 + 0x10);
        *piVar3 = iVar10;
        thunk_FUN_00ec5080(piVar3,iVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar7,iVar10,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
      }
      iVar11 = iVar11 + 1;
    }
    pcVar12 = (char *)(_UNK_010b470c + 0x10b452c);
    if (*pcVar12 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4710 + 0x10b4540));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4714 + 0x10b454c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4718 + 0x10b4558));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b471c + 0x10b4564));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4720 + 0x10b4570));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4724 + 0x10b457c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4728 + 0x10b4588));
      *pcVar12 = '\x01';
    }
    iVar11 = 0;
    iVar10 = *(int *)(_UNK_010b472c + 0x10b45a0);
    uVar17 = **(undefined4 **)(*(int *)(iVar10 + 0x48) + 0x5c);
    puVar14 = *(undefined4 **)(_UNK_010b4730 + 0x10b45b4);
    puVar16 = *(undefined4 **)(_UNK_010b4734 + 0x10b45bc);
    while( true ) {
      if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x4c) + 0xc) <= iVar11) {
        if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8
                  (*(int *)(param_1 + 0x44),uVar17,**(undefined4 **)(_UNK_010b4744 + 0x10b46fc));
        return;
      }
      if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x4c),iVar11,
                         **(undefined4 **)(_UNK_010b4738 + 0x10b45f4));
      if (iVar7 == 0) break;
      cVar1 = *(char *)(iVar7 + 8);
      if (*(int *)(**(int **)(_UNK_010b473c + 0x10b4618) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iStack_28 = System_Convert__ToInt32_2b155a8(cVar1 != '\0',0);
      uVar4 = FUN_00ec393c(*(undefined4 *)(iVar10 + 0x24),&iStack_28);
      iStack_2c = System_Convert__ToInt32_2b155a8(*(undefined1 *)(iVar7 + 9),0);
      uVar5 = FUN_00ec393c(*(undefined4 *)(iVar10 + 0x24),&iStack_2c);
      uVar4 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_010b4740 + 0x10b4690),uVar4,uVar5,0);
      if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar6 = puVar16;
      if (iVar11 == *(int *)(*(int *)(param_1 + 0x4c) + 0xc) + -1) {
        puVar6 = puVar14;
      }
      uVar17 = System_String__Concat_2a0b574(uVar17,uVar4,*puVar6,0);
      iVar11 = iVar11 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar12 = (char *)(_UNK_010b49c0 + 0x10b4760);
  iStack_28 = param_1;
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49c4 + 0x10b4774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49c8 + 0x10b4780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49cc + 0x10b478c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49d0 + 0x10b4798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49d4 + 0x10b47a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49d8 + 0x10b47b0));
    *pcVar12 = '\x01';
  }
  iVar11 = *(int *)(iStack_28 + 0x4c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(iVar11 + 0xc);
  *(undefined4 *)(iVar11 + 0xc) = 0;
  *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
  if (0 < iVar10) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar11 + 8),0,iVar10,0);
  }
  if (*(int *)(iStack_28 + 0x44) != 0) {
    iVar11 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                       (*(int *)(iStack_28 + 0x44),**(undefined4 **)(_UNK_010b49dc + 0x10b4814));
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar18 = 0;
    iVar11 = System_String__Split_2a0ef34(iVar11,**(undefined4 **)(_UNK_010b49e0 + 0x10b4844),0,0);
    iStack_2c = iVar11 + 0x10;
    puVar14 = *(undefined4 **)(_UNK_010b49e4 + 0x10b4864);
    while( true ) {
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar11 + 0xc) <= (int)uVar18) {
        return;
      }
      if (*(uint *)(iVar11 + 0xc) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar10 = *(int *)(iStack_2c + uVar18 * 4);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = System_String__Split_2a0df50(iVar10,0x3a,0,0);
      iVar13 = *(int *)(iStack_28 + 0x4c);
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b49e8 + 0x10b48c4));
      System_Object___ctor_2bb93bc(iVar7,0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar10 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar2 = System_String__op_Equality_2a0975c(*(undefined4 *)(iVar10 + 0x10),*puVar14,0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = *(uint *)(iVar10 + 0xc);
      *(undefined1 *)(iVar7 + 8) = uVar2;
      if (uVar8 < 2) break;
      uVar2 = System_String__op_Equality_2a0975c(*(undefined4 *)(iVar10 + 0x14),*puVar14,0);
      *(undefined1 *)(iVar7 + 9) = uVar2;
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar13 + 8);
      uVar8 = *(uint *)(iVar13 + 0xc);
      piVar9 = *(int **)(_UNK_010b49ec + 0x10b4964);
      *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar13 + 0xc) = uVar8 + 1;
        piVar9 = (int *)(iVar10 + uVar8 * 4 + 0x10);
        *piVar9 = iVar7;
        thunk_FUN_00ec5080(piVar9,iVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar13,iVar7,*(undefined4 *)(*(int *)(*(int *)(*piVar9 + 0x10) + 0x60) + 0x38));
      }
      uVar18 = uVar18 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

