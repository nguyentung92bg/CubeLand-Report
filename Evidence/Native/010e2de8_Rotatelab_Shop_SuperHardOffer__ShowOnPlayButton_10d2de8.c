/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$ShowOnPlayButton
void Rotatelab_Shop_SuperHardOffer__ShowOnPlayButton (Rotatelab_Shop_SuperHardOffer_o* __this, System_Action_o* onClosed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$ShowOnPlayButton
   void Rotatelab_Shop_SuperHardOffer__ShowOnPlayButton (Rotatelab_Shop_SuperHardOffer_o* __this,
   System_Action_o* onClosed, const MethodInfo* method); */

void Rotatelab_Shop_SuperHardOffer__ShowOnPlayButton_10d2de8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar3;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 unaff_lr;
  
  iVar1 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(char *)(iVar1 + 0x18) == '\0') ||
     (iVar1 = Rotatelab_Shop_SuperHardOffer__IsDue_10d2bd8(param_1), iVar1 == 0)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Could not recover jumptable at 0x010e2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0xc))(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x14));
    return;
  }
  pcVar4 = (char *)(_UNK_010e2f98 + 0x10e2e6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2f9c + 0x10e2e80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2fa0 + 0x10e2e8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2fa4 + 0x10e2e98));
    *pcVar4 = '\x01';
  }
  *(int *)(param_1 + 0x20) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x20),param_2);
  piVar2 = *(int **)(_UNK_010e2fa8 + 0x10e2ec0);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  iVar1 = *(int *)(*piVar2 + 0x74);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (iVar1 == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar3,1,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  piVar2 = *(int **)(_UNK_010e2fac + 0x10e2f04);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x104);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010e2fb0 + 0x10e2f40);
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,*puVar5);
  iVar1 = *(int *)(*(int *)(*piVar2 + 0x5c) + 0xfc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,*puVar5);
  iVar1 = *(int *)(*(int *)(*piVar2 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
  return;
}

