/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnApplicationQuit
void Rotatelab_Shop_StarChallengeController__OnApplicationQuit (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnApplicationQuit
   void Rotatelab_Shop_StarChallengeController__OnApplicationQuit
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__OnApplicationQuit_10c9f64(int param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010d9fe0 + 0x10d9f7c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9fe4 + 0x10d9f90));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010d9fe8 + 0x10d9fa4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_DateTime__get_Now_2b4a124(&uStack_18,0);
  Rotatelab_Shop_StarChallengeController__set_LastStarChallengeSystemDateSaved_10c7294
            ((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uStack_18,uStack_14);
  Rotatelab_Shop_StarChallengeController__set_StarRemainingSecond_10c7044
            (param_1,*(undefined4 *)(param_1 + 0x58));
  return;
}

