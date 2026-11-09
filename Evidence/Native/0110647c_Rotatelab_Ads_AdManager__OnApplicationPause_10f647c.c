/* IL2CPP: Rotatelab.Ads.AdManager$$OnApplicationPause
void Rotatelab_Ads_AdManager__OnApplicationPause (Rotatelab_Ads_AdManager_o* __this, bool pauseStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$OnApplicationPause
   void Rotatelab_Ads_AdManager__OnApplicationPause (Rotatelab_Ads_AdManager_o* __this, bool
   pauseStatus, const MethodInfo* method); */

void Rotatelab_Ads_AdManager__OnApplicationPause_10f647c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  
  piVar3 = *(int **)(param_1 + 0x44);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x100))(piVar3,param_2,*(undefined4 *)(*piVar3 + 0x104));
  }
  piVar3 = *(int **)(param_1 + 0x48);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x100))(piVar3,param_2,*(undefined4 *)(*piVar3 + 0x104));
  }
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x100))(piVar3,param_2,*(undefined4 *)(*piVar3 + 0x104));
  }
  if (param_2 != 0) {
    return;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (*(int *)(param_1 + 0x48) != 0) {
    Rotatelab_Ads_AdFormat__LoadNowIfRetryPending_10ee2f0();
  }
  piVar3 = *(int **)(param_1 + 0x4c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = (char *)(_UNK_010fe3c4 + 0x10fe304);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010fe3c8 + 0x10fe318));
      *pcVar4 = '\x01';
    }
    piVar5 = piVar3 + 10;
    if (*piVar5 != 0) {
      fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
      if ((float)piVar3[0xb] + 5.0 <= fVar1) {
        iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010fe3cc + 0x10fe364));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MonoBehaviour__StopCoroutine_3604570(iVar2,*piVar5,0);
        piVar3[10] = 0;
        thunk_FUN_00ec5080(piVar5,0);
        iVar2 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
        piVar3[0xb] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x010fe3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
        return;
      }
    }
    return;
  }
  return;
}

