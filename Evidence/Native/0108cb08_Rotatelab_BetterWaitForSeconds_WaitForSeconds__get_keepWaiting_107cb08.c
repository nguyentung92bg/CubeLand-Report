/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSeconds$$get_keepWaiting
bool Rotatelab_BetterWaitForSeconds_WaitForSeconds__get_keepWaiting (Rotatelab_BetterWaitForSeconds_WaitForSeconds_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSeconds$$get_keepWaiting
   bool Rotatelab_BetterWaitForSeconds_WaitForSeconds__get_keepWaiting
   (Rotatelab_BetterWaitForSeconds_WaitForSeconds_o* __this, const MethodInfo* method); */

bool Rotatelab_BetterWaitForSeconds_WaitForSeconds__get_keepWaiting_107cb08(int param_1)

{
  float fVar1;
  char *pcVar2;
  float fVar3;
  
  pcVar2 = (char *)(_UNK_0108cb98 + 0x108cb20);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cb9c + 0x108cb34));
    *pcVar2 = '\x01';
  }
  fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
  fVar3 = *(float *)(param_1 + 8);
  if (fVar3 <= fVar1) {
    if (*(int *)(**(int **)(_UNK_0108cba0 + 0x108cb68) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_BetterWaitForSeconds__Pool_107c8ac(param_1);
  }
  return fVar1 < fVar3;
}

