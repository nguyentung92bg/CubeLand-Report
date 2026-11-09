/* IL2CPP: Rotatelab.Shop.ShopPanelController$$OnCarouselScrolled
void Rotatelab_Shop_ShopPanelController__OnCarouselScrolled (Rotatelab_Shop_ShopPanelController_o* __this, UnityEngine_Vector2_o scrollPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$OnCarouselScrolled
   void Rotatelab_Shop_ShopPanelController__OnCarouselScrolled
   (Rotatelab_Shop_ShopPanelController_o* __this, UnityEngine_Vector2_o scrollPos, const MethodInfo*
   method); */

void Rotatelab_Shop_ShopPanelController__OnCarouselScrolled_10c32b8(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_010d3350 + 0x10d32d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3354 + 0x10d32e4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10);
  if (*(int *)(**(int **)(_UNK_010d3358 + 0x10d3308) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = DG_Tweening_DOTween__IsTweening_11680f4(uVar3,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = param_2;
    if (*(char *)(param_1 + 0x60) == '\0') {
      *(undefined4 *)(param_1 + 0x58) = param_2;
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
    return;
  }
  return;
}

