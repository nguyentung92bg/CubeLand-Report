/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$get_IsJewelForcedShowed
bool Rotatelab_Shop_StarChallengePopup__get_IsJewelForcedShowed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$get_IsJewelForcedShowed
   bool Rotatelab_Shop_StarChallengePopup__get_IsJewelForcedShowed (const MethodInfo* method); */

bool Rotatelab_Shop_StarChallengePopup__get_IsJewelForcedShowed_10cadfc(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010dae44 + 0x10dae0c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dae48 + 0x10dae20));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_010dae4c + 0x10dae3c),0,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

