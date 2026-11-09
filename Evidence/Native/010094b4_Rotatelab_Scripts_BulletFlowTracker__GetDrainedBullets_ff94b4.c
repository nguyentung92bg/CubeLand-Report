/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$GetDrainedBullets
float Rotatelab_Scripts_BulletFlowTracker__GetDrainedBullets (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$GetDrainedBullets
   float Rotatelab_Scripts_BulletFlowTracker__GetDrainedBullets
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method); */

float Rotatelab_Scripts_BulletFlowTracker__GetDrainedBullets_ff94b4(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x1e) == '\0') {
    fVar5 = (float)UnityEngine_Time__get_time_3610900(0);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x20);
  }
  fVar6 = *(float *)(param_1 + 0x18);
  fVar2 = (float)Rotatelab_Scripts_BulletFlowTracker__get_DrainGracePeriod_ff964c();
  fVar2 = (fVar5 - fVar6) - fVar2;
  uVar3 = Rotatelab_Scripts_BulletFlowTracker__get_MaxBulletCount_ff957c();
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar2 == 0.0) << 0x1e | (uint)(0.0 <= fVar2) << 0x1d;
  fVar5 = *(float *)(param_1 + 0x14);
  bVar1 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    fVar2 = (float)VectorSignedToFloat(uVar3,(byte)(uVar4 >> 0x16) & 3);
    if (fVar2 < fVar5) {
      fVar5 = fVar2;
    }
  }
  else {
    fVar6 = (float)Rotatelab_Scripts_BulletFlowTracker__get_DrainPerSecond_ff95e4();
    fVar5 = fVar5 - fVar2 * fVar6;
    fVar2 = (float)VectorSignedToFloat(uVar3,(byte)(uVar4 >> 0x16) & 3);
    if (fVar5 < 0.0) {
      fVar5 = _UNK_01009560;
    }
    if (fVar2 < fVar5) {
      fVar5 = fVar2;
    }
  }
  return fVar5;
}

