/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnCurrentLevelEnded
void Rotatelab_Ads_InterstitialAdFormat__OnCurrentLevelEnded (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnCurrentLevelEnded
   void Rotatelab_Ads_InterstitialAdFormat__OnCurrentLevelEnded
   (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__OnCurrentLevelEnded_10f1198(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01101210 + 0x11011ac);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101214 + 0x11011c0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01101218 + 0x11011d4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar1 + 0x31) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x01101208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
    return;
  }
  return;
}

