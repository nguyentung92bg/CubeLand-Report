/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$Init
void Rotatelab_CloudRush_CloudRushManager__Init (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$Init
   void Rotatelab_CloudRush_CloudRushManager__Init (Rotatelab_CloudRush_CloudRushManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__Init_10dcbbc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_010ecc68 + 0x10ecbd4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecc6c + 0x10ecbe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecc70 + 0x10ecbf4));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010ecc74 + 0x10ecc08);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = **(undefined4 **)(_UNK_010ecc78 + 0x10ecc4c);
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar1,*(undefined4 *)(param_1 + 0x14),0,3);
  pcVar6 = (char *)(_UNK_010eeca4 + 0x10eec4c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eeca8 + 0x10eec60));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010eecac + 0x10eec74));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  Rotatelab_CloudRush_CloudRushManager__SetOfferButtonVisibility_10dc384(param_1,iVar1 != 2);
  pcVar6 = (char *)(_UNK_010f02f4 + 0x10f0160);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f02f8 + 0x10f0174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f02fc + 0x10f0180));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010f0300 + 0x10f0194));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_CloudRush_CloudRushController__get_ShowCloudRushProgressOnSessionStarted_10dc0e0
                    ();
  if (iVar2 == 0) {
    uVar3 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentLevel_10dbd84();
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    uVar3 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentPlayerCount_10dbe30();
    *(undefined2 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xa0) = uVar3;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0xa8) = uVar3;
  }
  else {
    Rotatelab_CloudRush_CloudRushController__GetPendingProgression_10dda60(&uStack_2c);
    *(ulonglong *)(param_1 + 0x9c) = CONCAT44(uStack_28,uStack_2c);
    *(ulonglong *)(param_1 + 0xa4) = CONCAT44(uStack_20,uStack_24);
    *(undefined4 *)(param_1 + 0xb0) = uStack_1c;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    *(bool *)(param_1 + 0xb4) = iVar1 == 3;
  }
  Rotatelab_CloudRush_CloudRushManager__ResetProgressionLayout_10e0308(param_1);
  if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x9c),(byte)(in_fpscr >> 0x16) & 3);
  puVar8 = *(undefined4 **)(_UNK_010f0304 + 0x10f0284);
  TMPro_TMP_Text__SetText_34ffee4(*(int *)(param_1 + 0x60),*puVar8,uVar3,0x40e00000,0);
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa0),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffee4(*(int *)(param_1 + 100),*puVar8,uVar3,0x42c80000,0);
  Rotatelab_CloudRush_CloudRushManager__UpdateOfferButtonBackgroundImage_10e04a8(param_1);
  Rotatelab_CloudRush_CloudRushManager__SetupClouds_10e0508(param_1);
  Rotatelab_CloudRush_CloudRushManager__SetupPlayerAvatars_10e06dc(param_1);
  uStack_20 = uStack_14;
  uStack_24 = uStack_18;
  pcVar6 = (char *)(_UNK_010f09fc + 0x10f0828);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0a00 + 0x10f083c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0a04 + 0x10f0848));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    puVar8 = *(undefined4 **)(_UNK_010f0a08 + 0x10f0874);
    puVar9 = *(undefined4 **)(_UNK_010f0a0c + 0x10f087c);
    do {
      if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x70),iVar1,*puVar8);
      if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),*puVar9);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition_10db6f0
                (&uStack_2c,iVar4,iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushPlayerAvatarController__ShowInProgression_10e14d4
                (iVar2,uStack_2c,uStack_28);
      iVar2 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94
                        (param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  if ((*(int *)(param_1 + 0x9c) != 0 && *(int *)(param_1 + 0x9c) != 6) &&
     (0 < *(int *)(param_1 + 0xb0))) {
    iVar1 = 0;
    puVar8 = *(undefined4 **)(_UNK_010f0a10 + 0x10f0950);
    puVar9 = *(undefined4 **)(_UNK_010f0a14 + 0x10f0958);
    do {
      if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x74),iVar1,*puVar8);
      if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),*puVar9);
      iVar5 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94
                        (param_1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__GetReversedPlayerAvatarPosition_10db87c
                (&uStack_2c,iVar4,iVar5 + iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushPlayerAvatarController__ShowInProgression_10e14d4
                (iVar2,uStack_2c,uStack_28);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xb0));
  }
  return;
}

