/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$FocusOnCurrentChallenge
void Rotatelab_Shop_StarChallengePopup__FocusOnCurrentChallenge (Rotatelab_Shop_StarChallengePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$FocusOnCurrentChallenge
   void Rotatelab_Shop_StarChallengePopup__FocusOnCurrentChallenge
   (Rotatelab_Shop_StarChallengePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengePopup__FocusOnCurrentChallenge_10cb4a0(int param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined1 auStack_40 [4];
  float fStack_3c;
  
  pcVar3 = (char *)(_UNK_010db600 + 0x10db4bc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db604 + 0x10db4d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db608 + 0x10db4dc));
    *pcVar3 = '\x01';
  }
  fVar7 = *(float *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_40,*(int *)(param_1 + 0x28),0);
  fVar1 = fStack_3c;
  iVar2 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar4 + 0xc);
  iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar4,0,**(undefined4 **)(_UNK_010db60c + 0x10db554));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_40,*(int *)(iVar4 + 0x10),0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = iVar5 + -2;
  iVar2 = iVar2 + -1;
  if (iVar2 < iVar5) {
    iVar5 = iVar2;
  }
  if (iVar2 < 0) {
    iVar5 = 0;
  }
  fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_RectTransform__set_anchoredPosition_3613610
            (*(int *)(param_1 + 0x24),0,
             (fVar7 - fVar1) - (fStack_3c + *(float *)(*(int *)(param_1 + 0x2c) + 0x3c)) * fVar6,0);
  return;
}

