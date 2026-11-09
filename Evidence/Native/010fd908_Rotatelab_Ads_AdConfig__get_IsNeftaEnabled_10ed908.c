/* IL2CPP: Rotatelab.Ads.AdConfig$$get_IsNeftaEnabled
bool Rotatelab_Ads_AdConfig__get_IsNeftaEnabled (Rotatelab_Ads_AdConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdConfig$$get_IsNeftaEnabled
   bool Rotatelab_Ads_AdConfig__get_IsNeftaEnabled (Rotatelab_Ads_AdConfig_o* __this, const
   MethodInfo* method); */

uint Rotatelab_Ads_AdConfig__get_IsNeftaEnabled_10ed908(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fd978 + 0x10fd91c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd97c + 0x10fd930));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    if (*(int *)(**(int **)(_UNK_010fd980 + 0x10fd950) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = UnityEngine_Application__get_isEditor_35a9d10(0);
    return uVar1 ^ 1;
  }
  return 0;
}

