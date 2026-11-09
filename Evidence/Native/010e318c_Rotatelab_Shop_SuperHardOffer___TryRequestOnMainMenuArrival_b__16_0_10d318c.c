/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$<TryRequestOnMainMenuArrival>b__16_0
void Rotatelab_Shop_SuperHardOffer___TryRequestOnMainMenuArrival_b__16_0 (Rotatelab_Shop_SuperHardOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$<TryRequestOnMainMenuArrival>b__16_0
   void Rotatelab_Shop_SuperHardOffer___TryRequestOnMainMenuArrival_b__16_0
   (Rotatelab_Shop_SuperHardOffer_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SuperHardOffer___TryRequestOnMainMenuArrival_b__16_0_10d318c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  pcVar4 = (char *)(_UNK_010e2f98 + 0x10e2e6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2f9c + 0x10e2e80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2fa0 + 0x10e2e8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2fa4 + 0x10e2e98));
    *pcVar4 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),0);
  piVar1 = *(int **)(_UNK_010e2fa8 + 0x10e2ec0);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  iVar2 = *(int *)(*piVar1 + 0x74);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (iVar2 == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar3,1,0,0);
  piVar1 = *(int **)(_UNK_010e2fac + 0x10e2f04);
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar1;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x104);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010e2fb0 + 0x10e2f40);
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,*puVar5);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0x5c) + 0xfc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,*puVar5);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0x5c) + 0x114);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),0,*(undefined4 *)(iVar2 + 0x14));
  return;
}

