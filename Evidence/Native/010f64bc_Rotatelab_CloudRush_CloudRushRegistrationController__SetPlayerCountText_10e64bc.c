/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$SetPlayerCountText
void Rotatelab_CloudRush_CloudRushRegistrationController__SetPlayerCountText (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, int32_t currentPlayerCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$SetPlayerCountText
   void Rotatelab_CloudRush_CloudRushRegistrationController__SetPlayerCountText
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, int32_t currentPlayerCount, const
   MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushRegistrationController__SetPlayerCountText_10e64bc
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_010f656c + 0x10f64d8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6570 + 0x10f64ec));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(_UNK_010f6574 + 0x10f6508);
  uStack_14 = param_2;
  uVar1 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_14);
  uStack_18 = 100;
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_18);
  uVar1 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_010f6578 + 0x10f6540),uVar1,uVar2,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_Text__SetText_34ffb2c(iVar3,uVar1,0);
  return;
}

