/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$MoveRightGrid
void Rotatelab_Shop_BaseOfferButtonsParent__MoveRightGrid (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, float targetPositionX, bool isInstant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$MoveRightGrid
   void Rotatelab_Shop_BaseOfferButtonsParent__MoveRightGrid
   (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, float targetPositionX, bool isInstant, const
   MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__MoveRightGrid_10ce0fc
               (int param_1,float param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010de240 + 0x10de120);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de244 + 0x10de134));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010de248 + 0x10de14c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if ((_UNK_010de23c < ABS(param_2)) || (*(int *)(param_1 + 0x1c) == 0)) {
    piVar5 = (int *)(param_1 + 0x2c);
    if (*piVar5 != 0) {
      DG_Tweening_TweenExtensions__Kill_1168b64(*piVar5,0,0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (param_3 == 0) {
      iVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50(iVar3,param_2,0x3e99999a,0,0);
      *piVar5 = iVar3;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_anchoredPosition_3613500(auStack_28,iVar3,0);
    UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar3,param_2,uStack_24,0);
  }
  return;
}

