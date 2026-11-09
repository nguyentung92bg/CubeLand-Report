/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSecondsRealtime$$get_keepWaiting
bool Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime__get_keepWaiting (Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSecondsRealtime$$get_keepWaiting
   bool Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime__get_keepWaiting
   (Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime_o* __this, const MethodInfo* method); */

bool Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime__get_keepWaiting_107cba4(int param_1)

{
  float fVar1;
  char *pcVar2;
  float fVar3;
  
  pcVar2 = (char *)(_UNK_0108cc34 + 0x108cbbc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cc38 + 0x108cbd0));
    *pcVar2 = '\x01';
  }
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  fVar3 = *(float *)(param_1 + 8);
  if (fVar3 <= fVar1) {
    if (*(int *)(**(int **)(_UNK_0108cc3c + 0x108cc04) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_BetterWaitForSeconds__Pool_107c94c(param_1);
  }
  return fVar1 < fVar3;
}

