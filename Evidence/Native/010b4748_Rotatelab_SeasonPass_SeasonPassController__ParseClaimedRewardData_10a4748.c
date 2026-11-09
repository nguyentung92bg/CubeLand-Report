/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$ParseClaimedRewardData
void Rotatelab_SeasonPass_SeasonPassController__ParseClaimedRewardData (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$ParseClaimedRewardData
   void Rotatelab_SeasonPass_SeasonPassController__ParseClaimedRewardData
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__ParseClaimedRewardData_10a4748(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  pcVar6 = (char *)(_UNK_010b49c0 + 0x10b4760);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49c4 + 0x10b4774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49c8 + 0x10b4780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49cc + 0x10b478c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49d0 + 0x10b4798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49d4 + 0x10b47a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b49d8 + 0x10b47b0));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x4c);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar7 + 0xc);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (0 < iVar5) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar7 + 8),0,iVar5,0);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                    (*(int *)(param_1 + 0x44),**(undefined4 **)(_UNK_010b49dc + 0x10b4814));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = 0;
  iVar7 = System_String__Split_2a0ef34(iVar7,**(undefined4 **)(_UNK_010b49e0 + 0x10b4844),0,0);
  puVar9 = *(undefined4 **)(_UNK_010b49e4 + 0x10b4864);
  while( true ) {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar10) {
      return;
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar7 + 0x10 + uVar10 * 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = System_String__Split_2a0df50(iVar5,0x3a,0,0);
    iVar8 = *(int *)(param_1 + 0x4c);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b49e8 + 0x10b48c4));
    System_Object___ctor_2bb93bc(iVar2,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar1 = System_String__op_Equality_2a0975c(*(undefined4 *)(iVar5 + 0x10),*puVar9,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(uint *)(iVar5 + 0xc);
    *(undefined1 *)(iVar2 + 8) = uVar1;
    if (uVar3 < 2) break;
    uVar1 = System_String__op_Equality_2a0975c(*(undefined4 *)(iVar5 + 0x14),*puVar9,0);
    *(undefined1 *)(iVar2 + 9) = uVar1;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(iVar8 + 8);
    uVar3 = *(uint *)(iVar8 + 0xc);
    piVar4 = *(int **)(_UNK_010b49ec + 0x10b4964);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar3 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar3 + 1;
      piVar4 = (int *)(iVar5 + uVar3 * 4 + 0x10);
      *piVar4 = iVar2;
      thunk_FUN_00ec5080(piVar4,iVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar8,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
    }
    uVar10 = uVar10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

