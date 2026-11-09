/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$SetupPlayerAvatars
void Rotatelab_CloudRush_CloudRushRegistrationController__SetupPlayerAvatars (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$SetupPlayerAvatars
   void Rotatelab_CloudRush_CloudRushRegistrationController__SetupPlayerAvatars
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushRegistrationController__SetupPlayerAvatars_10e6620(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_010f6708 + 0x10f6634);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f670c + 0x10f6648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6710 + 0x10f6654));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  puVar4 = *(undefined4 **)(_UNK_010f6714 + 0x10f666c);
  while( true ) {
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x30) + 0xc) <= iVar3) {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x30),iVar3,*puVar4);
    if (iVar1 == 0) break;
    Rotatelab_CloudRush_CloudRushPlayerAvatarController__Init_10e1278(iVar1,iVar3 == 0);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x30),iVar3,*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInRegistration_10e5d4c(iVar1);
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

