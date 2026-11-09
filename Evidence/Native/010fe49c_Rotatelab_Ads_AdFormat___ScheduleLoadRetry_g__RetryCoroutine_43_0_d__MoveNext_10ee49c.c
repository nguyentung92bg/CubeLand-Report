/* IL2CPP: Rotatelab.Ads.AdFormat.<<ScheduleLoadRetry>g__RetryCoroutine|43_0>d$$MoveNext
bool Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_d__MoveNext (Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_d_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat.<<ScheduleLoadRetry>g__RetryCoroutine|43_0>d$$MoveNext
   bool Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_d__MoveNext
   (Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_d_o* __this, const MethodInfo*
   method); */

bool Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_d__MoveNext_10ee49c
               (int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = (char *)(_UNK_010fe580 + 0x10fe4b4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe584 + 0x10fe4c8));
    *pcVar1 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    piVar2 = *(int **)(_UNK_010fe588 + 0x10fe534);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(uVar4,0);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar4);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar3 == 1) {
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2[10] = 0;
    thunk_FUN_00ec5080();
    (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
  }
  return iVar3 == 0;
}

