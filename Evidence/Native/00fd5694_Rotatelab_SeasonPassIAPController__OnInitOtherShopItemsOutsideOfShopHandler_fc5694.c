/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_SeasonPassIAPController__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_SeasonPassIAPController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_SeasonPassIAPController__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_SeasonPassIAPController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPassIAPController__OnInitOtherShopItemsOutsideOfShopHandler_fc5694(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_00fb69c0 + 0xfb6884);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb69c4 + 0xfb6898),iVar4,0,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb69c8 + 0xfb68a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb69cc + 0xfb68b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb69d0 + 0xfb68bc));
    *pcVar5 = '\x01';
  }
  *(int *)(iVar3 + 0x20) = iVar4;
  thunk_FUN_00ec5080((int *)(iVar3 + 0x20),iVar4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar4 + 0xc);
  thunk_FUN_00ec5080();
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar4 + 0x18);
  thunk_FUN_00ec5080();
  iVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar3,**(undefined4 **)(_UNK_00fb69d4 + 0xfb690c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb69d8 + 0xfb6930));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar2,iVar3,**(undefined4 **)(_UNK_00fb69dc + 0xfb6950),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fb69e0 + 0xfb6984));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_IAP_PurchasesListener__AddIAPButton_109a0c0
            (iVar1,iVar3,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),0);
  return;
}

