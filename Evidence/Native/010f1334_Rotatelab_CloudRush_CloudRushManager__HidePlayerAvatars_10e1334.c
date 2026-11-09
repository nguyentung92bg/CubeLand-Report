/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$HidePlayerAvatars
void Rotatelab_CloudRush_CloudRushManager__HidePlayerAvatars (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$HidePlayerAvatars
   void Rotatelab_CloudRush_CloudRushManager__HidePlayerAvatars
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__HidePlayerAvatars_10e1334
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  int iVar3;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *puVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010f13e4 + 0x10f1348);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f13e8 + 0x10f135c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f13ec + 0x10f1368));
    *pcVar2 = '\x01';
    param_4 = extraout_r3;
  }
  iVar3 = 0;
  puVar4 = *(undefined4 **)(_UNK_010f13f0 + 0x10f1380);
  while( true ) {
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x70) + 0xc) <= iVar3) {
      pcVar2 = (char *)(_UNK_010f14c4 + 0x10f1430);
      if (*pcVar2 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010f14c8 + 0x10f1444));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010f14cc + 0x10f1450));
        *pcVar2 = '\x01';
        param_4 = extraout_r3_01;
      }
      iVar3 = 0;
      puVar4 = *(undefined4 **)(_UNK_010f14d0 + 0x10f1468);
      while( true ) {
        if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x74) + 0xc) <= iVar3) {
          return;
        }
        if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x74),iVar3,*puVar4,param_4,unaff_r4,unaff_r5,unaff_r6
                           ,unaff_r7,unaff_r11,unaff_lr);
        if (iVar1 == 0) break;
        Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInProgression_10e13f4(iVar1);
        iVar3 = iVar3 + 1;
        param_4 = extraout_r3_02;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x70),iVar3,*puVar4);
    if (iVar1 == 0) break;
    Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInProgression_10e13f4(iVar1);
    iVar3 = iVar3 + 1;
    param_4 = extraout_r3_00;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

