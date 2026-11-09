/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Start
void Rotatelab_Shop_ShopPanelController__Start (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Start
   void Rotatelab_Shop_ShopPanelController__Start (Rotatelab_Shop_ShopPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__Start_10c12f8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010d142c + 0x10d130c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1430 + 0x10d1320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1434 + 0x10d132c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1438 + 0x10d1338));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d143c + 0x10d1344));
    *pcVar4 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  Rotatelab_Shop_ShopPanelController__SpawnAllShopItems_10c1450(param_1);
  Rotatelab_Shop_ShopPanelController__RefreshShopVisibility_10c1480(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d1440 + 0x10d1394));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d1444 + 0x10d13a8));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010d1448 + 0x10d13c4),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_RemoteConfigManager__add_OnSatoriFlagsRefreshed_1073b50(iVar1,uVar2,0);
  piVar3 = *(int **)(_UNK_010d144c + 0x10d13f4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xf4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

