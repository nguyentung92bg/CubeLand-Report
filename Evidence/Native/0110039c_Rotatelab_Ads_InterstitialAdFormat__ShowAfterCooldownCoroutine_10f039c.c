/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$ShowAfterCooldownCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$ShowAfterCooldownCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine
   (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method); */

int Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_10f039c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01100408 + 0x11003b0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110040c + 0x11003c4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100410 + 0x11003d8));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

