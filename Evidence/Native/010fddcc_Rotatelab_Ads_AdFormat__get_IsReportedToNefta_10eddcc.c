/* IL2CPP: Rotatelab.Ads.AdFormat$$get_IsReportedToNefta
bool Rotatelab_Ads_AdFormat__get_IsReportedToNefta (Rotatelab_Ads_AdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$get_IsReportedToNefta
   bool Rotatelab_Ads_AdFormat__get_IsReportedToNefta (Rotatelab_Ads_AdFormat_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Ads_AdFormat__get_IsReportedToNefta_10eddcc(int *param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char acStack_20 [8];
  
  pcVar2 = (char *)(_UNK_010fde6c + 0x10fdde4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fde70 + 0x10fddf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fde74 + 0x10fde04));
    *pcVar2 = '\x01';
  }
  (**(code **)(*param_1 + 0xe8))(acStack_20,param_1,*(undefined4 *)(*param_1 + 0xec));
  if (acStack_20[0] == '\0') {
    bVar3 = false;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010fde78 + 0x10fde3c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = *(char *)(iVar1 + 0x18) != '\0';
  }
  return bVar3;
}

