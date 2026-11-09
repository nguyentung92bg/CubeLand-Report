/* IL2CPP: Rotatelab.Ads.AdManager$$get_IsEnabled
bool Rotatelab_Ads_AdManager__get_IsEnabled (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$get_IsEnabled
   bool Rotatelab_Ads_AdManager__get_IsEnabled (Rotatelab_Ads_AdManager_o* __this, const MethodInfo*
   method); */

undefined1 Rotatelab_Ads_AdManager__get_IsEnabled_10f5748(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0110579c + 0x1105758);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011057a0 + 0x110576c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_011057a4 + 0x1105780));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined1 *)(iVar1 + 0xc);
}

