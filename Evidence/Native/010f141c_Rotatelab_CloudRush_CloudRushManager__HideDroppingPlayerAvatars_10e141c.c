/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$HideDroppingPlayerAvatars
void Rotatelab_CloudRush_CloudRushManager__HideDroppingPlayerAvatars (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$HideDroppingPlayerAvatars
   void Rotatelab_CloudRush_CloudRushManager__HideDroppingPlayerAvatars
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__HideDroppingPlayerAvatars_10e141c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_010f14c4 + 0x10f1430);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f14c8 + 0x10f1444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f14cc + 0x10f1450));
    *pcVar2 = '\x01';
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
                      (*(int *)(param_1 + 0x74),iVar3,*puVar4);
    if (iVar1 == 0) break;
    Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInProgression_10e13f4(iVar1);
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

