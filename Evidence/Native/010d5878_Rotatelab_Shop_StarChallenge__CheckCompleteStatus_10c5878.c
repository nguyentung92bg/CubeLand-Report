/* IL2CPP: Rotatelab.Shop.StarChallenge$$CheckCompleteStatus
void Rotatelab_Shop_StarChallenge__CheckCompleteStatus (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$CheckCompleteStatus
   void Rotatelab_Shop_StarChallenge__CheckCompleteStatus (Rotatelab_Shop_StarChallenge_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__CheckCompleteStatus_10c5878(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pcVar7 = (char *)(_UNK_010d5978 + 0x10d588c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d597c + 0x10d58a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5980 + 0x10d58ac));
    *pcVar7 = '\x01';
  }
  iVar10 = *(int *)(param_1 + 0x38);
  iVar3 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x20),iVar3 <= iVar10,0);
  iVar9 = *(int *)(param_1 + 0x2c);
  iVar8 = *(int *)(param_1 + 0x38);
  iVar4 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar9,iVar8 == iVar4,0);
  if (iVar10 < iVar3) {
    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(param_1 + 0x24),0x3f800000,0x3e800000,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar5,0x1b,**(undefined4 **)(_UNK_010d5984 + 0x10d5948));
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                      (uVar5,0x3f800000,**(undefined4 **)(_UNK_010d5988 + 0x10d595c));
    puVar6 = (undefined4 *)(param_1 + 0x3c);
    *puVar6 = uVar5;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  return;
}

