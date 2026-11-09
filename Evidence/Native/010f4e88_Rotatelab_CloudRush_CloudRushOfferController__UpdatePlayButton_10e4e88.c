/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$UpdatePlayButton
void Rotatelab_CloudRush_CloudRushOfferController__UpdatePlayButton (Rotatelab_CloudRush_CloudRushOfferController_o* __this, bool showEntryRewardPanel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$UpdatePlayButton
   void Rotatelab_CloudRush_CloudRushOfferController__UpdatePlayButton
   (Rotatelab_CloudRush_CloudRushOfferController_o* __this, bool showEntryRewardPanel, const
   MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushOfferController__UpdatePlayButton_10e4e88(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_010f4f28 + 0x10f4ea0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4f2c + 0x10f4eb4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x1c),param_2,0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_010f4f30 + 0x10f4ee8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = _UNK_010f4f20;
  if (param_2 != 0) {
    uVar3 = _UNK_010f4f24;
  }
  if (iVar1 != 0) {
    UnityEngine_RectTransform__get_offsetMax_3613ebc(auStack_18,iVar1,0);
    UnityEngine_RectTransform__set_offsetMax_3613f78(iVar1,uVar3,uStack_14,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4(0,uVar3,0);
}

