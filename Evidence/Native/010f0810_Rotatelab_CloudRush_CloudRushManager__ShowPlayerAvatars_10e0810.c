/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ShowPlayerAvatars
void Rotatelab_CloudRush_CloudRushManager__ShowPlayerAvatars (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ShowPlayerAvatars
   void Rotatelab_CloudRush_CloudRushManager__ShowPlayerAvatars
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__ShowPlayerAvatars_10e0810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_010f09fc + 0x10f0828);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0a00 + 0x10f083c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0a04 + 0x10f0848));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    puVar6 = *(undefined4 **)(_UNK_010f0a08 + 0x10f0874);
    puVar7 = *(undefined4 **)(_UNK_010f0a0c + 0x10f087c);
    do {
      if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x70),iVar1,*puVar6);
      if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),*puVar7);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition_10db6f0
                (&uStack_2c,iVar3,iVar1);
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
    puVar6 = *(undefined4 **)(_UNK_010f0a10 + 0x10f0950);
    puVar7 = *(undefined4 **)(_UNK_010f0a14 + 0x10f0958);
    do {
      if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x74),iVar1,*puVar6);
      if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),*puVar7);
      iVar4 = Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94
                        (param_1);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushCloudController__GetReversedPlayerAvatarPosition_10db87c
                (&uStack_2c,iVar3,iVar4 + iVar1);
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

