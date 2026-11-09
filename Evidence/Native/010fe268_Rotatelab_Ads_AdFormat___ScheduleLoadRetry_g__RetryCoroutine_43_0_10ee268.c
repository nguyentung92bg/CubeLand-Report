/* IL2CPP: Rotatelab.Ads.AdFormat$$<ScheduleLoadRetry>g__RetryCoroutine|43_0
System_Collections_IEnumerator_o* Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0 (Rotatelab_Ads_AdFormat_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$<ScheduleLoadRetry>g__RetryCoroutine|43_0
   System_Collections_IEnumerator_o*
   Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0 (Rotatelab_Ads_AdFormat_o*
   __this, float delay, const MethodInfo* method); */

int Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_10ee268
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fe2e4 + 0x10fe284);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe2e8 + 0x10fe298));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fe2ec + 0x10fe2ac));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}

