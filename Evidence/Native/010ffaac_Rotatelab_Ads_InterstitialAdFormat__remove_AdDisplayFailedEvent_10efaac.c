/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$remove_AdDisplayFailedEvent
void Rotatelab_Ads_InterstitialAdFormat__remove_AdDisplayFailedEvent (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_Action_MaxSdkBase_AdInfo__MaxSdkBase_ErrorInfo__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$remove_AdDisplayFailedEvent
   void Rotatelab_Ads_InterstitialAdFormat__remove_AdDisplayFailedEvent
   (Rotatelab_Ads_InterstitialAdFormat_o* __this,
   System_Action_MaxSdkBase_AdInfo__MaxSdkBase_ErrorInfo__o* value, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__remove_AdDisplayFailedEvent_10efaac
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_010ffb50 + 0x10ffac4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ffb54 + 0x10ffad8));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_010ffb58 + 0x10ffaf0);
  iVar1 = *(int *)(param_1 + 0x34);
  do {
    iVar5 = 0;
    iVar2 = System_Delegate__Remove_2bbcc8c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = thunk_FUN_00f00bc8(iVar2,uVar4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar2,uVar4);
      }
    }
    iVar2 = FUN_00efd180((int *)(param_1 + 0x34),iVar5,iVar1);
    bVar7 = iVar2 != iVar1;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}

