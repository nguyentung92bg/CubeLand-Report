/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnApplicationPause
void Rotatelab_Shop_StarChallengeController__OnApplicationPause (Rotatelab_Shop_StarChallengeController_o* __this, bool pauseStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnApplicationPause
   void Rotatelab_Shop_StarChallengeController__OnApplicationPause
   (Rotatelab_Shop_StarChallengeController_o* __this, bool pauseStatus, const MethodInfo* method);
    */

void Rotatelab_Shop_StarChallengeController__OnApplicationPause_10c9fec(int param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_010da09c + 0x10da008);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da0a0 + 0x10da01c));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x54) != '\0') {
      Rotatelab_Shop_StarChallengeController__TimeInit_10c8814(param_1);
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    piVar1 = *(int **)(_UNK_010da0a4 + 0x10da03c);
    *(undefined1 *)(param_1 + 0x54) = 1;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = System_DateTime__get_Now_2b4a124(&uStack_18,0);
    Rotatelab_Shop_StarChallengeController__set_LastStarChallengeSystemDateSaved_10c7294
              ((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uStack_18,uStack_14);
    Rotatelab_Shop_StarChallengeController__set_StarRemainingSecond_10c7044
              (param_1,*(undefined4 *)(param_1 + 0x58));
  }
  return;
}

