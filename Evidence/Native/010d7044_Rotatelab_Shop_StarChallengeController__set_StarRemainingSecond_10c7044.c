/* IL2CPP: Rotatelab.Shop.StarChallengeController$$set_StarRemainingSecond
void Rotatelab_Shop_StarChallengeController__set_StarRemainingSecond (Rotatelab_Shop_StarChallengeController_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$set_StarRemainingSecond
   void Rotatelab_Shop_StarChallengeController__set_StarRemainingSecond
   (Rotatelab_Shop_StarChallengeController_o* __this, int32_t value, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__set_StarRemainingSecond_10c7044
               (int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_010d7098 + 0x10d705c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d709c + 0x10d7070));
    *pcVar1 = '\x01';
  }
  Rotatelab_Save_SaveManager__SetInt_1078f38(**(undefined4 **)(_UNK_010d70a0 + 0x10d708c),param_2,0)
  ;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}

