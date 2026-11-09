/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$get_IsForcedRainbowShooterShown
bool Rotatelab_RainbowShooter_RainbowShooterController__get_IsForcedRainbowShooterShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$get_IsForcedRainbowShooterShown
   bool Rotatelab_RainbowShooter_RainbowShooterController__get_IsForcedRainbowShooterShown (const
   MethodInfo* method); */

bool Rotatelab_RainbowShooter_RainbowShooterController__get_IsForcedRainbowShooterShown_10ab914
               (void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010bb95c + 0x10bb924);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb960 + 0x10bb938));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_010bb964 + 0x10bb954),0,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

