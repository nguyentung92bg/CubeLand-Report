/* IL2CPP: Rotatelab.Ads.AdFormat$$LoadNowIfRetryPending
void Rotatelab_Ads_AdFormat__LoadNowIfRetryPending (Rotatelab_Ads_AdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$LoadNowIfRetryPending
   void Rotatelab_Ads_AdFormat__LoadNowIfRetryPending (Rotatelab_Ads_AdFormat_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_AdFormat__LoadNowIfRetryPending_10ee2f0(int *param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_010fe3c4 + 0x10fe304);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe3c8 + 0x10fe318));
    *pcVar3 = '\x01';
  }
  piVar4 = param_1 + 10;
  if (*piVar4 != 0) {
    fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    if ((float)param_1[0xb] + 5.0 <= fVar1) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010fe3cc + 0x10fe364));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MonoBehaviour__StopCoroutine_3604570(iVar2,*piVar4,0);
      param_1[10] = 0;
      thunk_FUN_00ec5080(piVar4,0);
      iVar2 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
      param_1[0xb] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x010fe3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
      return;
    }
  }
  return;
}

