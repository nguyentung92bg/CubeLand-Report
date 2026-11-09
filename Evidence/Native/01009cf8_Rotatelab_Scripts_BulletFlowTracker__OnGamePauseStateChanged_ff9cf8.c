/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnGamePauseStateChanged
void Rotatelab_Scripts_BulletFlowTracker__OnGamePauseStateChanged (Rotatelab_Scripts_BulletFlowTracker_o* __this, bool isPaused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnGamePauseStateChanged
   void Rotatelab_Scripts_BulletFlowTracker__OnGamePauseStateChanged
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, bool isPaused, const MethodInfo* method); */

void Rotatelab_Scripts_BulletFlowTracker__OnGamePauseStateChanged_ff9cf8
               (int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (*(char *)(param_1 + 0x1e) == *(char *)(param_1 + 0x1d)) {
      return;
    }
    if (*(char *)(param_1 + 0x1d) == '\0') {
      fVar4 = *(float *)(param_1 + 0x18);
      uVar3 = 0;
      fVar2 = (float)UnityEngine_Time__get_time_3610900(0);
      *(float *)(param_1 + 0x18) = fVar4 + (fVar2 - *(float *)(param_1 + 0x20));
      goto LAB_01009d54;
    }
  }
  else if (*(char *)(param_1 + 0x1e) != '\0') {
    return;
  }
  uVar1 = UnityEngine_Time__get_time_3610900(0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar3 = 1;
LAB_01009d54:
  *(undefined1 *)(param_1 + 0x1e) = uVar3;
  return;
}

