/* IL2CPP: Rotatelab.Ads.AdManager$$get_CurrentNeftaModeName
System_String_o* Rotatelab_Ads_AdManager__get_CurrentNeftaModeName (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$get_CurrentNeftaModeName
   System_String_o* Rotatelab_Ads_AdManager__get_CurrentNeftaModeName (Rotatelab_Ads_AdManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01105aa0 + 0x1105a34);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105aa4 + 0x1105a48));
    *pcVar2 = '\x01';
  }
  uStack_14 = *(undefined4 *)(param_1 + 0x3c);
  uStack_18 = 0xffffffff;
  uStack_1c = **(undefined4 **)(_UNK_01105aa8 + 0x1105a60);
  iVar1 = System_Enum__ToString_2bab8c0(&uStack_1c,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_String__ToLowerInvariant_2a0fe38(iVar1,0);
  return;
}

