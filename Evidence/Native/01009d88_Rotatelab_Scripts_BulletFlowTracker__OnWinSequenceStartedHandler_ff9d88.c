/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnWinSequenceStartedHandler
void Rotatelab_Scripts_BulletFlowTracker__OnWinSequenceStartedHandler (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnWinSequenceStartedHandler
   void Rotatelab_Scripts_BulletFlowTracker__OnWinSequenceStartedHandler
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BulletFlowTracker__OnWinSequenceStartedHandler_ff9d88(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x1d) = 1;
  Rotatelab_Scripts_BulletFlowTracker__UpdateFrozenState_ff9d00(param_1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x1e) == '\0') {
    uVar1 = UnityEngine_Time__get_time_3610900(0);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

