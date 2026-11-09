/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnEnable
void Rotatelab_SeasonPass_SeasonPassController__OnEnable (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnEnable
   void Rotatelab_SeasonPass_SeasonPassController__OnEnable
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__OnEnable_10a2a48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar8;
  int iVar9;
  
  pcVar5 = (char *)(_UNK_010b2ca0 + 0x10b2a5c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2ca4 + 0x10b2a70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2ca8 + 0x10b2a7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cac + 0x10b2a88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cb0 + 0x10b2a94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cb4 + 0x10b2aa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cb8 + 0x10b2aac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cbc + 0x10b2ab8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cc0 + 0x10b2ac4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cc4 + 0x10b2ad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2cc8 + 0x10b2adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2ccc + 0x10b2ae8));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010b2cd0 + 0x10b2afc);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x120);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b2cd4 + 0x10b2b20));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_010b2cd8 + 0x10b2b40),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar6,uVar2,**(undefined4 **)(_UNK_010b2cdc + 0x10b2b58));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x184);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b2ce0 + 0x10b2b88));
  System_Action_int____ctor_1f105bc(uVar2,param_1,**(undefined4 **)(_UNK_010b2ce4 + 0x10b2ba8),0);
  uVar2 = Rotatelab_GameAction_int___op_Addition_23a2a90
                    (uVar6,uVar2,**(undefined4 **)(_UNK_010b2ce8 + 0x10b2bc0));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x184) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x78);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b2cec + 0x10b2bf0));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010b2cf0 + 0x10b2c10),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x78) = uVar2;
  thunk_FUN_00ec5080();
  puVar7 = *(undefined4 **)(_UNK_010b2cf4 + 0x10b2c48);
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(param_1 + 0x2c),*puVar7);
  if (iVar1 < 1) {
    return;
  }
  uVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(param_1 + 0x2c),*puVar7);
  Rotatelab_SeasonPass_SeasonPassController__IncreaseCollectedKey_10a2cfc(param_1,uVar2);
  piVar8 = *(int **)(param_1 + 0x2c);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(_UNK_010b2cf8 + 0x10b2c90);
  iVar1 = piVar8[5];
  iVar9 = 0;
  if (iVar1 != 0) {
    iVar9 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14),
                       *(code **)(iVar1 + 0xc),unaff_r4,unaff_r5,unaff_r6,unaff_r7);
  }
  piVar3 = (int *)FUN_013a76ec(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x24));
  if ((char)piVar8[7] == '\0') {
    iVar1 = (**(code **)(*piVar8 + 0xe0))(piVar8,*(undefined4 *)(*piVar8 + 0xe4));
    piVar8[8] = iVar1;
    *(undefined1 *)(piVar8 + 7) = 1;
  }
  else {
    iVar1 = piVar8[8];
  }
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar3 + 0x100))(piVar3,iVar1,iVar9,*(undefined4 *)(*piVar3 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*piVar8 + 0xe8))(piVar8,iVar9,*(undefined4 *)(*piVar8 + 0xec));
    iVar1 = piVar8[6];
    piVar8[8] = iVar9;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),iVar9,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}

