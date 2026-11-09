/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$OnPurchaseSucceededHandler
void Rotatelab_Shop_SuperHardOffer__OnPurchaseSucceededHandler (Rotatelab_Shop_SuperHardOffer_o* __this, Rotatelab_IAP_IapObject_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$OnPurchaseSucceededHandler
   void Rotatelab_Shop_SuperHardOffer__OnPurchaseSucceededHandler (Rotatelab_Shop_SuperHardOffer_o*
   __this, Rotatelab_IAP_IapObject_o* obj, const MethodInfo* method); */

void Rotatelab_Shop_SuperHardOffer__OnPurchaseSucceededHandler_10d2fb4(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  pcVar3 = (char *)(_UNK_010e3160 + 0x10e2fe0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3164 + 0x10e2ff4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3168 + 0x10e3000));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e316c + 0x10e300c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3170 + 0x10e3018));
    *pcVar3 = '\x01';
  }
  piVar1 = *(int **)(_UNK_010e3174 + 0x10e3030);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar4,0,0,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e3178 + 0x10e3068));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_HomePageCoordinator__NotifyClosed_107a584(iVar2,0xf,0);
  piVar1 = *(int **)(_UNK_010e317c + 0x10e3098);
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
  puVar5 = *(undefined4 **)(_UNK_010e3180 + 0x10e30d4);
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,0,*puVar5);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0x5c) + 0xfc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,0,*puVar5);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0x5c) + 0x114);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,*puVar5);
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = *piVar1;
  *piVar1 = 0;
  thunk_FUN_00ec5080(piVar1,0);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010e3158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}

