/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$SaveCurrentDailyQuests
void Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$SaveCurrentDailyQuests
   void Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests_10bc1a8
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010cc4cc + 0x10cc1c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4d0 + 0x10cc1d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4d4 + 0x10cc1e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4d8 + 0x10cc1ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4dc + 0x10cc1f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4e0 + 0x10cc204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4e4 + 0x10cc210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4e8 + 0x10cc21c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4ec + 0x10cc228));
    *pcVar5 = '\x01';
    param_4 = extraout_r3_00;
  }
  iVar7 = 0;
  uVar6 = **(undefined4 **)(_UNK_010cc4f0 + 0x10cc240);
  puVar9 = *(undefined4 **)(_UNK_010cc4f4 + 0x10cc24c);
  puVar8 = *(undefined4 **)(_UNK_010cc4f8 + 0x10cc254);
  while( true ) {
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x70) + 0xc) <= iVar7) {
      pcVar5 = (char *)(_UNK_010c9488 + 0x10c9450);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010c948c + 0x10c9464));
        *pcVar5 = '\x01';
        param_4 = extraout_r3;
      }
      iVar7 = UnityEngine_PlayerPrefs__TrySetSetString_35f67d0
                        (**(undefined4 **)(_UNK_010c9490 + 0x10c9480),uVar6,0,param_4,unaff_r4,
                         unaff_lr);
      if (iVar7 != 0) {
        return;
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070b8 + 0x360707c));
      uVar6 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070bc + 0x3607090));
      UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar6,uVar4);
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070c0 + 0x36070a8));
      FUN_01f4fe28(uVar6,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x70),iVar7,**(undefined4 **)(_UNK_010cc4fc + 0x10cc28c));
    iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_010cc500 + 0x10cc2a8),9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x10) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_Int32__ToString_2b6b9ec(iVar1 + 8,0);
    if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar6);
    uVar6 = *puVar9;
    if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x18) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x18),uVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_Int32__ToString_2b6b9ec(iVar1 + 0xc,0);
    if (*(uint *)(iVar2 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x1c) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x1c),uVar6);
    uVar6 = *puVar9;
    if (*(uint *)(iVar2 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x20) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x20),uVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_Int32__ToString_2b6b9ec(iVar1 + 0x10,0);
    if (*(uint *)(iVar2 + 0xc) < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x24) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x24),uVar6);
    uVar6 = *puVar9;
    if (*(uint *)(iVar2 + 0xc) < 7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x28) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x28),uVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(_UNK_010cc504 + 0x10cc42c);
    if (*(char *)(iVar1 + 0x14) == '\0') {
      puVar3 = *(undefined4 **)(_UNK_010cc508 + 0x10cc434);
    }
    uVar6 = *puVar3;
    if (*(uint *)(iVar2 + 0xc) < 8) break;
    *(undefined4 *)(iVar2 + 0x2c) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x2c),uVar6);
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = puVar8;
    if (iVar7 == *(int *)(*(int *)(param_1 + 0x70) + 0xc) + -1) {
      puVar3 = *(undefined4 **)(_UNK_010cc50c + 0x10cc484);
    }
    uVar6 = *puVar3;
    if (*(uint *)(iVar2 + 0xc) < 9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar2 + 0x30) = uVar6;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x30),uVar6);
    uVar6 = System_String__Concat_2a0bee8(iVar2,0);
    iVar7 = iVar7 + 1;
    param_4 = extraout_r3_01;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

