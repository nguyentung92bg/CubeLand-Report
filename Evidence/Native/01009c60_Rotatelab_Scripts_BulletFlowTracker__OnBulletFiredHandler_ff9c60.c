/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnBulletFiredHandler
void Rotatelab_Scripts_BulletFlowTracker__OnBulletFiredHandler (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnBulletFiredHandler
   void Rotatelab_Scripts_BulletFlowTracker__OnBulletFiredHandler
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BulletFlowTracker__OnBulletFiredHandler_ff9c60(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(char *)(param_1 + 0x1e) != '\0') {
      return;
    }
    fVar1 = (float)Rotatelab_Scripts_BulletFlowTracker__GetDrainedBullets_ff94b4(param_1);
    *(float *)(param_1 + 0x14) = fVar1 + 1.0;
    if (*(char *)(param_1 + 0x1e) == '\0') {
      uVar2 = UnityEngine_Time__get_time_3610900(0);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}

